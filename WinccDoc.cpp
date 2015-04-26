// WinccDoc.cpp : implementation of the CWinccDoc class
//

#include "stdafx.h"
#include "Wincc.h"

#include "WinccDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWinccDoc

IMPLEMENT_DYNCREATE(CWinccDoc, CDocument)

BEGIN_MESSAGE_MAP(CWinccDoc, CDocument)
	//{{AFX_MSG_MAP(CWinccDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWinccDoc construction/destruction

CWinccDoc::CWinccDoc()
{
	// TODO: add one-time construction code here

}

CWinccDoc::~CWinccDoc()
{
}

BOOL CWinccDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CWinccDoc serialization

void CWinccDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CWinccDoc diagnostics

#ifdef _DEBUG
void CWinccDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWinccDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWinccDoc commands
