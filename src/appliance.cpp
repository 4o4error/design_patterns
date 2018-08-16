#include <appliance.h>
std::unique_ptr<HotDrink> Applience::prepare_drink(const std::string drink_type) {
  DrinkFactory drink_factory;
  return drink_factory.make(drink_type);
 
}