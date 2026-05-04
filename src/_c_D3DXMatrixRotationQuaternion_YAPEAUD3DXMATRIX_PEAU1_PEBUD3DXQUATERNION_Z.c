struct D3DXMATRIX *__fastcall c_D3DXMatrixRotationQuaternion(struct D3DXMATRIX *a1, const struct D3DXQUATERNION *a2)
{
  float v2; // xmm6_4
  float v3; // xmm9_4
  float v4; // xmm12_4
  float v5; // xmm11_4
  struct D3DXMATRIX *result; // rax
  float v7; // xmm7_4
  float v8; // xmm10_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm12_4
  float v15; // xmm6_4

  v2 = *((float *)a2 + 3);
  v3 = *((float *)a2 + 2);
  v4 = *(float *)a2;
  v5 = *((float *)a2 + 1);
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 15) = 1065353216;
  result = a1;
  v7 = v5 * (float)(v5 + v5);
  v8 = v2 * (float)(v4 + v4);
  v9 = v4 * (float)(v5 + v5);
  v10 = 1.0 - (float)(v4 * (float)(v4 + v4));
  v11 = v3 + v3;
  v12 = v2 * (float)(v5 + v5);
  v13 = v3 * (float)(v3 + v3);
  v14 = v4 * v11;
  *(float *)a1 = (float)(1.0 - v7) - v13;
  v15 = v2 * v11;
  *((float *)a1 + 2) = v14 - v12;
  *((float *)a1 + 1) = v9 + v15;
  *((float *)a1 + 8) = v14 + v12;
  *((float *)a1 + 9) = (float)(v5 * v11) - v8;
  *((float *)a1 + 5) = v10 - v13;
  *((float *)a1 + 4) = v9 - v15;
  *((float *)a1 + 6) = (float)(v5 * v11) + v8;
  *((float *)a1 + 10) = v10 - v7;
  return result;
}
