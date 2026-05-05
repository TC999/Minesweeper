__int64 __fastcall D3DXCore::CFont::DrawTextA(
        D3DXCore::CFont *this,
        struct ID3DXSprite *a2,
        const char *a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int a7)
{
  int v7; // eax
  unsigned int v8; // ecx
  int v10[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = D3DXCore::CFont::DrawTextAW(this, a2, a3, a4, a5, a6, a7, 0, v10);
  v8 = v10[0];
  if ( v7 < 0 )
    return 0;
  return v8;
}
