#pragma once

#include "build_opts_catopuma_temminckii.h"
#include <string>
#include "feline.h"


class CATS_CATOPUMA_IMPEXP CatopumaTemminckii : public Feline
{
private:
	std::string nume;
public:
	CatopumaTemminckii(std::string numeCatopuma);
	~CatopumaTemminckii();
	std::string get();
	void speak();

	static Feline* create(const std::string& name);
};