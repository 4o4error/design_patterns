#pragma once

#ifdef CATS_DOMESTIC
#define CATS_DOMESTIC_IMPEXP __declspec(dllexport)
#else
#define CATS_DOMESTIC_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
