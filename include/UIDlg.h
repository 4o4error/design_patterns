
// UIDlg.h : header file
//
#pragma once
#define _AFXDLL
#include <vector>
#include "Geometry.h"


// CUIDlg dialog
class CUIDlg : public CDialogEx
{
// Construction
public:
	CUIDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
  
  void DrawPoints(CPaintDC& dc,
    std::vector<Point>::iterator begin, std::vector<Point>::iterator end )
  {
    for (auto i = begin; i != end;++i)
      dc.SetPixel(i->x, i->y, 0);
  }

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
