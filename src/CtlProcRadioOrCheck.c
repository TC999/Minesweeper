LRESULT __fastcall CtlProcRadioOrCheck(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *WindowLongPtrW)(HWND, UINT, WPARAM, LPARAM); // rax
  HWND v9; // rdx

  WindowLongPtrW = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW(hWnd, -21);
  if ( Msg == 10 )
    goto LABEL_11;
  if ( Msg == 15 )
  {
    DialogHelper::PaintRadioOrCheck(hWnd, v9);
    return 0;
  }
  if ( Msg != 296 )
  {
    if ( Msg != 512 )
      return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
    if ( !DialogHelper::m_bMouseOverCtl )
    {
      DialogHelper::m_bMouseOverCtl = 1;
LABEL_10:
      DialogHelper::m_hHotCtl = hWnd;
LABEL_11:
      InvalidateRect(hWnd, 0, 0);
      return 0;
    }
    if ( DialogHelper::m_hHotCtl != hWnd )
    {
      InvalidateRect(DialogHelper::m_hHotCtl, 0, 0);
      goto LABEL_10;
    }
  }
  return 0;
}
