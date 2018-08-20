
// UIDlg.h : header file
//
#pragma once
#define _AFXDLL
#include <vector>
#include "Geometry.h"
#include <vector>

struct LineToPointAdapter
{
  typedef std::vector<Point> Points;

  LineToPointAdapter(Line& line)
  {
    static int count = 0;
    TRACE("%d: Generating points for line\n", count++);

    int left = min(line.start.x, line.end.x);
    int right = max(line.start.x, line.end.x);
    int top = min(line.start.y, line.end.y);
    int bottom = max(line.start.y, line.end.y);
    int dx = right - left;
    int dy = line.end.y - line.start.y;

    if (dx == 0)
    {
      // vertical
      for (int y = top; y <= bottom; ++y)
      {
        points.emplace_back(Point{ left,y });
      }
    }
    else if (dy == 0)
    {
      for (int x = left; x <= right; ++x)
      {
        points.emplace_back(Point{ x, top });
      }
    }
  }

  virtual Points::iterator begin() { return points.begin(); }
  virtual Points::iterator end() { return points.end(); }

private:
  Points points;
};
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
