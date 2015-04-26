// WinccDoc.h : interface of the CWinccDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WINCCDOC_H__BDFAB150_9EA3_4BA1_B859_069D43BF8831__INCLUDED_)
#define AFX_WINCCDOC_H__BDFAB150_9EA3_4BA1_B859_069D43BF8831__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWinccDoc : public CDocument
{
protected: // create from serialization only
	CWinccDoc();
	DECLARE_DYNCREATE(CWinccDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinccDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWinccDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWinccDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINCCDOC_H__BDFAB150_9EA3_4BA1_B859_069D43BF8831__INCLUDED_)
