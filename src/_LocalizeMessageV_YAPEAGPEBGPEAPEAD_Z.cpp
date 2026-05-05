unsigned __int16 *__fastcall LocalizeMessageV(const unsigned __int16 *Src, va_list *Arguments)
{
  const unsigned __int16 *v2; // r12
  __int64 v4; // rcx
  const unsigned __int16 *v5; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  unsigned int v9; // eax
  char v10; // bl
  const WCHAR *v11; // r13
  HMODULE ModuleHandleW; // rax
  HRSRC Resource; // rdi
  WORD ThreadLocale; // di
  HMODULE v15; // rax
  HMODULE v16; // rax
  HGLOBAL v17; // rax
  unsigned __int16 *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rdi
  _WORD *v21; // rax
  _WORD *v22; // rbx
  __int64 v24; // rcx
  _WORD *v25; // rdi
  __int64 v26; // rcx
  const unsigned __int16 *v27; // rdi
  __int64 v28; // rcx
  rsize_t v29; // rdi
  wchar_t *Buffer; // [rsp+70h] [rbp+8h] BYREF

  v2 = Src;
  v4 = -1;
  v5 = v2;
  do
  {
    if ( !v4 )
      break;
    v7 = *v5++ == 0;
    --v4;
  }
  while ( !v7 );
  v8 = -v4 - 2;
  if ( (unsigned int)v8 > 0x40000000 )
    v8 = 0x40000000;
  if ( (_DWORD)v8 )
  {
    if ( *v2 == 124 )
    {
      v9 = wcstoul(v2 + 1, 0, 10);
      v10 = v9;
      if ( v9 )
      {
        v11 = (const WCHAR *)(unsigned __int16)((v9 >> 4) + 1);
        ModuleHandleW = GetModuleHandleW(0);
        Resource = FindResourceExW(ModuleHandleW, (LPCWSTR)6, v11, 0);
        if ( Resource
          || (ThreadLocale = GetThreadLocale(),
              v15 = GetModuleHandleW(0),
              (Resource = FindResourceExW(v15, (LPCWSTR)6, v11, ThreadLocale)) != 0) )
        {
          v16 = GetModuleHandleW(0);
          v17 = LoadResource(v16, Resource);
          if ( v17 )
          {
            v18 = (unsigned __int16 *)LockResource(v17);
            if ( v18 )
            {
              v19 = v10 & 0xF;
              if ( v19 )
              {
                v20 = v19;
                do
                {
                  --v20;
                  v18 += (unsigned int)*v18 + 1;
                }
                while ( v20 );
              }
              v8 = *v18;
              v2 = v18 + 1;
            }
          }
        }
      }
    }
  }
  v21 = operator new(saturated_mul((unsigned int)(v8 + 1), 2u));
  v22 = v21;
  if ( !v21 )
    return 0;
  memcpy(v21, v2, 2 * v8);
  v22[v8] = 0;
  v24 = -1;
  v25 = v22;
  Buffer = 0;
  do
  {
    if ( !v24 )
      break;
    v7 = *v25++ == 0;
    --v24;
  }
  while ( !v7 );
  if ( ~v24 == 1 )
  {
    operator delete(v22);
    v26 = -1;
    v27 = Src;
    do
    {
      if ( !v26 )
        break;
      v7 = *v27++ == 0;
      --v26;
    }
    while ( !v7 );
    v28 = (unsigned int)~(_DWORD)v26;
    v29 = (unsigned int)v28;
    Buffer = (wchar_t *)LocalAlloc(0, 2 * v28);
    wcscpy_s(Buffer, v29, Src);
  }
  else
  {
    FormatMessageW(0x500u, v22, 0, 0, (LPWSTR)&Buffer, 1u, Arguments);
    operator delete(v22);
  }
  return Buffer;
}
