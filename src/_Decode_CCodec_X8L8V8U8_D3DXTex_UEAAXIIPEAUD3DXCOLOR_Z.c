void __fastcall D3DXTex::CCodec_X8L8V8U8::Decode(D3DXTex::CCodec_X8L8V8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r11
  D3DXTex::CCodec_X8L8V8U8 *v5; // r10
  _DWORD *v6; // rdx
  _DWORD *i; // r8
  int v8; // ecx
  char v9; // al
  bool v10; // zf

  v4 = a4;
  v5 = this;
  v6 = (_DWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[*((unsigned int *)this + 34)];
        v6 < i;
        *((float *)v4 - 1) = (float)*((unsigned __int8 *)v6 - 2) * 0.0039215689 )
  {
    v8 = *v6 >> 8;
    v9 = *(_BYTE *)v6 + (*(_BYTE *)v6 == 0x80);
    v10 = BYTE1(*v6) == 0x80;
    *((_DWORD *)v4 + 2) = 1065353216;
    ++v6;
    *(float *)v4 = (float)v9 * 0.0078740157;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
    *((float *)v4 - 3) = (float)(char)(v8 + v10) * 0.0078740157;
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)v5 + 34)));
}
