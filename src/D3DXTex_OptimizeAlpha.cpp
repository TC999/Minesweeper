unsigned __int64 __fastcall D3DXTex::OptimizeAlpha(_DWORD *a1, int *a2, float *a3, unsigned int a4)
{
  int v4; // xmm4_4
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v10; // rcx
  __int128 v11; // xmm3
  __int128 v12; // xmm5
  float *v13; // rax
  float v14; // xmm0_4
  unsigned __int64 result; // rax
  unsigned int v16; // r10d
  float v17; // xmm15_4
  __int64 v18; // r8
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float *v22; // rcx
  __int64 v23; // rdx
  float v24; // xmm11_4
  float v25; // xmm9_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  __int128 v30; // xmm0
  _DWORD v31[8]; // [rsp+0h] [rbp-C8h] BYREF

  v4 = 0;
  v5 = qword_100023620;
  v6 = qword_100023640;
  v10 = 16;
  if ( a4 == 6 )
    v5 = qword_1000235F0;
  v11 = 0x3F800000u;
  v12 = 0;
  if ( a4 == 6 )
    v6 = qword_100023608;
  v13 = a3;
  if ( a4 == 8 )
  {
    do
    {
      if ( *(float *)&v11 > *v13 )
        v11 = *(unsigned int *)v13;
      if ( *v13 > *(float *)&v12 )
        v12 = *(unsigned int *)v13;
      ++v13;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    do
    {
      v14 = *v13;
      if ( *(float *)&v11 > *v13 && v14 > 0.0 )
        v11 = *(unsigned int *)v13;
      if ( v14 > *(float *)&v12 && v14 < 1.0 )
        v12 = *(unsigned int *)v13;
      ++v13;
      --v10;
    }
    while ( v10 );
    if ( *(float *)&v11 == *(float *)&v12 )
      v12 = 0x3F800000u;
  }
  result = a4 - 1;
  v16 = 0;
  v17 = (float)(int)result;
  do
  {
    if ( (float)(*(float *)&v12 - *(float *)&v11) < 0.00390625 )
      break;
    if ( a4 )
    {
      result = (unsigned __int64)v5;
      v18 = a4;
      do
      {
        *(float *)((char *)v31 - (char *)v5 + result) = (float)(*(float *)&v12
                                                              * *(float *)((char *)v6 - (char *)v5 + result))
                                                      + (float)(*(float *)&v11 * *(float *)result);
        result += 4LL;
        --v18;
      }
      while ( v18 );
    }
    if ( a4 == 6 )
    {
      v31[6] = 0;
      v31[7] = 1065353216;
    }
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    v22 = a3;
    v23 = 16;
    v24 = 0.0;
    do
    {
      v25 = *v22;
      v26 = (float)(*v22 - *(float *)&v11) * (float)(v17 / (float)(*(float *)&v12 - *(float *)&v11));
      if ( v26 > 0.0 )
      {
        if ( v26 < v17 )
        {
          result = (unsigned int)(int)(float)(v26 + 0.5);
        }
        else
        {
          if ( a4 == 6 && v25 >= (float)((float)(*(float *)&v12 + 1.0) * 0.5) )
            goto LABEL_40;
          result = a4 - 1;
        }
      }
      else
      {
        if ( a4 == 6 && (float)(*(float *)&v11 * 0.5) >= v25 )
          goto LABEL_40;
        result = 0;
      }
      if ( (unsigned int)result < a4 )
      {
        result = (unsigned int)result;
        v27 = v25 - *(float *)&v31[(unsigned int)result];
        v28 = *((float *)v5 + (unsigned int)result);
        v19 = v19 + (float)(v28 * v27);
        v21 = v21 + (float)(v28 * v28);
        v29 = *((float *)v6 + (unsigned int)result);
        v20 = v20 + (float)(v29 * v27);
        v24 = v24 + (float)(v29 * v29);
      }
LABEL_40:
      ++v22;
      --v23;
    }
    while ( v23 );
    if ( v21 > 0.0 )
      *(float *)&v11 = *(float *)&v11 + (float)(0.0 - (float)(v19 / v21));
    if ( v24 > 0.0 )
      *(float *)&v12 = *(float *)&v12 + (float)(0.0 - (float)(v20 / v24));
    if ( *(float *)&v11 > *(float *)&v12 )
    {
      v30 = v11;
      v11 = v12;
      v12 = v30;
    }
    if ( (float)(v19 * v19) < 0.015625 && (float)(v20 * v20) < 0.015625 )
      break;
    ++v16;
  }
  while ( v16 < 8 );
  if ( *(float *)&v11 >= 0.0 )
  {
    if ( *(float *)&v11 > 1.0 )
      LODWORD(v11) = 1065353216;
  }
  else
  {
    LODWORD(v11) = 0;
  }
  *a1 = v11;
  if ( *(float *)&v12 >= 0.0 )
  {
    if ( *(float *)&v12 <= 1.0 )
      v4 = v12;
    else
      v4 = 1065353216;
  }
  *a2 = v4;
  return result;
}
