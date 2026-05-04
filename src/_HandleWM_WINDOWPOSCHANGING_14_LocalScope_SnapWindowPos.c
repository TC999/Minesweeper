char __fastcall HandleWM_WINDOWPOSCHANGING_::_14_::LocalScope::SnapWindowPos(
        _DWORD *a1,
        int a2,
        signed int a3,
        int a4,
        int a5)
{
  int v7; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax

  if ( a2 != 8 && a2 != 5 && a2 != 7 && a2 != 4
    || (v7 = a1[6], (int)abs32(v7 - a4) >= a3) && (int)abs32(a1[7] - a5) >= a3 )
  {
    if ( a2 != 6 && a2 != 3 && a2 != 1 && a2 != 2 )
      return 0;
    v7 = a1[6];
    if ( (int)abs32(v7 - a4) >= a3 || (int)abs32(a1[7] - a5) >= a3 )
      return 0;
  }
  v9 = a1[4];
  a1[6] = a4;
  v10 = v7 + v9;
  v11 = a1[7];
  a1[7] = a5;
  v12 = a1[5] + v11;
  if ( a2 == 2 || a2 == 8 || a2 == 6 )
  {
    a1[7] = a5;
LABEL_26:
    a1[6] = a4;
    return 1;
  }
  if ( a2 == 1 || a2 == 7 )
  {
    a1[7] = a5;
    a1[4] = v10 - a4;
    return 1;
  }
  if ( a2 != 4 )
  {
    if ( a2 != 3 && a2 != 5 )
      return 1;
    a1[5] = v12 - a5;
    goto LABEL_26;
  }
  a1[5] = v12 - a5;
  a1[4] = v10 - a4;
  return 1;
}
