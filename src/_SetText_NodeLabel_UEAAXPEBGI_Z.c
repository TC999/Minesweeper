void __fastcall NodeLabel::SetText(void **this, const unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  wchar_t *v6; // rsi
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  bool v9; // zf
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  void *v12; // rax
  void *v13; // rcx
  void *v14; // rax
  void *v15; // rcx
  RenderManager *v16; // rax

  v3 = a3;
  if ( *a2 == 124 )
  {
    v6 = LocalizeMessage(a2, a3);
    v7 = -1;
    v8 = v6;
    do
    {
      if ( !v7 )
        break;
      v9 = *v8++ == 0;
      --v7;
    }
    while ( !v9 );
    v10 = ~(_DWORD)v7;
    v11 = v10;
    if ( *((_DWORD *)this + 122) < v10 || !this[60] )
    {
      operator delete(this[60]);
      v12 = operator new[](saturated_mul(v11, 2u));
      *((_DWORD *)this + 122) = v11;
      this[60] = v12;
    }
    v13 = this[60];
    if ( v13 )
    {
      memset(v13, 0, 2LL * *((unsigned int *)this + 122));
      wcscpy_s((wchar_t *)this[60], *((unsigned int *)this + 122), v6);
    }
    LocalFree(v6);
  }
  else
  {
    if ( *((_DWORD *)this + 122) < a3 || !this[60] )
    {
      operator delete(this[60]);
      v14 = operator new[](saturated_mul(v3, 2u));
      *((_DWORD *)this + 122) = v3;
      this[60] = v14;
    }
    v15 = this[60];
    if ( v15 )
    {
      memset(v15, 0, 2LL * *((unsigned int *)this + 122));
      wcscpy_s((wchar_t *)this[60], *((unsigned int *)this + 122), a2);
    }
  }
  v16 = g_pRenderManager;
  *((_BYTE *)g_pRenderManager + 20) = 1;
  *((_BYTE *)v16 + 88) = 1;
}
