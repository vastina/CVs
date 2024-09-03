// #include <chrono>
#include <opencv2/opencv.hpp>

#include <windows.h>

#include <vector>

class ScreenCapturer
{
private:
  HDC hdcScreen;
  HDC hdcMem;
  HBITMAP hbmScreen;

  std::vector<RGBQUAD> colorBuf;

public:
  BITMAPINFO bmi {};
  // for convenience
  int x;
  int y;
  int w;
  int h;

  ScreenCapturer( int left = 0, int top = 0, int width = 0, int height = 0 )
    : colorBuf( width * height ), x( left ), y( top ), w( width ), h( height )
  {
    hdcScreen = GetDC( nullptr );
    hdcMem = CreateCompatibleDC( hdcScreen );
    hbmScreen = CreateCompatibleBitmap( hdcScreen, width, height );
    SelectObject( hdcMem, hbmScreen );

    bmi.bmiHeader.biSize = sizeof( BITMAPINFOHEADER );
    bmi.bmiHeader.biWidth = width;
    bmi.bmiHeader.biHeight = -height; // top-down DIB
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;
  }
  ~ScreenCapturer()
  {
    DeleteObject( hbmScreen );
    DeleteDC( hdcMem );
    ReleaseDC( nullptr, hdcScreen );
  }

  void Captrue()
  {
    BitBlt( hdcMem, 0, 0, w, h, hdcScreen, x, y, SRCCOPY );
    GetDIBits( hdcMem, hbmScreen, 0, h, colorBuf.data(), &bmi, DIB_RGB_COLORS );
  }
  const std::vector<RGBQUAD>& getColorBuf() const { return colorBuf; }
  RGBQUAD* getColorBuf() { return colorBuf.data(); }
  RGBQUAD* getDataNow()
  {
    Captrue();
    return getColorBuf();
  }
  /*no data is copied here, which means you will modify colorBuf indirectly*/
  cv::Mat toMat() { return cv::Mat( h, w, CV_8UC4, (void*)colorBuf.data() ); }
};