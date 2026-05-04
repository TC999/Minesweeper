__int64 __fastcall D3DXCreateFontW(
        struct IDirect3DDevice9 *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        D3DXCore::CFont **a12)
{
  __int64 v15; // rdx
  _WORD *v16; // rcx
  __int16 v17; // ax
  int v18; // edi
  D3DXCore::CFont *v19; // rax
  D3DXCore::CFont *v20; // rbx
  _DWORD v22[24]; // [rsp+20h] [rbp-98h] BYREF

  memset(v22, 0, 0x58u);
  v22[0] = a2;
  v22[1] = 0;
  v22[2] = a4;
  v22[3] = 1;
  v22[4] = a6;
  v22[5] = 327681;
  if ( a11 )
  {
    v15 = 32;
    v16 = &v22[6];
    do
    {
      if ( v15 == -2147483614 )
        break;
      v17 = *(_WORD *)((char *)v16 + a11 - (_QWORD)&v22[6]);
      if ( !v17 )
        break;
      *v16++ = v17;
      --v15;
    }
    while ( v15 );
    if ( !v15 )
      --v16;
    *v16 = 0;
  }
  if ( a12 )
  {
    v19 = (D3DXCore::CFont *)operator new(0xA60u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( v19 )
      v20 = (D3DXCore::CFont *)D3DXCore::CFont::CFont(v19);
    else
      v20 = 0;
    if ( v20 )
    {
      v18 = D3DXCore::CFont::Initialize(v20, a1, v22, 1);
      if ( v18 >= 0 )
      {
        *a12 = v20;
        return 0;
      }
      else
      {
        D3DXCore::CFont::~CFont(v20);
        operator delete(v20);
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2005530516;
  }
  return (unsigned int)v18;
}
