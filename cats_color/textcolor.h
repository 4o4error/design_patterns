#pragma once

#include <windows.h>   // WinApi header

typedef enum
{
  DEFAULT,
  GREEN,
  RED,
  BLUE,
  YELLOW,
  WHITE
} ConsoleColor;

class Console
{
public:
  static void textColor(ConsoleColor color)
  {
    switch (color)
    {
    case DEFAULT:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
      break;

    case GREEN:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_GREEN | FOREGROUND_INTENSITY);
      break;

    case RED:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_RED | FOREGROUND_INTENSITY);
      break;

    case BLUE:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_BLUE | FOREGROUND_INTENSITY);
      break;

    case YELLOW:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
      break;

    case WHITE:
      SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
      break;
    }
  }
};
//
//void setConsoleTextColor(ConsoleColor color)
//{
//  switch (color)
//  {
//  case DEFAULT:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
//    break;
//
//  case GREEN:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//    break;
//
//  case RED:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_RED | FOREGROUND_INTENSITY);
//    break;
//
//  case BLUE:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_BLUE | FOREGROUND_INTENSITY);
//    break;
//
//  case YELLOW:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
//    break;
//
//  case WHITE:
//    SetConsoleTextAttribute(
//      GetStdHandle(STD_OUTPUT_HANDLE),
//      FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
//    break;
//  }
//}
//
