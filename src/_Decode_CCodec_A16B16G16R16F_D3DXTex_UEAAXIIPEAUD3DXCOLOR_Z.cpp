void __fastcall D3DXTex::CCodec_A16B16G16R16F::Decode(
        D3DXTex::CCodec_A16B16G16R16F *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  off_1000A6848(
    (float *)a4,
    (const struct D3DXFLOAT16 *)(*((_QWORD *)this + 5)
                               + (unsigned int)(a3 * *((_DWORD *)this + 33))
                               + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32))),
    4 * *((_DWORD *)this + 34));
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, a4);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, a4);
}
