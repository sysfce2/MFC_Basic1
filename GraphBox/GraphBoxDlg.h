
// GraphBoxDlg.h : header file
//

#pragma once
#include "DCP.h"

// CGraphBoxDlg dialog
class CGraphBoxDlg : public CDialogEx
{
private:
	DCP m_dcp;
	CRect m_rect1;
	CRect m_rect2;
	CRect m_pie_rect;


// Construction
public:
	CGraphBoxDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRAPHBOX_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
