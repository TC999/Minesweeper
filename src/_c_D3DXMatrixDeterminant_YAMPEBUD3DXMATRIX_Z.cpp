float __fastcall c_D3DXMatrixDeterminant(const struct D3DXMATRIX *a1)
{
  float v1; // xmm3_4
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm9_4
  float v5; // xmm0_4
  float v6; // xmm8_4
  float v7; // xmm5_4
  float v8; // xmm0_4

  v1 = *((float *)a1 + 8);
  v2 = (float)(*((float *)a1 + 10) * *((float *)a1 + 15)) - (float)(*((float *)a1 + 11) * *((float *)a1 + 14));
  v3 = (float)(*((float *)a1 + 9) * *((float *)a1 + 15)) - (float)(*((float *)a1 + 13) * *((float *)a1 + 11));
  v4 = (float)(*((float *)a1 + 9) * *((float *)a1 + 14)) - (float)(*((float *)a1 + 13) * *((float *)a1 + 10));
  v5 = *((float *)a1 + 12);
  v6 = (float)(v1 * *((float *)a1 + 13)) - (float)(v5 * *((float *)a1 + 9));
  v7 = (float)(v1 * *((float *)a1 + 14)) - (float)(v5 * *((float *)a1 + 10));
  v8 = (float)(v1 * *((float *)a1 + 15)) - (float)(v5 * *((float *)a1 + 11));
  return (float)((float)((float)((float)((float)((float)(*((float *)a1 + 5) * v2) - (float)(*((float *)a1 + 6) * v3))
                                       + (float)(*((float *)a1 + 7) * v4))
                               * *(float *)a1)
                       - (float)((float)((float)((float)(*((float *)a1 + 4) * v2) - (float)(v8 * *((float *)a1 + 6)))
                                       + (float)(v7 * *((float *)a1 + 7)))
                               * *((float *)a1 + 1)))
               + (float)((float)((float)((float)(*((float *)a1 + 4) * v3) - (float)(v8 * *((float *)a1 + 5)))
                               + (float)(v6 * *((float *)a1 + 7)))
                       * *((float *)a1 + 2)))
       - (float)((float)((float)((float)(*((float *)a1 + 4) * v4) - (float)(v7 * *((float *)a1 + 5)))
                       + (float)(v6 * *((float *)a1 + 6)))
               * *((float *)a1 + 3));
}
