#include <iostream>
#include <string>

#include "Lynx_Pardinus.h"
#include "textcolor.h"

Lynx_Pardinus::Lynx_Pardinus()
{
}

Lynx_Pardinus::Lynx_Pardinus(const std::string & name) : name(name)
{

}


Lynx_Pardinus::~Lynx_Pardinus()
{
}

void Lynx_Pardinus::speak()
{
	std::cout << name << " says: ";
	Console::textColor(ConsoleColor::GREEN);
	std::cout << "Boom";
	Console::textColor(ConsoleColor::BLUE);
  std::cout << "!";
  Console::textColor(ConsoleColor::DEFAULT);
  std::cout << std::endl;
}

Feline * Lynx_Pardinus::create(const std::string & name)
{
	return new Lynx_Pardinus(name);
}


