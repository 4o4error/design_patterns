#pragma once
#include <string>
#include <map>
#include <hot_drink_factory.h>
#
class DrinkFactory {
  std::map<std::string, std::unique_ptr<HotDrinkFactory>> factories;
public:

  DrinkFactory();
  std::unique_ptr<HotDrink> make(const std::string drink_type);
};