#pragma once

#include <hot_drink_factory.h>
class CoffeeFactory : public HotDrinkFactory {
  // Inherited via HotDrinkFactory
  virtual std::unique_ptr<HotDrink> make() override;
};