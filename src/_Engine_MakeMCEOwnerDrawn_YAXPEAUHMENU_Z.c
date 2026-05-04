void __fastcall Engine_MakeMCEOwnerDrawn(HMENU a1)
{
  signed int v2; // ebx
  int MenuItemCount; // esi
  MENUINFO v4; // [rsp+20h] [rbp-88h] BYREF
  tagMENUITEMINFOW mii; // [rsp+50h] [rbp-58h] BYREF

  memset(&mii.fMask, 0, 0x4Cu);
  mii.cbSize = 80;
  mii.fMask = 20;
  v2 = 0;
  MenuItemCount = GetMenuItemCount(a1);
  if ( MenuItemCount > 0 )
  {
    do
    {
      GetMenuItemInfoW(a1, v2, 1, &mii);
      if ( mii.hSubMenu )
        Engine_MakeMCEOwnerDrawn(mii.hSubMenu);
      if ( (mii.fType & 0x800) == 0 )
      {
        mii.fType |= 0x100u;
        SetMenuItemInfoW(a1, v2, 1, &mii);
      }
      ++v2;
    }
    while ( v2 < MenuItemCount );
  }
  memset(&v4.fMask, 0, 0x24u);
  v4.hbrBack = g_hMCEBrush;
  v4.cbSize = 40;
  v4.fMask = 2;
  SetMenuInfo(a1, &v4);
}
