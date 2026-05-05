void __fastcall UIBoardCanvas::ShowTopsOnAllCoveredSquaresExcept(UIBoardCanvas *this, struct UITile *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rbp
  UITile *v10; // r8
  bool v11; // dl

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v5 = 0;
    do
    {
      v6 = *((_QWORD *)this + 3);
      v7 = 0;
      if ( **(_DWORD **)(v5 + v6) )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = *(UITile **)(*(_QWORD *)(*(_QWORD *)(v5 + v6) + 16LL) + v9);
          if ( *((_BYTE *)v10 + 136) )
          {
            v11 = v10 != a2
               || *(_DWORD *)(v8
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 80LL) + 16LL) + v5)
                                        + 16LL)) == 10;
            UITile::SetTopVisible(v10, v11);
          }
          v6 = *((_QWORD *)this + 3);
          ++v7;
          v9 += 8;
          v8 += 4;
        }
        while ( v7 < **(_DWORD **)(v5 + v6) );
      }
      ++v2;
      v5 += 8;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
}
