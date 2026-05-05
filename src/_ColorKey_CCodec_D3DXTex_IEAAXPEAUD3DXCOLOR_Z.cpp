void __fastcall D3DXTex::CCodec::ColorKey(D3DXTex::CCodec *this, struct D3DXCOLOR *a2)
{
  struct D3DXCOLOR *v2; // r8
  float *v3; // rdx

  v2 = (struct D3DXCOLOR *)((char *)a2 + 16 * *((unsigned int *)this + 34));
  if ( a2 < v2 )
  {
    v3 = (float *)((char *)a2 + 8);
    do
    {
      if ( *(v3 - 2) == *((float *)this + 12)
        && *(v3 - 1) == *((float *)this + 13)
        && *v3 == *((float *)this + 14)
        && v3[1] == *((float *)this + 15) )
      {
        v3[1] = 0.0;
        *v3 = 0.0;
        *(v3 - 1) = 0.0;
        *(v3 - 2) = 0.0;
      }
      v3 += 4;
    }
    while ( v3 - 2 < (float *)v2 );
  }
}
