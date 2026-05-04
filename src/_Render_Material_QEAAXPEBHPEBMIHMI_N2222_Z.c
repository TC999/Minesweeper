void __fastcall Material::Render(
        Material *this,
        const int *a2,
        const __m128i *a3,
        int a4,
        int a5,
        float a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12)
{
  struct ResourceBase *Resource; // rax
  struct ResourceBase *v16; // rdi
  struct IDirect3DTexture9 *v17; // r9
  float v18; // xmm9_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm8_4
  unsigned int v22; // edx
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  struct IDirect3DTexture9 *SplitTexture; // r9
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  bool v33; // cl
  bool v34; // al
  int v35; // ecx
  __int32 v36; // eax
  unsigned int v37; // ebp
  struct IDirect3DTexture9 *v38; // r9
  __int32 v39; // eax
  float v40; // xmm1_4
  struct IDirect3DTexture9 *v41; // r9
  __int32 v42; // eax
  __int32 v43; // r11d
  float v44; // xmm1_4
  float v45; // xmm2_4
  struct IDirect3DTexture9 *v46; // r9
  __int32 v47; // eax
  float v48; // xmm1_4
  struct IDirect3DTexture9 *v49; // r9
  int v50; // ecx
  __int32 v51; // eax
  ResourceTextureD3D *v52; // rcx
  float v53; // xmm11_4
  unsigned int v54; // edx
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  struct IDirect3DTexture9 *v58; // rax
  unsigned int v59; // ebx
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm1_4
  ResourceTextureD3D *v64; // rcx
  float v65; // xmm11_4
  unsigned int v66; // edx
  float v67; // xmm1_4
  float v68; // xmm2_4
  struct IDirect3DTexture9 *v69; // rax
  unsigned int v70; // ebx
  float v71; // xmm0_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  unsigned int v74; // xmm0_4
  __int32 v75; // xmm1_4
  float v76; // xmm2_4
  unsigned int v77; // [rsp+64h] [rbp-C4h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v79; // [rsp+6Ch] [rbp-BCh] BYREF
  __m128i v80; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v81[8]; // [rsp+80h] [rbp-A8h] BYREF

  Resource = ResourceManager::GetResource(g_pResourceManager, a4, 0);
  v16 = Resource;
  if ( !Resource )
    return;
  if ( *((_DWORD *)Resource + 6) == 1
    && !(*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)Resource + 80LL))(Resource)
    || *((_DWORD *)v16 + 6) == 2 )
  {
    v17 = (struct IDirect3DTexture9 *)*((_QWORD *)v16 + 6);
    if ( v17 )
      Material::PostQuad(this, (const __m128i *)a2, a3, v17, a5, a6, a7, a8, a9, a10, a11, a12);
    return;
  }
  v18 = *(float *)a3->m128i_i32;
  v19 = *(float *)&a3->m128i_i32[1];
  v20 = *(float *)&a3->m128i_i32[2];
  v21 = *(float *)&a3->m128i_i32[3];
  if ( *(float *)a3->m128i_i32 < 0.5 )
  {
    if ( v20 < 0.5 && v19 >= 0.5 && v21 >= 0.5 )
    {
      ResourceTextureD3D::GetSplitDims(v16, 2u, &v79, &v78);
      v22 = 2;
      v23 = (float)(int)(2 * (0x400 / v79));
      v24 = (float)(0x400 / v78);
      v25 = (float)((float)(v19 - 0.5) * 2.0) * v24;
      v26 = (float)((float)(v21 - 0.5) * 2.0) * v24;
LABEL_12:
      v27 = v18 * v23;
      v28 = v20 * v23;
      goto LABEL_13;
    }
    if ( v20 < 0.5 && v19 < 0.5 && v21 < 0.5 )
    {
      v23 = FLOAT_2_0;
      v22 = 0;
      v25 = (float)(v19 - 0.0) * 2.0;
      v26 = (float)(v21 - 0.0) * 2.0;
      goto LABEL_12;
    }
  }
  if ( v18 >= 0.5 )
  {
    if ( v20 >= 0.5 && v19 < 0.5 && v21 < 0.5 )
    {
      ResourceTextureD3D::GetSplitDims(v16, 1u, &v79, &v78);
      v22 = 1;
      v30 = (float)(0x400 / v79);
      v27 = (float)((float)(v18 - 0.5) * 2.0) * v30;
      v28 = (float)((float)(v20 - 0.5) * 2.0) * v30;
      v31 = (float)(int)(2 * (0x400 / v78));
      v25 = v19 * v31;
      v26 = v21 * v31;
LABEL_13:
      v80.m128i_i64[1] = __PAIR64__(LODWORD(v26), LODWORD(v28));
      v80.m128i_i64[0] = __PAIR64__(LODWORD(v25), LODWORD(v27));
      SplitTexture = ResourceTextureD3D::GetSplitTexture(v16, v22);
      if ( SplitTexture )
        Material::PostQuad(this, (const __m128i *)a2, &v80, SplitTexture, a5, a6, a7, a8, a9, a10, a11, a12);
      return;
    }
    if ( v20 >= 0.5 && v19 >= 0.5 && v21 >= 0.5 )
    {
      ResourceTextureD3D::GetSplitDims(v16, 3u, &v79, &v78);
      v18 = (float)(v18 - 0.5) * 2.0;
      v20 = (float)(v20 - 0.5) * 2.0;
      v22 = 3;
      v23 = (float)(0x400 / v79);
      v32 = (float)(0x400 / v78);
      v25 = (float)((float)(v19 - 0.5) * 2.0) * v32;
      v26 = (float)((float)(v21 - 0.5) * 2.0) * v32;
      goto LABEL_12;
    }
  }
  v33 = v18 < 0.5 && v20 >= 0.5 || v18 >= 0.5 && v20 < 0.5;
  v34 = v19 < 0.5 && v21 >= 0.5 || v19 >= 0.5 && v21 < 0.5;
  if ( v33 )
  {
    if ( v34 )
    {
      v35 = *a2;
      v36 = a2[1];
      v81[0].m128i_i32[0] = *a2;
      v81[0].m128i_i32[1] = v36;
      if ( v18 > v20 )
      {
        v37 = v81[0].m128i_u32[2];
      }
      else
      {
        v37 = (int)(float)((float)((float)((float)(a2[2] - v35) * (float)(0.5 - v18)) / (float)(v20 - v18)) + (float)v35);
        v81[0].m128i_i32[2] = v37;
      }
      v79 = v37;
      if ( v19 <= v21 )
        v81[0].m128i_i32[3] = (int)(float)((float)((float)((float)(a2[3] - a2[1]) * (float)(0.5 - v19))
                                                 / (float)(v21 - v19))
                                         + (float)a2[1]);
      *(float *)v80.m128i_i32 = v18 * 2.0;
      *(float *)&v80.m128i_i32[1] = v19 * 2.0;
      v80.m128i_i64[1] = 0x3F8000003F800000LL;
      v38 = ResourceTextureD3D::GetSplitTexture(v16, 0);
      if ( v38 )
        Material::PostQuad(this, v81, &v80, v38, a5, a6, a7, a8, a9, a10, a11, a12);
      ResourceTextureD3D::GetSplitDims(v16, 1u, &v77, &v78);
      v39 = a2[2];
      v40 = *(float *)&a3->m128i_i32[1];
      v80.m128i_i32[3] = 1065353216;
      v81[0].m128i_i32[2] = v39;
      v81[0].m128i_i32[0] = v37;
      v80.m128i_i32[0] = 0;
      *(float *)&v80.m128i_i32[1] = (float)((float)(v40 - 0.0) * 2.0) * (float)(0x400 / v78);
      *(float *)&v80.m128i_i32[2] = (float)((float)(*(float *)&a3->m128i_i32[2] - 0.5) * 2.0) * (float)(0x400 / v77);
      v41 = ResourceTextureD3D::GetSplitTexture(v16, 1u);
      if ( v41 )
        Material::PostQuad(this, v81, &v80, v41, a5, a6, a7, a8, a9, a10, a11, a12);
      ResourceTextureD3D::GetSplitDims(v16, 3u, &v77, &v78);
      v42 = a2[3];
      v43 = v81[0].m128i_i32[3];
      v44 = *(float *)&a3->m128i_i32[2];
      v45 = *(float *)&a3->m128i_i32[3];
      v80.m128i_i64[0] = 0;
      v81[0].m128i_i32[3] = v42;
      v81[0].m128i_i32[1] = v43;
      *(float *)&v80.m128i_i32[2] = (float)((float)(v44 - 0.5) * 2.0) * (float)(0x400 / v77);
      *(float *)&v80.m128i_i32[3] = (float)((float)(v45 - 0.5) * 2.0) * (float)(0x400 / v78);
      v46 = ResourceTextureD3D::GetSplitTexture(v16, 3u);
      if ( v46 )
        Material::PostQuad(this, v81, &v80, v46, a5, a6, a7, a8, a9, a10, a11, a12);
      ResourceTextureD3D::GetSplitDims(v16, 2u, &v77, &v78);
      v47 = *a2;
      v48 = *(float *)a3->m128i_i32;
      *(__int64 *)((char *)v80.m128i_i64 + 4) = 0x3F80000000000000LL;
      v81[0].m128i_i32[0] = v47;
      v81[0].m128i_i32[2] = v79;
      *(float *)v80.m128i_i32 = (float)((float)(v48 - 0.0) * 2.0) * (float)(0x400 / v77);
      *(float *)&v80.m128i_i32[3] = (float)((float)(*(float *)&a3->m128i_i32[3] - 0.5) * 2.0) * (float)(0x400 / v78);
      v49 = ResourceTextureD3D::GetSplitTexture(v16, 2u);
      if ( v49 )
LABEL_79:
        Material::PostQuad(this, v81, &v80, v49, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      v50 = *a2;
      v81[0].m128i_i32[1] = a2[1];
      v51 = a2[3];
      v81[0].m128i_i32[0] = v50;
      v81[0].m128i_i32[3] = v51;
      if ( v18 <= v20 )
        v81[0].m128i_i32[2] = (int)(float)((float)((float)((float)(a2[2] - v50) * (float)(0.5 - v18))
                                                 / (float)(v20 - v18))
                                         + (float)v50);
      v52 = v16;
      if ( v19 >= 0.5 )
      {
        ResourceTextureD3D::GetSplitDims(v16, 2u, &v78, &v79);
        v53 = FLOAT_2_0;
        v55 = *(float *)&a3->m128i_i32[1];
        v56 = *(float *)&a3->m128i_i32[3];
        v54 = 2;
        *(float *)v80.m128i_i32 = (float)(*(float *)a3->m128i_i32 - 0.0) * 2.0;
        v57 = (float)(0x400 / v79);
        v52 = v16;
        *(float *)&v80.m128i_i32[1] = (float)((float)(v55 - 0.5) * 2.0) * v57;
        *(float *)&v80.m128i_i32[3] = (float)((float)(v56 - 0.5) * 2.0) * v57;
      }
      else
      {
        v53 = FLOAT_2_0;
        v54 = 0;
        *(float *)v80.m128i_i32 = (float)(v18 - 0.0) * 2.0;
        *(float *)&v80.m128i_i32[1] = (float)(v19 - 0.0) * 2.0;
        *(float *)&v80.m128i_i32[3] = (float)(v21 - 0.0) * 2.0;
      }
      v80.m128i_i32[2] = 1065353216;
      v58 = ResourceTextureD3D::GetSplitTexture(v52, v54);
      if ( v58 )
        Material::PostQuad(this, v81, &v80, v58, a5, a6, a7, a8, a9, a10, a11, a12);
      v81[0].m128i_i32[0] = v81[0].m128i_i32[2];
      v81[0].m128i_i32[2] = a2[2];
      if ( v19 >= 0.5 )
      {
        v59 = 3;
        ResourceTextureD3D::GetSplitDims(v16, 3u, &v78, &v79);
        v63 = (float)(*(float *)&a3->m128i_i32[2] - 0.5) * v53;
        v61 = (float)(0x400 / v79);
        *(float *)&v80.m128i_i32[1] = (float)((float)(*(float *)&a3->m128i_i32[1] - 0.5) * v53) * v61;
        *(float *)&v80.m128i_i32[2] = v63 * (float)(0x400 / v78);
        v62 = *(float *)&a3->m128i_i32[3] - 0.5;
      }
      else
      {
        v59 = 1;
        ResourceTextureD3D::GetSplitDims(v16, 1u, &v78, &v79);
        v60 = (float)(*(float *)&a3->m128i_i32[2] - 0.5) * v53;
        v61 = (float)(0x400 / v79);
        *(float *)&v80.m128i_i32[1] = (float)((float)(*(float *)&a3->m128i_i32[1] - 0.0) * v53) * v61;
        *(float *)&v80.m128i_i32[2] = v60 * (float)(0x400 / v78);
        v62 = *(float *)&a3->m128i_i32[3] - 0.0;
      }
      v80.m128i_i32[0] = 0;
      *(float *)&v80.m128i_i32[3] = (float)(v62 * v53) * v61;
      v49 = ResourceTextureD3D::GetSplitTexture(v16, v59);
      if ( v49 )
        goto LABEL_79;
    }
  }
  else if ( v34 )
  {
    v81[0].m128i_i32[0] = *a2;
    *(__int64 *)((char *)v81[0].m128i_i64 + 4) = *(_QWORD *)(a2 + 1);
    if ( v19 <= v21 )
      v81[0].m128i_i32[3] = (int)(float)((float)((float)((float)(a2[3] - a2[1]) * (float)(0.5 - v19))
                                               / (float)(v21 - v19))
                                       + (float)a2[1]);
    v64 = v16;
    if ( v18 >= 0.5 )
    {
      ResourceTextureD3D::GetSplitDims(v16, 1u, &v79, &v78);
      v65 = FLOAT_2_0;
      v67 = (float)(*(float *)&a3->m128i_i32[1] - 0.0) * 2.0;
      v66 = 1;
      v68 = (float)(0x400 / v79);
      *(float *)v80.m128i_i32 = (float)((float)(*(float *)a3->m128i_i32 - 0.5) * 2.0) * v68;
      v64 = v16;
      *(float *)&v80.m128i_i32[1] = v67 * (float)(0x400 / v78);
      *(float *)&v80.m128i_i32[2] = (float)((float)(*(float *)&a3->m128i_i32[2] - 0.5) * 2.0) * v68;
    }
    else
    {
      v65 = FLOAT_2_0;
      v66 = 0;
      *(float *)v80.m128i_i32 = (float)(v18 - 0.0) * 2.0;
      *(float *)&v80.m128i_i32[1] = (float)(v19 - 0.0) * 2.0;
      *(float *)&v80.m128i_i32[2] = (float)(v20 - 0.0) * 2.0;
    }
    v80.m128i_i32[3] = 1065353216;
    v69 = ResourceTextureD3D::GetSplitTexture(v64, v66);
    if ( v69 )
      Material::PostQuad(this, v81, &v80, v69, a5, a6, a7, a8, a9, a10, a11, a12);
    v81[0].m128i_i32[1] = v81[0].m128i_i32[3];
    v81[0].m128i_i32[3] = a2[3];
    if ( v18 >= 0.5 )
    {
      v70 = 3;
      ResourceTextureD3D::GetSplitDims(v16, 3u, &v79, &v78);
      v71 = *(float *)a3->m128i_i32 - 0.5;
      v72 = *(float *)&a3->m128i_i32[2] - 0.5;
    }
    else
    {
      v70 = 2;
      ResourceTextureD3D::GetSplitDims(v16, 2u, &v79, &v78);
      v71 = *(float *)a3->m128i_i32 - 0.0;
      v72 = *(float *)&a3->m128i_i32[2] - 0.0;
    }
    v73 = (float)(0x400 / v79);
    *(float *)&v74 = (float)(v71 * v65) * v73;
    *(float *)&v75 = (float)(v72 * v65) * v73;
    v76 = *(float *)&a3->m128i_i32[3];
    v80.m128i_i64[0] = v74;
    v80.m128i_i32[2] = v75;
    *(float *)&v80.m128i_i32[3] = (float)((float)(v76 - 0.5) * v65) * (float)(0x400 / v78);
    v49 = ResourceTextureD3D::GetSplitTexture(v16, v70);
    if ( v49 )
      goto LABEL_79;
  }
}
