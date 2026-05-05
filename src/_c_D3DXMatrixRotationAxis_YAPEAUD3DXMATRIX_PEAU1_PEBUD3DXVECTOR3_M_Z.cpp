struct D3DXMATRIX *__fastcall c_D3DXMatrixRotationAxis(struct D3DXMATRIX *a1, const struct D3DXVECTOR3 *a2, float a3)
{
  float v5; // xmm9_4
  float v6; // xmm11_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm8_4
  struct D3DXMATRIX *result; // rax
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // [rsp+20h] [rbp-78h] BYREF
  float v16; // [rsp+24h] [rbp-74h]
  float v17; // [rsp+28h] [rbp-70h]

  v5 = sinf(a3);
  v6 = cosf(a3);
  v15 = *(float *)a2;
  v16 = *((float *)a2 + 1);
  v17 = *((float *)a2 + 2);
  off_1000A66A8((struct D3DXVECTOR3 *)&v15, (const struct D3DXVECTOR3 *)&v15);
  *((_DWORD *)a1 + 15) = 1065353216;
  v7 = v15;
  v8 = v16;
  v9 = v17;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  result = a1;
  *(float *)a1 = (float)((float)(v7 * v7) * (float)(1.0 - v6)) + v6;
  v11 = (float)(v8 * v7) * (float)(1.0 - v6);
  v12 = (float)(v9 * v7) * (float)(1.0 - v6);
  *((float *)a1 + 1) = (float)(v9 * v5) + v11;
  *((float *)a1 + 4) = v11 - (float)(v9 * v5);
  v13 = v7 * v5;
  v14 = (float)(v9 * v8) * (float)(1.0 - v6);
  *((float *)a1 + 2) = v12 - (float)(v8 * v5);
  *((float *)a1 + 8) = (float)(v8 * v5) + v12;
  *((float *)a1 + 5) = (float)((float)(v8 * v8) * (float)(1.0 - v6)) + v6;
  *((float *)a1 + 9) = v14 - v13;
  *((float *)a1 + 6) = v13 + v14;
  *((float *)a1 + 10) = (float)((float)(v9 * v9) * (float)(1.0 - v6)) + v6;
  return result;
}
