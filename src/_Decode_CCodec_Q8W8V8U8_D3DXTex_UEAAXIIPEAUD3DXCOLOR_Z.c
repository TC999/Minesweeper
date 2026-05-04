void __fastcall D3DXTex::CCodec_Q8W8V8U8::Decode(D3DXTex::CCodec_Q8W8V8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r11
  D3DXTex::CCodec_Q8W8V8U8 *v5; // r10
  _DWORD *v6; // r9
  _DWORD *i; // rbx
  int v8; // r8d
  int v9; // edx
  bool v10; // zf
  int v11; // eax

  v4 = (float *)a4;
  v5 = this;
  v6 = (_DWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[*((unsigned int *)this + 34)]; v6 < i; *(v4 - 1) = (float)(char)(v8 + ((_BYTE)v8 == 0x80))
                                                                 * 0.0078740157 )
  {
    v8 = HIBYTE(*v6);
    v9 = HIWORD(*v6);
    v10 = (unsigned __int8)BYTE2(*v6) == 0x80;
    v11 = (char)(BYTE1(*v6) + (BYTE1(*v6) == 0x80));
    *v4 = (float)(char)(*(_BYTE *)v6 + (*(_BYTE *)v6 == 0x80)) * 0.0078740157;
    v4[1] = (float)v11 * 0.0078740157;
    ++v6;
    v4 += 4;
    *(v4 - 2) = (float)(char)(v9 + v10) * 0.0078740157;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)v5 + 34)]);
}
