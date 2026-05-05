void __fastcall D3DXTex::CCodecYUV::Decode(D3DXTex::CCodecYUV *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  if ( (int)D3DXTex::CCodecYUV::Fetch(this, *((_DWORD *)this + 21) + a2, *((_DWORD *)this + 24) + a3, 1) >= 0 )
  {
    memcpy(
      a4,
      (const void *)(*((_QWORD *)this + 20)
                   + 16 * (*((unsigned int *)this + 20) - (unsigned __int64)*((unsigned int *)this + 42))),
      16LL * *((unsigned int *)this + 34));
    if ( *((_DWORD *)this + 7) )
      D3DXTex::CCodec::ColorKey(this, a4);
    if ( *((_DWORD *)this + 5) )
      D3DXTex::CCodec::DecodeGamma22(this, a4);
  }
}
