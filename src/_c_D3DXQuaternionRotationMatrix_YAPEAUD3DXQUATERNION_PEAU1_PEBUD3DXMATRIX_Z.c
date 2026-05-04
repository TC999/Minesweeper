struct D3DXQUATERNION *__fastcall c_D3DXQuaternionRotationMatrix(
        struct D3DXQUATERNION *a1,
        const struct D3DXMATRIX *a2)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rdi
  float v15; // xmm0_4
  __int64 v16; // rdx
  float v17; // xmm0_4
  float v19[4]; // [rsp+20h] [rbp-28h]
  _DWORD v20[6]; // [rsp+30h] [rbp-18h]

  v4 = (float)(*(float *)a2 + *((float *)a2 + 5)) + *((float *)a2 + 10);
  if ( v4 <= 0.0 )
  {
    v6 = *((float *)a2 + 5);
    v7 = *((float *)a2 + 10);
    v8 = *(float *)a2;
    v20[0] = 1;
    v20[2] = 0;
    v9 = v6 - *(float *)a2;
    v10 = v8 - v6;
    v11 = v6 + *(float *)a2;
    v20[1] = 2;
    v19[2] = v7 - v11;
    v19[0] = v10 - v7;
    v19[1] = v9 - v7;
    v12 = (float)(v10 - v7) < (float)(v9 - v7);
    if ( v19[(float)(v10 - v7) < (float)(v9 - v7)] < (float)(v7 - v11) )
      v12 = 2;
    v13 = v12;
    v14 = (unsigned int)v20[v12];
    v15 = sqrtf(v19[v12] + 1.0);
    v16 = (unsigned int)v20[v14];
    v17 = v15 * 0.5;
    *((float *)a1 + v13) = v17;
    *((float *)a1 + v14) = (float)(*((float *)a2 + 4 * v13 + v14) + *((float *)a2 + 4 * v14 + v13))
                         * (float)(0.25 / v17);
    *((float *)a1 + v16) = (float)(*((float *)a2 + 4 * v16 + v13) + *((float *)a2 + 4 * v13 + v16))
                         * (float)(0.25 / v17);
    *((float *)a1 + 3) = (float)(*((float *)a2 + 4 * v14 + v16) - *((float *)a2 + 4 * v16 + v14)) * (float)(0.25 / v17);
  }
  else
  {
    v5 = sqrtf(v4 + 1.0) * 0.5;
    *((float *)a1 + 3) = v5;
    *(float *)a1 = (float)(*((float *)a2 + 6) - *((float *)a2 + 9)) * (float)(0.25 / v5);
    *((float *)a1 + 1) = (float)(*((float *)a2 + 8) - *((float *)a2 + 2)) * (float)(0.25 / v5);
    *((float *)a1 + 2) = (float)(*((float *)a2 + 1) - *((float *)a2 + 4)) * (float)(0.25 / v5);
  }
  return a1;
}
