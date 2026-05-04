void __fastcall D3DXTex::CCodec_L6V5U5::Decode(D3DXTex::CCodec_L6V5U5 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r11
  D3DXTex::CCodec_L6V5U5 *v5; // r10
  unsigned __int16 *v6; // r9
  unsigned __int16 *i; // r8
  unsigned __int16 v8; // dx
  char v9; // cl
  unsigned __int16 v10; // ax

  v4 = a4;
  v5 = this;
  v6 = (unsigned __int16 *)(*((_QWORD *)this + 5)
                          + (unsigned int)(a3 * *((_DWORD *)this + 33))
                          + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[*((unsigned int *)this + 34)]; v6 < i; *((float *)v4 - 1) = (float)(v10 >> 10) * 0.015873017 )
  {
    v8 = *v6;
    v9 = *(_BYTE *)v6;
    *((_DWORD *)v4 + 2) = 1065353216;
    *(float *)v4 = (float)(char)(((char)(8 * v9) >> 3) + ((char)(8 * v9) >> 3 == 0xF0)) * 0.06666667;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
    *((float *)v4 - 3) = (float)(char)(((char)(8 * (v8 >> 5)) >> 3) + ((char)(8 * (v8 >> 5)) >> 3 == 0xF0)) * 0.06666667;
    v10 = *v6++;
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
}
