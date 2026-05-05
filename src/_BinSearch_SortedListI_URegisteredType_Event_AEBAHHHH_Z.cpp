__int64 __fastcall SortedListI<Event::RegisteredType>::BinSearch(__int64 *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  __int64 v5; // r11
  unsigned int v6; // ecx

  v4 = a4 - a3;
  if ( a4 == a3 )
    return ~a3;
  v5 = *a1;
  while ( 1 )
  {
    v6 = a3 + v4 / 2;
    if ( *(_DWORD *)(v5 + 4LL * (int)v6) == a2 )
      break;
    if ( *(_DWORD *)(v5 + 4LL * (int)v6) <= a2 )
      a3 = v6 + 1;
    else
      a4 = a3 + v4 / 2;
    v4 = a4 - a3;
    if ( a4 == a3 )
      return ~a3;
  }
  return v6;
}
