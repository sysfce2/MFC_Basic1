
// MFCBasic104ScreenToClient.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCBasic104ScreenToClientApp:
// See MFCBasic104ScreenToClient.cpp for the implementation of this class
//

class CMFCBasic104ScreenToClientApp : public CWinApp
{
public:
	CMFCBasic104ScreenToClientApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCBasic104ScreenToClientApp theApp;
