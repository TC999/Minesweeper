__int64 __fastcall D3DXCore::CSprite::SetWorldViewLH(
        D3DXCore::CSprite *this,
        const struct D3DXMATRIX *a2,
        const struct D3DXMATRIX *a3)
{
  _DWORD *v5; // rax
  struct D3DXMATRIX *v6; // rcx
  _DWORD *v7; // rdx

  if ( *((_DWORD *)this + 56) )
    return 2289436780LL;
  if ( a2 )
  {
    v6 = (struct D3DXMATRIX *)*((_QWORD *)this + 22);
    if ( a3 )
    {
      off_1000A6688(v6, a2, a3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( a3 )
  {
    v6 = (struct D3DXMATRIX *)*((_QWORD *)this + 22);
    a2 = a3;
LABEL_8:
    memcpy(v6, a2, 0x40u);
    goto LABEL_10;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 22);
  v5[14] = 0;
  v5[13] = 0;
  v5[12] = 0;
  v5[11] = 0;
  v5[9] = 0;
  v5[8] = 0;
  v5[7] = 0;
  v5[6] = 0;
  v5[4] = 0;
  v5[3] = 0;
  v5[2] = 0;
  v5[1] = 0;
  v5[15] = 1065353216;
  v5[10] = 1065353216;
  v5[5] = 1065353216;
  *v5 = 1065353216;
LABEL_10:
  v7 = (_DWORD *)*((_QWORD *)this + 22);
  *((_DWORD *)this + 50) = v7[2];
  *((_DWORD *)this + 51) = v7[6];
  *((_DWORD *)this + 52) = v7[10];
  off_1000A66A8((D3DXCore::CSprite *)((char *)this + 200), (D3DXCore::CSprite *)((char *)this + 200));
  *((_DWORD *)this + 38) = 0;
  return 0;
}
