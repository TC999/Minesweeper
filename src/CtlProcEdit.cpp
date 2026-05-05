LRESULT __fastcall CtlProcEdit(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *WindowLongPtrW)(HWND, UINT, WPARAM, LPARAM); // rax

  WindowLongPtrW = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW(hWnd, -21);
  if ( Msg == 123 )
    return 0;
  else
    return CallWindowProcW(WindowLongPtrW, hWnd, Msg, wParam, lParam);
}
