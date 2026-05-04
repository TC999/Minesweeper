char __fastcall Array<Access_Node *>::FindRemove(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  _QWORD *v4; // rax
  __int64 v6; // r11

  v2 = *(_DWORD *)a1;
  v3 = 0;
  if ( *(_DWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 16);
    while ( *v4 != a2 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v3 = -1;
  }
  if ( v3 == -1 )
    return 0;
  if ( v3 < v2 - 1 )
  {
    v6 = 8LL * (int)v3;
    do
    {
      ++v3;
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 16)) = *(_QWORD *)(v6 + *(_QWORD *)(a1 + 16) + 8);
      v6 += 8;
    }
    while ( v3 < *(_DWORD *)a1 - 1 );
  }
  --*(_DWORD *)a1;
  return 1;
}
