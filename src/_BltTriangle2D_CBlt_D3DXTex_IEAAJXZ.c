__int64 __fastcall D3DXTex::CBlt::BltTriangle2D(D3DXTex::CBlt *this)
{
  unsigned int *v1; // r14
  __int64 v3; // rcx
  _DWORD *v4; // r12
  _QWORD *v5; // r15
  float *v6; // r13
  unsigned int v7; // r8d
  BOOL v8; // ebx
  unsigned int *v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  bool v13; // cf
  size_t v14; // rax
  _DWORD *v15; // rax
  int v16; // ecx
  _DWORD *i; // rax
  size_t v18; // rax
  unsigned int *v19; // r8
  unsigned int *v20; // rax
  unsigned int *v21; // r9
  unsigned int *v22; // rdx
  float *v23; // r13
  unsigned __int64 v24; // rbp
  unsigned int *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rsi
  size_t v28; // rax
  void *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int *v31; // r11
  float *v32; // r9
  float *v33; // rdx
  unsigned int *v34; // r8
  unsigned int *v35; // r11
  __int64 v36; // r10
  float *v37; // rcx
  float v38; // xmm1_4
  __int64 v39; // rax
  _QWORD *v40; // rbx
  unsigned int v42; // edx
  __int64 v43; // rcx
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  unsigned int v48; // edx
  __int64 v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  unsigned int v54; // edx
  __int64 v55; // rcx
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  unsigned int v60; // ebx
  __int64 v61; // rdi
  void **j; // rsi
  unsigned __int64 v64; // [rsp+20h] [rbp-88h]
  unsigned int v65; // [rsp+B0h] [rbp+8h]
  float *v66; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v67; // [rsp+C0h] [rbp+18h]
  unsigned int *Block; // [rsp+C8h] [rbp+20h]

  v1 = 0;
  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( *(_DWORD *)(v3 + 144) != 1 || *(_DWORD *)(*(_QWORD *)this + 144LL) != 1 )
    return 2147500037LL;
  v7 = *((_DWORD *)this + 4);
  v8 = ((v7 >> 17) & 1) == 0;
  v9 = D3DXTex::TF_SetupTriangle(*(_DWORD *)(*(_QWORD *)this + 136LL), *(_DWORD *)(v3 + 136), (v7 & 0x10000) == 0);
  Block = v9;
  if ( v9
    && (v1 = D3DXTex::TF_SetupTriangle(
               *(_DWORD *)(*(_QWORD *)this + 140LL),
               *(_DWORD *)(*((_QWORD *)this + 1) + 140LL),
               v8)) != 0 )
  {
    v10 = *(unsigned int *)(*((_QWORD *)this + 1) + 140LL);
    v67 = (unsigned __int64)v9 + *v9;
    v11 = (unsigned __int64)v1 + *v1;
    v64 = v11;
    v12 = 24 * v10;
    if ( !is_mul_ok(v10, 0x18u) )
      v12 = -1;
    v13 = __CFADD__(v12, 8);
    v14 = v12 + 8;
    if ( v13 )
      v14 = -1;
    v15 = operator new(v14, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( v15 )
    {
      v16 = v10 - 1;
      v4 = v15 + 2;
      *v15 = v10;
      for ( i = v15 + 2; v16 >= 0; --v16 )
      {
        *(_QWORD *)i = 0;
        *((_QWORD *)i + 1) = 0;
        i[4] = 0;
        i += 6;
      }
    }
    if ( !v4 )
      goto LABEL_112;
    v18 = 16LL * *(unsigned int *)(*(_QWORD *)this + 136LL);
    if ( !is_mul_ok(*(unsigned int *)(*(_QWORD *)this + 136LL), 0x10u) )
      v18 = -1;
    v6 = (float *)operator new(v18, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v66 = v6;
    if ( v6 )
    {
      v19 = v1 + 1;
      v20 = v1 + 1;
      if ( (unsigned __int64)(v1 + 1) < v11 )
      {
        do
        {
          v21 = v20 + 1;
          v22 = (unsigned int *)((char *)v20 + *v20);
          while ( v21 < v22 )
          {
            ++v4[6 * *v21 + 4];
            v21 += 2;
          }
          v20 = v22;
        }
        while ( (unsigned __int64)v22 < v11 );
      }
      v65 = 0;
      if ( (unsigned __int64)v19 < v11 )
      {
        do
        {
          v23 = (float *)(v19 + 1);
          v24 = (unsigned __int64)v19 + *v19;
          v25 = v19 + 1;
          if ( (unsigned __int64)(v19 + 1) < v24 )
          {
            while ( 1 )
            {
              v26 = *v25;
              v27 = 3 * v26;
              if ( !*(_QWORD *)&v4[6 * v26] )
              {
                if ( v5 )
                {
                  *(_QWORD *)&v4[6 * v26] = *v5;
                  *v5 = 0;
                  v5 = (_QWORD *)v5[1];
                }
                else
                {
                  v28 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
                  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
                    v28 = -1;
                  v29 = operator new(v28, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
                  *(_QWORD *)&v4[2 * v27] = v29;
                  if ( !v29 )
                  {
                    v6 = v66;
                    goto LABEL_112;
                  }
                }
                memset(*(void **)&v4[2 * v27], 0, 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL));
              }
              v25 += 2;
              if ( (unsigned __int64)v25 >= v24 )
              {
                v11 = v64;
                break;
              }
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, float *))(**(_QWORD **)this + 8LL))(
            *(_QWORD *)this,
            v65,
            0,
            v66);
          v30 = v67;
          v31 = Block + 1;
          if ( (unsigned __int64)(Block + 1) < v67 )
          {
            v32 = v66 + 2;
            do
            {
              v33 = v23;
              v34 = (unsigned int *)((char *)v31 + *v31);
              if ( (unsigned __int64)v23 < v24 )
              {
                v35 = v31 + 1;
                do
                {
                  v36 = *(_QWORD *)&v4[6 * *(unsigned int *)v33];
                  v37 = (float *)v35;
                  if ( v35 < v34 )
                  {
                    do
                    {
                      v38 = v37[1] * v33[1];
                      *(float *)(v36 + 16LL * *(unsigned int *)v37) = (float)(v38 * *(v32 - 2))
                                                                    + *(float *)(v36 + 16LL * *(unsigned int *)v37);
                      *(float *)(v36 + 16LL * *(unsigned int *)v37 + 4) = (float)(v38 * *(v32 - 1))
                                                                        + *(float *)(v36
                                                                                   + 16LL * *(unsigned int *)v37
                                                                                   + 4);
                      *(float *)(v36 + 16LL * *(unsigned int *)v37 + 8) = (float)(v38 * *v32)
                                                                        + *(float *)(v36
                                                                                   + 16LL * *(unsigned int *)v37
                                                                                   + 8);
                      v39 = *(unsigned int *)v37;
                      v37 += 2;
                      *(float *)(v36 + 16 * v39 + 12) = (float)(v38 * v32[1]) + *(float *)(v36 + 16 * v39 + 12);
                    }
                    while ( v37 < (float *)v34 );
                  }
                  v33 += 2;
                }
                while ( (unsigned __int64)v33 < v24 );
                v30 = v67;
              }
              v32 += 4;
              v31 = v34;
            }
            while ( (unsigned __int64)v34 < v30 );
          }
          while ( (unsigned __int64)v23 < v24 )
          {
            v40 = &v4[6 * *(unsigned int *)v23];
            if ( (*((_DWORD *)v40 + 4))-- == 1 )
            {
              switch ( *(_DWORD *)(*(_QWORD *)this + 12LL) )
              {
                case 1:
                  v54 = 0;
                  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
                  {
                    v55 = 0;
                    do
                    {
                      v56 = *(float *)(v55 + *v40);
                      if ( v56 >= 0.0 )
                      {
                        if ( v56 >= 1.0 )
                          v56 = 1.0;
                      }
                      else
                      {
                        v56 = 0.0;
                      }
                      *(float *)(v55 + *v40) = v56;
                      v57 = *(float *)(v55 + *v40 + 4);
                      if ( v57 >= 0.0 )
                      {
                        if ( v57 >= 1.0 )
                          v57 = 1.0;
                      }
                      else
                      {
                        v57 = 0.0;
                      }
                      *(float *)(v55 + *v40 + 4) = v57;
                      v58 = *(float *)(v55 + *v40 + 8);
                      if ( v58 >= 0.0 )
                      {
                        if ( v58 >= 1.0 )
                          v58 = 1.0;
                      }
                      else
                      {
                        v58 = 0.0;
                      }
                      *(float *)(v55 + *v40 + 8) = v58;
                      v59 = *(float *)(v55 + *v40 + 12);
                      if ( v59 >= 0.0 )
                      {
                        if ( v59 >= 1.0 )
                          v59 = 1.0;
                      }
                      else
                      {
                        v59 = 0.0;
                      }
                      *(float *)(v55 + *v40 + 12) = v59;
                      ++v54;
                      v55 += 16;
                    }
                    while ( v54 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                  }
                  break;
                case 2:
                  v48 = 0;
                  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
                  {
                    v49 = 0;
                    do
                    {
                      v50 = *(float *)(v49 + *v40);
                      if ( v50 >= -1.0 )
                      {
                        if ( v50 >= 1.0 )
                          v50 = 1.0;
                      }
                      else
                      {
                        v50 = FLOAT_N1_0;
                      }
                      *(float *)(v49 + *v40) = v50;
                      v51 = *(float *)(v49 + *v40 + 4);
                      if ( v51 >= -1.0 )
                      {
                        if ( v51 >= 1.0 )
                          v51 = 1.0;
                      }
                      else
                      {
                        v51 = FLOAT_N1_0;
                      }
                      *(float *)(v49 + *v40 + 4) = v51;
                      v52 = *(float *)(v49 + *v40 + 8);
                      if ( v52 >= -1.0 )
                      {
                        if ( v52 >= 1.0 )
                          v52 = 1.0;
                      }
                      else
                      {
                        v52 = FLOAT_N1_0;
                      }
                      *(float *)(v49 + *v40 + 8) = v52;
                      v53 = *(float *)(v49 + *v40 + 12);
                      if ( v53 >= 0.0 )
                      {
                        if ( v53 >= 1.0 )
                          v53 = 1.0;
                      }
                      else
                      {
                        v53 = 0.0;
                      }
                      *(float *)(v49 + *v40 + 12) = v53;
                      ++v48;
                      v49 += 16;
                    }
                    while ( v48 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                  }
                  break;
                case 3:
                  v42 = 0;
                  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
                  {
                    v43 = 0;
                    do
                    {
                      v44 = *(float *)(v43 + *v40);
                      if ( v44 >= -1.0 )
                      {
                        if ( v44 >= 1.0 )
                          v44 = 1.0;
                      }
                      else
                      {
                        v44 = FLOAT_N1_0;
                      }
                      *(float *)(v43 + *v40) = v44;
                      v45 = *(float *)(v43 + *v40 + 4);
                      if ( v45 >= -1.0 )
                      {
                        if ( v45 >= 1.0 )
                          v45 = 1.0;
                      }
                      else
                      {
                        v45 = FLOAT_N1_0;
                      }
                      *(float *)(v43 + *v40 + 4) = v45;
                      v46 = *(float *)(v43 + *v40 + 8);
                      if ( v46 >= -1.0 )
                      {
                        if ( v46 >= 1.0 )
                          v46 = 1.0;
                      }
                      else
                      {
                        v46 = FLOAT_N1_0;
                      }
                      *(float *)(v43 + *v40 + 8) = v46;
                      v47 = *(float *)(v43 + *v40 + 12);
                      if ( v47 >= -1.0 )
                      {
                        if ( v47 >= 1.0 )
                          v47 = 1.0;
                      }
                      else
                      {
                        v47 = FLOAT_N1_0;
                      }
                      *(float *)(v43 + *v40 + 12) = v47;
                      ++v42;
                      v43 += 16;
                    }
                    while ( v42 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
                  }
                  break;
              }
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                *((_QWORD *)this + 1),
                *(unsigned int *)v23,
                0,
                *v40);
              v40[1] = v5;
              v5 = v40;
            }
            v23 += 2;
          }
          ++v65;
          v19 = (unsigned int *)v24;
        }
        while ( v24 < v11 );
        v6 = v66;
      }
      v60 = 0;
    }
    else
    {
LABEL_112:
      v60 = -2147024882;
    }
  }
  else
  {
    v60 = -2147467259;
  }
  if ( v4 )
  {
    v61 = (int)*(v4 - 2);
    for ( j = (void **)&v4[6 * v61]; ; operator delete(*j) )
    {
      LODWORD(v61) = v61 - 1;
      if ( (int)v61 < 0 )
        break;
      j -= 3;
    }
    operator delete(v4 - 2);
  }
  operator delete(v1);
  operator delete(Block);
  operator delete(v6);
  operator delete(0);
  return v60;
}
