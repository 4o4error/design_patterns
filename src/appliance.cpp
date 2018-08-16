#include <appliance.h>
std::unique_ptr<HotDrink> Applience::prepare_drink(const std::string drink_type) {
  std::unique_ptr<HotDrink> hot_drink;

  /**
  * seems manageable for now, but what happens when we need to add different types of tea and coffee
  */
  if (drink_type.compare("tea") == 0)
  {
    hot_drink = std::make_unique<Tea>();
  }
  else if(drink_type.compare("coffee") == 0)
  {
    hot_drink = std::make_unique<Coffee>();
  }
  hot_drink->make();
  return hot_drink;
}