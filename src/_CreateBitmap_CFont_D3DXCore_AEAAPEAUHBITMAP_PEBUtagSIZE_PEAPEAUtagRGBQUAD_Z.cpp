HBITMAP __fastcall D3DXCore::CFont::CreateBitmap(HDC *this, const struct tagSIZE *a2, struct tagRGBQUAD **a3)
{
  size_t v6; // rsi
  HBITMAP result; // rax
  BITMAPINFO *v8; // rdi
  LONG cy; // eax
  HBITMAP DIBSection; // rbx

  v6 = (unsigned int)(4 * a2->cy * a2->cx + 40);
  result = (HBITMAP)operator new(v6, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v8 = (BITMAPINFO *)result;
  if ( result )
  {
    memset(result, 0, v6);
    v8->bmiHeader.biSize = 40;
    v8->bmiHeader.biWidth = a2->cx;
    cy = a2->cy;
    v8->bmiHeader.biCompression = 0;
    v8->bmiHeader.biHeight = -cy;
    v8->bmiHeader.biPlanes = 1;
    v8->bmiHeader.biBitCount = 32;
    DIBSection = CreateDIBSection(this[5], v8, 0, (void **)a3, 0, 0);
    operator delete(v8);
    return DIBSection;
  }
  return result;
}
