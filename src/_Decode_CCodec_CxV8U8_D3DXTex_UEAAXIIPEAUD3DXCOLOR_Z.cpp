void __fastcall D3DXTex::CCodec_CxV8U8::Decode(D3DXTex::CCodec_CxV8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  _BYTE *v6; // rsi
  _BYTE *i; // rbp
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4

  v6 = (_BYTE *)(*((_QWORD *)this + 5)
               + (unsigned int)(a3 * *((_DWORD *)this + 33))
               + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[2 * *((unsigned int *)this + 34)]; v6 < i; a4 = (struct D3DXCOLOR *)((char *)a4 + 16) )
  {
    v8 = (float)(char)(*v6 + (*v6 == 0x80)) * 0.0078740157;
    v9 = (float)(char)(v6[1] + (v6[1] == 0x80));
    *(float *)a4 = v8;
    v10 = v9 * 0.0078740157;
    *((float *)a4 + 1) = v10;
    v11 = (float)(1.0 - (float)(v8 * v8)) - (float)(v10 * v10);
    if ( v11 > 0.0 )
      v12 = sqrtf(v11);
    else
      v12 = 0.0;
    v6 += 2;
    *((float *)a4 + 2) = v12;
    *((_DWORD *)a4 + 3) = 1065353216;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)this + 34)));
}
