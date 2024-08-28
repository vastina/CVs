#include <QApplication>
#include "window.hpp"

int main( int argc, char* argv[] )
{
  QApplication app( argc, argv );
  MainWindow window;
  window.setWindowTitle( "ImageEditor" );
  window.show();
  return QApplication::exec();
}