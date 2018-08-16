#include "coffee_factory.h"
#include <coffee.h>
std::unique_ptr<HotDrink> CoffeeFactory::make()
{
  std::unique_ptr<HotDrink> drink = std::make_unique<Coffee>();
  drink->make();
  return drink;
}
