void __fastcall UIBoardCanvas::Update(UIBoardCanvas *this)
{
  RenderManager *v2; // rdi
  __int64 v3; // r13
  int v4; // r11d
  __int64 v5; // rcx
  __int64 v6; // r9
  Game *v7; // r11
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // r10d
  __int64 v16; // r8
  unsigned int v17; // edx
  unsigned int v18; // [rsp+78h] [rbp+10h]
  int v19; // [rsp+80h] [rbp+18h]

  if ( *((_DWORD *)Game::G + 14) == 1 )
  {
    v2 = g_pRenderManager;
    v3 = 0;
    if ( *((_QWORD *)this + 31) )
    {
      *((_BYTE *)this + 64) = 1;
      *((_BYTE *)this + 276) = 1;
      UIBoardCanvas::MakeAllTilesDirty(this);
      v4 = *((_DWORD *)this + 11);
      v5 = *(_QWORD *)(*((_QWORD *)this + 31) + 16LL);
      if ( v4 != *(_DWORD *)(v5 + 404) )
      {
        *(_DWORD *)(v5 + 404) = v4;
        *((_BYTE *)v2 + 20) = 1;
        *((_BYTE *)v2 + 88) = 1;
      }
    }
    if ( *((_BYTE *)this + 276) )
    {
      Log(0x1000000u, L"Refresh");
      v7 = Game::G;
      v8 = 0;
      v9 = 0;
      v18 = 0;
      v19 = *((_DWORD *)Game::G + 14);
      if ( *((_DWORD *)this + 2) )
      {
        v10 = 0;
        do
        {
          v11 = 0;
          if ( **(_DWORD **)(v10 + *((_QWORD *)this + 3)) )
          {
            v12 = 0;
            do
            {
              v13 = *(_QWORD *)(v12 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v10) + 16LL));
              if ( *(_BYTE *)(v13 + 64) )
              {
                v14 = *((_QWORD *)this + 7);
                ++v8;
                v15 = *(_DWORD *)(v3 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 80) + 16LL) + v10) + 16LL));
                if ( !v19 && *((_BYTE *)v7 + 41) )
                  v15 = 12;
                LOBYTE(v6) = *((_BYTE *)this + 64);
                v16 = v11;
                LOBYTE(v16) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 16LL) + v10) + 16LL)
                                       + v11);
                UITile::Refresh(v13, v15, v16, v6, v19);
                v7 = Game::G;
              }
              ++v11;
              v3 += 4;
              v12 += 8;
            }
            while ( v11 < **(_DWORD **)(v10 + *((_QWORD *)this + 3)) );
            v9 = v18;
            v3 = 0;
          }
          ++v9;
          v10 += 8;
          v18 = v9;
        }
        while ( v9 < *((_DWORD *)this + 2) );
      }
      UIBoardCanvas::RefreshLabels(this);
      if ( *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) * *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) == *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) + *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) )
        Game::DisarmBoard(Game::G);
      Log(0x1000000u, L"Refresh done: dirtyCount = %d", v8);
      v2 = g_pRenderManager;
    }
    *((_BYTE *)this + 276) = 0;
    if ( *((_QWORD *)this + 31) )
    {
      RenderManager::Render(v2, 1);
      Game::ExplodeBoard(Game::G, v17);
    }
  }
}
