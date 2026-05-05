void __fastcall D3DXTex::CCodec_D3DX_A16L16::Decode(
        D3DXTex::CCodec_D3DX_A16L16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  float *v4; // r10
  unsigned __int16 *v5; // rdx
  unsigned __int16 *i; // r8
  int v7; // eax
  float v8; // xmm0_4

  v4 = (float *)a4;
  v5 = (unsigned __int16 *)(*((_QWORD *)this + 5)
                          + (unsigned int)(a3 * *((_DWORD *)this + 33))
                          + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[2 * *((unsigned int *)this + 34)]; v5 < i; *(v4 - 1) = (float)*(v5 - 1) * 0.000015259022 )
  {
    v7 = *v5;
    v5 += 2;
    v8 = (float)v7 * 0.000015259022;
    v4[2] = v8;
    v4[1] = v8;
    *v4 = v8;
    v4 += 4;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
