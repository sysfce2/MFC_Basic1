#pragma once
#define MAX_COLUMN_COUNT			7
#define MAX_ROW_COUNT					35

// CCMFCListControl1Dlg dialog
class CCMFCListControl1Dlg : public CDialogEx
{
private:


// Construction
public:
	CCMFCListControl1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CMFCLISTCONTROL1_DIALOG };
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
	afx_msg void OnDestroy();
	CMFCListCtrl m_score_list;
};
