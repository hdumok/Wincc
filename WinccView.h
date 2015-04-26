// WinccView.h : interface of the CWinccView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WINCCVIEW_H__C59B4359_8E2C_4B05_B563_191C3FE23295__INCLUDED_)
#define AFX_WINCCVIEW_H__C59B4359_8E2C_4B05_B563_191C3FE23295__INCLUDED_

#include "QueryDialog.h"	// Added by ClassView
#include "SetDialog.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWinccView : public CView
{
protected: // create from serialization only
	CWinccView();
	DECLARE_DYNCREATE(CWinccView)

// Attributes
public:
	CWinccDoc* GetDocument();
	HANDLE handler;
 	char buffer[30];
	HANDLE InitCom(char* comName);
	int ReadData(HANDLE handler, char* buffer);
	int WriteData(HANDLE handler, char* buffer);
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinccView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL flag;
	CSetDialog set;
	CQueryDialog query;
	virtual ~CWinccView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWinccView)
	afx_msg void OnQuery();
	afx_msg void OnSet();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnCom1();
	afx_msg void OnCom2();
	afx_msg void OnCom3();
	afx_msg void OnCom4();
	afx_msg void OnCom5();
	afx_msg void OnCom6();
	afx_msg void OnCom7();
	afx_msg void OnCom8();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in WinccView.cpp
inline CWinccDoc* CWinccView::GetDocument()
   { return (CWinccDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINCCVIEW_H__C59B4359_8E2C_4B05_B563_191C3FE23295__INCLUDED_)
