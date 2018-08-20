
// AdapterVisual.h : main header file for the PROJECT_NAME application
//

#pragma once
#define _AFXDLL
#include "resource.h"		// main symbols


// CAdapterVisualApp:
// See AdapterVisual.cpp for the implementation of this class
//

class CAdapterVisualApp : public CWinApp
{
public:
	CAdapterVisualApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAdapterVisualApp theApp;