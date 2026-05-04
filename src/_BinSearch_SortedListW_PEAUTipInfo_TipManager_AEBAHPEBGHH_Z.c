__int64 __fastcall SortedListW<TipManager::TipInfo *>::BinSearch(
        _QWORD *a1,
        const wchar_t *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v9; // edi

  v4 = a4;
  v5 = a3;
  v6 = a4 - a3;
  if ( a4 == a3 )
    return ~v5;
  while ( 1 )
  {
    v9 = v5 + v6 / 2;
    if ( !_wcsicmp(*(const wchar_t **)(*a1 + 8LL * (int)v9), a2) )
      break;
    if ( _wcsicmp(*(const wchar_t **)(*a1 + 8LL * (int)v9), a2) >= 0 )
      v5 = v9 + 1;
    else
      v4 = v9;
    v6 = v4 - v5;
    if ( v4 == v5 )
      return ~v5;
  }
  return v9;
}
