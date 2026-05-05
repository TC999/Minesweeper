const struct XmlNode **__fastcall XmlNode::XPathElementSearch(
        XmlNode *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned __int16 v10; // cx
  const void **v11; // rbx
  const void **v12; // rax
  unsigned int i; // r14d
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // rcx
  const struct XmlNode **result; // rax

LABEL_1:
  v6 = 0;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( !*a2 )
    return 0;
  v10 = *a2;
  do
  {
    if ( v7 && !v9 && v10 == 47 )
      v9 = v7;
    ++v8;
    ++v7;
    v10 = a2[v8];
  }
  while ( v10 );
  if ( !v7 || *a2 != 47 )
    return 0;
  if ( v7 == 1 )
  {
    result = (const struct XmlNode **)operator new(8u);
    *result = this;
    *a3 = 1;
    return result;
  }
  if ( a2[1] == 64 )
    return 0;
  v11 = 0;
  if ( !v9 )
  {
    v9 = v7;
    v12 = (const void **)operator new(0x18u);
    v11 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = 0;
      *((_DWORD *)v12 + 1) = 0;
      *((_DWORD *)v12 + 2) = 16;
      v12[2] = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v6);
    if ( *(_DWORD *)(v14 + 72) == v9 - 1
      && wcsncmp(a2 + 1, *(const wchar_t **)(v14 + 64), *(unsigned int *)(v14 + 72)) == 0 )
    {
      if ( v9 != v7 )
      {
        a2 += v9;
        this = *(XmlNode **)(*((_QWORD *)this + 5) + 8 * v6);
        goto LABEL_1;
      }
      Array<IEventListener *>::Add((__int64)v11, *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v6));
    }
    ++v6;
  }
  v15 = *(unsigned int *)v11;
  *a3 = v15;
  v16 = operator new(saturated_mul(v15, 8u));
  memcpy(v16, v11[2], 8LL * *a3);
  v17 = (void *)v11[2];
  if ( v17 )
    free(v17);
  operator delete(v11);
  return (const struct XmlNode **)v16;
}
