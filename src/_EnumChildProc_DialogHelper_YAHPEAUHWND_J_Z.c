__int64 __fastcall DialogHelper::EnumChildProc(HWND a1)
{
  LONG WindowLongW; // esi
  unsigned int v3; // ebx
  LONG_PTR v4; // rax
  LONG_PTR v5; // rax
  __int64 (__fastcall *v6)(HWND, UINT, WPARAM, LPARAM); // r8
  LONG_PTR v7; // rax
  WCHAR ClassName[256]; // [rsp+20h] [rbp-218h] BYREF

  memset(ClassName, 0, sizeof(ClassName));
  if ( GetClassNameW(a1, ClassName, 256) > 0 )
  {
    if ( _wcsnicmp(ClassName, L"Button", 0x100u) )
    {
      if ( !_wcsnicmp(ClassName, L"msctls_trackbar32", 0x100u) )
      {
        v6 = CtlProcTrackBar;
        goto LABEL_16;
      }
      if ( !_wcsnicmp(ClassName, L"Edit", 0x100u) )
      {
        v6 = CtlProcEdit;
        goto LABEL_16;
      }
    }
    else
    {
      WindowLongW = GetWindowLongW(a1, -16);
      v3 = WindowLongW & 0xF;
      if ( v3 == 9 || v3 == 4 || v3 == 2 || v3 == 3 )
      {
        v4 = SetWindowLongPtrW(a1, -4, (LONG_PTR)CtlProcRadioOrCheck);
        SetWindowLongPtrW(a1, -21, v4);
      }
      if ( v3 <= 1 )
      {
        v5 = SetWindowLongPtrW(a1, -4, (LONG_PTR)CtlProcButton);
        SetWindowLongPtrW(a1, -21, v5);
        SetWindowLongW(a1, -16, WindowLongW | 0xB);
      }
      if ( v3 == 7 )
      {
        v6 = CtlProcGroupbox;
LABEL_16:
        v7 = SetWindowLongPtrW(a1, -4, (LONG_PTR)v6);
        SetWindowLongPtrW(a1, -21, v7);
      }
    }
  }
  return 1;
}
