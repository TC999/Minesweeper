LRESULT __fastcall CtlProcGroupbox(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *WindowLongPtrW)(HWND, UINT, WPARAM, LPARAM); // rax
  HWND v9; // rdx

  WindowLongPtrW = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW(hWnd, -21);
  if ( Msg != 10 )
  {
    if ( Msg == 15 )
    {
      DialogHelper::PaintGroupbox(hWnd, v9);
    }
    else if ( Msg != 296 )
    {
      return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
    }
  }
  return 0;
}
