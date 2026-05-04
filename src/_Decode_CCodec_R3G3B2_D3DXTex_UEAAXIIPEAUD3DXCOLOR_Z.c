void __fastcall D3DXTex::CCodec_R3G3B2::Decode(D3DXTex::CCodec_R3G3B2 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r10
  char *v5; // rdx
  char *i; // r8
  char v7; // al

  v4 = (float *)a4;
  v5 = (char *)(*((_QWORD *)this + 5)
              + (unsigned int)(a3 * *((_DWORD *)this + 33))
              + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[*((unsigned int *)this + 34)]; v5 < i; *(v4 - 2) = (float)(v7 & 3) * 0.33333334 )
  {
    *v4 = (float)((unsigned __int8)*v5 >> 5) * 0.14285715;
    v4 += 4;
    *(v4 - 3) = (float)(((unsigned __int8)*v5 >> 2) & 7) * 0.14285715;
    v7 = *v5++;
    *(v4 - 1) = 1.0;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
