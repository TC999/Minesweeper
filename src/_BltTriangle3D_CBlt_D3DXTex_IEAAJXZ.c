__int64 __fastcall D3DXTex::CBlt::BltTriangle3D(D3DXTex::CBlt *this)
{
  int v1; // ebx
  _DWORD *v3; // r12
  _QWORD *v4; // r13
  BOOL v5; // r8d
  _DWORD *v6; // r15
  unsigned int *v7; // r14
  BOOL v8; // edi
  BOOL v9; // ebx
  unsigned int *v10; // rbp
  unsigned int *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  bool v15; // cf
  size_t v16; // rax
  _DWORD *v17; // rax
  int v18; // ecx
  _DWORD *i; // rax
  size_t v20; // rax
  float *v21; // r10
  unsigned int *v22; // r8
  unsigned int *v23; // rax
  unsigned int *v24; // r9
  unsigned int *v25; // rdx
  unsigned int v26; // edx
  float *v27; // r15
  unsigned __int64 v28; // r14
  unsigned int *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  size_t v32; // rax
  void *v33; // rax
  unsigned int v34; // ebp
  unsigned int *v35; // rdi
  unsigned int *v36; // r13
  unsigned __int64 v37; // rbx
  float *v38; // rax
  unsigned int *v39; // r11
  float *v40; // r13
  float *v41; // r8
  float *v42; // r9
  unsigned int *v43; // rdx
  __int64 v44; // r10
  float *v45; // rcx
  float v46; // xmm1_4
  __int64 v47; // rax
  _DWORD *v48; // rbx
  __int64 v50; // rax
  unsigned int j; // edi
  int v52; // r8d
  __int64 v53; // rcx
  unsigned int v54; // edx
  float *v55; // rcx
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  unsigned int v60; // edx
  float *v61; // rcx
  float v62; // xmm0_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  unsigned int v66; // edx
  float *v67; // rcx
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  unsigned int v72; // edi
  __int64 v73; // rbx
  void **k; // rsi
  unsigned int *v76; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+28h] [rbp-B0h]
  unsigned int *v78; // [rsp+30h] [rbp-A8h]
  unsigned int *Block; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v80; // [rsp+40h] [rbp-98h]
  unsigned int *v81; // [rsp+48h] [rbp-90h]
  unsigned __int64 v82; // [rsp+58h] [rbp-80h]
  unsigned int v83; // [rsp+E0h] [rbp+8h]
  float *v84; // [rsp+E8h] [rbp+10h]
  _QWORD *v85; // [rsp+F0h] [rbp+18h]
  _DWORD *v86; // [rsp+F8h] [rbp+20h]

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  v84 = 0;
  v4 = 0;
  v5 = (v1 & 0x10000) == 0;
  v6 = 0;
  v7 = 0;
  v85 = 0;
  v8 = (v1 & 0x20000) == 0;
  v9 = (v1 & 0x40000) == 0;
  v10 = D3DXTex::TF_SetupTriangle(*(_DWORD *)(*(_QWORD *)this + 136LL), *(_DWORD *)(*((_QWORD *)this + 1) + 136LL), v5);
  Block = v10;
  if ( v10
    && (v6 = D3DXTex::TF_SetupTriangle(
               *(_DWORD *)(*(_QWORD *)this + 140LL),
               *(_DWORD *)(*((_QWORD *)this + 1) + 140LL),
               v8),
        (v86 = v6) != 0)
    && (v11 = D3DXTex::TF_SetupTriangle(
                *(_DWORD *)(*(_QWORD *)this + 144LL),
                *(_DWORD *)(*((_QWORD *)this + 1) + 144LL),
                v9),
        v7 = v11,
        (v78 = v11) != 0) )
  {
    v12 = *(unsigned int *)(*((_QWORD *)this + 1) + 144LL);
    v13 = (unsigned __int64)v11 + *v11;
    v76 = (unsigned int *)((char *)v10 + *v10);
    v82 = v13;
    v77 = (unsigned __int64)v6 + (unsigned int)*v6;
    v14 = 24 * v12;
    if ( !is_mul_ok(v12, 0x18u) )
      v14 = -1;
    v15 = __CFADD__(v14, 8);
    v16 = v14 + 8;
    if ( v15 )
      v16 = -1;
    v17 = operator new(v16, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( v17 )
    {
      v18 = v12 - 1;
      v3 = v17 + 2;
      *v17 = v12;
      for ( i = v17 + 2; v18 >= 0; --v18 )
      {
        *(_QWORD *)i = 0;
        *((_QWORD *)i + 1) = 0;
        i[4] = 0;
        i += 6;
      }
    }
    if ( !v3 )
      goto LABEL_123;
    v20 = 16LL * *(unsigned int *)(*(_QWORD *)this + 136LL);
    if ( !is_mul_ok(*(unsigned int *)(*(_QWORD *)this + 136LL), 0x10u) )
      v20 = -1;
    v21 = (float *)operator new(v20, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v84 = v21;
    if ( v21 )
    {
      v22 = v7 + 1;
      v23 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) < v13 )
      {
        do
        {
          v24 = v23 + 1;
          v25 = (unsigned int *)((char *)v23 + *v23);
          while ( v24 < v25 )
          {
            ++v3[6 * *v24 + 4];
            v24 += 2;
          }
          v23 = v25;
        }
        while ( (unsigned __int64)v25 < v13 );
      }
      v26 = 0;
      v83 = 0;
      if ( (unsigned __int64)v22 < v13 )
      {
        while ( 1 )
        {
          v27 = (float *)(v22 + 1);
          v28 = (unsigned __int64)v22 + *v22;
          v81 = v22 + 1;
          v29 = v22 + 1;
          v80 = v28;
          if ( (unsigned __int64)(v22 + 1) < v28 )
          {
            while ( 1 )
            {
              v30 = *v29;
              v31 = 3 * v30;
              if ( !*(_QWORD *)&v3[6 * v30] )
              {
                if ( v4 )
                {
                  *(_QWORD *)&v3[6 * v30] = *v4;
                  *v4 = 0;
                  v4 = (_QWORD *)v4[1];
                  v85 = v4;
                }
                else
                {
                  v32 = 16LL
                      * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 1) + 136LL)
                                     * *(_DWORD *)(*((_QWORD *)this + 1) + 140LL));
                  if ( !is_mul_ok(
                          (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 1) + 136LL)
                                       * *(_DWORD *)(*((_QWORD *)this + 1) + 140LL)),
                          0x10u) )
                    v32 = -1;
                  v33 = operator new(v32, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
                  *(_QWORD *)&v3[2 * v31] = v33;
                  if ( !v33 )
                  {
                    v7 = v78;
                    v6 = v86;
                    goto LABEL_123;
                  }
                }
                memset(
                  *(void **)&v3[2 * v31],
                  0,
                  16LL
                * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 1) + 136LL) * *(_DWORD *)(*((_QWORD *)this + 1) + 140LL)));
              }
              v29 += 2;
              if ( (unsigned __int64)v29 >= v28 )
              {
                v21 = v84;
                v26 = v83;
                break;
              }
            }
          }
          v34 = 0;
          v35 = v86 + 1;
          if ( (unsigned __int64)(v86 + 1) < v77 )
          {
            v36 = Block + 1;
            while ( 1 )
            {
              v37 = (unsigned __int64)v35 + *v35;
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, float *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                v34,
                v26,
                v21);
              v38 = (float *)v76;
              v39 = v36;
              if ( v36 < v76 )
              {
                v40 = v84 + 2;
                do
                {
                  v41 = v27;
                  v42 = (float *)((char *)v39 + *v39);
                  if ( (unsigned __int64)v27 < v28 )
                  {
                    do
                    {
                      v43 = v35 + 1;
                      if ( (unsigned __int64)(v35 + 1) < v37 )
                      {
                        do
                        {
                          v44 = *(_QWORD *)&v3[6 * *(unsigned int *)v41]
                              + 16LL * *v43 * *(_DWORD *)(*((_QWORD *)this + 1) + 136LL);
                          v45 = (float *)(v39 + 1);
                          if ( v39 + 1 < (unsigned int *)v42 )
                          {
                            do
                            {
                              v46 = (float)(v41[1] * *((float *)v43 + 1)) * v45[1];
                              *(float *)(v44 + 16LL * *(unsigned int *)v45) = (float)(v46 * *(v40 - 2))
                                                                            + *(float *)(v44
                                                                                       + 16LL * *(unsigned int *)v45);
                              *(float *)(v44 + 16LL * *(unsigned int *)v45 + 4) = (float)(v46 * *(v40 - 1))
                                                                                + *(float *)(v44
                                                                                           + 16LL * *(unsigned int *)v45
                                                                                           + 4);
                              *(float *)(v44 + 16LL * *(unsigned int *)v45 + 8) = (float)(v46 * *v40)
                                                                                + *(float *)(v44
                                                                                           + 16LL * *(unsigned int *)v45
                                                                                           + 8);
                              v47 = *(unsigned int *)v45;
                              v45 += 2;
                              *(float *)(v44 + 16 * v47 + 12) = (float)(v46 * v40[1]) + *(float *)(v44 + 16 * v47 + 12);
                            }
                            while ( v45 < v42 );
                          }
                          v43 += 2;
                        }
                        while ( (unsigned __int64)v43 < v37 );
                        v28 = v80;
                      }
                      v41 += 2;
                    }
                    while ( (unsigned __int64)v41 < v28 );
                    v27 = (float *)v81;
                    v38 = (float *)v76;
                  }
                  v40 += 4;
                  v39 = (unsigned int *)v42;
                }
                while ( v42 < v38 );
                v36 = Block + 1;
              }
              v26 = v83;
              ++v34;
              v35 = (unsigned int *)v37;
              if ( v37 >= v77 )
                break;
              v21 = v84;
            }
            v4 = v85;
          }
          if ( (unsigned __int64)v27 < v28 )
          {
            do
            {
              v48 = &v3[6 * *(unsigned int *)v27];
              if ( v48[4]-- == 1 )
              {
                v50 = *((_QWORD *)this + 1);
                for ( j = 0; j < *(_DWORD *)(v50 + 140); ++j )
                {
                  v52 = *(_DWORD *)(v50 + 136);
                  v53 = *(_QWORD *)v48 + 16LL * j * v52;
                  switch ( *(_DWORD *)(*(_QWORD *)this + 12LL) )
                  {
                    case 1:
                      v66 = 0;
                      if ( v52 )
                      {
                        v67 = (float *)(v53 + 8);
                        do
                        {
                          v68 = *(v67 - 2);
                          if ( v68 >= 0.0 )
                          {
                            if ( v68 >= 1.0 )
                              v68 = 1.0;
                          }
                          else
                          {
                            v68 = 0.0;
                          }
                          v69 = *(v67 - 1);
                          *(v67 - 2) = v68;
                          if ( v69 >= 0.0 )
                          {
                            if ( v69 >= 1.0 )
                              v69 = 1.0;
                          }
                          else
                          {
                            v69 = 0.0;
                          }
                          v70 = *v67;
                          *(v67 - 1) = v69;
                          if ( v70 >= 0.0 )
                          {
                            if ( v70 >= 1.0 )
                              v70 = 1.0;
                          }
                          else
                          {
                            v70 = 0.0;
                          }
                          v71 = v67[1];
                          *v67 = v70;
                          if ( v71 >= 0.0 )
                          {
                            if ( v71 >= 1.0 )
                              v71 = 1.0;
                          }
                          else
                          {
                            v71 = 0.0;
                          }
                          v67[1] = v71;
                          ++v66;
                          v67 += 4;
                        }
                        while ( v66 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                      }
                      break;
                    case 2:
                      v60 = 0;
                      if ( v52 )
                      {
                        v61 = (float *)(v53 + 8);
                        do
                        {
                          v62 = *(v61 - 2);
                          if ( v62 >= -1.0 )
                          {
                            if ( v62 >= 1.0 )
                              v62 = 1.0;
                          }
                          else
                          {
                            v62 = FLOAT_N1_0;
                          }
                          v63 = *(v61 - 1);
                          *(v61 - 2) = v62;
                          if ( v63 >= -1.0 )
                          {
                            if ( v63 >= 1.0 )
                              v63 = 1.0;
                          }
                          else
                          {
                            v63 = FLOAT_N1_0;
                          }
                          v64 = *v61;
                          *(v61 - 1) = v63;
                          if ( v64 >= -1.0 )
                          {
                            if ( v64 >= 1.0 )
                              v64 = 1.0;
                          }
                          else
                          {
                            v64 = FLOAT_N1_0;
                          }
                          v65 = v61[1];
                          *v61 = v64;
                          if ( v65 >= 0.0 )
                          {
                            if ( v65 >= 1.0 )
                              v65 = 1.0;
                          }
                          else
                          {
                            v65 = 0.0;
                          }
                          v61[1] = v65;
                          ++v60;
                          v61 += 4;
                        }
                        while ( v60 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                      }
                      break;
                    case 3:
                      v54 = 0;
                      if ( v52 )
                      {
                        v55 = (float *)(v53 + 8);
                        do
                        {
                          v56 = *(v55 - 2);
                          if ( v56 >= -1.0 )
                          {
                            if ( v56 >= 1.0 )
                              v56 = 1.0;
                          }
                          else
                          {
                            v56 = FLOAT_N1_0;
                          }
                          v57 = *(v55 - 1);
                          *(v55 - 2) = v56;
                          if ( v57 >= -1.0 )
                          {
                            if ( v57 >= 1.0 )
                              v57 = 1.0;
                          }
                          else
                          {
                            v57 = FLOAT_N1_0;
                          }
                          v58 = *v55;
                          *(v55 - 1) = v57;
                          if ( v58 >= -1.0 )
                          {
                            if ( v58 >= 1.0 )
                              v58 = 1.0;
                          }
                          else
                          {
                            v58 = FLOAT_N1_0;
                          }
                          v59 = v55[1];
                          *v55 = v58;
                          if ( v59 >= -1.0 )
                          {
                            if ( v59 >= 1.0 )
                              v59 = 1.0;
                          }
                          else
                          {
                            v59 = FLOAT_N1_0;
                          }
                          v55[1] = v59;
                          ++v54;
                          v55 += 4;
                        }
                        while ( v54 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                      }
                      break;
                  }
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 16LL))(
                    *((_QWORD *)this + 1),
                    j,
                    *(unsigned int *)v27,
                    *(_QWORD *)v48 + 16LL * j * *(_DWORD *)(*((_QWORD *)this + 1) + 136LL));
                  v50 = *((_QWORD *)this + 1);
                }
                *((_QWORD *)v48 + 1) = v4;
                v4 = v48;
              }
              v27 += 2;
            }
            while ( (unsigned __int64)v27 < v28 );
            v85 = v4;
          }
          v22 = (unsigned int *)v28;
          v26 = ++v83;
          if ( v28 >= v82 )
            break;
          v21 = v84;
        }
        v7 = v78;
        v6 = v86;
      }
      v72 = 0;
    }
    else
    {
LABEL_123:
      v72 = -2147024882;
    }
  }
  else
  {
    v72 = -2147467259;
  }
  if ( v3 )
  {
    v73 = (int)*(v3 - 2);
    for ( k = (void **)&v3[6 * v73]; ; operator delete(*k) )
    {
      LODWORD(v73) = v73 - 1;
      if ( (int)v73 < 0 )
        break;
      k -= 3;
    }
    operator delete(v3 - 2);
  }
  operator delete(v7);
  operator delete(v6);
  operator delete(Block);
  operator delete(v84);
  operator delete(0);
  return v72;
}
