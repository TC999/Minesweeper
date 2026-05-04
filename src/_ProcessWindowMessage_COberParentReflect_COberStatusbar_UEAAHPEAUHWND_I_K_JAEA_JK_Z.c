__int64 __fastcall COberStatusbar::COberParentReflect::ProcessWindowMessage(
        COberStatusbar::COberParentReflect *this,
        HWND a2,
        int a3,
        WPARAM a4,
        LPARAM lParam,
        __int64 *a6,
        unsigned int a7)
{
  if ( a7 || a3 != 43 || !a4 )
    return 0;
  *a6 = SendMessageW(*(HWND *)(lParam + 24), 0x202Bu, a4, lParam);
  return 1;
}
