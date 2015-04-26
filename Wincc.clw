; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CWinccView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Wincc.h"
LastPage=0

ClassCount=7
Class1=CWinccApp
Class2=CWinccDoc
Class3=CWinccView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_MAINFRAME
Resource2=IDD_QUERY
Resource3=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CQueryDialog
Class7=CSetDialog
Resource4=IDD_SET

[CLS:CWinccApp]
Type=0
HeaderFile=Wincc.h
ImplementationFile=Wincc.cpp
Filter=N

[CLS:CWinccDoc]
Type=0
HeaderFile=WinccDoc.h
ImplementationFile=WinccDoc.cpp
Filter=N

[CLS:CWinccView]
Type=0
HeaderFile=WinccView.h
ImplementationFile=WinccView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=IDM_COM8


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDM_COM1
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=Wincc.cpp
ImplementationFile=Wincc.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=IDM_QUERY
Command2=IDM_SET
Command3=IDM_COM1
Command4=IDM_COM2
Command5=IDM_COM3
Command6=IDM_COM4
Command7=IDM_COM5
Command8=IDM_COM6
Command9=IDM_COM7
Command10=IDM_COM8
CommandCount=10

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[DLG:IDD_QUERY]
Type=1
Class=CQueryDialog
ControlCount=29
Control1=IDC_STATIC,static,1342308864
Control2=IDC_STATIC,button,1342177287
Control3=IDC_SHOW1,edit,1342244992
Control4=IDC_SHOW2,edit,1342244992
Control5=IDC_SHOW3,edit,1342244992
Control6=IDC_SHOW4,edit,1342244992
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_SHOW5,edit,1342244992
Control13=IDC_STATIC,button,1342177287
Control14=IDC_C0,button,1342308361
Control15=IDC_C1,button,1342177289
Control16=IDC_C3,button,1342177289
Control17=IDC_C2,button,1342177289
Control18=IDC_C4,button,1342177289
Control19=IDC_C6,button,1342177289
Control20=IDC_C5,button,1342177289
Control21=IDC_C7,button,1342177289
Control22=IDC_C8,button,1342177289
Control23=IDC_C9,button,1342177289
Control24=IDC_C11,button,1342177289
Control25=IDC_C10,button,1342177289
Control26=IDC_C12,button,1342177289
Control27=IDC_C14,button,1342177289
Control28=IDC_C13,button,1342177289
Control29=IDC_C15,button,1342177289

[DLG:IDD_SET]
Type=1
Class=CSetDialog
ControlCount=30
Control1=IDC_STATIC,static,1342308864
Control2=IDC_STATIC,button,1342177287
Control3=IDC_S0,button,1342308361
Control4=IDC_S1,button,1342177289
Control5=IDC_S3,button,1342177289
Control6=IDC_STATIC,button,1342177287
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_EDIT2,edit,1350631552
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_EDIT4,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_Send,button,1342242816
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT5,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_S2,button,1342177289
Control19=IDC_S4,button,1342177289
Control20=IDC_S6,button,1342177289
Control21=IDC_S5,button,1342177289
Control22=IDC_S7,button,1342177289
Control23=IDC_S8,button,1342177289
Control24=IDC_S9,button,1342177289
Control25=IDC_S11,button,1342177289
Control26=IDC_S10,button,1342177289
Control27=IDC_S12,button,1342177289
Control28=IDC_S14,button,1342177289
Control29=IDC_S13,button,1342177289
Control30=IDC_S15,button,1342177289

[CLS:CQueryDialog]
Type=0
HeaderFile=QueryDialog.h
ImplementationFile=QueryDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CQueryDialog
VirtualFilter=dWC

[CLS:CSetDialog]
Type=0
HeaderFile=SetDialog.h
ImplementationFile=SetDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CSetDialog

