#include "domestic_cat.h"
#include "lion.h"

#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
#if 0
  Lion myLion("Elvis");
  myLion.speak();

  DomesticCat kitty("Mog");
  kitty.speak();

  Feline* felinePtr1 = new Lion("Simba");
  Feline* felinePtr2 = new DomesticCat("Tom");
  Feline* felinePtr3 = new DomesticCat("Garfield");

  felinePtr1->speak();
  felinePtr2->speak();
  felinePtr3->speak();

  delete felinePtr1;
  delete felinePtr2;
  delete felinePtr3;
#endif
#if 0
  std::vector<int> numericVector;
  std::vector<std::string> textVector;
  numericVector.push_back(10);
  textVector.push_back("hello there");
  textVector.push_back(std::string("general kenobi"));

  std::vector<DomesticCat> cats;
  cats.push_back(DomesticCat("Tom"));
  cats.emplace_back(DomesticCat("Garfield"));
  //cats.push_back("Tom the 2nd"); // <-- invalid!
  cats.emplace_back("Garfield the 2nd");

  for (std::vector<DomesticCat>::iterator it = cats.begin(); it != cats.end(); ++it) {
    it->speak();
    (*it).speak();
  }

  for (auto cat : cats) {
    cat.speak();
  }
#endif

  std::vector<Feline*> felines;
  felines.emplace_back(new Lion("Simba"));
  felines.emplace_back(new DomesticCat("Tom"));
  felines.emplace_back(new Lion("Scar"));
  for (auto feline: felines) {
    feline->speak();
  }

  for (auto feline : felines) {
    delete feline;
  }

  //for (std::vector<Feline*>::iterator it = felines.begin(); it != felines.end(); ++it) {
  //  delete *it;
  //}

  felines.clear();
}