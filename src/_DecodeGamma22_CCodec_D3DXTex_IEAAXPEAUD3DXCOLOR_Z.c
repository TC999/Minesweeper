void __fastcall D3DXTex::CCodec::DecodeGamma22(D3DXTex::CCodec *this, struct D3DXCOLOR *a2)
{
  float *v2; // r9
  float *v3; // rax
  unsigned __int64 v4; // r9
  float *v5; // rdx
  float v6; // xmm1_4
  float v7; // xmm0_4
  float *v8; // r10
  unsigned __int64 v9; // r9
  float v10; // xmm2_4
  float *v11; // r10
  float v12; // xmm2_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm2_4

  v2 = (float *)((char *)a2 + 16 * *((unsigned int *)this + 34));
  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 3) == 1 || *((_DWORD *)this + 3) == 4 )
    {
      if ( a2 < (struct D3DXCOLOR *)v2 )
      {
        v5 = (float *)((char *)a2 + 8);
        do
        {
          v6 = *(v5 - 1) * *(v5 - 1);
          *(v5 - 2) = *(v5 - 2) * *(v5 - 2);
          v7 = *v5;
          *(v5 - 1) = v6;
          *v5 = v7 * v7;
          v5 += 4;
        }
        while ( v5 - 2 < v2 );
      }
    }
    else if ( a2 < (struct D3DXCOLOR *)v2 )
    {
      v3 = (float *)((char *)a2 + 12);
      v4 = ((16 * (unsigned __int64)*((unsigned int *)this + 34) - 1) >> 4) + 1;
      do
      {
        *v3 = *v3 * *v3;
        v3 += 4;
        --v4;
      }
      while ( v4 );
    }
  }
  else if ( *((_DWORD *)this + 3) == 1 || *((_DWORD *)this + 3) == 4 )
  {
    if ( a2 < (struct D3DXCOLOR *)v2 )
    {
      v11 = (float *)((char *)a2 + 8);
      do
      {
        v12 = (float)(*(v11 - 2) * *(v11 - 2)) * 254.0;
        v13 = (unsigned int)(int)v12;
        v14 = (float)(*(float *)&dword_100011810[(unsigned int)(v13 + 1)] - *(float *)&dword_100011810[v13])
            * (float)(v12 - (float)(int)v12);
        v15 = (float)(*(v11 - 1) * *(v11 - 1)) * 254.0;
        *(v11 - 2) = v14 + *(float *)&dword_100011810[v13];
        v16 = (unsigned int)(int)v15;
        v17 = (float)(*(float *)&dword_100011810[(unsigned int)(v16 + 1)] - *(float *)&dword_100011810[v16])
            * (float)(v15 - (float)(int)v15);
        v18 = (float)(*v11 * *v11) * 254.0;
        *(v11 - 1) = v17 + *(float *)&dword_100011810[v16];
        *v11 = (float)((float)(*(float *)&dword_100011810[(int)v18 + 1] - *(float *)&dword_100011810[v18])
                     * (float)(v18 - (float)(int)v18))
             + *(float *)&dword_100011810[v18];
        v11 += 4;
      }
      while ( v11 - 2 < v2 );
    }
  }
  else if ( a2 < (struct D3DXCOLOR *)v2 )
  {
    v8 = (float *)((char *)a2 + 12);
    v9 = ((16 * (unsigned __int64)*((unsigned int *)this + 34) - 1) >> 4) + 1;
    do
    {
      v10 = (float)(*v8 * *v8) * 254.0;
      *v8 = (float)((float)(*(float *)&dword_100011810[(int)v10 + 1] - *(float *)&dword_100011810[v10])
                  * (float)(v10 - (float)(int)v10))
          + *(float *)&dword_100011810[v10];
      v8 += 4;
      --v9;
    }
    while ( v9 );
  }
}
