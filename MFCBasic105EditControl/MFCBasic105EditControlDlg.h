
// MFCBasic105EditControlDlg.h : header file
//

#pragma once


// CMFCBasic105EditControlDlg dialog
class CMFCBasic105EditControlDlg : public CDialogEx
{
// Construction
public:
	CMFCBasic105EditControlDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCBASIC105EDITCONTROL_DIALOG };
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
	afx_msg void OnBnClickedReadBtn();
	afx_msg void OnBnClickedWriteBtn();

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
