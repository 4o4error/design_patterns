//
// Includes
//

// 1. Own header for C/C++ file.
#include "puma_concolor.h"

// 2. C system headers, in alphabetical order.
// none

// 3. C++ system headers, in alphabetical order.
#include <iostream>
#include <string>

// 4. This library's headers, in alphabetical order.
// none

// 5. Other libraries' headers, in alphabetical order.
#include "textcolor.h"

PumaConcolor::PumaConcolor(const std::string & name)
  : name_(name)
{
#ifdef CTOR_DTOR_MSG
  std::cout << "Domestic cat " << name_ << " created." << std::endl;
#endif //CTOR_DTOR_MSG
}

PumaConcolor::~PumaConcolor()
{
#ifdef CTOR_DTOR_MSG
  std::cout << "Domestic cat " << name_ << " destroyed." << std::endl;
#endif //CTOR_DTOR_MSG
}

void PumaConcolor::speak()
{
  std::cout << name_ << " says: ";
  Console::textColor(ConsoleColor::GREEN);
  std::cout << "Growl";
  Console::textColor(ConsoleColor::DEFAULT);
  std::cout << "!" << std::endl;
}

Feline * PumaConcolor::create(const std::string & name)
{
  return new PumaConcolor(name);
}
