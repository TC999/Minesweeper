__int64 __fastcall D3DXTex::D3DXEncodeDXT5(D3DXTex *this, float *a2, const struct D3DXCOLOR *a3)
{
  unsigned __int8 *v3; // r14
  int v4; // r13d
  float v7; // xmm6_4
  float v8; // xmm7_4
  unsigned int v9; // edx
  float *v10; // r8
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  int v15; // eax
  __int64 result; // rax
  unsigned int v17; // ebp
  int v18; // ecx
  int v19; // edx
  float v20; // xmm3_4
  float v21; // xmm2_4
  unsigned int v22; // ecx
  float *v23; // rdx
  float v24; // xmm1_4
  int v25; // eax
  __int64 *v26; // r12
  unsigned int v27; // ecx
  float *v28; // rdx
  float v29; // xmm1_4
  int v30; // eax
  float v31; // xmm7_4
  float v32; // xmm9_4
  float v33; // xmm6_4
  unsigned int v34; // r9d
  float *v35; // rsi
  _BYTE *v36; // rbx
  unsigned int v37; // edi
  unsigned int v38; // r10d
  float *v39; // r8
  float *v40; // r11
  float v41; // xmm1_4
  float v42; // xmm0_4
  unsigned int v43; // edx
  float v44; // xmm1_4
  int v45; // eax
  float v46; // [rsp+20h] [rbp-108h] BYREF
  float v47; // [rsp+24h] [rbp-104h]
  _BYTE v48[16]; // [rsp+28h] [rbp-100h] BYREF
  int v49; // [rsp+38h] [rbp-F0h]
  int v50; // [rsp+3Ch] [rbp-ECh]
  _DWORD v51[40]; // [rsp+60h] [rbp-C8h] BYREF
  float v52; // [rsp+130h] [rbp+8h] BYREF
  float v53; // [rsp+140h] [rbp+18h] BYREF

  v3 = (unsigned __int8 *)(a2 + 3);
  v4 = (int)a3;
  v7 = a2[3];
  v8 = v7;
  if ( (_DWORD)a3 )
    memset(v51, 0, 0x40u);
  v9 = 0;
  v10 = (float *)v3;
  v11 = 0;
  do
  {
    v12 = *v10;
    if ( v4 )
      v12 = v12 + *(float *)&v51[v11];
    v13 = (float)(int)(float)((float)(v12 * 255.0) + 0.5) * 0.0039215689;
    *(float *)((char *)&v46 + v11 * 4) = v13;
    if ( v7 <= v13 )
    {
      if ( v13 > v8 )
        v8 = (float)(int)(float)((float)(v12 * 255.0) + 0.5) * 0.0039215689;
    }
    else
    {
      v7 = (float)(int)(float)((float)(v12 * 255.0) + 0.5) * 0.0039215689;
    }
    if ( v4 )
    {
      v14 = v12 - v13;
      v15 = v9 & 3;
      if ( v15 != 3 )
        *(float *)&v51[v11 + 1] = (float)(v14 * 0.4375) + *(float *)&v51[v11 + 1];
      if ( v9 < 0xC )
      {
        if ( (v9 & 3) != 0 )
          *(float *)&v51[v11 + 3] = (float)(v14 * 0.1875) + *(float *)&v51[v11 + 3];
        *(float *)&v51[v11 + 4] = (float)(v14 * 0.3125) + *(float *)&v51[v11 + 4];
        if ( v15 != 3 )
          *(float *)&v51[v11 + 5] = (float)(v14 * 0.0625) + *(float *)&v51[v11 + 5];
      }
    }
    ++v9;
    v10 += 4;
    ++v11;
  }
  while ( v9 < 0x10 );
  result = D3DXTex::EncodeDXT1((__int64)this + 8, a2, 0, v4);
  if ( (int)result >= 0 )
  {
    if ( v7 == 1.0 )
    {
      *(_BYTE *)this = -1;
      *((_BYTE *)this + 1) = -1;
LABEL_22:
      result = 0;
      *(_DWORD *)((char *)this + 2) = 0;
      *((_WORD *)this + 3) = 0;
      return result;
    }
    if ( v7 == 0.0 || v8 == 1.0 )
      v17 = 6;
    else
      v17 = 8;
    D3DXTex::OptimizeAlpha(&v53, (int *)&v52, &v46, v17);
    v18 = (int)(float)((float)(v53 * 255.0) + 0.5);
    v19 = (int)(float)((float)(v52 * 255.0) + 0.5);
    v20 = (float)(unsigned __int8)v18 * 0.0039215689;
    v21 = (float)(unsigned __int8)v19 * 0.0039215689;
    if ( v17 == 8 )
    {
      if ( (_BYTE)v18 == (_BYTE)v19 )
      {
        *(_BYTE *)this = v18;
        *((_BYTE *)this + 1) = v19;
        goto LABEL_22;
      }
      *(_BYTE *)this = v19;
      *((_BYTE *)this + 1) = v18;
      v46 = (float)(unsigned __int8)v19 * 0.0039215689;
      v27 = 1;
      v28 = (float *)v48;
      v47 = v20;
      while ( 1 )
      {
        v29 = (float)(int)(7 - v27);
        v30 = v27++;
        *v28++ = (float)((float)(v29 * v21) + (float)((float)v30 * v20)) * 0.14285715;
        if ( v27 >= 7 )
          break;
        v20 = v47;
        v21 = v46;
      }
      v26 = qword_1000236E0;
    }
    else
    {
      *(_BYTE *)this = v18;
      *((_BYTE *)this + 1) = v19;
      v46 = (float)(unsigned __int8)v18 * 0.0039215689;
      v22 = 1;
      v23 = (float *)v48;
      v47 = v21;
      while ( 1 )
      {
        v24 = (float)(int)(5 - v22);
        v25 = v22++;
        *v23++ = (float)((float)(v24 * v20) + (float)((float)v25 * v21)) * 0.2;
        if ( v22 >= 5 )
          break;
        v21 = v47;
        v20 = v46;
      }
      v49 = 0;
      v50 = 1065353216;
      v26 = qword_1000236C8;
    }
    v31 = v46;
    v32 = (float)(int)(v17 - 1);
    if ( v46 == v47 )
      v33 = 0.0;
    else
      v33 = v32 / (float)(v47 - v46);
    if ( v4 )
      memset(v51, 0, 0x40u);
    v34 = 0;
    v35 = (float *)&v51[3];
    v36 = (char *)this + 4;
    do
    {
      v37 = v34 + 8;
      v38 = 0;
      if ( v34 < v34 + 8 )
      {
        v39 = v35;
        v40 = (float *)v3;
        do
        {
          v41 = *v40;
          if ( v4 )
            v41 = v41 + *(v39 - 3);
          v42 = (float)(v41 - v31) * v33;
          if ( v42 > 0.0 )
          {
            if ( v42 < v32 )
            {
              v43 = *((_DWORD *)v26 + (int)(float)(v42 + 0.5));
            }
            else if ( v17 == 6 && v41 >= (float)((float)(v47 + 1.0) * 0.5) )
            {
              v43 = 7;
            }
            else
            {
              v43 = 1;
            }
          }
          else if ( v17 == 6 && (float)(v31 * 0.5) >= v41 )
          {
            v43 = 6;
          }
          else
          {
            v43 = 0;
          }
          v38 = (v38 >> 3) | (v43 << 21);
          if ( v4 )
          {
            v44 = v41 - *(&v46 + v43);
            v45 = v34 & 3;
            if ( v45 != 3 )
              *(v39 - 2) = (float)(v44 * 0.4375) + *(v39 - 2);
            if ( v34 < 0xC )
            {
              if ( (v34 & 3) != 0 )
                *v39 = (float)(v44 * 0.1875) + *v39;
              v39[1] = (float)(v44 * 0.3125) + v39[1];
              if ( v45 != 3 )
                v39[2] = (float)(v44 * 0.0625) + v39[2];
            }
          }
          ++v34;
          v40 += 4;
          ++v39;
        }
        while ( v34 < v37 );
      }
      *(v36 - 2) = v38;
      *v36 = BYTE2(v38);
      v35 += 8;
      *(v36 - 1) = BYTE1(v38);
      v3 += 128;
      v36 += 3;
      v34 = v37;
    }
    while ( v37 < 0x10 );
    return 0;
  }
  return result;
}
