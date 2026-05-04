void __fastcall D3DXTex::CCodec_G16R16::Decode(D3DXTex::CCodec_G16R16 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r10
  unsigned __int16 *v5; // rdx
  unsigned __int16 *i; // r8
  int v7; // eax
  int v8; // eax

  v4 = a4;
  v5 = (unsigned __int16 *)(*((_QWORD *)this + 5)
                          + (unsigned int)(a3 * *((_DWORD *)this + 33))
                          + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[2 * *((unsigned int *)this + 34)]; v5 < i; *((float *)v4 - 3) = (float)v8 * 0.000015259022 )
  {
    v7 = *v5;
    v5 += 2;
    *(float *)v4 = (float)v7 * 0.000015259022;
    v8 = *(v5 - 1);
    *((_DWORD *)v4 + 2) = 1065353216;
    *((_DWORD *)v4 + 3) = 1065353216;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
}
