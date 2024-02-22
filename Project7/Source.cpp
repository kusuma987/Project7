#include<afxwin.h>//Application Frame Extension Window

class MyFrame :public CFrameWnd
{
public:
	MyFrame()
	{
		Create(0, "Title");
	}
};

class MyApp :public CWinApp
{
public:
	BOOL InitInstance()
	{
		MyFrame* pframe = new MyFrame;//Create Window
		m_pMainWnd = pframe;//Create Window Address To Mainframe Window
		pframe->ShowWindow(1);//Display Window Screen

		return TRUE;

	}
};
MyApp obj;