void __fastcall D3DXTex::CCodec_R16F::Decode(D3DXTex::CCodec_R16F *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  const struct D3DXFLOAT16 *v6; // rsi
  const struct D3DXFLOAT16 *v7; // rbp

  v6 = (const struct D3DXFLOAT16 *)(*((_QWORD *)this + 5)
                                  + (unsigned int)(a3 * *((_DWORD *)this + 33))
                                  + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  v7 = (const struct D3DXFLOAT16 *)((char *)v6 + 2 * *((unsigned int *)this + 34));
  while ( v6 < v7 )
  {
    off_1000A6848((float *)a4, v6, 1u);
    *((_DWORD *)a4 + 3) = 1065353216;
    *((_DWORD *)a4 + 2) = 1065353216;
    *((_DWORD *)a4 + 1) = 1065353216;
    v6 = (const struct D3DXFLOAT16 *)((char *)v6 + 2);
    a4 = (struct D3DXCOLOR *)((char *)a4 + 16);
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)this + 34)));
}
