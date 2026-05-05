void __fastcall XmlNode::SetNodeValue(void **this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ecx
  rsize_t v8; // rbp
  unsigned int v9; // edi
  wchar_t *v10; // rax

  if ( !*((_DWORD *)this + 6) )
  {
    if ( *((_BYTE *)this + 112) )
      operator delete(this[15]);
    v4 = a2;
    v5 = -1;
    do
    {
      if ( !v5 )
        break;
      v6 = *v4++ == 0;
      --v5;
    }
    while ( !v6 );
    v7 = ~(_DWORD)v5;
    v8 = v7;
    v9 = v7 - 1;
    v10 = (wchar_t *)operator new(saturated_mul(v7, 2u));
    this[15] = v10;
    if ( v10 )
    {
      *((_DWORD *)this + 32) = v9;
      *((_BYTE *)this + 112) = 1;
      wcscpy_s(v10, v8, a2);
      *((_BYTE *)this + 48) = 0;
    }
  }
}
