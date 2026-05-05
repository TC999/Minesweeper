__int64 __fastcall Board::GetNumTilesActuallyPlayed(Board *this)
{
  unsigned int v1; // edx
  __int64 v3; // r10
  __int64 v4; // r9
  _DWORD *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( *((int *)this + 4) > 0 )
  {
    v3 = *((unsigned int *)this + 4);
    v4 = 0;
    do
    {
      if ( *((int *)this + 3) > 0 )
      {
        v5 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + v4) + 16LL);
        v6 = *((unsigned int *)this + 3);
        do
        {
          if ( *v5 != 9 && *v5 != 10 && *v5 != 11 )
            ++v1;
          ++v5;
          --v6;
        }
        while ( v6 );
      }
      v4 += 8;
      --v3;
    }
    while ( v3 );
  }
  return v1;
}
