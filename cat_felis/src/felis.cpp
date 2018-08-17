#include "felis.h"
#include <iostream>
#include <string>
#include "textcolor.h"

Felis::Felis(const std::string & name)
  : name_(name)
{

#ifdef CTOR_DTOR_MSG
  std::cout << "Felis " << name_ << " created." << std::endl;
#endif 
}

Felis::~Felis()
{
#ifdef CTOR_DTOR_MSG
  std::cout << "Felis " << name_ << " destroyed." << std::endl;
#endif 
}

void Felis::speak()
{
  std::cout << name_ << " says: ";
  Console::textColor(ConsoleColor::YELLOW);
  std::cout << "Miauu";
  Console::textColor(ConsoleColor::DEFAULT);
  std::cout << "!" << std::endl;
}

Feline * Felis::create(const std::string & name)
{
  return new Felis(name);
}
