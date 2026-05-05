LRESULT __fastcall CtlProcButton(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *WindowLongPtrW)(HWND, UINT, WPARAM, LPARAM); // rax

  WindowLongPtrW = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW(hWnd, -21);
  if ( Msg != 512 )
    return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
  if ( !DialogHelper::m_bMouseOverCtl )
  {
    DialogHelper::m_bMouseOverCtl = 1;
LABEL_7:
    DialogHelper::m_hHotCtl = hWnd;
    InvalidateRect(hWnd, 0, 0);
    return 0;
  }
  if ( DialogHelper::m_hHotCtl != hWnd )
  {
    InvalidateRect(DialogHelper::m_hHotCtl, 0, 0);
    goto LABEL_7;
  }
  return 0;
}
