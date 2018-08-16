#pragma once
#include <hot_drink.h>

class Tea : public HotDrink {
public:
  // Inherited via HotDrink
  virtual void make() override;

  // Inherited via HotDrink
  virtual void consume() override;
};