HWND __fastcall DialogHelper::DialogBoxMCE_::_2_::LocalScope::FakeTab(HWND hDlg, unsigned __int8 a2)
{
  HWND Focus; // rbx
  HWND result; // rax
  bool v6; // zf
  HWND NextDlgGroupItem; // rsi
  HWND v8; // rdi
  struct tagRECT v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-18h] BYREF

  SendMessageW(hDlg, 0x28u, a2, 0);
  Focus = GetFocus();
  result = (HWND)(GetWindowLongPtrW(Focus, -16) & 0xF);
  if ( result == (HWND)9 || result == (HWND)4 )
  {
    v6 = a2 == 0;
    NextDlgGroupItem = Focus;
    v8 = Focus;
    if ( v6 )
    {
      do
      {
        NextDlgGroupItem = GetNextDlgGroupItem(hDlg, NextDlgGroupItem, 1);
        GetWindowRect(NextDlgGroupItem, &v9);
        GetWindowRect(v8, &Rect);
        if ( v9.top < Rect.top )
          v8 = NextDlgGroupItem;
      }
      while ( NextDlgGroupItem != Focus );
    }
    else
    {
      do
      {
        NextDlgGroupItem = GetNextDlgGroupItem(hDlg, NextDlgGroupItem, 0);
        GetWindowRect(v8, &Rect);
        GetWindowRect(NextDlgGroupItem, &v9);
        if ( Rect.top < v9.top )
          v8 = NextDlgGroupItem;
      }
      while ( NextDlgGroupItem != Focus );
    }
    return SetFocus(v8);
  }
  return result;
}
