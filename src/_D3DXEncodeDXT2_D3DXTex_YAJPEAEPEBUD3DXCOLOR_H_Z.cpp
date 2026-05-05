__int64 __fastcall D3DXTex::D3DXEncodeDXT2(D3DXTex *this, unsigned __int8 *a2, const struct D3DXCOLOR *a3)
{
  float *v3; // r9
  float *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // eax
  unsigned int v10; // ecx
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v13[256]; // [rsp+28h] [rbp-100h] BYREF

  v3 = (float *)(a2 + 12);
  v4 = (float *)v13;
  v5 = a2 - v13;
  v6 = 16;
  do
  {
    v7 = *v3;
    v3 += 4;
    v4[1] = v7;
    v8 = v7 * *(v3 - 6);
    *(v4 - 2) = v7 * *(float *)((char *)v4 + v5);
    *(v4 - 1) = v8;
    *v4 = v7 * *(v3 - 5);
    v4 += 4;
    --v6;
  }
  while ( v6 );
  v9 = D3DXTex::D3DXEncodeDXT3(this, v12, a3, (int)v3);
  v10 = 0;
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v10;
}
