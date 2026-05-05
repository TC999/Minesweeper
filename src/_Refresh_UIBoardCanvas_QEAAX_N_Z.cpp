void __fastcall UIBoardCanvas::Refresh(UIBoardCanvas *this, char a2)
{
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r9
  Game *v6; // r11
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+18h]

  if ( *((_BYTE *)this + 276) || a2 )
  {
    v4 = L"Refresh";
    if ( a2 )
      v4 = L"Refresh (forced)";
    Log(0x1000000u, v4);
    v6 = Game::G;
    v7 = 0;
    v8 = 0;
    v17 = 0;
    v18 = *((_DWORD *)Game::G + 14);
    if ( *((_DWORD *)this + 2) )
    {
      v9 = 0;
      do
      {
        v10 = 0;
        if ( **(_DWORD **)(v9 + *((_QWORD *)this + 3)) )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            v13 = *(_QWORD *)(v11 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v9) + 16LL));
            if ( *(_BYTE *)(v13 + 64) )
            {
              v14 = *((_QWORD *)this + 7);
              ++v8;
              v15 = *(unsigned int *)(v12
                                    + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 80) + 16LL) + v9) + 16LL));
              if ( !v18 && *((_BYTE *)v6 + 41) )
                v15 = 12;
              LOBYTE(v5) = *((_BYTE *)this + 64);
              v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 16LL) + v9) + 16LL);
              LOBYTE(v16) = *(_BYTE *)(v16 + v10);
              UITile::Refresh(v13, v15, v16, v5, v18);
              v6 = Game::G;
            }
            v10 = (unsigned int)(v10 + 1);
            v12 += 4;
            v11 += 8;
          }
          while ( (unsigned int)v10 < **(_DWORD **)(v9 + *((_QWORD *)this + 3)) );
          v7 = v17;
        }
        ++v7;
        v9 += 8;
        v17 = v7;
      }
      while ( v7 < *((_DWORD *)this + 2) );
    }
    UIBoardCanvas::RefreshLabels(this);
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) * *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) == *(_DWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                                                + *(_DWORD *)(*((_QWORD *)this + 7) + 24LL) )
      Game::DisarmBoard(Game::G);
    Log(0x1000000u, L"Refresh done: dirtyCount = %d", v8);
  }
  *((_BYTE *)this + 276) = 0;
}
