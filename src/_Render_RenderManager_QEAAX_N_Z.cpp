void __fastcall RenderManager::Render(Render *this, char a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  IDirect3D9 *v15; // rax
  struct IDirect3D9 *v16; // rbx
  char v17; // bl
  signed int v18; // eax
  signed int v19; // esi
  const unsigned __int16 *HResult; // rax
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  signed int v25; // eax
  const unsigned __int16 *v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // r8d
  float v30; // xmm1_4
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  char v34; // al
  __int64 v35; // rcx
  __m128i v36; // xmm2
  int v37; // eax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  struct ResourceBase *Resource; // rax
  __int64 v41; // r8
  _DWORD *v42; // rbp
  unsigned int v43; // ebx
  _DWORD *v44; // r12
  unsigned int i; // ebx
  unsigned int v46; // r14d
  __int64 v47; // r12
  __int64 v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rax
  ResourceManager *v51; // r12
  int v52; // r15d
  unsigned int v53; // r14d
  __int64 v54; // rbp
  __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // bl
  const unsigned __int16 *v58; // rax
  __int64 v59; // [rsp+20h] [rbp-228h]
  __int64 v60; // [rsp+20h] [rbp-228h]
  float v61; // [rsp+40h] [rbp-208h] BYREF
  float v62; // [rsp+44h] [rbp-204h]
  float v63; // [rsp+48h] [rbp-200h]
  float v64; // [rsp+4Ch] [rbp-1FCh]
  int v65; // [rsp+50h] [rbp-1F8h]
  int v66; // [rsp+54h] [rbp-1F4h]
  int v67; // [rsp+58h] [rbp-1F0h]
  float v68; // [rsp+5Ch] [rbp-1ECh]
  float v69; // [rsp+60h] [rbp-1E8h]
  float v70; // [rsp+64h] [rbp-1E4h]
  float v71; // [rsp+68h] [rbp-1E0h]
  int v72; // [rsp+6Ch] [rbp-1DCh]
  int v73; // [rsp+70h] [rbp-1D8h]
  int v74; // [rsp+74h] [rbp-1D4h]
  float v75; // [rsp+78h] [rbp-1D0h]
  float v76; // [rsp+7Ch] [rbp-1CCh]
  float v77; // [rsp+80h] [rbp-1C8h]
  float v78; // [rsp+84h] [rbp-1C4h]
  int v79; // [rsp+88h] [rbp-1C0h]
  int v80; // [rsp+8Ch] [rbp-1BCh]
  int v81; // [rsp+90h] [rbp-1B8h]
  float v82; // [rsp+94h] [rbp-1B4h]
  float v83; // [rsp+98h] [rbp-1B0h]
  float v84; // [rsp+9Ch] [rbp-1ACh]
  float v85; // [rsp+A0h] [rbp-1A8h]
  int v86; // [rsp+A4h] [rbp-1A4h]
  int v87; // [rsp+A8h] [rbp-1A0h]
  int v88; // [rsp+ACh] [rbp-19Ch]
  LARGE_INTEGER Frequency; // [rsp+B0h] [rbp-198h] BYREF
  struct _D3DCAPS9 v90; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v91; // [rsp+250h] [rbp+8h] BYREF
  char v92; // [rsp+258h] [rbp+10h]
  LARGE_INTEGER v93; // [rsp+260h] [rbp+18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+268h] [rbp+20h] BYREF

  v92 = a2;
  v3 = *((_DWORD *)this + 53);
  if ( !v3 || *((_BYTE *)this + 76) )
    return;
  if ( (v3 & 0x100) == 0 )
    goto LABEL_39;
  v4 = v3 - 257;
  if ( !v4 )
  {
    Engine_ResourceLoadFail();
    RenderManager::ReleaseDefaultResources(this);
    if ( RenderManager::Reset(this) && RenderManager::RecreateDefaultResources(this) )
      RenderManager::SetEngineState(this, 4096);
    goto LABEL_39;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 4;
    if ( v7 )
    {
      v8 = v7 - 8;
      if ( v8 )
      {
        v9 = v8 - 16;
        if ( v9 )
        {
          if ( v9 != 32 )
          {
LABEL_39:
            if ( (*((_DWORD *)this + 53) & 0x1000) != 0 )
            {
              if ( g_bDebugEnabled )
              {
                v17 = *((_BYTE *)this + 210);
                if ( v17 != ((GetKeyState(117) & 0x1F40) != 0) )
                {
                  *((_BYTE *)this + 20) = 1;
                  *((_BYTE *)this + 88) = 1;
                  *((_BYTE *)this + 210) = v17 == 0;
                }
              }
              if ( *((_BYTE *)this + 88) )
              {
                QueryPerformanceCounter(&PerformanceCount);
                v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 328LL))(*((_QWORD *)this + 10));
                v19 = v18;
                if ( v18 < 0 )
                {
                  HResult = GetHResult(v18);
                  Log(2u, 1851, "RenderManager.cpp", L"Error in BeginScene() %x(%s)", v21, HResult);
                }
                v22 = *((_QWORD *)this + 15);
                *((_BYTE *)this + 211) = 1;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
                v23 = *((_QWORD *)this + 10);
                *((_BYTE *)this + 211) = 0;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 456LL))(v23, 22, 1);
                g_uiFillCount = 0;
                if ( *((_BYTE *)this + 40) && !*((_QWORD *)this + 19) || *((_BYTE *)this + 210) )
                {
                  v24 = 0;
                  if ( !*((_BYTE *)this + 210) )
                    v24 = *((_DWORD *)this + 2);
                  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, _DWORD))(**((_QWORD **)this + 10) + 344LL))(
                          *((_QWORD *)this + 10),
                          0,
                          0,
                          1,
                          v24,
                          1065353216,
                          0);
                  v19 = v25;
                  if ( v25 < 0 )
                  {
                    v26 = GetHResult(v25);
                    LODWORD(v59) = v27;
                    Log(2u, 1877, "RenderManager.cpp", L"Error in Clear() %x(%s)", v59, v26);
                  }
                }
                v28 = *((_QWORD *)this + 19);
                *((_BYTE *)this + 209) = 0;
                if ( v28 )
                {
                  v29 = 496;
                  v30 = (float)*(int *)(*((_QWORD *)this + 8) + 8LL) / (float)*(int *)(*((_QWORD *)this + 8) + 12LL);
                  v31 = (int)(float)((float)(v30 * 496.0) + 0.5);
                  if ( v31 > 800 )
                  {
                    v31 = 800;
                    v29 = (int)(float)((float)(800.0 / v30) + 0.5);
                  }
                  *(_DWORD *)(v28 + 452) = v31;
                  *(_DWORD *)(*((_QWORD *)this + 19) + 456LL) = v29;
                  v32 = *((_DWORD *)this + 40);
                  if ( v32 )
                  {
                    v33 = v32 - 1;
                    if ( v33 )
                    {
                      if ( v33 == 1 )
                      {
                        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 4LL) = 0;
                        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 8LL) = 0;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 4LL) = 0;
                      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 8LL) = 496
                                                                                     - *(_DWORD *)(*((_QWORD *)this + 19)
                                                                                                 + 456LL);
                    }
                  }
                  else
                  {
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 4LL) = 400
                                                                                   - (*(_DWORD *)(*((_QWORD *)this + 19)
                                                                                                + 452LL) >> 1);
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 416LL) + 8LL) = 248
                                                                                   - (*(_DWORD *)(*((_QWORD *)this + 19)
                                                                                                + 456LL) >> 1);
                  }
                  NodeSprite::UpdateCurrentUVs(*((NodeSprite **)this + 19));
                  v34 = *((_BYTE *)this + 210);
                  v61 = 0.0;
                  v64 = FLOAT_0_5;
                  v63 = FLOAT_0_50999999;
                  v70 = FLOAT_0_50999999;
                  v77 = FLOAT_0_50999999;
                  v65 = v34 != 0 ? 1090519039 : -1;
                  v72 = v65;
                  v79 = v65;
                  v84 = FLOAT_0_50999999;
                  v71 = FLOAT_0_5;
                  v78 = FLOAT_0_5;
                  v86 = v65;
                  v35 = *((_QWORD *)this + 8);
                  v85 = FLOAT_0_5;
                  v62 = (float)*(int *)(v35 + 12);
                  v68 = (float)*(int *)(v35 + 8);
                  v69 = (float)*(int *)(v35 + 12);
                  v36 = _mm_cvtsi32_si128(*(_DWORD *)(v35 + 8));
                  v76 = 0.0;
                  v82 = 0.0;
                  v83 = 0.0;
                  v75 = _mm_cvtepi32_ps(v36).m128_f32[0];
                  v37 = *(_DWORD *)(v35 + 8) * *(_DWORD *)(v35 + 12);
                  v38 = *((_QWORD *)this + 10);
                  v68 = v68 + (float)(0.0 - 0.5);
                  v61 = 0.0 - 0.5;
                  v82 = 0.0 - 0.5;
                  v62 = v62 + (float)(0.0 - 0.5);
                  g_uiFillCount += v37;
                  v39 = (_DWORD *)*((_QWORD *)this + 19);
                  v76 = 0.0 - 0.5;
                  v83 = 0.0 - 0.5;
                  v75 = v75 + (float)(0.0 - 0.5);
                  v69 = v69 + (float)(0.0 - 0.5);
                  v66 = v39[108];
                  v67 = v39[111];
                  v73 = v39[110];
                  v74 = v39[111];
                  v80 = v39[110];
                  v81 = v39[109];
                  v87 = v39[108];
                  v88 = v39[109];
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 712LL))(v38, 324);
                  (*(void (__fastcall **)(_QWORD, __int64, bool))(**((_QWORD **)this + 10) + 456LL))(
                    *((_QWORD *)this + 10),
                    27,
                    *((_BYTE *)this + 210) != 0);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 456LL))(
                    *((_QWORD *)this + 10),
                    19,
                    5);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 456LL))(
                    *((_QWORD *)this + 10),
                    20,
                    6);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 552LL))(
                    *((_QWORD *)this + 10),
                    0,
                    5,
                    2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 552LL))(
                    *((_QWORD *)this + 10),
                    0,
                    6,
                    2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 552LL))(
                    *((_QWORD *)this + 10),
                    0,
                    7,
                    2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 552LL))(
                    *((_QWORD *)this + 10),
                    0,
                    1,
                    3);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 552LL))(
                    *((_QWORD *)this + 10),
                    0,
                    2,
                    3);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    1,
                    (unsigned int)(*((_BYTE *)this + 210) != 0) + 2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    2,
                    2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    3,
                    0);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    4,
                    *((_BYTE *)this + 210) != 0 ? 3 : 1);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    5,
                    2);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    0,
                    6,
                    0);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    1,
                    1,
                    1);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 10) + 536LL))(
                    *((_QWORD *)this + 10),
                    1,
                    4,
                    1);
                  Resource = ResourceManager::GetResource(
                               g_pResourceManager,
                               **(_DWORD **)(*((_QWORD *)this + 19) + 416LL),
                               0);
                  if ( !*((_BYTE *)this + 209) )
                  {
                    if ( Resource )
                      v41 = *((_QWORD *)Resource + 6);
                    else
                      v41 = 0;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 10) + 520LL))(
                      *((_QWORD *)this + 10),
                      0,
                      v41);
                    (*(void (__fastcall **)(_QWORD, __int64, __int64, float *, int))(**((_QWORD **)this + 10) + 664LL))(
                      *((_QWORD *)this + 10),
                      6,
                      2,
                      &v61,
                      28);
                  }
                }
                v42 = &NodeBase::m_RenderLayerNodeCount;
                v43 = 0;
                v44 = &NodeBase::m_RenderLayerNodeCount;
                do
                {
                  if ( *v44 )
                    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 88LL))(
                      *((_QWORD *)this + 15),
                      v43);
                  ++v43;
                  ++v44;
                }
                while ( v43 < 6 );
                for ( i = 0; i < 6; ++i )
                {
                  if ( *v42 )
                  {
                    v46 = 0;
                    if ( *((_DWORD *)this + 32) )
                    {
                      v47 = 0;
                      do
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v47 + *((_QWORD *)this + 18)) + 88LL))(
                          *(_QWORD *)(v47 + *((_QWORD *)this + 18)),
                          i);
                        ++v46;
                        v47 += 8;
                      }
                      while ( v46 < *((_DWORD *)this + 32) );
                    }
                  }
                  ++v42;
                }
                if ( !*((_BYTE *)this + 209) )
                {
                  (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)this + 7) + 32LL))(**((_QWORD **)this + 7));
                  if ( !*((_BYTE *)this + 209) )
                  {
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 8LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL));
                    if ( !*((_BYTE *)this + 209) )
                      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL));
                  }
                }
                if ( g_bLogFillRate )
                {
                  LODWORD(v59) = g_uiFillCount;
                  Log(2u, 2088, "RenderManager.cpp", L"Rendered %u pixels", v59);
                }
                v48 = *((_QWORD *)this + 10);
                v91 = 0;
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v48 + 304LL))(v48, 0, &v91);
                v49 = (__int64 *)*((_QWORD *)this + 10);
                v50 = *v49;
                if ( *((_BYTE *)this + 208) )
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v50 + 296))(v49, 0, *((_QWORD *)this + 23));
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD))(**((_QWORD **)this + 10)
                                                                                                  + 344LL))(
                    *((_QWORD *)this + 10),
                    0,
                    0,
                    1,
                    0,
                    0,
                    0);
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 256LL))(
                    *((_QWORD *)this + 10),
                    *((_QWORD *)this + 24),
                    *((_QWORD *)this + 25));
                  *((_BYTE *)this + 208) = 0;
                }
                else
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v50 + 296))(v49, 0, *((_QWORD *)this + 24));
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD))(**((_QWORD **)this + 10)
                                                                                                  + 344LL))(
                    *((_QWORD *)this + 10),
                    0,
                    0,
                    1,
                    0,
                    0,
                    0);
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 256LL))(
                    *((_QWORD *)this + 10),
                    *((_QWORD *)this + 23),
                    *((_QWORD *)this + 25));
                  *((_BYTE *)this + 208) = 1;
                }
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 10) + 296LL))(
                  *((_QWORD *)this + 10),
                  0,
                  v91);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 336LL))(*((_QWORD *)this + 10));
                v51 = g_pResourceManager;
                v52 = *((_DWORD *)g_pRenderManager + 44);
                v53 = 0;
                if ( *((_DWORD *)g_pResourceManager + 14) )
                {
                  v54 = 0;
                  do
                  {
                    v55 = *((_QWORD *)v51 + 9);
                    if ( v52 - *(_DWORD *)(*(_QWORD *)(v55 + v54) + 16LL) > (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v55 + v54) + 24LL))(*(_QWORD *)(v55 + v54)) )
                    {
                      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v51 + 9) + v54) + 8LL))(*(_QWORD *)(*((_QWORD *)v51 + 9) + v54)) )
                      {
                        v56 = *(_QWORD *)(*((_QWORD *)v51 + 9) + v54);
                        if ( !*(_BYTE *)(v56 + 20) )
                        {
                          Log(4u, 419, "ResourceManager.cpp", L"Purging %s", *(_QWORD *)(v56 + 32));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v51 + 9) + v54) + 40LL))(*(_QWORD *)(*((_QWORD *)v51 + 9) + v54));
                        }
                      }
                    }
                    ++v53;
                    v54 += 8;
                  }
                  while ( v53 < *((_DWORD *)v51 + 14) );
                }
                v57 = v92;
                *((_BYTE *)this + 88) = 0;
                if ( v57 )
                {
                  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10)
                                                                                          + 136LL))(
                          *((_QWORD *)this + 10),
                          0,
                          0,
                          0,
                          0);
                  if ( v19 == -2005530520 )
                    RenderManager::SetEngineState(this, 260);
                }
                if ( *((_BYTE *)this + 210) )
                {
                  QueryPerformanceCounter(&v93);
                  QueryPerformanceFrequency(&Frequency);
                  Log(
                    2u,
                    L"Render Time: %f, fill: %d",
                    (double)(v93.LowPart - PerformanceCount.LowPart) / (double)(int)Frequency.LowPart,
                    g_uiFillCount);
                }
                if ( v57 && v19 < 0 )
                {
                  v58 = GetHResult(v19);
                  LODWORD(v60) = v19;
                  Log(2u, 2156, "RenderManager.cpp", L"Present Failed: %x(%s)", v60, v58);
                }
                else
                {
                  ++*((_DWORD *)this + 44);
                }
              }
            }
            return;
          }
        }
      }
    }
