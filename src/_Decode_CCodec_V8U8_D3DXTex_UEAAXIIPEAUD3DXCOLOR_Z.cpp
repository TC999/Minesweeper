void __fastcall D3DXTex::CCodec_V8U8::Decode(D3DXTex::CCodec_V8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r11
  D3DXTex::CCodec_V8U8 *v5; // r10
  _BYTE *v6; // rdx
  _BYTE *i; // r8
  char v8; // cl
  char v9; // al

  v4 = a4;
  v5 = this;
  v6 = (_BYTE *)(*((_QWORD *)this + 5)
               + (unsigned int)(a3 * *((_DWORD *)this + 33))
               + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[2 * *((unsigned int *)this + 34)];
        v6 < i;
        *((float *)v4 - 3) = (float)(char)(v8 + (v8 == (char)0x80)) * 0.0078740157 )
  {
    v8 = v6[1];
    v9 = *v6 + (*v6 == 0x80);
    *((_DWORD *)v4 + 2) = 1065353216;
    *((_DWORD *)v4 + 3) = 1065353216;
    v6 += 2;
    *(float *)v4 = (float)v9 * 0.0078740157;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
}
