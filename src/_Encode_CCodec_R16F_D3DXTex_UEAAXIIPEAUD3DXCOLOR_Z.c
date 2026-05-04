void __fastcall D3DXTex::CCodec_R16F::Encode(D3DXTex::CCodec_R16F *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  unsigned int v4; // ebx
  struct D3DXCOLOR *v5; // rbp
  struct D3DXFLOAT16 *v9; // rsi

  v4 = 0;
  v5 = a4;
  if ( *((_DWORD *)this + 5) )
    v5 = D3DXTex::CCodec::EncodeGamma22(this, a4);
  v9 = (struct D3DXFLOAT16 *)(*((_QWORD *)this + 5)
                            + (unsigned int)(a3 * *((_DWORD *)this + 33))
                            + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  if ( *((_DWORD *)this + 34) )
  {
    do
    {
      off_1000A6840(v9, (const float *)v5 + 4 * v4++, 1u);
      v9 = (struct D3DXFLOAT16 *)((char *)v9 + 2);
    }
    while ( v4 < *((_DWORD *)this + 34) );
  }
}