LABEL_11:
    RenderManager::ReleaseDefaultResources(this);
    ResourceManager::ReleaseDeviceDependentResources(g_pResourceManager);
    v10 = (_QWORD *)((char *)this + 96);
    v11 = 3;
    do
    {
      if ( *v10 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 8LL))(*v10, 1);
      *v10++ = 0;
      --v11;
    }
    while ( v11 );
    v12 = *((_QWORD *)this + 25);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *((_QWORD *)this + 25) = 0;
    }
    v13 = *((_QWORD *)this + 10);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *((_QWORD *)this + 10) = 0;
    }
    *((_BYTE *)this + 76) = 1;
    if ( RenderManager::RecreateAllResources(this) )
      RenderManager::SetEngineState(this, 4096);
    *((_BYTE *)this + 76) = 0;
    goto LABEL_39;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
  if ( v14 == -2005530520 )
  {
    v15 = Direct3DCreate9(0x20u);
    v16 = v15;
    if ( v15 )
    {
      if ( ((unsigned int (__fastcall *)(IDirect3D9 *))v15->lpVtbl->GetAdapterCount)(v15)
        && RenderManager::FindAdapter(this, v16, &v90) )
      {
        RenderManager::SetEngineState(this, 320);
      }
      ((void (__fastcall *)(struct IDirect3D9 *))v16->lpVtbl->Release)(v16);
    }
  }
  else
  {
    if ( v14 == -2005530519 )
    {
      Log(2u, 1704, "RenderManager.cpp", L"Resuming after lost device");
      RenderManager::ReleaseDefaultResources(this);
      if ( !RenderManager::Reset(this) )
        return;
    }
    else
    {
      if ( v14 )
      {
        Sleep(0x64u);
        return;
      }
      RenderManager::ReleaseDefaultResources(this);
    }
    if ( RenderManager::RecreateDefaultResources(this) )
      RenderManager::SetEngineState(this, 4096);
  }
}
