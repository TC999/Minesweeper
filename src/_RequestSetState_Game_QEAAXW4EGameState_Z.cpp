void __fastcall Game::RequestSetState(__int64 a1, int a2)
{
  UIBoardCanvas *v3; // rcx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  Str *v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  Str *v13; // rax
  __int64 v14; // rdx
  UIBoardCanvas *v15; // rcx
  UIBoardCanvas *v16; // rcx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(UIBoardCanvas **)(a1 + 16);
  if ( v3 )
    UIBoardCanvas::MakeAllTilesDirty(v3);
  v5 = *(_DWORD *)(a1 + 56);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( (unsigned int)(v7 - 1) < 2 )
        {
          Game::ToggleChangeSettingsMenus((Game *)a1, 1);
        }
        else
        {
          v8 = Str::Str((Str *)v17, L"Unknown state");
          LOBYTE(v9) = 1;
          StrErr(v8, v9);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 56) = a2;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        return;
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          v13 = Str::Str((Str *)v17, L"Unknown state");
          LOBYTE(v14) = 1;
          StrErr(v13, v14);
          return;
        }
      }
      else
      {
        v15 = *(UIBoardCanvas **)(a1 + 16);
        if ( v15 )
          UIBoardCanvas::RefreshLabels(v15);
      }
      Game::ToggleChangeSettingsMenus((Game *)a1, 0);
    }
    else
    {
      v16 = *(UIBoardCanvas **)(a1 + 16);
      if ( v16 )
        UIBoardCanvas::RefreshLabels(v16);
    }
  }
}
