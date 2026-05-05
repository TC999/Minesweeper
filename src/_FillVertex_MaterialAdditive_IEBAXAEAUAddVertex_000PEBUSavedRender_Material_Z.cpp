void __fastcall MaterialAdditive::FillVertex(
        MaterialAdditive *this,
        struct AddVertex *a2,
        struct AddVertex *a3,
        struct AddVertex *a4,
        struct AddVertex *a5,
        const struct Material::SavedRender *a6)
{
  const struct Material::SavedRender *v6; // r12
  struct AddVertex *v7; // rbp
  int *v10; // rcx
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  int v15; // xmm11_4
  int v16; // xmm12_4
  int v17; // xmm13_4
  int v18; // xmm14_4
  float v19; // xmm7_4
  float v20; // xmm3_4
  int v21; // edx
  UserInterface *v22; // r11
  __m128i v23; // xmm2
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm9_4
  float v33; // xmm6_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm4_4
  UserInterface *v39; // r11
  float v40; // xmm4_4
  UserInterface *v41; // r11
  float v42; // xmm4_4
  UserInterface *v43; // r11
  float v44; // xmm4_4
  _BYTE v45[64]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v46; // [rsp+118h] [rbp+10h] BYREF
  int v47; // [rsp+120h] [rbp+18h] BYREF

  v6 = a6;
  v7 = a5;
  *((_DWORD *)a2 + 2) = 1057132380;
  *((_DWORD *)a3 + 2) = 1057132380;
  *((_DWORD *)a4 + 2) = 1057132380;
  *((_DWORD *)v7 + 2) = 1057132380;
  *((_DWORD *)a2 + 3) = 1056964608;
  *((_DWORD *)a3 + 3) = 1056964608;
  *((_DWORD *)a4 + 3) = 1056964608;
  *((_DWORD *)v7 + 3) = 1056964608;
  v10 = (int *)*((_QWORD *)v6 + 1);
  v12 = (float)**(int **)v6;
  v13 = (float)*(int *)(*(_QWORD *)v6 + 4LL);
  v14 = (float)*(int *)(*(_QWORD *)v6 + 8LL);
  v15 = *v10;
  v16 = v10[1];
  v17 = v10[2];
  v18 = v10[3];
  v19 = (float)*(int *)(*(_QWORD *)v6 + 12LL);
  v20 = (float)HIBYTE(*((_DWORD *)v6 + 6)) / 255.0;
  v21 = (unsigned __int8)(int)(float)((float)(unsigned __int8)*((_DWORD *)v6 + 6) * v20)
      | (((unsigned __int8)(int)(float)((float)(unsigned __int8)BYTE1(*((_DWORD *)v6 + 6)) * v20)
        | ((((unsigned __int8)(int)(float)(v20 * 255.0) << 8)
          | (unsigned __int8)(int)(float)((float)(unsigned __int8)BYTE2(*((_DWORD *)v6 + 6)) * v20)) << 8)) << 8);
  *((_DWORD *)a2 + 4) = v21;
  *((_DWORD *)a3 + 4) = v21;
  *((_DWORD *)a4 + 4) = v21;
  *((_DWORD *)v7 + 4) = v21;
  if ( *((float *)v6 + 7) == 0.0 )
  {
    UserInterface::LayoutToRender(g_pUserInterface, (int)v12, (int)v13, (int *)&a5, (int *)&v46);
    UserInterface::LayoutToRender(v22, (int)v14, (int)v19, (int *)&a6, &v47);
    v23 = _mm_cvtsi32_si128(v46);
    v24 = (float)(int)a5 - 0.5;
    v25 = (float)v47 - 0.5;
    v26 = (float)(int)a6 - 0.5;
    *(float *)a2 = v24;
    *((float *)a2 + 1) = v25;
    *(float *)a3 = v26;
    *((float *)a3 + 1) = v25;
    *(float *)a4 = v26;
    *(float *)v23.m128i_i32 = _mm_cvtepi32_ps(v23).m128_f32[0] - 0.5;
    *((_DWORD *)a4 + 1) = v23.m128i_i32[0];
    *(float *)v7 = v24;
    *((_DWORD *)v7 + 1) = v23.m128i_i32[0];
  }
  else
  {
    v27 = v14 - v12;
    v28 = v19 - v13;
    if ( *((_BYTE *)v6 + 36) )
    {
      *(_DWORD *)a2 = 0;
      *((float *)a2 + 1) = v28;
      *(float *)a3 = v27;
      *((float *)a3 + 1) = v28;
      *(float *)a4 = v27;
      *((_DWORD *)a4 + 1) = 0;
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 1) = 0;
    }
    else
    {
      *((float *)a2 + 1) = v28 * 0.5;
      *(float *)a2 = v27 * -0.5;
      *((float *)a3 + 1) = v28 * 0.5;
      *(float *)a3 = v27 * 0.5;
      *(float *)a4 = v27 * 0.5;
      *((float *)a4 + 1) = v28 * -0.5;
      *(float *)v7 = v27 * -0.5;
      *((float *)v7 + 1) = v28 * -0.5;
    }
    off_1000A6778((struct D3DXMATRIX *)v45, *((float *)v6 + 7));
    off_1000A66A0(a2, a2, (const struct D3DXMATRIX *)v45);
    off_1000A66A0(a3, a3, (const struct D3DXMATRIX *)v45);
    off_1000A66A0(a4, a4, (const struct D3DXMATRIX *)v45);
    off_1000A66A0(v7, v7, (const struct D3DXMATRIX *)v45);
    if ( *((_BYTE *)v6 + 36) )
    {
      v29 = v13 + *((float *)a2 + 1);
      *(float *)a2 = v12 + *(float *)a2;
      *((float *)a2 + 1) = v29;
      v30 = v13 + *((float *)a3 + 1);
      *(float *)a3 = v12 + *(float *)a3;
      *((float *)a3 + 1) = v30;
      v31 = v13 + *((float *)a4 + 1);
      *(float *)a4 = v12 + *(float *)a4;
      *((float *)a4 + 1) = v31;
      v32 = v13 + *((float *)v7 + 1);
      *(float *)v7 = v12 + *(float *)v7;
      *((float *)v7 + 1) = v32;
    }
    else
    {
      v33 = (float)(v27 * 0.5) + v12;
      v34 = (float)(v28 * 0.5) + v13;
      *(float *)a2 = v33 + *(float *)a2;
      *((float *)a2 + 1) = v34 + *((float *)a2 + 1);
      v35 = v34 + *((float *)a3 + 1);
      *(float *)a3 = v33 + *(float *)a3;
      *((float *)a3 + 1) = v35;
      v36 = v34 + *((float *)a4 + 1);
      *(float *)a4 = v33 + *(float *)a4;
      *((float *)a4 + 1) = v36;
      v37 = v34 + *((float *)v7 + 1);
      *(float *)v7 = v33 + *(float *)v7;
      *((float *)v7 + 1) = v37;
    }
    UserInterface::LayoutToRender(g_pUserInterface, (int)*(float *)a2, (int)*((float *)a2 + 1), (int *)&a5, (int *)&a6);
    v38 = (float)(int)a6;
    *(float *)a2 = (float)(int)a5;
    *((float *)a2 + 1) = v38;
    UserInterface::LayoutToRender(v39, (int)*(float *)a3, (int)*((float *)a3 + 1), (int *)&a5, (int *)&a6);
    v40 = (float)(int)a6;
    *(float *)a3 = (float)(int)a5;
    *((float *)a3 + 1) = v40;
    UserInterface::LayoutToRender(v41, (int)*(float *)a4, (int)*((float *)a4 + 1), (int *)&a5, (int *)&a6);
    v42 = (float)(int)a6;
    *(float *)a4 = (float)(int)a5;
    *((float *)a4 + 1) = v42;
    UserInterface::LayoutToRender(v43, (int)*(float *)v7, (int)*((float *)v7 + 1), (int *)&a5, (int *)&a6);
    v44 = (float)(int)a6;
    *(float *)v7 = (float)(int)a5;
    *((float *)v7 + 1) = v44;
  }
  *((_DWORD *)a2 + 5) = v15;
  *((_DWORD *)a2 + 6) = v18;
  *((_DWORD *)a3 + 5) = v17;
  *((_DWORD *)a3 + 6) = v18;
  *((_DWORD *)a4 + 5) = v17;
  *((_DWORD *)a4 + 6) = v16;
  *((_DWORD *)v7 + 5) = v15;
  *((_DWORD *)v7 + 6) = v16;
}
