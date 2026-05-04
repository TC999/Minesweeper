unsigned __int16 *__fastcall XmlNode::XPathAttributeSearchSingle(XmlNode *this, const unsigned __int16 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned __int16 v7; // dx
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  wchar_t *v13; // rbx

LABEL_1:
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( *a2 )
  {
    v7 = *a2;
    do
    {
      if ( v4 && !v6 && v7 == 47 )
        v6 = v4;
      ++v5;
      ++v4;
      v7 = a2[v5];
    }
    while ( v7 );
    if ( v4 && *a2 == 47 )
    {
      if ( v6 )
      {
        v8 = 0;
        v9 = 0;
        while ( v8 < *((_DWORD *)this + 6) )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
          if ( *(_DWORD *)(v10 + 72) == v6 - 1
            && wcsncmp(a2 + 1, *(const wchar_t **)(v10 + 64), *(unsigned int *)(v10 + 72)) == 0 )
          {
            a2 += v6;
            this = *(XmlNode **)(*((_QWORD *)this + 5) + 8 * v9);
            goto LABEL_1;
          }
          ++v8;
          ++v9;
        }
      }
      else if ( v4 >= 2
             && a2[1] == 64
             && (int)SortedListW<TipManager::TipInfo *>::BinSearch(this, a2 + 2, 0, *((_DWORD *)this + 4)) >= 0 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)this + 1)
                        + 8LL
                        * (int)SortedListW<TipManager::TipInfo *>::BinSearch(this, a2 + 2, 0, *((_DWORD *)this + 4)));
        v12 = *(_DWORD *)(v11 + 16);
        if ( v12 <= 0x3FFFFFFF )
        {
          v13 = (wchar_t *)operator new(saturated_mul(v12 + 1, 2u));
          wcsncpy_s(
            v13,
            (unsigned int)(*(_DWORD *)(v11 + 16) + 1),
            *(const wchar_t **)(v11 + 8),
            *(unsigned int *)(v11 + 16));
          return v13;
        }
      }
    }
  }
  return 0;
}
