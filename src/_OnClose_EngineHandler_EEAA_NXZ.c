bool __fastcall EngineHandler::OnClose(EngineHandler *this)
{
  Game *v1; // rcx
  bool v2; // al
  bool v3; // dl
  bool v4; // si
  bool v5; // zf
  Game *v6; // rbp
  __int64 v7; // rbx
  float v8; // xmm0_4
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  bool v14; // cc
  char v15; // dl

  v1 = Game::G;
  v2 = 0;
  v3 = 1;
  UIDialogs::CancelClose = 0;
  UIDialogs::SaveOnExit = 1;
  if ( !Game::G )
    return !v2;
  UIDialogs::CancelClose = 0;
  if ( *((_DWORD *)Game::G + 14) != 1 || (v4 = 1, !*((_BYTE *)Game::G + 273)) )
    v4 = 0;
  if ( *((_BYTE *)Game::G + 272) )
  {
LABEL_26:
    if ( !v4 || (v5 = !v3, v15 = 1, v5) )
      v15 = 0;
    Game::Save(v1, v15, 1);
    v2 = UIDialogs::CancelClose;
    return !v2;
  }
  UIDialogs::StartExitGameDialog(g_hWnd, v4);
  v5 = !UIDialogs::CancelClose;
  if ( !UIDialogs::CancelClose )
  {
    v3 = UIDialogs::SaveOnExit;
    if ( !UIDialogs::SaveOnExit )
    {
      v6 = Game::G;
      if ( v4 )
      {
        v7 = *((_QWORD *)Game::G + 3);
        v8 = floorf(*(float *)(v7 + 32));
        v9 = *(_DWORD *)(v7 + 36);
        v10 = (int)v8;
        if ( (unsigned int)(v9 - 1) <= 2 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)v6 + 32) + 8LL * (unsigned int)(v9 - 1));
          if ( !v10 )
            v10 = 1;
          v12 = ++*(_DWORD *)(v11 + 12);
          if ( *(_BYTE *)(v11 + 40) )
          {
            v14 = *(_DWORD *)(v11 + 32) < 1;
            *(_DWORD *)(v11 + 36) = 1;
            *(_BYTE *)(v11 + 40) = 0;
            if ( v14 )
              *(_DWORD *)(v11 + 32) = 1;
          }
          else
          {
            v13 = ++*(_DWORD *)(v11 + 36);
            if ( v13 > *(_DWORD *)(v11 + 32) )
              *(_DWORD *)(v11 + 32) = v13;
          }
          if ( v10 > *(_DWORD *)(v11 + 16) || !*(_DWORD *)(v11 + 16) )
            *(_DWORD *)(v11 + 16) = v10;
          if ( v10 < *(_DWORD *)(v11 + 20) || !*(_DWORD *)(v11 + 20) )
            *(_DWORD *)(v11 + 20) = v10;
          *(_DWORD *)(v11 + 24) = (int)(float)((float)(v10 + *(_DWORD *)(v11 + 24) * (v12 - 1)) / (float)v12);
        }
      }
      Game::RemoveSavedGame(v6);
      v3 = UIDialogs::SaveOnExit;
    }
    v1 = Game::G;
    goto LABEL_26;
  }
  return v5;
}
