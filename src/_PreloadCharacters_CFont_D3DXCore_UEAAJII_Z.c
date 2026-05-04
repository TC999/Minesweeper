__int64 __fastcall D3DXCore::CFont::PreloadCharacters(HDC *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v7; // ebx
  size_t v8; // rax
  WCHAR *v9; // r12
  size_t v10; // rax
  WCHAR *v11; // rax
  WCHAR *v12; // rsi
  unsigned int v13; // ecx
  WCHAR *v14; // rdx
  WCHAR v15; // ax
  WCHAR *v16; // rax
  int v17; // ebx
  unsigned int v18; // ecx
  WCHAR *v19; // rdx
  char v20; // al
  struct tagGCP_RESULTSW Results; // [rsp+30h] [rbp-48h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 < *((unsigned __int16 *)this + 70) )
    v3 = *((unsigned __int16 *)this + 70);
  if ( a3 > *((unsigned __int16 *)this + 71) )
    v4 = *((unsigned __int16 *)this + 71);
  if ( !D3DXCore::g_bUnicodeAPI && v4 > 0xFF )
    v4 = 255;
  if ( v3 > v4 )
    return 0;
  v7 = v4 - v3 + 1;
  v8 = 2LL * v7;
  if ( !is_mul_ok(v7, 2u) )
    v8 = -1;
  v9 = (WCHAR *)operator new(v8, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v9 )
    return 2147942414LL;
  memset(&Results, 0, sizeof(Results));
  Results.lStructSize = 64;
  Results.lpGlyphs = v9;
  Results.nGlyphs = v7;
  if ( D3DXCore::g_bUnicodeAPI )
  {
    v10 = 2LL * v7;
    if ( !is_mul_ok(v7, 2u) )
      v10 = -1;
    v11 = (WCHAR *)operator new(v10, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v12 = v11;
    if ( !v11 )
    {
      operator delete(v9);
      return 2147942414LL;
    }
    v13 = 0;
    if ( v7 )
    {
      v14 = v11;
      do
      {
        v15 = v13++ + v3;
        *v14++ = v15;
      }
      while ( v13 < v7 );
    }
    GetCharacterPlacementW(this[5], v12, v7, 0, &Results, 0);
    goto LABEL_29;
  }
  v16 = (WCHAR *)operator new(v7, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v12 = v16;
  if ( v16 )
  {
    v18 = 0;
    if ( v7 )
    {
      v19 = v16;
      do
      {
        v20 = v18++ + v3;
        *(_BYTE *)v19 = v20;
        v19 = (WCHAR *)((char *)v19 + 1);
      }
      while ( v18 < v7 );
    }
    GetCharacterPlacementA(this[5], (LPCSTR)v12, v7, 0, (LPGCP_RESULTSA)&Results, 0);
LABEL_29:
    operator delete(v12);
    v17 = D3DXCore::CFont::Preload((D3DXCore::CFont *)this, Results.lpGlyphs, Results.nGlyphs, 0);
    if ( v17 >= 0 )
      v17 = 0;
    goto LABEL_31;
  }
  v17 = -2147024882;
LABEL_31:
  operator delete(v9);
  return (unsigned int)v17;
}
