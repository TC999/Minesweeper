struct D3DXMATRIX *__fastcall c_D3DXMatrixShadow(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXPLANE *a3)
{
  struct D3DXMATRIX *result; // rax
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+24h] [rbp-34h]
  float v13; // [rsp+28h] [rbp-30h]
  float v14; // [rsp+2Ch] [rbp-2Ch]

  off_1000A6720((struct D3DXPLANE *)&v11, a3);
  result = a1;
  v6 = (float)((float)((float)(*(float *)a2 * v11) + (float)(v12 * *((float *)a2 + 1)))
             + (float)(v13 * *((float *)a2 + 2)))
     + (float)(v14 * *((float *)a2 + 3));
  LODWORD(v7) = LODWORD(v11) ^ _mask__NegFloat_;
  LODWORD(v8) = LODWORD(v12) ^ _mask__NegFloat_;
  LODWORD(v9) = LODWORD(v14) ^ _mask__NegFloat_;
  LODWORD(v10) = LODWORD(v13) ^ _mask__NegFloat_;
  *(float *)a1 = (float)(*(float *)a2 * COERCE_FLOAT(LODWORD(v11) ^ _mask__NegFloat_)) + v6;
  *((float *)a1 + 4) = v8 * *(float *)a2;
  *((float *)a1 + 8) = v10 * *(float *)a2;
  *((float *)a1 + 12) = v9 * *(float *)a2;
  *((float *)a1 + 1) = v7 * *((float *)a2 + 1);
  *((float *)a1 + 5) = (float)(v8 * *((float *)a2 + 1)) + v6;
  *((float *)a1 + 9) = v10 * *((float *)a2 + 1);
  *((float *)a1 + 13) = v9 * *((float *)a2 + 1);
  *((float *)a1 + 2) = v7 * *((float *)a2 + 2);
  *((float *)a1 + 6) = v8 * *((float *)a2 + 2);
  *((float *)a1 + 10) = (float)(v10 * *((float *)a2 + 2)) + v6;
  *((float *)a1 + 14) = v9 * *((float *)a2 + 2);
  *((float *)a1 + 3) = v7 * *((float *)a2 + 3);
  *((float *)a1 + 7) = v8 * *((float *)a2 + 3);
  *((float *)a1 + 11) = v10 * *((float *)a2 + 3);
  *((float *)a1 + 15) = (float)(v9 * *((float *)a2 + 3)) + v6;
  return result;
}
