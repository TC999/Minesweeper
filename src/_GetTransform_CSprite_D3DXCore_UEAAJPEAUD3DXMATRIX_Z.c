__int64 __fastcall D3DXCore::CSprite::GetTransform(const void **this, struct D3DXMATRIX *a2)
{
  if ( !a2 )
    return 2289436780LL;
  memcpy(a2, this[20], 0x40u);
  return 0;
}
