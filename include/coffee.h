#pragma once

#include <hot_drink.h>
class Coffee : public HotDrink {
public:
  // Inherited via HotDrink
  virtual void make() override;


  // Inherited via HotDrink
  virtual void consume() override;

};