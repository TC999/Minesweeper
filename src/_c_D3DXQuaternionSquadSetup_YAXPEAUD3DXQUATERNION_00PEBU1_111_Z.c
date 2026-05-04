void __fastcall c_D3DXQuaternionSquadSetup(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        const __m128i *a4,
        const struct D3DXQUATERNION *a5,
        const struct D3DXQUATERNION *a6,
        const struct D3DXQUATERNION *a7)
{
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  __m128i v14; // xmm0
  __m128i v15; // [rsp+20h] [rbp-138h] BYREF
  __m128i v16; // [rsp+30h] [rbp-128h] BYREF
  __m128i v17; // [rsp+40h] [rbp-118h] BYREF
  float v18; // [rsp+50h] [rbp-108h] BYREF
  float v19; // [rsp+54h] [rbp-104h]
  float v20; // [rsp+58h] [rbp-100h]
  float v21; // [rsp+5Ch] [rbp-FCh]
  float v22; // [rsp+60h] [rbp-F8h] BYREF
  float v23; // [rsp+64h] [rbp-F4h]
  float v24; // [rsp+68h] [rbp-F0h]
  float v25; // [rsp+6Ch] [rbp-ECh]
  __m128i v26; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v28; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v29[176]; // [rsp+A0h] [rbp-B8h] BYREF

  v27 = _mm_loadu_si128(a4);
  v26 = _mm_loadu_si128((const __m128i *)a5);
  v28 = _mm_loadu_si128((const __m128i *)a7);
  v17 = _mm_loadu_si128((const __m128i *)a6);
  if ( (float)((float)((float)((float)((float)(*(float *)&v27.m128i_i32[1] - *(float *)&v26.m128i_i32[1])
                                     * (float)(*(float *)&v27.m128i_i32[1] - *(float *)&v26.m128i_i32[1]))
                             + (float)((float)(*(float *)v27.m128i_i32 - *(float *)v26.m128i_i32)
                                     * (float)(*(float *)v27.m128i_i32 - *(float *)v26.m128i_i32)))
                     + (float)((float)(*(float *)&v27.m128i_i32[2] - *(float *)&v26.m128i_i32[2])
                             * (float)(*(float *)&v27.m128i_i32[2] - *(float *)&v26.m128i_i32[2])))
             + (float)((float)(*(float *)&v27.m128i_i32[3] - *(float *)&v26.m128i_i32[3])
                     * (float)(*(float *)&v27.m128i_i32[3] - *(float *)&v26.m128i_i32[3]))) > (float)((float)((float)((float)((float)(*(float *)&v27.m128i_i32[1] + *(float *)&v26.m128i_i32[1]) * (float)(*(float *)&v27.m128i_i32[1] + *(float *)&v26.m128i_i32[1])) + (float)((float)(*(float *)v26.m128i_i32 + *(float *)v27.m128i_i32) * (float)(*(float *)v26.m128i_i32 + *(float *)v27.m128i_i32))) + (float)((float)(*(float *)&v27.m128i_i32[2] + *(float *)&v26.m128i_i32[2]) * (float)(*(float *)&v27.m128i_i32[2] + *(float *)&v26.m128i_i32[2]))) + (float)((float)(*(float *)&v26.m128i_i32[3] + *(float *)&v27.m128i_i32[3]) * (float)(*(float *)&v26.m128i_i32[3] + *(float *)&v27.m128i_i32[3]))) )
  {
    v16.m128i_i32[0] = v27.m128i_i32[0] ^ _mask__NegFloat_;
    v16.m128i_i32[1] = v27.m128i_i32[1] ^ _mask__NegFloat_;
    v16.m128i_i32[2] = v27.m128i_i32[2] ^ _mask__NegFloat_;
    v16.m128i_i32[3] = v27.m128i_i32[3] ^ _mask__NegFloat_;
    v27 = v16;
  }
  v10 = *(float *)v17.m128i_i32;
  v11 = *(float *)&v17.m128i_i32[1];
  v12 = *(float *)&v17.m128i_i32[2];
  v13 = *(float *)&v17.m128i_i32[3];
  if ( (float)((float)((float)((float)((float)(*(float *)&v26.m128i_i32[1] - *(float *)&v17.m128i_i32[1])
                                     * (float)(*(float *)&v26.m128i_i32[1] - *(float *)&v17.m128i_i32[1]))
                             + (float)((float)(*(float *)v26.m128i_i32 - *(float *)v17.m128i_i32)
                                     * (float)(*(float *)v26.m128i_i32 - *(float *)v17.m128i_i32)))
                     + (float)((float)(*(float *)&v26.m128i_i32[2] - *(float *)&v17.m128i_i32[2])
                             * (float)(*(float *)&v26.m128i_i32[2] - *(float *)&v17.m128i_i32[2])))
             + (float)((float)(*(float *)&v26.m128i_i32[3] - *(float *)&v17.m128i_i32[3])
                     * (float)(*(float *)&v26.m128i_i32[3] - *(float *)&v17.m128i_i32[3]))) > (float)((float)((float)((float)((float)(*(float *)&v17.m128i_i32[1] + *(float *)&v26.m128i_i32[1]) * (float)(*(float *)&v17.m128i_i32[1] + *(float *)&v26.m128i_i32[1])) + (float)((float)(*(float *)v17.m128i_i32 + *(float *)v26.m128i_i32) * (float)(*(float *)v17.m128i_i32 + *(float *)v26.m128i_i32))) + (float)((float)(*(float *)&v17.m128i_i32[2] + *(float *)&v26.m128i_i32[2]) * (float)(*(float *)&v17.m128i_i32[2] + *(float *)&v26.m128i_i32[2]))) + (float)((float)(*(float *)&v17.m128i_i32[3] + *(float *)&v26.m128i_i32[3]) * (float)(*(float *)&v17.m128i_i32[3] + *(float *)&v26.m128i_i32[3]))) )
  {
    v16.m128i_i32[0] = v17.m128i_i32[0] ^ _mask__NegFloat_;
    v16.m128i_i32[1] = v17.m128i_i32[1] ^ _mask__NegFloat_;
    v16.m128i_i32[2] = v17.m128i_i32[2] ^ _mask__NegFloat_;
    v16.m128i_i32[3] = v17.m128i_i32[3] ^ _mask__NegFloat_;
    v17 = v16;
    LODWORD(v13) ^= _mask__NegFloat_;
    LODWORD(v12) ^= _mask__NegFloat_;
    LODWORD(v11) ^= _mask__NegFloat_;
    LODWORD(v10) ^= _mask__NegFloat_;
  }
  if ( (float)((float)((float)((float)((float)(v11 - *(float *)&v28.m128i_i32[1])
                                     * (float)(v11 - *(float *)&v28.m128i_i32[1]))
                             + (float)((float)(v10 - *(float *)v28.m128i_i32) * (float)(v10 - *(float *)v28.m128i_i32)))
                     + (float)((float)(v12 - *(float *)&v28.m128i_i32[2]) * (float)(v12 - *(float *)&v28.m128i_i32[2])))
             + (float)((float)(v13 - *(float *)&v28.m128i_i32[3]) * (float)(v13 - *(float *)&v28.m128i_i32[3]))) > (float)((float)((float)((float)((float)(*(float *)&v28.m128i_i32[1] + v11) * (float)(*(float *)&v28.m128i_i32[1] + v11)) + (float)((float)(*(float *)v28.m128i_i32 + v10) * (float)(*(float *)v28.m128i_i32 + v10))) + (float)((float)(*(float *)&v28.m128i_i32[2] + v12) * (float)(*(float *)&v28.m128i_i32[2] + v12))) + (float)((float)(*(float *)&v28.m128i_i32[3] + v13) * (float)(*(float *)&v28.m128i_i32[3] + v13))) )
  {
    v16.m128i_i32[0] = v28.m128i_i32[0] ^ _mask__NegFloat_;
    v16.m128i_i32[1] = v28.m128i_i32[1] ^ _mask__NegFloat_;
    v16.m128i_i32[2] = v28.m128i_i32[2] ^ _mask__NegFloat_;
    v16.m128i_i32[3] = v28.m128i_i32[3] ^ _mask__NegFloat_;
    v28 = v16;
  }
  off_1000A67D8((struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v26);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v27);
  off_1000A6830((struct D3DXQUATERNION *)&v18, (const struct D3DXQUATERNION *)&v15);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v17);
  off_1000A6830((struct D3DXQUATERNION *)&v22, (const struct D3DXQUATERNION *)&v15);
  *(float *)v15.m128i_i32 = (float)(v18 + v22) * -0.25;
  *(float *)&v15.m128i_i32[1] = (float)(v23 + v19) * -0.25;
  *(float *)&v15.m128i_i32[2] = (float)(v24 + v20) * -0.25;
  *(float *)&v15.m128i_i32[3] = (float)(v25 + v21) * -0.25;
  off_1000A6838((struct D3DXQUATERNION *)v29, (const struct D3DXQUATERNION *)&v15);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v26, (const struct D3DXQUATERNION *)v29);
  *a1 = _mm_loadu_si128(&v15);
  off_1000A67D8((struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v17);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v26);
  off_1000A6830((struct D3DXQUATERNION *)&v18, (const struct D3DXQUATERNION *)&v15);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v16, (const struct D3DXQUATERNION *)&v28);
  off_1000A6830((struct D3DXQUATERNION *)&v22, (const struct D3DXQUATERNION *)&v15);
  *(float *)v15.m128i_i32 = (float)(v18 + v22) * -0.25;
  *(float *)&v15.m128i_i32[1] = (float)(v23 + v19) * -0.25;
  *(float *)&v15.m128i_i32[2] = (float)(v24 + v20) * -0.25;
  *(float *)&v15.m128i_i32[3] = (float)(v25 + v21) * -0.25;
  off_1000A6838((struct D3DXQUATERNION *)v29, (const struct D3DXQUATERNION *)&v15);
  off_1000A6710((struct D3DXQUATERNION *)&v15, (const struct D3DXQUATERNION *)&v17, (const struct D3DXQUATERNION *)v29);
  v14 = v17;
  *a2 = _mm_loadu_si128(&v15);
  *a3 = v14;
}
