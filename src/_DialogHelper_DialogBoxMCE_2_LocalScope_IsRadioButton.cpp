char __fastcall DialogHelper::DialogBoxMCE_::_2_::LocalScope::IsRadioButton(HWND hWnd)
{
  char v2; // bl
  int ClassNameW; // eax
  bool v4; // zf
  WCHAR *v5; // rsi
  const wchar_t *v6; // rdi
  __int64 v7; // rcx
  int v9; // eax
  WCHAR ClassName[256]; // [rsp+20h] [rbp-218h] BYREF

  v2 = 0;
  memset(ClassName, 0, sizeof(ClassName));
  ClassNameW = GetClassNameW(hWnd, ClassName, 256);
  v4 = ClassNameW == 0;
  if ( ClassNameW > 0 )
  {
    v5 = ClassName;
    v6 = L"Button";
    v7 = 7;
    do
    {
      if ( !v7 )
        break;
      v4 = *v5++ == *v6++;
      --v7;
    }
    while ( v4 );
    if ( !v4 )
      return 0;
  }
  v9 = GetWindowLongW(hWnd, -16) & 0xF;
  if ( v9 == 4 || v9 == 9 )
    return 1;
  return v2;
}
