_DWORD *__fastcall RtlpImageNtHeader(__int64 a1)
{
  __int64 v1; // rdx
  _DWORD *v2; // rax

  v1 = 0;
  if ( a1 && a1 != -1 && *(_WORD *)a1 == 23117 && *(_DWORD *)(a1 + 60) < 0x10000000u )
  {
    v2 = (_DWORD *)(a1 + *(int *)(a1 + 60));
    if ( *v2 != 17744 )
      return 0;
    return v2;
  }
  return (_DWORD *)v1;
}
