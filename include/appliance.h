#pragma once
#include <string>
#include <memory>
#include <hot_drink.h>
#include <coffee.h>
#include <tea.h>
class Applience {
public:
  std::unique_ptr<HotDrink> prepare_drink(const std::string drink_type);
};