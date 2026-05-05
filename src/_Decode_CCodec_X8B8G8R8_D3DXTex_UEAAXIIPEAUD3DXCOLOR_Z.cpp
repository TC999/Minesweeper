void __fastcall D3DXTex::CCodec_X8B8G8R8::Decode(D3DXTex::CCodec_X8B8G8R8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  float *v4; // r10
  unsigned __int8 *v5; // rdx
  unsigned __int8 *i; // r8
  int v7; // eax
  int v8; // eax

  v4 = (float *)a4;
  v5 = (unsigned __int8 *)(*((_QWORD *)this + 5)
                         + (unsigned int)(a3 * *((_DWORD *)this + 33))
                         + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[4 * *((unsigned int *)this + 34)]; v5 < i; *(v4 - 2) = (float)v8 * 0.0039215689 )
  {
    v7 = *v5;
    v5 += 4;
    *v4 = (float)v7 * 0.0039215689;
    v4 += 4;
    *(v4 - 3) = (float)*(v5 - 3) * 0.0039215689;
    v8 = *(v5 - 2);
    *(v4 - 1) = 1.0;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)this + 34)]);
}
