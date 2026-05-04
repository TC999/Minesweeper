const struct XmlNode *__fastcall XmlNode::XPathElementSearchSingle(XmlNode *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int16 v7; // cx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax

LABEL_1:
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( *a2 )
  {
    v7 = *a2;
    do
    {
      if ( v4 && !(_DWORD)v6 && v7 == 47 )
        v6 = v4;
      ++v5;
      ++v4;
      v7 = a2[v5];
    }
    while ( v7 );
    if ( v4 && *a2 == 47 )
    {
      if ( v4 == 1 )
        return this;
      if ( a2[1] != 64 )
      {
        v8 = 0;
        v9 = 0;
        if ( !(_DWORD)v6 )
          v6 = v4;
        while ( v8 < *((_DWORD *)this + 6) )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
          if ( *(_DWORD *)(v10 + 72) == (_DWORD)v6 - 1
            && wcsncmp(a2 + 1, *(const wchar_t **)(v10 + 64), *(unsigned int *)(v10 + 72)) == 0 )
          {
            v11 = *((_QWORD *)this + 5);
            if ( (_DWORD)v6 != v4 )
            {
              this = *(XmlNode **)(v11 + 8 * v9);
              a2 += v6;
              goto LABEL_1;
            }
            return *(const struct XmlNode **)(v11 + 8LL * v8);
          }
          ++v8;
          ++v9;
        }
      }
    }
  }
  return 0;
}
