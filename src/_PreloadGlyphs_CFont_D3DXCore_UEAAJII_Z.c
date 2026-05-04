__int64 __fastcall D3DXCore::CFont::PreloadGlyphs(D3DXCore::CFont *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // ebx
  size_t v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbp
  unsigned int v11; // edi
  unsigned __int16 *v12; // rsi
  int v13; // ebx
  _GLYPHMETRICS gm; // [rsp+40h] [rbp-38h] BYREF

  v3 = a3;
  if ( a3 > 0xFFFF )
    v3 = 0xFFFF;
  if ( a2 > v3 )
    return 0;
  v7 = v3 - a2 + 1;
  v8 = 2LL * v7;
  if ( !is_mul_ok(v7, 2u) )
    v8 = -1;
  v9 = (unsigned __int16 *)operator new(v8, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v10 = v9;
  if ( !v9 )
    return 2147942414LL;
  v11 = 0;
  if ( v7 )
  {
    v12 = v9;
    do
    {
      if ( GetGlyphOutlineA(*((HDC *)this + 5), v11 + a2, 0x80u, &gm, 0, 0, &mat2) == -1 )
        *v12 = *((_WORD *)this + 87);
      ++v11;
      ++v12;
    }
    while ( v11 < v7 );
  }
  v13 = D3DXCore::CFont::Preload(this, v10, v7, 0);
  if ( v13 >= 0 )
    v13 = 0;
  operator delete(v10);
  return (unsigned int)v13;
}
