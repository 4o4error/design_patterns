#pragma once

#ifdef CAT_SERVAL
#define CAT_SERVAL_IMPEXP __declspec(dllexport)
#else
#define CAT_SERVAL_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
