void __fastcall D3DXTex::CCodec_V16U16::Decode(D3DXTex::CCodec_V16U16 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r11
  D3DXTex::CCodec_V16U16 *v5; // r10
  _WORD *v6; // rdx
  _WORD *i; // r8
  __int16 v8; // cx
  __int16 v9; // ax

  v4 = a4;
  v5 = this;
  v6 = (_WORD *)(*((_QWORD *)this + 5)
               + (unsigned int)(a3 * *((_DWORD *)this + 33))
               + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[2 * *((unsigned int *)this + 34)];
        v6 < i;
        *((float *)v4 - 3) = (float)(__int16)(v8 + (v8 == -32768)) * 0.000030518509 )
  {
    v8 = v6[1];
    v9 = *v6 + (*v6 == 0x8000);
    *((_DWORD *)v4 + 2) = 1065353216;
    *((_DWORD *)v4 + 3) = 1065353216;
    v6 += 2;
    *(float *)v4 = (float)v9 * 0.000030518509;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
}
