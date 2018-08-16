#include <drink_factory.h>
#include <coffee_factory.h>
#include <tea_factory.h>
DrinkFactory::DrinkFactory() {
  factories["coffee"] = std::make_unique<CoffeeFactory>();
  factories["tea"] = std::make_unique<TeaFactory>();
}
std::unique_ptr<HotDrink> DrinkFactory::make(const std::string drink_type) {
  if (factories.find(drink_type) != factories.end())
  {
    return factories[drink_type]->make();
  }
  else
  {
    std::cout << "drink not supported" << std::endl;
  }
  return nullptr;
}