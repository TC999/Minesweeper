void __fastcall D3DXTex::CCodec_R5G6B5::Decode(D3DXTex::CCodec_R5G6B5 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r10
  __int16 *v5; // rdx
  __int16 *i; // r8
  __int16 v7; // ax

  v4 = (float *)a4;
  v5 = (__int16 *)(*((_QWORD *)this + 5)
                 + (unsigned int)(a3 * *((_DWORD *)this + 33))
                 + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[*((unsigned int *)this + 34)]; v5 < i; *(v4 - 2) = (float)(v7 & 0x1F) * 0.032258064 )
  {
    *v4 = (float)((unsigned __int16)*v5 >> 11) * 0.032258064;
    v4 += 4;
    *(v4 - 3) = (float)(((unsigned __int16)*v5 >> 5) & 0x3F) * 0.015873017;
    v7 = *v5++;
    *(v4 - 1) = 1.0;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
