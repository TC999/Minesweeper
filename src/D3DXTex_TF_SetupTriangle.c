_DWORD *__fastcall D3DXTex::TF_SetupTriangle(int a1, int a2, int a3)
{
  float v5; // xmm14_4
  unsigned int v6; // edx
  unsigned int v7; // ecx
  float i; // xmm6_4
  int v9; // eax
  _DWORD *v10; // rbx
  int v11; // edi
  int v12; // r15d
  int v13; // r14d
  __int64 v14; // rbp
  float v15; // xmm10_4
  int v16; // esi
  int v17; // r13d
  float v18; // xmm0_4
  float v19; // xmm11_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  int v22; // edx
  float v23; // xmm3_4
  int v24; // r8d
  float v25; // xmm2_4
  int v26; // ecx
  float *v27; // rax
  float v28; // xmm0_4
  float v29; // xmm1_4
  float *v30; // rax
  int v32; // [rsp+24h] [rbp-D4h]
  _DWORD *v33; // [rsp+28h] [rbp-D0h]
  float v36; // [rsp+118h] [rbp+20h]

  if ( a1 && a2 )
  {
    v5 = FLOAT_0_5;
    v6 = 16;
    v7 = 0;
    v36 = (float)a1;
    for ( i = (float)a2 / (float)a1;
          v7 < a1;
          v6 += 16
              * (int)(float)((float)((float)((float)((float)((float)((float)v9 - 0.5) * i) + i)
                                           - (float)((float)((float)v9 - 0.5) * i))
                                   + (float)(a3 != 0))
                           + 1.0)
              + 12 )
    {
      v9 = v7++;
    }
    v10 = operator new(v6, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( v10 )
    {
      v11 = 4;
      v12 = 0;
      v13 = 0;
      v14 = 1;
      v15 = 0.0;
      if ( !a1 )
        goto LABEL_42;
      while ( 1 )
      {
        v16 = a3;
        v33 = &v10[v14];
        v32 = v11;
        v11 += 4;
        ++v14;
        v17 = 0;
        v18 = (float)v13;
        do
        {
          v19 = (float)((float)v17 + v18) - v5;
          v20 = v19 * i;
          v21 = (float)(v19 * i) + i;
          if ( !v16 )
          {
            if ( v20 < 0.0 )
              v20 = 0.0;
            if ( v21 > (float)a2 )
              v21 = (float)a2;
          }
          v22 = (int)floorf(v20);
          v23 = (float)v22;
          if ( v21 > (float)v22 )
          {
            v24 = v22 - a2;
            while ( 1 )
            {
              v25 = v23 + 1.0;
              if ( v22 >= 0 )
              {
                v26 = v22;
                if ( v22 >= a2 )
                  v26 = v24;
              }
              else
              {
                v26 = v22 + a2;
              }
              if ( v26 != v12 )
              {
                if ( v15 > 0.0000099999997 )
                {
                  v27 = (float *)&v10[v14];
                  v11 += 8;
                  v14 += 2;
                  *(_DWORD *)v27 = v12;
                  v27[1] = v15;
                }
                v15 = 0.0;
                v12 = v26;
              }
              if ( v20 > v23 )
                v23 = v20;
              if ( v25 > v21 )
                v25 = v21;
              if ( a3 )
                break;
              if ( v19 >= 0.0 )
              {
                if ( (float)(v19 + 1.0) < v36 )
                  break;
                v28 = 0.0;
              }
              else
              {
                v28 = 1.0;
              }
LABEL_33:
              if ( v17 )
                v29 = 1.0 - v28;
              else
                v29 = v28;
              ++v22;
              ++v24;
              v15 = v15 + (float)((float)(v25 - v23) * v29);
              v23 = (float)v22;
              if ( v21 <= (float)v22 )
              {
                v5 = FLOAT_0_5;
                v16 = a3;
                goto LABEL_38;
              }
            }
            v28 = (float)((float)(v25 + v23) * (float)(0.5 / i)) - v19;
            goto LABEL_33;
          }
LABEL_38:
          v18 = (float)v13;
          ++v17;
        }
        while ( (unsigned int)v17 < 2 );
        if ( v15 > 0.0000099999997 )
        {
          v30 = (float *)&v10[v14];
          v11 += 8;
          v14 += 2;
          *(_DWORD *)v30 = v12;
          v30[1] = v15;
        }
        ++v13;
        v15 = 0.0;
        *v33 = v11 - v32;
        if ( v13 >= (unsigned int)a1 )
        {
LABEL_42:
          *v10 = v11;
          return v10;
        }
      }
    }
  }
  return 0;
}
