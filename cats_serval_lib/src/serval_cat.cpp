//
// Includes
//

// 1. Own header for C/C++ file.
#include "serval_cat.h"

// 2. C system headers, in alphabetical order.
// none

// 3. C++ system headers, in alphabetical order.
#include <iostream>
#include <string>

// 4. This library's headers, in alphabetical order.
// none

// 5. Other libraries' headers, in alphabetical order.
#include "textcolor.h"

Serval::Serval(const std::string & name)
	: name_(name)
{
#ifdef CTOR_DTOR_MSG
	std::cout << "Serval " << name_ << " created." << std::endl;
#endif //CTOR_DTOR_MSG
}

Serval::~Serval()
{
#ifdef CTOR_DTOR_MSG
	std::cout << "Serval " << name_ << " destroyed." << std::endl;
#endif //CTOR_DTOR_MSG
}

void Serval::speak()
{
	std::cout << name_ << " says: ";
	Console::textColor(ConsoleColor::RED);
	std::cout << "Mrrraaawwwrrr";
	Console::textColor(ConsoleColor::DEFAULT);
	std::cout << "!" << std::endl;
}

Feline * Serval::create(const std::string & name)
{
	return new Serval(name);
}
