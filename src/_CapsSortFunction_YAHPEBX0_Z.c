char __fastcall CapsSortFunction(_DWORD *a1, int *a2)
{
  int v2; // r8d
  int v4; // eax
  bool v5; // zf
  int v6; // ecx

  v2 = *a2;
  if ( *a1 == *a2 )
  {
    v6 = a1[7] & 0x10000;
    if ( v6 != (a2[7] & 0x10000) )
      return v6 != 0 ? -1 : 1;
    v5 = a1[23] == a2[23];
LABEL_11:
    LOBYTE(v4) = v5;
    return v4;
  }
  if ( *a1 != 1 )
  {
    if ( v2 == 1 )
    {
      LOBYTE(v4) = 1;
      return v4;
    }
    if ( *a1 != 3 )
    {
      v5 = v2 == 3;
      goto LABEL_11;
    }
  }
  LOBYTE(v4) = -1;
  return v4;
}
