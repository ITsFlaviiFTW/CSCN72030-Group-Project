
// CSCN72030 Group Project.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCSCN72030GroupProjectApp:
// See CSCN72030 Group Project.cpp for the implementation of this class
//

class CCSCN72030GroupProjectApp : public CWinApp
{
public:
	CCSCN72030GroupProjectApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCSCN72030GroupProjectApp theApp;
