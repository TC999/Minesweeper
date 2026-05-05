void __fastcall D3DXTex::CCodec_A32B32G32R32F::Encode(
        D3DXTex::CCodec_A32B32G32R32F *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  if ( *((_DWORD *)this + 5) )
    a4 = D3DXTex::CCodec::EncodeGamma22(this, a4);
  memcpy(
    (void *)(*((_QWORD *)this + 5)
           + (unsigned int)(a3 * *((_DWORD *)this + 33))
           + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32))),
    a4,
    16LL * *((unsigned int *)this + 34));
}
