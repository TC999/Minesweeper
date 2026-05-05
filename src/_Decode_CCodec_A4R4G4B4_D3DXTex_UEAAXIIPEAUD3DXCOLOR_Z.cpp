void __fastcall D3DXTex::CCodec_A4R4G4B4::Decode(D3DXTex::CCodec_A4R4G4B4 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 i; // r8
  unsigned __int16 v7; // ax

  v4 = (float *)a4;
  v5 = *((_QWORD *)this + 5)
     + (unsigned int)(a3 * *((_DWORD *)this + 33))
     + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32));
  for ( i = v5 + 2LL * *((unsigned int *)this + 34); v5 < i; *(v4 - 1) = (float)(v7 >> 12) * 0.06666667 )
  {
    *v4 = (float)(*(_BYTE *)(v5 + 1) & 0xF) * 0.06666667;
    v4 += 4;
    *(v4 - 3) = (float)((*(_WORD *)v5 >> 4) & 0xF) * 0.06666667;
    *(v4 - 2) = (float)(*(_WORD *)v5 & 0xF) * 0.06666667;
    v7 = *(_WORD *)v5;
    v5 += 2LL;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
