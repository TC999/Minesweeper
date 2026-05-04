HGDIOBJ __fastcall DialogHelper::OnCtlColorStaticMCE(HWND hWnd, HDC hdc, HDC a3)
{
  int v3; // edi
  int TextColor; // edi
  HWND Parent; // rax
  HGDIOBJ v9; // rbx
  HGDIOBJ StockObject; // rbx
  WCHAR ClassName[256]; // [rsp+20h] [rbp-228h] BYREF

  v3 = (int)DialogHelper::m_uiTitle;
  memset(ClassName, 0, sizeof(ClassName));
  if ( GetClassNameW(hWnd, ClassName, 255) <= 0 )
    return 0;
  ClassName[255] = 0;
  if ( _wcsnicmp(ClassName, L"BUTTON", 8u) )
  {
    if ( _wcsnicmp(ClassName, L"STATIC", 8u) )
      return 0;
  }
  TextColor = v3 != GetDlgCtrlID(hWnd) ? 0xFFFFFF : 0;
  if ( DialogHelper::baseDialogProc )
  {
    Parent = GetParent(hWnd);
    v9 = (HGDIOBJ)DialogHelper::baseDialogProc(Parent, 0x138u, (unsigned __int64)hdc, (__int64)hWnd);
    if ( v9 == GetStockObject(5) )
      TextColor = GetTextColor(hdc);
  }
  SetTextColor(hdc, TextColor);
  StockObject = GetStockObject(5);
  SetBkMode(hdc, 1);
  return StockObject;
}
