#if !defined(AFX_SETDIALOG_H__FE23B43A_7DE0_48D1_9E5E_C3D269377809__INCLUDED_)
#define AFX_SETDIALOG_H__FE23B43A_7DE0_48D1_9E5E_C3D269377809__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetDialog dialog

class CSetDialog : public CDialog
{
// Construction
public:
	CSetDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetDialog)
	enum { IDD = IDD_SET };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSetDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSetDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETDIALOG_H__FE23B43A_7DE0_48D1_9E5E_C3D269377809__INCLUDED_)
