__int64 __fastcall FindPESection(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = 0;
  v4 = a1 + *(int *)(a1 + 60);
  v5 = *(unsigned __int16 *)(v4 + 20) + v4 + 24;
  if ( !*(_WORD *)(v4 + 6) )
    return 0;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v5 + 12);
    if ( a2 >= v6 && a2 < (unsigned int)(v6 + *(_DWORD *)(v5 + 8)) )
      break;
    ++v2;
    v5 += 40;
    if ( v2 >= *(unsigned __int16 *)(v4 + 6) )
      return 0;
  }
  return v5;
}
