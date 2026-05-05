void __fastcall D3DXTex::CCodec_A8P8::Decode(D3DXTex::CCodec_A8P8 *this, int a2, int a3, __m128i *a4)
{
  __m128i *v4; // r11
  D3DXTex::CCodec_A8P8 *v5; // r10
  __int16 *v6; // rdx
  __int16 *v7; // r8
  __int16 v8; // ax

  v4 = a4;
  v5 = this;
  v6 = (__int16 *)(*((_QWORD *)this + 5)
                 + (unsigned int)(a3 * *((_DWORD *)this + 33))
                 + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  v7 = &v6[*((unsigned int *)this + 34)];
  while ( v6 < v7 )
  {
    v8 = *v6++;
    *v4++ = _mm_loadu_si128((const __m128i *)(*((_QWORD *)this + 9) + 16LL * (unsigned __int8)v8));
    *(float *)&v4[-1].m128i_i32[3] = (float)*((unsigned __int8 *)v6 - 1) * 0.0039215689;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-*((unsigned int *)this + 34)]);
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)&v4[-*((unsigned int *)v5 + 34)]);
}
