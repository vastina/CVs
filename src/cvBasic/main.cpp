#include "mainwindow.hpp"

#include <QApplication>

int main( int argc, char* argv[] )
{
  std::vector<std::vector<cv::Point>> contours;

  QApplication a( argc, argv );
  QApplication::setWindowIcon( QIcon( QCoreApplication::applicationDirPath() + "/icon.png" ) );
  MainWindow w;
  w.show();
  return QApplication::exec();
}
