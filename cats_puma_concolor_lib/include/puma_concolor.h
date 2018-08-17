#pragma once

//
// Includes
//

// 1. Platform specific definitions and overall build options for the library.
#include "build_opts_cats_concolor.h"

// 2. C system headers, in alphabetical order.
// none

// 3. C++ system headers, in alphabetical order.
#include <string>

// 4. This library's headers, in alphabetical order.
#include "feline.h"

// 5. Other libraries' headers, in alphabetical order.
// none

class CATS_PUMACON_IMPEXP PumaConcolor
  : public Feline
{
private:
  std::string name_;
public:
  PumaConcolor(const std::string& name);
  virtual ~PumaConcolor();
  virtual void speak();

  static Feline* create(const std::string& name);
};