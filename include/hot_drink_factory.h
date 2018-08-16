#pragma once
#include <map>
#include <memory>
#include <hot_drink.h>
class HotDrinkFactory {
public:
  virtual std::unique_ptr<HotDrink> make() = 0;
};