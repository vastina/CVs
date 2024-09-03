#include <windows.h>

#include <thread>
#include <chrono>

namespace vas {
enum keybd : unsigned short
{
  // 字母键
  A = 0x41,
  B = 0x42,
  C = 0x43,
  D = 0x44,
  E = 0x45,
  F = 0x46,
  G = 0x47,
  H = 0x48,
  I = 0x49,
  J = 0x4A,
  K = 0x4B,
  L = 0x4C,
  M = 0x4D,
  N = 0x4E,
  O = 0x4F,
  P = 0x50,
  Q = 0x51,
  R = 0x52,
  S = 0x53,
  T = 0x54,
  U = 0x55,
  V = 0x56,
  W = 0x57,
  X = 0x58,
  Y = 0x59,
  Z = 0x5A,

  // 数字键
  Num0 = 0x30,
  Num1 = 0x31,
  Num2 = 0x32,
  Num3 = 0x33,
  Num4 = 0x34,
  Num5 = 0x35,
  Num6 = 0x36,
  Num7 = 0x37,
  Num8 = 0x38,
  Num9 = 0x39,

  // 功能键
  F1 = 0x70,
  F2 = 0x71,
  F3 = 0x72,
  F4 = 0x73,
  F5 = 0x74,
  F6 = 0x75,
  F7 = 0x76,
  F8 = 0x77,
  F9 = 0x78,
  F10 = 0x79,
  F11 = 0x7A,
  F12 = 0x7B,

  // 控制键
  Esc = 0x1B,
  Tab = 0x09,
  CapsLock = 0x14,
  Shift = 0x10,
  Ctrl = 0x11,
  Alt = 0x12,
  Space = 0x20,
  Enter = 0x0D,
  Backspace = 0x08,

  // 箭头键
  LeftArrow = 0x25,
  UpArrow = 0x26,
  RightArrow = 0x27,
  DownArrow = 0x28,

  // 数字键盘键
  NumLock = 0x90,
  Numpad0 = 0x60,
  Numpad1 = 0x61,
  Numpad2 = 0x62,
  Numpad3 = 0x63,
  Numpad4 = 0x64,
  Numpad5 = 0x65,
  Numpad6 = 0x66,
  Numpad7 = 0x67,
  Numpad8 = 0x68,
  Numpad9 = 0x69,
  NumpadMultiply = 0x6A,
  NumpadAdd = 0x6B,
  NumpadSubtract = 0x6D,
  NumpadDecimal = 0x6E,
  NumpadDivide = 0x6F,

  // 系统键
  LeftWindows = 0x5B,
  RightWindows = 0x5C,
  PrintScreen = 0x2C,
  ScrollLock = 0x91,
  Pause = 0x13,

  // 功能键（其他）
  Insert = 0x2D,
  Delete = 0x2E,
  Home = 0x24,
  End = 0x23,
  PageUp = 0x21,
  PageDown = 0x22,

  // 标点符号键
  Comma = 0xBC,
  Period = 0xBE,
  Slash = 0xBF,
  Semicolon = 0xBA,
  Apostrophe = 0xDE,
  LeftBracket = 0xDB,
  RightBracket = 0xDD,
  Backslash = 0xDC,
  Hyphen = 0xBD,
  Equal = 0xBB
};
class input
{
public:
  enum class MOUSE_INPUT : char
  {
    left,
    right,
    // ....
  };

  static void mouseClick( MOUSE_INPUT Input, int delayMs = 50 )
  {
    INPUT input {};
    input.type = INPUT_MOUSE;
    if ( Input == MOUSE_INPUT::left )
      input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    else
      input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
    SendInput( 1, &input, sizeof( INPUT ) );
    std::this_thread::sleep_for( std::chrono::milliseconds( delayMs ) );
    if ( Input == MOUSE_INPUT::left )
      input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    else
      input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
    SendInput( 1, &input, sizeof( INPUT ) );
  }
  static void leftMouseClick( int delayMs = 50 ) { mouseClick( MOUSE_INPUT::left, delayMs ); }
  static void rightMouseClick( int delayMs = 50 ) { mouseClick( MOUSE_INPUT::right, delayMs ); }
  static void moveCursor( int x, int y ) { SetCursorPos( x, y ); }

  static void keyPress( keybd kword, int continueMs = 50 )
  {
    INPUT input {};
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = kword;
    SendInput( 1, &input, sizeof( INPUT ) );
    std::this_thread::sleep_for( std::chrono::milliseconds( continueMs ) );
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput( 1, &input, sizeof( INPUT ) );
  }
};

}