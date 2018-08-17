#include "catopuma_temminckii.h"
#include <iostream>

#include "textcolor.h"

CatopumaTemminckii::CatopumaTemminckii(std::string numeCatopuma)
	:nume(numeCatopuma)
{}

CatopumaTemminckii::~CatopumaTemminckii() {}

std::string CatopumaTemminckii::get()
{
	return nume;
}

void CatopumaTemminckii::speak()
{
	std::cout << get() << " says: This CMakeLists is AWFUL!!!" << std::endl;

}

Feline* CatopumaTemminckii::create(const std::string & numeCatopuma)
{
	return new CatopumaTemminckii(numeCatopuma);
}