void __fastcall D3DXTex::CCodec_G32R32F::Decode(D3DXTex::CCodec_G32R32F *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // r10
  int *v5; // rdx
  int *i; // r8
  int v7; // eax
  int v8; // eax

  v4 = a4;
  v5 = (int *)(*((_QWORD *)this + 5)
             + (unsigned int)(a3 * *((_DWORD *)this + 33))
             + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v5[2 * *((_DWORD *)this + 34)]; v5 < i; v4 = (struct D3DXCOLOR *)((char *)v4 + 16) )
  {
    v7 = *v5;
    v5 += 2;
    *(_DWORD *)v4 = v7;
    v8 = *(v5 - 1);
    *((_DWORD *)v4 + 3) = 1065353216;
    *((_DWORD *)v4 + 2) = 1065353216;
    *((_DWORD *)v4 + 1) = v8;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)this + 5) )
    D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)v4 - 16 * *((unsigned int *)this + 34)));
}
