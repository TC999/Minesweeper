struct D3DXMATRIX *__fastcall c_D3DXMatrixReflect(struct D3DXMATRIX *a1, const struct D3DXPLANE *a2)
{
  float v3; // xmm2_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm7_4
  struct D3DXMATRIX *result; // rax
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  _DWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  float v13; // [rsp+28h] [rbp-40h]
  float v14; // [rsp+2Ch] [rbp-3Ch]

  off_1000A6720((struct D3DXPLANE *)v12, a2);
  v3 = *(float *)&v12[1];
  v4 = *(float *)v12;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 11) = 0;
  v5 = v13;
  v6 = v3 * -2.0;
  result = a1;
  v8 = v13 * -2.0;
  v9 = (float)(v13 * -2.0) * v4;
  *(float *)a1 = (float)(v4 * (float)(v4 * -2.0)) + 1.0;
  *((float *)a1 + 2) = v9;
  *((float *)a1 + 1) = (float)(v3 * -2.0) * v4;
  *((float *)a1 + 5) = (float)(v3 * (float)(v3 * -2.0)) + 1.0;
  *((float *)a1 + 4) = v3 * (float)(v4 * -2.0);
  v10 = v8 * v3;
  v11 = v14;
  *((float *)a1 + 8) = v5 * (float)(v4 * -2.0);
  *((float *)a1 + 6) = v10;
  *((float *)a1 + 13) = v11 * v6;
  *((float *)a1 + 10) = (float)(v5 * v8) + 1.0;
  *((float *)a1 + 9) = v5 * v6;
  *((float *)a1 + 14) = v11 * v8;
  *((float *)a1 + 12) = v11 * (float)(v4 * -2.0);
  return result;
}
