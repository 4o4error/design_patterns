#pragma once

#ifdef CATS_FELIS_CATUS
#define CATS_FELIS_CATUS_IMPEXP __declspec(dllexport)
#else
#define CATS_FELIS_CATUS_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
