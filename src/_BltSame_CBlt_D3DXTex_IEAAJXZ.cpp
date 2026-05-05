__int64 __fastcall D3DXTex::CBlt::BltSame(D3DXTex::CBlt *this)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  const void *v5; // rcx
  const void *v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  char *v12; // rbp
  char *i; // rsi

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v2 + 8) != *(_DWORD *)(*(_QWORD *)this + 8LL)
    || *(_DWORD *)(v1 + 28)
    || *(_DWORD *)(v2 + 136) != *(_DWORD *)(v1 + 136)
    || *(_DWORD *)(v2 + 140) != *(_DWORD *)(v1 + 140)
    || *(_DWORD *)(v2 + 144) != *(_DWORD *)(v1 + 144)
    || *(_DWORD *)(v2 + 20) != *(_DWORD *)(v1 + 20) )
  {
    return 2147500037LL;
  }
  if ( !*(_DWORD *)(v2 + 16) )
    return D3DXTex::CBlt::BltSame_DXTn(this);
  if ( *(_DWORD *)(v2 + 32) )
  {
    v5 = *(const void **)(v2 + 72);
    v6 = *(const void **)(v1 + 72);
    if ( v5 != v6 )
    {
      if ( memcmp(v5, v6, 0x400u) )
        return 2147500037LL;
    }
  }
  *(_DWORD *)(v2 + 20) = 0;
  v7 = 0;
  *(_DWORD *)(*(_QWORD *)this + 20LL) = 0;
  v8 = (unsigned int *)*((_QWORD *)this + 1);
  if ( v8[36] )
  {
    v9 = *(_QWORD *)this;
    v10 = v8[35];
    do
    {
      v11 = 0;
      v12 = (char *)(*(_QWORD *)(v9 + 40) + v7 * *(_DWORD *)(v9 + 132));
      for ( i = (char *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + v7 * *(_DWORD *)(*((_QWORD *)this + 1) + 132LL));
            v11 < v10;
            v12 += *(unsigned int *)(*(_QWORD *)this + 128LL) )
      {
        memcpy(i, v12, v8[37]);
        v8 = (unsigned int *)*((_QWORD *)this + 1);
        v9 = *(_QWORD *)this;
        v10 = v8[35];
        ++v11;
        i += v8[32];
      }
      v8 = (unsigned int *)*((_QWORD *)this + 1);
      ++v7;
    }
    while ( v7 < v8[36] );
  }
  return 0;
}
