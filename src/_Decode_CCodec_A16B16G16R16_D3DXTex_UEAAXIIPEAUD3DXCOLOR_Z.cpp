void __fastcall D3DXTex::CCodec_A16B16G16R16::Decode(
        D3DXTex::CCodec_A16B16G16R16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  float *v4; // r10
  _DWORD *v5; // rdx
  _DWORD *i; // r8
  __int64 v7; // rax

  v4 = (float *)a4;
  v5 = (_DWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[2 * *((unsigned int *)this + 34)]; v5 < i; *(v4 - 1) = (float)*((unsigned __int16 *)v5 - 1)
                                                                     * 0.000015259022 )
  {
    *v4 = (float)*(unsigned __int16 *)v5 * 0.000015259022;
    v4 += 4;
    *(v4 - 3) = (float)(unsigned __int16)HIWORD(*v5) * 0.000015259022;
    v7 = HIDWORD(*(_QWORD *)v5);
    v5 += 2;
    *(v4 - 2) = (float)(unsigned __int16)v7 * 0.000015259022;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
