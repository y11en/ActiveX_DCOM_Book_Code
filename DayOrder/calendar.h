#if !defined(AFX_CALENDAR_H__9A13BCF5_FE3D_11D1_B890_DBDAD6F5BD11__INCLUDED_)
#define AFX_CALENDAR_H__9A13BCF5_FE3D_11D1_B890_DBDAD6F5BD11__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;

/////////////////////////////////////////////////////////////////////////////
// CCalendar wrapper class

class CCalendar : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCalendar)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8e27c92b, 0x1264, 0x101c, { 0x8a, 0x2f, 0x4, 0x2, 0x24, 0x0, 0x9c, 0x2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	unsigned long GetHintergrundfarbe();
	void SetHintergrundfarbe(unsigned long newValue);
	short GetTag();
	void SetTag(short nNewValue);
	COleFont GetTagSchriftart();
	void SetTagSchriftart(LPDISPATCH newValue);
	unsigned long GetTagSchriftfarbe();
	void SetTagSchriftfarbe(unsigned long newValue);
	short GetLngeDesTages_1();	// GetLängeDesTages
	void SetLngeDesTages_2(short nNewValue);	// SetLängeDesTages
	short GetErsterTag();
	void SetErsterTag(short nNewValue);
	long GetRastereffekt();
	void SetRastereffekt(long nNewValue);
	COleFont GetGitterSchriftart();
	void SetGitterSchriftart(LPDISPATCH newValue);
	unsigned long GetGitterSchriftfarbe();
	void SetGitterSchriftfarbe(unsigned long newValue);
	unsigned long GetGitterZeilenfarbe();
	void SetGitterZeilenfarbe(unsigned long newValue);
	short GetMonat();
	void SetMonat(short nNewValue);
	short GetMonatLnge_3();	// GetMonatLänge
	void SetMonatLnge_4(short nNewValue);	// SetMonatLänge
	BOOL GetDatumsmarkierer();
	void SetDatumsmarkierer(BOOL bNewValue);
	BOOL GetTageAnzeigen();
	void SetTageAnzeigen(BOOL bNewValue);
	BOOL GetHorizontalesRaster();
	void SetHorizontalesRaster(BOOL bNewValue);
	BOOL GetTitelAnzeigen();
	void SetTitelAnzeigen(BOOL bNewValue);
	BOOL GetVertikalesRaster();
	void SetVertikalesRaster(BOOL bNewValue);
	COleFont GetTitelSchriftart();
	void SetTitelSchriftart(LPDISPATCH newValue);
	unsigned long GetTitelSchriftfarbe();
	void SetTitelSchriftfarbe(unsigned long newValue);
	VARIANT GetWert();
	void SetWert(const VARIANT& newValue);
	BOOL GetWertIstNull();
	void SetWertIstNull(BOOL bNewValue);
	short GetJahr();
	void SetJahr(short nNewValue);
	void NextDay();
	void NextMonth();
	void NextWeek();
	void NextYear();
	void PreviousDay();
	void PreviousMonth();
	void PreviousWeek();
	void PreviousYear();
	void Refresh();
	void Today();
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDAR_H__9A13BCF5_FE3D_11D1_B890_DBDAD6F5BD11__INCLUDED_)
