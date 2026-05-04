void __fastcall D3DXTex::CCodec_A4L4::Decode(D3DXTex::CCodec_A4L4 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r10
  unsigned __int8 *v5; // rdx
  unsigned __int8 *i; // r8
  float v7; // xmm0_4
  unsigned __int8 v8; // al

  v4 = (float *)a4;
  v5 = (unsigned __int8 *)(*((_QWORD *)this + 5)
                         + (unsigned int)(a3 * *((_DWORD *)this + 33))
                         + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[*((unsigned int *)this + 34)]; v5 < i; *(v4 - 1) = (float)(v8 >> 4) * 0.06666667 )
  {
    v7 = (float)(*v5 & 0xF) * 0.06666667;
    v4[2] = v7;
    v4[1] = v7;
    *v4 = v7;
    v8 = *v5++;
    v4 += 4;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
