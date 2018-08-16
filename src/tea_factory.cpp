#include "tea_factory.h"
#include <tea.h>
std::unique_ptr<HotDrink> TeaFactory::make()
{
  std::unique_ptr<HotDrink> drink = std::make_unique<Tea>();
  drink->make();
  return drink;
}
