#pragma once

#ifdef CATS_DLL
#define CATS_IMPEXP __declspec(dllexport)
#else
#define CATS_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
