// QueryDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Wincc.h"
#include "QueryDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQueryDialog dialog


CQueryDialog::CQueryDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CQueryDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CQueryDialog)
	c = -1;
	m_show1 = 0;
	m_show2 = 0;
	m_show3 = 0;
	m_show4 = 0;
	m_show5 = 0;
	//}}AFX_DATA_INIT
}


void CQueryDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CQueryDialog)
	DDX_Radio(pDX, IDC_C0, c);
	DDX_Text(pDX, IDC_SHOW1, m_show1);
	DDX_Text(pDX, IDC_SHOW2, m_show2);
	DDX_Text(pDX, IDC_SHOW3, m_show3);
	DDX_Text(pDX, IDC_SHOW4, m_show4);
	DDX_Text(pDX, IDC_SHOW5, m_show5);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CQueryDialog, CDialog)
	//{{AFX_MSG_MAP(CQueryDialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQueryDialog message handlers

void CQueryDialog::Show(char* buffer)
{
	UpdateData();
	m_show1=*buffer*256+*(buffer+1);
	m_show2=*(buffer+2)*256+*(buffer+3);
	m_show3=*(buffer+4)*256+*(buffer+5);
	m_show4=*(buffer+6)*256+*(buffer+7);
	m_show5=*(buffer+8)*256+*(buffer+9);
	UpdateData(FALSE);
}
