void __fastcall MaterialBasicVertex::FillVertex(
        struct MaterialBasicVertex *a1,
        struct MaterialBasicVertex *a2,
        struct MaterialBasicVertex *a3,
        struct MaterialBasicVertex *a4,
        const struct Material::SavedRender *a5)
{
  const struct Material::SavedRender *v5; // r13
  int v6; // r12d
  int v11; // edx
  float *v12; // rcx
  __m128i v13; // xmm7
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  __m128i v20; // xmm6
  float v21; // xmm7_4
  float v22; // xmm6_4
  int v23; // r14d
  UserInterface *v24; // r11
  UserInterface *v25; // r11
  int v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  int v29; // ecx
  int v30; // r13d
  float v31; // xmm5_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  float v38; // xmm5_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm8_4
  float v48; // xmm7_4
  float v49; // xmm6_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm4_4
  UserInterface *v54; // r11
  float v55; // xmm4_4
  UserInterface *v56; // r11
  float v57; // xmm4_4
  UserInterface *v58; // r11
  float v59; // xmm4_4
  _BYTE v60[64]; // [rsp+30h] [rbp-108h] BYREF
  int v61; // [rsp+140h] [rbp+8h] BYREF
  int v62; // [rsp+148h] [rbp+10h] BYREF
  int v63; // [rsp+150h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  *((_DWORD *)a1 + 2) = 1057132380;
  *((_DWORD *)a2 + 2) = 1057132380;
  *((_DWORD *)a3 + 2) = 1057132380;
  *((_DWORD *)a4 + 2) = 1057132380;
  *((_DWORD *)a1 + 3) = 1056964608;
  *((_DWORD *)a2 + 3) = 1056964608;
  *((_DWORD *)a3 + 3) = 1056964608;
  *((_DWORD *)a4 + 3) = 1056964608;
  v11 = 1090519039;
  if ( !*((_BYTE *)g_pRenderManager + 210) )
    v11 = *((_DWORD *)v5 + 6);
  v12 = (float *)*((_QWORD *)v5 + 1);
  v13 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)v5 + 8LL));
  v14 = *v12;
  v15 = v12[1];
  v16 = v12[2];
  v17 = v12[3];
  v18 = (float)**(int **)v5;
  v19 = (float)*(int *)(*(_QWORD *)v5 + 4LL);
  v20 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)v5 + 12LL));
  *((_DWORD *)a1 + 4) = v11;
  *((_DWORD *)a2 + 4) = v11;
  *((_DWORD *)a3 + 4) = v11;
  *((_DWORD *)a4 + 4) = v11;
  LODWORD(v21) = _mm_cvtepi32_ps(v13).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v20).m128_u32[0];
  if ( *((float *)v5 + 7) == 0.0 )
  {
    UserInterface::LayoutToRender(g_pUserInterface, (int)v18, (int)v19, &v61, (int *)&a5);
    v23 = (int)v21;
    UserInterface::LayoutToRender(v24, (int)v21, (int)v22, &v63, &v62);
    if ( !*((_BYTE *)v5 + 34) )
      goto LABEL_18;
    v26 = _mask__NegFloat_;
    v27 = (float)(v16 - v14) / (float)(v21 - v18);
    v28 = (float)(v17 - v15) / (float)(v22 - v19);
    if ( v19 < 0.0 )
    {
      v15 = v15 + (float)(COERCE_FLOAT(LODWORD(v19) ^ _mask__NegFloat_) * v28);
      v19 = 0.0;
      UserInterface::LayoutToRender(v25, (int)v18, 0, &v61, (int *)&a5);
    }
    if ( v18 < 0.0 )
    {
      v14 = v14 + (float)(COERCE_FLOAT(LODWORD(v18) ^ v26) * v27);
      v18 = 0.0;
      UserInterface::LayoutToRender(v25, 0, (int)v19, &v61, (int *)&a5);
    }
    v29 = *((_DWORD *)v25 + 64);
    v30 = *((_DWORD *)v25 + 65);
    v31 = (float)v29;
    if ( v21 >= (float)v29 )
    {
      v32 = v31 - v21;
      v21 = (float)(v29 - 1);
      v23 = (int)v21;
      v16 = v16 + (float)(v32 * v27);
      UserInterface::LayoutToRender(v25, (int)v21, (int)v22, &v63, &v62);
    }
    v33 = (float)v30;
    if ( v22 >= (float)v30 )
    {
      v34 = v33 - v22;
      v22 = (float)(v30 - 1);
      v17 = v17 + (float)(v34 * v28);
      UserInterface::LayoutToRender(v25, v23, (int)v22, &v63, &v62);
    }
    if ( v21 < 0.0 || v22 < 0.0 || v18 >= v31 || v19 >= v33 )
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
    }
    else
    {
LABEL_18:
      v36 = (int)a5;
      v37 = v61;
      v6 = v62;
      v35 = v63;
    }
    v38 = (float)v37 + (float)(0.0 - 0.5);
    g_uiFillCount += (int)(float)((float)((float)v6 - (float)v36) * (float)((float)v35 - (float)v37));
    *(float *)a1 = v38;
    v39 = (float)v6 + (float)(0.0 - 0.5);
    v40 = (float)v35 + (float)(0.0 - 0.5);
    *((float *)a1 + 1) = v39;
    *(float *)a2 = v40;
    *((float *)a2 + 1) = v39;
    v41 = (float)v36 + (float)(0.0 - 0.5);
    *(float *)a3 = v40;
    *((float *)a3 + 1) = v41;
    *(float *)a4 = v38;
    *((float *)a4 + 1) = v41;
  }
  else
  {
    v42 = v21 - v18;
    v43 = v22 - v19;
    if ( *((_BYTE *)v5 + 36) )
    {
      *((float *)a1 + 1) = v43;
      *(_DWORD *)a1 = 0;
      *(float *)a2 = v42;
      *((float *)a2 + 1) = v43;
      *(float *)a3 = v42;
      *((_DWORD *)a3 + 1) = 0;
      *(_DWORD *)a4 = 0;
      *((_DWORD *)a4 + 1) = 0;
    }
    else
    {
      *((float *)a1 + 1) = v43 * 0.5;
      *(float *)a1 = v42 * -0.5;
      *((float *)a2 + 1) = v43 * 0.5;
      *(float *)a2 = v42 * 0.5;
      *(float *)a3 = v42 * 0.5;
      *((float *)a3 + 1) = v43 * -0.5;
      *(float *)a4 = v42 * -0.5;
      *((float *)a4 + 1) = v43 * -0.5;
    }
    off_1000A6778((struct D3DXMATRIX *)v60, *((float *)v5 + 7));
    off_1000A66A0(a1, a1, (const struct D3DXMATRIX *)v60);
    off_1000A66A0(a2, a2, (const struct D3DXMATRIX *)v60);
    off_1000A66A0(a3, a3, (const struct D3DXMATRIX *)v60);
    off_1000A66A0(a4, a4, (const struct D3DXMATRIX *)v60);
    if ( *((_BYTE *)v5 + 36) )
    {
      v44 = v19 + *((float *)a1 + 1);
      *(float *)a1 = v18 + *(float *)a1;
      *((float *)a1 + 1) = v44;
      v45 = v19 + *((float *)a2 + 1);
      *(float *)a2 = v18 + *(float *)a2;
      *((float *)a2 + 1) = v45;
      v46 = v19 + *((float *)a3 + 1);
      *(float *)a3 = v18 + *(float *)a3;
      *((float *)a3 + 1) = v46;
      v47 = v19 + *((float *)a4 + 1);
      *(float *)a4 = v18 + *(float *)a4;
      *((float *)a4 + 1) = v47;
    }
    else
    {
      v48 = (float)(v42 * 0.5) + v18;
      v49 = (float)(v43 * 0.5) + v19;
      *(float *)a1 = v48 + *(float *)a1;
      *((float *)a1 + 1) = v49 + *((float *)a1 + 1);
      v50 = v49 + *((float *)a2 + 1);
      *(float *)a2 = v48 + *(float *)a2;
      *((float *)a2 + 1) = v50;
      v51 = v49 + *((float *)a3 + 1);
      *(float *)a3 = v48 + *(float *)a3;
      *((float *)a3 + 1) = v51;
      v52 = v49 + *((float *)a4 + 1);
      *(float *)a4 = v48 + *(float *)a4;
      *((float *)a4 + 1) = v52;
    }
    UserInterface::LayoutToRender(g_pUserInterface, (int)*(float *)a1, (int)*((float *)a1 + 1), (int *)&a5, &v61);
    v53 = (float)v61;
    *(float *)a1 = (float)(int)a5;
    *((float *)a1 + 1) = v53;
    UserInterface::LayoutToRender(v54, (int)*(float *)a2, (int)*((float *)a2 + 1), (int *)&a5, &v61);
    v55 = (float)v61;
    *(float *)a2 = (float)(int)a5;
    *((float *)a2 + 1) = v55;
    UserInterface::LayoutToRender(v56, (int)*(float *)a3, (int)*((float *)a3 + 1), (int *)&a5, &v61);
    v57 = (float)v61;
    *(float *)a3 = (float)(int)a5;
    *((float *)a3 + 1) = v57;
    UserInterface::LayoutToRender(v58, (int)*(float *)a4, (int)*((float *)a4 + 1), (int *)&a5, &v61);
    v59 = (float)v61;
    *(float *)a4 = (float)(int)a5;
    *((float *)a4 + 1) = v59;
  }
  *((float *)a1 + 5) = v14;
  *((float *)a1 + 6) = v17;
  *((float *)a2 + 5) = v16;
  *((float *)a2 + 6) = v17;
  *((float *)a3 + 5) = v16;
  *((float *)a3 + 6) = v15;
  *((float *)a4 + 5) = v14;
  *((float *)a4 + 6) = v15;
}
