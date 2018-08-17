#pragma once

#ifdef CATS_PUMA_CONCOLOR
#define CATS_PUMACON_IMPEXP __declspec(dllexport)
#else
#define CATS_PUMACON_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
