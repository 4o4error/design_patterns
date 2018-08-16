#include <iostream>

#include <appliance.h>
void main (){
  Applience applience;
  auto hot_drink = applience.prepare_drink("coffee");
  hot_drink->consume();
}