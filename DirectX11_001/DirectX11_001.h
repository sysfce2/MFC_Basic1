
// DirectX11_001.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CDirectX11001App:
// See DirectX11_001.cpp for the implementation of this class
//

class CDirectX11001App : public CWinApp
{
public:
	CDirectX11001App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CDirectX11001App theApp;
