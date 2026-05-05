void __fastcall D3DXTex::CCodec_P8::Decode(D3DXTex::CCodec_P8 *this, int a2, int a3, __m128i *a4)
{
  __m128i *v4; // r11
  D3DXTex::CCodec_P8 *v5; // r10
  unsigned __int8 *v6; // rdx
  unsigned __int8 *v7; // r8
  __int64 v8; // rcx

  v4 = a4;
  v5 = this;
  v6 = (unsigned __int8 *)(*((_QWORD *)this + 5)
                         + (unsigned int)(a3 * *((_DWORD *)this + 33))
                         + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  v7 = &v6[*((unsigned int *)this + 34)];
  while ( v6 < v7 )
  {
    v8 = *v6++;
    *v4++ = _mm_loadu_si128((const __m128i *)(*((_QWORD *)v5 + 9) + 16 * v8));
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)&v4[-*((unsigned int *)v5 + 34)]);
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)&v4[-*((unsigned int *)v5 + 34)]);
}
