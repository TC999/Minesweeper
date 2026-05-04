void __fastcall UIBoardCanvas::disarmTilesAtYPos(UIBoardCanvas *this, int a2)
{
  __int64 v2; // r8
  int v4; // edi
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rbp

  if ( a2 >= 0 )
  {
    v2 = *((_QWORD *)this + 7);
    if ( a2 < *(_DWORD *)(v2 + 12) )
    {
      v4 = 0;
      if ( *(int *)(v2 + 16) > 0 )
      {
        v5 = (unsigned int)a2;
        v6 = 0;
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v6) + 16LL) + 8 * v5);
          if ( *(_BYTE *)(v5 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 16LL) + v6) + 16LL)) )
          {
            if ( !*(_QWORD *)(v7 + 40) )
            {
              UITile::StartDisarmAnimation(*(UITile **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v6) + 16LL)
                                                      + 8 * v5));
              Array<IEventListener *>::Add((__int64)this + 328, v7);
            }
          }
          v2 = *((_QWORD *)this + 7);
          ++v4;
          v6 += 8;
        }
        while ( v4 < *(_DWORD *)(v2 + 16) );
      }
    }
  }
}
