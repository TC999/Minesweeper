__int64 __fastcall Board::getSurroundingFlagCount(Board *this, int a2, int a3)
{
  int v3; // r9d
  int v4; // esi
  unsigned int v5; // r11d
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r14
  int v9; // r12d
  int v10; // edi
  int v11; // edx
  __int64 i; // r8

  v3 = a2 - 1;
  v4 = a2 + 1;
  v5 = 0;
  v6 = a3;
  v7 = a2 - 1;
  v8 = a2;
  if ( a2 - 1 <= a2 + 1 )
  {
    v9 = a3 - 1;
    v10 = a3 + 1;
    do
    {
      v11 = v9;
      for ( i = v6 - 1; v11 <= v10; ++i )
      {
        if ( v7 >= 0
          && v3 < *((_DWORD *)this + 4)
          && i >= 0
          && v11 < *((_DWORD *)this + 3)
          && (v7 != v8 || i != v6)
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 8 * v7) + 16LL) + 4 * i) == 10 )
        {
          ++v5;
        }
        ++v11;
      }
      ++v3;
      ++v7;
    }
    while ( v3 <= v4 );
  }
  return v5;
}
