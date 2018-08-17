#pragma once

#ifdef LYNX_PARDINUS_DLL
#define Lynx_Pardinus_IMPEXP __declspec(dllexport)
#else
#define Lynx_Pardinus_IMPEXP __declspec(dllimport)
#endif 