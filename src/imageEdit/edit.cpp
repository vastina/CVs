#include "edit.hpp"

QString AffinePlugin::name()
{
  return "Affine";
}

void AffinePlugin::edit( const cv::Mat& input, cv::Mat& output )
{

  cv::Point2f triangleA[3];
  cv::Point2f triangleB[3];

  triangleA[0] = cv::Point2f( 0, 0 );
  triangleA[1] = cv::Point2f( 1, 0 );
  triangleA[2] = cv::Point2f( 0, 1 );

  triangleB[0] = cv::Point2f( 0, 0 );
  triangleB[1] = cv::Point2f( 1, 0 );
  triangleB[2] = cv::Point2f( 1, 1 );

  cv::Mat affineMatrix = cv::getAffineTransform( triangleA, triangleB );
  cv::Mat result;
  cv::warpAffine( input,
                  result,
                  affineMatrix,
                  input.size(),       // output image size, same as input
                  cv::INTER_CUBIC,    // Interpolation method
                  cv::BORDER_CONSTANT // Extrapolation method
                                      // BORDER_WRAP  // Extrapolation method
  );

  output = result;
}

QString CartoonPlugin::name()
{
  return "Cartoon";
}

void CartoonPlugin::edit( const cv::Mat& input, cv::Mat& output )
{
  int num_down = 2;
  int num_bilateral = 7;

  cv::Mat copy1;
  cv::Mat copy2;
  cv::Mat image_gray;
  cv::Mat image_edge;

  copy1 = input.clone();
  for ( int i = 0; i < num_down; i++ ) {
    cv::pyrDown( copy1, copy2 );
    copy1 = copy2.clone();
  }

  for ( int i = 0; i < num_bilateral; i++ ) {
    cv::bilateralFilter( copy1, copy2, 9, 9, 7 );
    copy1 = copy2.clone();
  }

  for ( int i = 0; i < num_down; i++ ) {
    cv::pyrUp( copy1, copy2 );
    copy1 = copy2.clone();
  }

  if ( input.cols != copy1.cols || input.rows != copy1.rows ) {
    cv::Rect rect( 0, 0, input.cols, input.rows );
    copy1( rect ).copyTo( copy2 );
    copy1 = copy2;
  }

  cv::cvtColor( input, image_gray, cv::COLOR_RGB2GRAY );
  cv::medianBlur( image_gray, image_gray, 5 );

  cv::adaptiveThreshold(
    image_gray, image_gray, 255, cv::ADAPTIVE_THRESH_MEAN_C, cv::THRESH_BINARY, 9, 2 );

  cv::cvtColor( image_gray, image_edge, cv::COLOR_GRAY2RGB );

  output = copy1 & image_edge;

  /*
  cv::GaussianBlur(image_edge, image_edge, cv::Size(5, 5), 0);
  cv::Mat mask(input.rows, input.cols, CV_8UC3, cv::Scalar(90, 90, 90));
  mask = mask & (~image_edge);
  output = (copy1 & image_edge) | mask;
  */
}

QString ErodePlugin::name()
{
  return "Erode";
}

void ErodePlugin::edit( const cv::Mat& input, cv::Mat& output )
{
  erode( input, output, cv::Mat() );
}

QString RotatePlugin::name()
{
  return "Rotate";
}

void RotatePlugin::edit( const cv::Mat& input, cv::Mat& output )
{
  double angle = 45.0;
  double scale = 1.0;
  cv::Point2f center = cv::Point( input.cols / 2, input.rows / 2 );
  cv::Mat rotateMatrix = cv::getRotationMatrix2D( center, angle, scale );

  cv::Mat result;
  cv::warpAffine(
    input, result, rotateMatrix, input.size(), cv::INTER_LINEAR, cv::BORDER_CONSTANT );
  output = result;
}

QString SharpenPlugin::name()
{
  return "Sharpen";
}

void SharpenPlugin::edit( const cv::Mat& input, cv::Mat& output )
{
  int intensity = 2;
  cv::Mat smoothed;
  cv::GaussianBlur( input, smoothed, cv::Size( 9, 9 ), 0 );
  output = input + ( input - smoothed ) * intensity;
}