#include "herpailurus_yagouaroundi.h"
#include <iostream>

Herpailurus_yagouaroundi::Herpailurus_yagouaroundi(string n)
{
	nume = n;
}

Herpailurus_yagouaroundi::~Herpailurus_yagouaroundi() {

}

string Herpailurus_yagouaroundi::getNume()
{
	return nume;
}

void Herpailurus_yagouaroundi::speak() {
	cout << getNume() << " says: HERPA!" << endl;
}

Feline * Herpailurus_yagouaroundi::create(const string & name)
{
  return new Herpailurus_yagouaroundi(name);
}
