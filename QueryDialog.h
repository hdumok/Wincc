#if !defined(AFX_QUERYDIALOG_H__0E445B12_8183_409A_8FD7_70E043170414__INCLUDED_)
#define AFX_QUERYDIALOG_H__0E445B12_8183_409A_8FD7_70E043170414__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// QueryDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CQueryDialog dialog

class CQueryDialog : public CDialog
{
// Construction
public:
	void Show(char* buffer);
	CQueryDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CQueryDialog)
	enum { IDD = IDD_QUERY };
	int		c;
	int		m_show1;
	int		m_show2;
	int		m_show3;
	int		m_show4;
	int		m_show5;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQueryDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CQueryDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUERYDIALOG_H__0E445B12_8183_409A_8FD7_70E043170414__INCLUDED_)
