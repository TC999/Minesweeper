__int64 __fastcall AlphaCompare(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 >= *(_QWORD *)(v3 + 16) )
    return v4 > *(_QWORD *)(v3 + 16);
  else
    return 0xFFFFFFFFLL;
}
