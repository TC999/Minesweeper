void __fastcall D3DXTex::CCodec_A8::Decode(D3DXTex::CCodec_A8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r10
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v6; // r8
  int v7; // r11d
  int v8; // eax

  v4 = a4;
  v5 = (unsigned __int8 *)(*((_QWORD *)this + 5)
                         + (unsigned int)(a3 * *((_DWORD *)this + 33))
                         + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  v6 = &v5[*((unsigned int *)this + 34)];
  v7 = 0;
  while ( v5 < v6 )
  {
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
    v8 = *v5++;
    v4 = (struct D3DXCOLOR *)((char *)v4 + 16);
    *((float *)v4 - 1) = (float)v8 * 0.0039215689;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)this + 5) != v7 )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
}
