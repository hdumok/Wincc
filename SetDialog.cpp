// SetDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Wincc.h"
#include "SetDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetDialog dialog


CSetDialog::CSetDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CSetDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetDialog)
	m_edit1 = 0;
	m_edit2 = 0;
	m_edit3 = 0;
	m_edit4 = 0;
	m_edit5 = 0;
	s = -1;
	//}}AFX_DATA_INIT
}


void CSetDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetDialog)
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	DDX_Radio(pDX, IDC_S1, s);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetDialog, CDialog)
	//{{AFX_MSG_MAP(CSetDialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetDialog message handlers



void CSetDialog::Get(char *buffer) //获取设置窗口的的数据
{
	UpdateData();
 	buffer[0]='#';
	buffer[1]=s+1;
	buffer[2]=m_edit1;
	buffer[3]=m_edit2;
	buffer[4]=m_edit3;
	buffer[5]=m_edit4;
	buffer[6]=m_edit5;
}
