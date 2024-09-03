#include "capture.hpp"

int main()
{
  // https://games.sina.com.cn/z/cs/test.shtml
  // just magic number
  ScreenCapturer sc( 2000, 500, 1, 1 );
  auto previousColor = sc.getDataNow()[0];
  while ( true ) {
    auto pix = sc.getDataNow()[0];
    if ( previousColor.rgbRed != pix.rgbRed ) {
      INPUT input {};
      input.type = INPUT_MOUSE;
      input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
      SendInput( 1, &input, sizeof( INPUT ) );
      input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
      SendInput( 1, &input, sizeof( INPUT ) );

      break;
    }
  }
  return 0;
}