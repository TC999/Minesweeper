char __fastcall Board::validateSurroundingFlags(Board *this, int a2, int a3)
{
  int v3; // r10d
  char v4; // r9
  __int64 v5; // r12
  int v6; // ebp
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rbx

  v3 = a2 - 1;
  v4 = 1;
  v5 = a2;
  v6 = a2 + 1;
  v7 = a2 - 1;
  do
  {
    if ( v3 > v6 )
      break;
    v8 = (unsigned int)(a3 - 1);
    v9 = 4LL * a3 - 4;
    do
    {
      if ( (int)v8 > a3 + 1 )
        break;
      if ( v7 >= 0
        && v3 < *((_DWORD *)this + 4)
        && (int)v8 >= 0
        && (int)v8 < *((_DWORD *)this + 3)
        && (v7 != v5 || (_DWORD)v8 != a3)
        && *(_DWORD *)(v9 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 8 * v7) + 16LL)) == 10 )
      {
        v4 = *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 8 * v7) + 16LL)) != 0
           ? v4
           : 0;
      }
      v8 = (unsigned int)(v8 + 1);
      v9 += 4;
    }
    while ( v4 );
    ++v3;
    ++v7;
  }
  while ( v4 );
  return v4;
}
