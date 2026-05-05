void __fastcall Game::ExplodeBoard(Game *this, unsigned int a2)
{
  Game *v2; // rbx
  __int64 v3; // rax
  int v4; // edi
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  bool v9; // cc
  __int64 v10; // rax
  int *v11; // rax
  int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned int *v15; // r9
  unsigned int v16; // r9d
  __int64 v17; // rbx
  signed int TickCount; // r11d
  __int64 v19; // rax
  GameAudio *v20; // rcx
  int v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-10h]
  Game *v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = this;
  v2 = Game::G;
  if ( *((_DWORD *)Game::G + 14) == 1 )
  {
    v3 = *((_QWORD *)Game::G + 3);
    v4 = *(_DWORD *)(v3 + 36);
    if ( v4 != 4 )
    {
      v5 = (int)floorf(*(float *)(v3 + 32));
      if ( (unsigned int)(v4 - 1) <= 2 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)v2 + 32) + 8LL * (unsigned int)(v4 - 1));
        if ( !v5 )
          v5 = 1;
        v7 = ++*(_DWORD *)(v6 + 12);
        if ( *(_BYTE *)(v6 + 40) )
        {
          v9 = *(_DWORD *)(v6 + 32) < 1;
          *(_DWORD *)(v6 + 36) = 1;
          *(_BYTE *)(v6 + 40) = 0;
          if ( v9 )
            *(_DWORD *)(v6 + 32) = 1;
        }
        else
        {
          v8 = ++*(_DWORD *)(v6 + 36);
          if ( v8 > *(_DWORD *)(v6 + 32) )
            *(_DWORD *)(v6 + 32) = v8;
        }
        if ( v5 > *(_DWORD *)(v6 + 16) || !*(_DWORD *)(v6 + 16) )
          *(_DWORD *)(v6 + 16) = v5;
        if ( v5 < *(_DWORD *)(v6 + 20) || !*(_DWORD *)(v6 + 20) )
          *(_DWORD *)(v6 + 20) = v5;
        *(_DWORD *)(v6 + 24) = (int)(float)((float)(v5 + *(_DWORD *)(v6 + 24) * (v7 - 1)) / (float)v7);
      }
      Game::Save(v2, 0, 0);
    }
    if ( *((_BYTE *)v2 + 40) )
    {
      if ( *((_BYTE *)v2 + 41)
        && (v10 = *((_QWORD *)v2 + 2)) != 0
        && *(_BYTE *)(v10 + 277)
        && (v11 = (int *)*((_QWORD *)v2 + 3), v12 = v11[9], v12 != 1)
        && (v12 != 4 || v11[4] > 12 || v11[3] > 12) )
      {
        if ( v12 == 2 || v12 == 4 && v11[4] <= 23 && v11[3] <= 16 )
          v13 = 6;
        else
          v13 = 7;
      }
      else
      {
        v13 = 5;
      }
      if ( GameAudio::Pin((GameAudio *)v13, a2) )
        GameAudio::Unpin((GameAudio *)v13, v14);
      if ( *((_BYTE *)v2 + 40) && !*((_BYTE *)v2 + 268) )
      {
        LODWORD(v23) = 0;
        GameAudio::PlaySoundProto((GameAudio *)v13, 0, (bool)&v23, v15);
        GameAudio::SetSoundVolume((GameAudio *)v13, 100, (int)v23, v16);
        *((_BYTE *)v2 + 268) = 1;
      }
    }
    if ( *((_BYTE *)v2 + 41) )
    {
      Game::RequestSetState((__int64)v2, 4);
      v17 = *((_QWORD *)v2 + 2);
      TickCount = GetTickCount();
      v19 = *(_QWORD *)(v17 + 248);
      *(double *)(v17 + 352) = (double)TickCount / 1000.0;
      UIBoardCanvas::doMineExplosion((UIBoardCanvas *)v17, *(_DWORD *)(v19 + 48), *(_DWORD *)(v19 + 52), 1);
    }
    else
    {
      Game::RequestSetState((__int64)v2, 2);
      Game::RemoveSavedGame(v2);
      UITile::ClearRumble();
      RenderManager::Render(g_pRenderManager, 1);
      GameAudio::StopAllSounds(v20);
      LOBYTE(v21) = 0;
      DialogHelper::DialogBoxMCE(
        (LPCWSTR)0x88,
        g_hWnd,
        (HWND)UIDialogs::LoseDlgProc,
        (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))2,
        v21,
        0,
        0,
        v22);
    }
  }
}
