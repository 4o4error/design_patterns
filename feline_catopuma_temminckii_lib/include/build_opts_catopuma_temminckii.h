#pragma once

#ifdef CATS_CATOPUMA
#define CATS_CATOPUMA_IMPEXP __declspec(dllexport)
#else
#define CATS_CATOPUMA_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
