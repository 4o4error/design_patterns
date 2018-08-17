#pragma once
#include "build_opts_cats_felis.h"
#include <string>
#include "feline.h"

class CATS_FELIS_IMPEXP Felis
  : public Feline
{
private:
  std::string name_;
public:
  Felis(const std::string& name);
  virtual ~Felis();
  virtual void speak();

  static Feline* create(const std::string& name);
};