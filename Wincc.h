// Wincc.h : main header file for the WINCC application
//

#if !defined(AFX_WINCC_H__13C7F3DE_5C3B_43A0_80D7_F40426448434__INCLUDED_)
#define AFX_WINCC_H__13C7F3DE_5C3B_43A0_80D7_F40426448434__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CWinccApp:
// See Wincc.cpp for the implementation of this class
//

class CWinccApp : public CWinApp
{
public:
	CWinccApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinccApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CWinccApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINCC_H__13C7F3DE_5C3B_43A0_80D7_F40426448434__INCLUDED_)
