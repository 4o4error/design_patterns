#pragma once

#ifdef CATS_HERPAILUS
#define CATS_HERPAILUS_IMPEXP __declspec(dllexport)
#else
#define CATS_HERPAILUS_IMPEXP __declspec(dllimport)
#endif //CATS_DLL
