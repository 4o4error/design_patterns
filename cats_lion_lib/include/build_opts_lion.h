#pragma once

#ifdef CATS_LION
#define CATS_LION_IMPEXP __declspec(dllexport)
#else
#define CATS_LION_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
