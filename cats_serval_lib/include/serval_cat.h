#pragma once

//
// Includes
//

// 1. Platform specific definitions and overall build options for the library.
#include "build_opts_cats_serval.h"

// 2. C system headers, in alphabetical order.
// none

// 3. C++ system headers, in alphabetical order.
#include <string>

// 4. This library's headers, in alphabetical order.
#include "feline.h"

// 5. Other libraries' headers, in alphabetical order.
// none

class CAT_SERVAL_IMPEXP Serval
  : public Feline
{
private:
  std::string name_;
public:
  Serval(const std::string& name);
  virtual ~Serval();
  virtual void speak();

  static Feline* create(const std::string& name);
};