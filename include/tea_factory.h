#pragma once 
#include <hot_drink_factory.h>

class TeaFactory :public HotDrinkFactory{
  // Inherited via HotDrinkFactory
  virtual std::unique_ptr<HotDrink> make() override;
};