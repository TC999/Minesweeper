void __fastcall D3DXTex::CCodecYUV::Encode(D3DXTex::CCodecYUV *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  if ( (int)D3DXTex::CCodecYUV::Fetch(
              this,
              *((_DWORD *)this + 21) + a2,
              *((_DWORD *)this + 24) + a3,
              *((_DWORD *)this + 48) != *((_DWORD *)this + 34)) >= 0 )
  {
    memcpy(
      (void *)(*((_QWORD *)this + 20)
             + 16 * (*((unsigned int *)this + 20) - (unsigned __int64)*((unsigned int *)this + 42))),
      v4,
      16LL * *((unsigned int *)this + 34));
    *((_DWORD *)this + 49) = 1;
  }
}
