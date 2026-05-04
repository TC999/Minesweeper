void __fastcall CalculateEdgeControlPoint(
        struct D3DXVECTOR3 *a1,
        struct D3DXVECTOR3 *a2,
        struct D3DXVECTOR3 *a3,
        float a4,
        struct D3DXVECTOR3 *a5)
{
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm9_4

  *(_DWORD *)a5 = *(_DWORD *)a1;
  *((_DWORD *)a5 + 1) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a5 + 2) = *((_DWORD *)a1 + 2);
  v5 = *((float *)a5 + 1);
  v6 = *((float *)a5 + 2);
  v7 = *(float *)a5 - *(float *)a2;
  *(float *)a5 = v7;
  v8 = v5 - *((float *)a2 + 1);
  *((float *)a5 + 1) = v8;
  v9 = v6 - *((float *)a2 + 2);
  *((float *)a5 + 2) = v9;
  v10 = (float)((float)(*(float *)a3 * v7) + (float)(*((float *)a3 + 1) * v8)) + (float)(*((float *)a3 + 2) * v9);
  v11 = (float)(v7 - (float)(*(float *)a3 * v10)) * a4;
  v12 = (float)(v8 - (float)(*((float *)a3 + 1) * v10)) * a4;
  v13 = a4 * (float)(v9 - (float)(*((float *)a3 + 2) * v10));
  *((float *)a5 + 2) = v13;
  *(float *)a5 = v11;
  *((float *)a5 + 1) = v12;
  *(float *)a5 = v11 + *(float *)a2;
  *((float *)a5 + 1) = v12 + *((float *)a2 + 1);
  *((float *)a5 + 2) = *((float *)a2 + 2) + v13;
}
