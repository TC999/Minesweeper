INT_PTR __fastcall DialogProc(DialogHelper *a1, HWND a2, HWND a3, DialogHelper *a4)
{
  unsigned int v6; // r12d
  HRGN RoundRectRgn; // rax
  void *v10; // rax
  int DlgCtrlID; // eax
  HWND v12; // rcx
  struct tagRECT Rect; // [rsp+30h] [rbp-18h] BYREF

  v6 = (unsigned int)a2;
  if ( (_DWORD)a2 == 20 )
  {
    if ( DialogHelper::m_bIsMediaCenter )
      return (int)DialogHelper::OnEraseBkgndMCE(a1, a3, (HDC)a3);
  }
  else if ( (_DWORD)a2 == 28 )
  {
    if ( a3 == (HWND)1 )
    {
      ShowWindow(DialogHelper::m_hWnd, 9);
      if ( DialogHelper::m_bIsMediaCenter )
      {
        DlgCtrlID = GetDlgCtrlID(DialogHelper::m_hLastFocus);
        v12 = DialogHelper::m_hLastFocus;
        if ( !DlgCtrlID )
          v12 = (HWND)a1;
        SetFocus(v12);
      }
    }
    else if ( DialogHelper::m_bIsMediaCenter )
    {
      DialogHelper::m_hLastFocus = GetFocus();
    }
  }
  else if ( (_DWORD)a2 == 43 )
  {
    if ( DialogHelper::m_bIsMediaCenter )
    {
      DialogHelper::OnDrawItemMCE(a4, (__int64)a2);
      return 1;
    }
  }
  else
  {
    if ( (_DWORD)a2 != 126 )
    {
      if ( (_DWORD)a2 == 272 )
      {
        if ( DialogHelper::baseDialogProc )
          DialogHelper::baseDialogProc((struct HWND__ *)a1, 0x110u, (unsigned __int64)a3, (__int64)a4);
        else
          DialogHelper::CenterDialog((HWND)a1, a2);
        if ( DialogHelper::m_bIsMediaCenter )
        {
          GetWindowRect((HWND)a1, &Rect);
          RoundRectRgn = CreateRoundRectRgn(1, 1, Rect.right - Rect.left, Rect.bottom - Rect.top, 10, 10);
          SetWindowRgn((HWND)a1, RoundRectRgn, 0);
          EnumChildWindows((HWND)a1, DialogHelper::EnumChildProc, 0);
          v10 = (void *)SendMessageW((HWND)a1, 0x31u, 0, 0);
          DialogHelper::m_hHotCtl = 0;
          DialogHelper::m_bMouseOverCtl = 0;
          DialogHelper::m_hFont = v10;
        }
      }
      else
      {
        if ( (_DWORD)a2 != 273 )
        {
          if ( (_DWORD)a2 == 309 )
          {
            if ( DialogHelper::m_bIsMediaCenter )
              return (INT_PTR)GetStockObject(5);
          }
          else if ( (_DWORD)a2 == 312 )
          {
            if ( DialogHelper::m_bIsMediaCenter )
              return DialogHelper::OnCtlColorStaticMCE(
                       (HWND)a4,
                       a3,
                       (HDC)(unsigned int)DialogHelper::m_uiTitle,
                       (unsigned int)a4);
          }
          else if ( (_DWORD)a2 == 512 && DialogHelper::m_bIsMediaCenter && DialogHelper::m_bMouseOverCtl )
          {
            DialogHelper::m_bMouseOverCtl = 0;
            InvalidateRect(DialogHelper::m_hHotCtl, 0, 0);
            DialogHelper::m_hHotCtl = 0;
          }
          goto LABEL_13;
        }
        if ( DialogHelper::baseDialogProc )
          DialogHelper::baseDialogProc((struct HWND__ *)a1, 0x111u, (unsigned __int64)a3, (__int64)a4);
        else
          DialogHelper::DismissDialog((HWND)a1, (HWND)(unsigned __int16)a3, (int)a3);
      }
      return 1;
    }
    if ( DialogHelper::m_bIsMediaCenter )
      DialogHelper::CenterDialog((HWND)a1, a2);
  }
LABEL_13:
  if ( DialogHelper::baseDialogProc )
    return DialogHelper::baseDialogProc((struct HWND__ *)a1, v6, (unsigned __int64)a3, (__int64)a4);
  else
    return 0;
}
