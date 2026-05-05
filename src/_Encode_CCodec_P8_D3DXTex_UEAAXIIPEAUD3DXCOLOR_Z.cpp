void __fastcall D3DXTex::CCodec_P8::Encode(float **this, int a2, int a3, struct D3DXCOLOR *a4)
{
  unsigned int v7; // edx
  _BYTE *v8; // rcx
  float *v9; // r9
  float v10; // xmm3_4
  float *v11; // r8
  char v12; // r10
  unsigned int i; // eax

  if ( *((_DWORD *)this + 26) )
    a4 = D3DXTex::CCodec::Convert((D3DXTex::CCodec *)this, a4);
  if ( *((_DWORD *)this + 5) )
    a4 = D3DXTex::CCodec::EncodeGamma22((D3DXTex::CCodec *)this, a4);
  v7 = 0;
  v8 = (char *)this[5]
     + (unsigned int)(a3 * *((_DWORD *)this + 33))
     + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32));
  if ( *((_DWORD *)this + 34) )
  {
    v9 = (float *)((char *)a4 + 8);
    do
    {
      v10 = FLOAT_3_4028235e38;
      v11 = this[9];
      v12 = 0;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( v10 > (float)((float)((float)((float)((float)(*(v9 - 1) - v11[1]) * (float)(*(v9 - 1) - v11[1]))
                                         + (float)((float)(*(v9 - 2) - *v11) * (float)(*(v9 - 2) - *v11)))
                                 + (float)((float)(*v9 - v11[2]) * (float)(*v9 - v11[2])))
                         + (float)((float)(v9[1] - v11[3]) * (float)(v9[1] - v11[3]))) )
        {
          v12 = i;
          v10 = (float)((float)((float)((float)(*(v9 - 1) - v11[1]) * (float)(*(v9 - 1) - v11[1]))
                              + (float)((float)(*(v9 - 2) - *v11) * (float)(*(v9 - 2) - *v11)))
                      + (float)((float)(*v9 - v11[2]) * (float)(*v9 - v11[2])))
              + (float)((float)(v9[1] - v11[3]) * (float)(v9[1] - v11[3]));
        }
        v11 += 4;
      }
      *v8 = v12;
      ++v7;
      v9 += 4;
      ++v8;
    }
    while ( v7 < *((_DWORD *)this + 34) );
  }
}
