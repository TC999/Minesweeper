LRESULT __fastcall CtlProcTrackBar(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HWND v8; // rdx
  LRESULT (__stdcall *WindowLongPtrW)(HWND, UINT, WPARAM, LPARAM); // r12

  WindowLongPtrW = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW(hWnd, -21);
  if ( Msg == 10 )
  {
    InvalidateRect(hWnd, 0, 0);
  }
  else if ( Msg == 15 )
  {
    DialogHelper::PaintTrackbar(hWnd, v8);
  }
  else if ( Msg != 296 )
  {
    if ( Msg == 512 )
    {
      if ( !DialogHelper::m_bMouseOverCtl )
      {
        DialogHelper::m_bMouseOverCtl = 1;
LABEL_9:
        DialogHelper::m_hHotCtl = hWnd;
        InvalidateRect(hWnd, 0, 0);
        return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
      }
      if ( DialogHelper::m_hHotCtl != hWnd )
      {
        InvalidateRect(DialogHelper::m_hHotCtl, 0, 0);
        goto LABEL_9;
      }
    }
    return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
  }
  return 0;
}
