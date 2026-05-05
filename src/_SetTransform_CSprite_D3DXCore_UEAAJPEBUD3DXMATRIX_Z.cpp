__int64 __fastcall D3DXCore::CSprite::SetTransform(D3DXCore::CSprite *this, const struct D3DXMATRIX *a2)
{
  struct D3DXVECTOR3 *v4; // r8
  float *v5; // r11
  BOOL v6; // eax

  if ( !a2 )
    return 2289436780LL;
  if ( *((_DWORD *)this + 56) )
  {
    if ( !*((_DWORD *)this + 37) && (*((_BYTE *)this + 228) & 8) == 0 )
    {
      v4 = (struct D3DXVECTOR3 *)(*((_QWORD *)this + 32) + 24LL * (unsigned int)(4 * *((_DWORD *)this + 68)));
      off_1000A6870(
        v4,
        0x18u,
        v4,
        0x18u,
        *((const struct D3DXMATRIX **)this + 20),
        4 * (*((_DWORD *)this + 66) - *((_DWORD *)this + 68)));
    }
    *((_DWORD *)this + 68) = *((_DWORD *)this + 66);
  }
  memcpy(*((void **)this + 20), a2, 0x40u);
  v5 = (float *)*((_QWORD *)this + 20);
  v6 = *v5 == 1.0
    && v5[1] == 0.0
    && v5[2] == 0.0
    && v5[3] == 0.0
    && v5[4] == 0.0
    && v5[5] == 1.0
    && v5[6] == 0.0
    && v5[7] == 0.0
    && v5[8] == 0.0
    && v5[9] == 0.0
    && v5[10] == 1.0
    && v5[11] == 0.0
    && v5[12] == 0.0
    && v5[13] == 0.0
    && v5[14] == 0.0
    && v5[15] == 1.0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 37) = v6;
  return 0;
}
