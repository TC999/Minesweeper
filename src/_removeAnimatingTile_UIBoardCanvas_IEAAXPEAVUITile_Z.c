void __fastcall UIBoardCanvas::removeAnimatingTile(UIBoardCanvas *this, struct UITile *a2)
{
  unsigned int v3; // r9d
  char v4; // cl
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rbx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( v3 >= *((_DWORD *)this + 82) )
      break;
    if ( *(struct UITile **)(v5 + *((_QWORD *)this + 43)) == a2 )
    {
      v6 = v3;
      if ( v3 < *((_DWORD *)this + 82) - 1 )
      {
        v7 = v5;
        do
        {
          ++v6;
          *(_QWORD *)(v7 + *((_QWORD *)this + 43)) = *(_QWORD *)(v7 + *((_QWORD *)this + 43) + 8);
          v7 += 8;
        }
        while ( v6 < *((_DWORD *)this + 82) - 1 );
      }
      --*((_DWORD *)this + 82);
      v4 = 1;
    }
    ++v3;
    v5 += 8;
  }
  while ( !v4 );
}
