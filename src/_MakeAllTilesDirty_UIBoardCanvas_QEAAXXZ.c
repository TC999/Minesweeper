void __fastcall UIBoardCanvas::MakeAllTilesDirty(UIBoardCanvas *this)
{
  unsigned int v1; // r8d
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(v4 + v3);
      v6 = 0;
      if ( *(_DWORD *)v5 )
      {
        v7 = 0;
        do
        {
          ++v6;
          v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + v7);
          v7 += 8;
          *(_BYTE *)(v8 + 64) = 1;
          v3 = *((_QWORD *)this + 3);
          v5 = *(_QWORD *)(v4 + v3);
        }
        while ( v6 < *(_DWORD *)v5 );
      }
      ++v1;
      v4 += 8;
    }
    while ( v1 < *((_DWORD *)this + 2) );
  }
}
