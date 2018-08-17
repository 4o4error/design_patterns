#pragma once
#include <string>

#include "build_opts_Lynx_Pardinus.h"
#include "feline.h"

class Lynx_Pardinus_IMPEXP Lynx_Pardinus :public Feline
{

private:
	std::string name;

public:
	Lynx_Pardinus();
	~Lynx_Pardinus();

	Lynx_Pardinus(const std::string &);
	virtual void speak();

	static Feline* create(const std::string& name);
};

