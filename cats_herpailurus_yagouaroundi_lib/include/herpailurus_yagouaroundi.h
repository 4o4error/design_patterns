#pragma once

#include "build_opts_herpailus.h"

#include "feline.h"
#include <string>
using namespace std;

class CATS_HERPAILUS_IMPEXP Herpailurus_yagouaroundi : public Feline
{
private:
	string nume;
public:
	Herpailurus_yagouaroundi(string nume);
	~Herpailurus_yagouaroundi();
	string getNume();
	void speak();

  static Feline* create(const string& name);
};