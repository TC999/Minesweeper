void __fastcall D3DXTex::CCodec_G32R32F::Encode(D3DXTex::CCodec_G32R32F *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  unsigned int v4; // ebx
  _DWORD *v8; // rdx
  int v9; // eax

  v4 = 0;
  if ( *((_DWORD *)this + 5) )
    a4 = D3DXTex::CCodec::EncodeGamma22(this, a4);
  v8 = (_DWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  if ( *((_DWORD *)this + 34) )
  {
    do
    {
      v9 = *(_DWORD *)a4;
      ++v4;
      a4 = (struct D3DXCOLOR *)((char *)a4 + 16);
      *v8 = v9;
      v8 += 2;
      *(v8 - 1) = *((_DWORD *)a4 - 3);
    }
    while ( v4 < *((_DWORD *)this + 34) );
  }
}
