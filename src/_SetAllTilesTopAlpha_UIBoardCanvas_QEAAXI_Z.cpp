void __fastcall UIBoardCanvas::SetAllTilesTopAlpha(UIBoardCanvas *this, int a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rbp

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(v6 + v5);
      v8 = 0;
      if ( *(_DWORD *)v7 )
      {
        v9 = 0;
        do
        {
          UITile::SetTopAlpha(*(UITile **)(*(_QWORD *)(v7 + 16) + v9), a2);
          v5 = *((_QWORD *)this + 3);
          ++v8;
          v7 = *(_QWORD *)(v6 + v5);
          v9 += 8;
        }
        while ( v8 < *(_DWORD *)v7 );
      }
      ++v2;
      v6 += 8;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
}
