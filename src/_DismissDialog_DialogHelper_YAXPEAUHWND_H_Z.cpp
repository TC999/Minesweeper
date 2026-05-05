void __fastcall DialogHelper::DismissDialog(HWND hWnd, HWND a2)
{
  WPARAM v3; // rbx
  UINT v4; // eax

  if ( DialogHelper::m_bIsMediaCenter )
  {
    v3 = (unsigned __int16)a2;
    v4 = RegisterWindowMessageW(L"MCEDialogDismiss");
    PostMessageW(hWnd, v4, v3, 0);
  }
  else
  {
    EndDialog(hWnd, (int)a2);
  }
  if ( DialogHelper::m_DialogShutdown )
    DialogHelper::m_DialogShutdown();
}
