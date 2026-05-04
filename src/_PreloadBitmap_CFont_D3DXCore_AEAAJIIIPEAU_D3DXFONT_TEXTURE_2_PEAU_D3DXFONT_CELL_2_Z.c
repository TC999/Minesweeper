__int64 __fastcall D3DXCore::CFont::PreloadBitmap(
        D3DXCore::CFont *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct D3DXCore::_D3DXFONT_TEXTURE *a5,
        struct D3DXCore::_D3DXFONT_CELL *a6)
{
  struct D3DXCore::_D3DXFONT_TEXTURE *v6; // rbx
  int v7; // r10d
  D3DXCore::CFont *v9; // rsi
  unsigned int i; // edi
  unsigned int v11; // eax
  size_t v12; // rax
  void *v13; // rax
  void *v14; // rbp
  __int64 result; // rax
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  unsigned int v18; // ebp
  int v19; // r8d
  int v20; // edx
  char v21; // di
  __int64 v22; // r14
  unsigned int v23; // ebp
  _DWORD *v24; // rdi
  int v25; // r9d
  char *v26; // r8
  char *v27; // rdx
  unsigned __int64 k; // rcx
  unsigned int v29; // r12d
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ebp
  unsigned int v33; // ecx
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  unsigned int v36; // edi
  unsigned int v37; // edx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // ecx
  __int64 v41; // r10
  __int64 v42; // rcx
  unsigned int v43; // r9d
  float *v44; // r11
  int *v45; // r8
  _BYTE *v46; // r10
  unsigned int v47; // eax
  int v48; // ecx
  float v49; // xmm3_4
  float v50; // xmm2_4
  unsigned int j; // edx
  _DWORD *v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // edi
  unsigned int v55; // r13d
  int v56; // r10d
  unsigned __int64 v57; // r15
  unsigned int v58; // r9d
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r11
  float *v64; // rbx
  float *v65; // rax
  float *v66; // rdi
  int *v67; // rdx
  __int64 v68; // r11
  __int64 v69; // rcx
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  unsigned __int16 v74; // r12
  unsigned __int16 v75; // bp
  unsigned __int16 v76; // cx
  unsigned int v77; // [rsp+50h] [rbp-F8h]
  unsigned int v78; // [rsp+54h] [rbp-F4h]
  unsigned int v79; // [rsp+58h] [rbp-F0h]
  int v80; // [rsp+5Ch] [rbp-ECh]
  unsigned int v81; // [rsp+60h] [rbp-E8h]
  __int64 v82; // [rsp+68h] [rbp-E0h]
  __int16 v83; // [rsp+70h] [rbp-D8h]
  __int16 v84; // [rsp+74h] [rbp-D4h]
  unsigned int v85; // [rsp+78h] [rbp-D0h]
  unsigned int v86; // [rsp+7Ch] [rbp-CCh]
  int v87; // [rsp+80h] [rbp-C8h]
  __int16 v88; // [rsp+84h] [rbp-C4h]
  int *v89; // [rsp+88h] [rbp-C0h]
  float *v90; // [rsp+90h] [rbp-B8h]
  __int64 v91; // [rsp+98h] [rbp-B0h] BYREF
  char *v92; // [rsp+A0h] [rbp-A8h]
  __int64 v93; // [rsp+A8h] [rbp-A0h]
  int v94; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-90h]
  int v96; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-80h]

  v6 = a5;
  v7 = 0;
  v9 = this;
  if ( (unsigned int)(*((_DWORD *)a5 + 4) + *((_DWORD *)a5 + 2)) > *((_DWORD *)a5 + 7) )
  {
    i = *((_DWORD *)this + 568);
    v11 = *((_DWORD *)this + 565) + 1;
    if ( v11 > i )
    {
      if ( i )
        goto LABEL_5;
      for ( i = 16; i < v11; i *= 2 )
LABEL_5:
        ;
      v12 = 8LL * i;
      if ( !is_mul_ok(i, 8u) )
        v12 = -1;
      v13 = operator new(v12, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v14 = v13;
      if ( !v13 )
        return 2147942414LL;
      memcpy(v13, *((const void **)v9 + 283), 8LL * *((unsigned int *)v9 + 568));
      operator delete(*((void **)v9 + 283));
      *((_QWORD *)v9 + 283) = v14;
      *((_DWORD *)v9 + 568) = i;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, _QWORD))(**((_QWORD **)v9 + 2) + 184LL))(
               *((_QWORD *)v9 + 2),
               *((unsigned int *)a5 + 6),
               *((unsigned int *)a5 + 6),
               *((unsigned int *)a5 + 5),
               0,
               *((_DWORD *)v9 + 564),
               *((_DWORD *)v9 + 6),
               *((_QWORD *)v9 + 283) + 8LL * *((unsigned int *)v9 + 565),
               0);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)a5 + 2) = 0;
    v7 = 1;
    *(_QWORD *)a5 = *(_QWORD *)(*((_QWORD *)v9 + 283) + 8LL * (unsigned int)(*((_DWORD *)v9 + 565))++);
  }
  v16 = *((_DWORD *)a5 + 6);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v78 = 0;
  v77 = 0;
  if ( v16 > 1 )
  {
    v20 = 1;
    v21 = 0;
    do
    {
      if ( ((*((_DWORD *)a5 + 2) >> v21) & 1) != 0 )
        v17 |= v20;
      if ( ((*((_DWORD *)a5 + 2) >> (v21 + 1)) & 1) != 0 )
        v18 |= v20;
      ++v19;
      v21 += 2;
      v20 = 1 << v19;
    }
    while ( 1 << v19 < v16 );
    v78 = v17;
    v77 = v18;
  }
  v22 = *(_QWORD *)a5;
  v93 = *(_QWORD *)a5;
  if ( !v7 )
  {
LABEL_33:
    if ( *((_DWORD *)a5 + 5) > 1u )
      memset(*((void **)v9 + 297), 0, 8LL * *((unsigned int *)a5 + 4));
    v29 = 0;
    v30 = *((_DWORD *)a5 + 3);
    v31 = v18 + ((v30 - a4) >> 1);
    v32 = 0;
    v33 = v17 + ((v30 - a3) >> 1);
    v34 = -1;
    v79 = v31;
    v81 = v33;
    v83 = -1;
    v88 = 0;
    v35 = -1;
    v84 = -1;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)v22 + 152LL))(
               v22,
               0,
               &v94,
               0,
               0);
    if ( (int)result < 0 )
      return result;
    v36 = 0;
    if ( a4 )
    {
      v37 = v79;
      v38 = a2;
      v39 = v81 - v78;
      v40 = v79 - v77;
      do
      {
        v41 = v38 + *((_DWORD *)v9 + 20) * v36;
        v42 = v39 + *((_DWORD *)a5 + 3) * (v36 + v40);
        v43 = 0;
        v44 = (float *)(*((_QWORD *)v9 + 297) + 8 * v42);
        v45 = (int *)(v95 + 4LL * v81 + v94 * (v36 + v37));
        if ( a3 )
        {
          v46 = (_BYTE *)(*((_QWORD *)v9 + 11) + 4 * v41 + 1);
          v47 = a3;
          do
          {
            v48 = (unsigned __int8)*v46;
            if ( *v46 )
            {
              if ( v35 > v36 )
                v35 = v36;
              if ( v32 < v36 )
                v32 = v36;
              if ( v34 > v43 )
                v34 = v43;
              if ( v29 < v43 )
                v29 = v43;
              *v45 = (v48 << 24) | 0xFFFFFF;
              if ( *((_DWORD *)a5 + 5) > 1u )
              {
                v49 = (float)((float)((float)v48 * 0.0039215689) * (float)((float)v48 * 0.0039215689)) * 254.0;
                v50 = *(float *)&dword_100011810[v49];
                *v44 = (float)((float)(*(float *)&dword_100011810[(int)v49 + 1] - v50) * (float)(v49 - (float)(int)v49))
                     + v50;
              }
              v47 = a3;
            }
            ++v43;
            v46 += 4;
            ++v45;
            v44 += 2;
          }
          while ( v43 < v47 );
          v9 = this;
          v37 = v79;
          v84 = v35;
          v83 = v34;
          v88 = v29;
        }
        v40 = v79 - v77;
        v38 = a2;
        v39 = v81 - v78;
        ++v36;
      }
      while ( v36 < a4 );
      v22 = v93;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 160LL))(v22, 0);
    if ( v29 < v34 || v32 < v35 )
    {
      *(_QWORD *)a6 = -1;
    }
    else
    {
      if ( *((_DWORD *)a5 + 5) > 1u )
      {
        for ( j = v35; j <= v32; ++j )
        {
          if ( v34 <= v29 )
          {
            v52 = (_DWORD *)(*((_QWORD *)v9 + 297)
                           + 8 * (v81 - v78 + (unsigned __int64)(*((_DWORD *)a5 + 3) * (v79 - v77 + j)))
                           + 8LL * (int)v34
                           + 4);
            v53 = v29 - v34 + 1;
            do
            {
              *v52 = 1065353216;
              v52 += 2;
              --v53;
            }
            while ( v53 );
          }
        }
        v54 = 1;
        v80 = 1;
        if ( *((_DWORD *)a5 + 5) > 1u )
        {
          do
          {
            v85 = *((_DWORD *)v6 + 3) >> v54;
            result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)v22 + 152LL))(
                       v22,
                       v54,
                       &v96,
                       0,
                       0);
            if ( (int)result < 0 )
              return result;
            if ( v85 )
            {
              v55 = 0;
              v56 = 1;
              v87 = 1;
              v57 = 4 * ((unsigned __int64)v78 >> v54);
              v58 = v77 >> v54;
              v86 = v77 >> v54;
              do
              {
                v59 = *((_QWORD *)v9 + 297);
                v60 = *((_DWORD *)v6 + 3);
                v61 = v59 + 8LL * (unsigned int)(v56 * v60);
                v62 = v55 * v60;
                v63 = v59 + 8LL * (unsigned int)(2 * v62);
                v64 = (float *)(v59 + 8 * v62);
                v65 = (float *)(v63 + 4);
                v66 = (float *)(v61 + 12);
                v90 = (float *)(v63 + 4);
                v67 = (int *)(v97 + v57 + v96 * v58);
                v68 = v63 - v61;
                v69 = v85;
                v89 = v67;
                v91 = v68;
                v82 = v85;
                do
                {
                  v70 = (float)((float)((float)(*(v65 - 1) + v65[1]) + *(v66 - 3)) + *(v66 - 1)) * 0.25;
                  *v64 = v70;
                  v71 = (float)((float)((float)(*(float *)((char *)v66 + v68) + *v65) + *(v66 - 2)) + *v66) * 0.25;
                  v64[1] = v71;
                  if ( v71 != 0.0 )
                  {
                    v72 = sqrtf(v70 / v71);
                    v69 = v82;
                    v68 = v91;
                    v73 = *(float *)&dword_100011410[(float)(v72 * 254.0)];
                    v67 = v89;
                    *v89 = ((int)(float)((float)((float)((float)((float)(*(float *)&dword_100011410[(int)(float)(v72 * 254.0) + 1]
                                                                       - v73)
                                                               * (float)((float)(v72 * 254.0)
                                                                       - (float)(int)(float)(v72 * 254.0)))
                                                       * 255.0)
                                               + (float)(v73 * 255.0))
                                       + 0.5) << 24)
                         | 0xFFFFFF;
                    v65 = v90;
                  }
                  v65 += 4;
                  ++v67;
                  v66 += 4;
                  v64 += 2;
                  --v69;
                  v90 = v65;
                  v82 = v69;
                  v89 = v67;
                }
                while ( v69 );
                v6 = a5;
                v56 = v87 + 2;
                v58 = v86 + 1;
                ++v55;
                v87 += 2;
                ++v86;
              }
              while ( v55 < v85 );
              LOWORD(v29) = v88;
              LOWORD(v34) = v83;
              v22 = v93;
              LOWORD(v35) = v84;
              v54 = v80;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 160LL))(v22, v54++);
            v80 = v54;
          }
          while ( v54 < *((_DWORD *)v6 + 5) );
        }
      }
      *(_QWORD *)a6 = *(_QWORD *)v6;
      v74 = v81 + v29 + 1;
      v75 = v79 + v32 + 1;
      v76 = v35 + v79;
      *((_WORD *)a6 + 8) = v34;
      *((_WORD *)a6 + 9) = v35;
      *((_WORD *)a6 + 4) = v34 + v81;
      *((_WORD *)a6 + 6) = v74;
      *((_WORD *)a6 + 7) = v75;
      *((_WORD *)a6 + 5) = v35 + v79;
      if ( (unsigned __int16)(v34 + v81) > v78 )
      {
        *((_WORD *)a6 + 8) = v34 - 1;
        *((_WORD *)a6 + 4) = v34 + v81 - 1;
      }
      if ( v76 > v77 )
      {
        *((_WORD *)a6 + 9) = v35 - 1;
        *((_WORD *)a6 + 5) = v76 - 1;
      }
      if ( v74 < v78 + *((_DWORD *)v6 + 3) )
        *((_WORD *)a6 + 6) = v74 + 1;
      if ( v75 < v77 + *((_DWORD *)v6 + 3) )
        *((_WORD *)a6 + 7) = v75 + 1;
      *((_DWORD *)v6 + 2) += *((_DWORD *)v6 + 4);
    }
    return 0;
  }
  v23 = 0;
  if ( !*((_DWORD *)a5 + 5) )
  {
LABEL_32:
    v18 = v77;
    goto LABEL_33;
  }
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)v22 + 152LL))(
               v22,
               v23,
               &v91,
               0,
               0);
    if ( (int)result < 0 )
      return result;
    v24 = v92;
    v25 = v91;
    v26 = &v92[v16 * (unsigned int)v91];
    if ( v92 < v26 )
    {
      do
      {
        v27 = (char *)v24 + v25;
        if ( v24 < &v24[v16] )
        {
          for ( k = ((4 * (unsigned __int64)v16 - 1) >> 2) + 1; k; --k )
            *v24++ = 0xFFFFFF;
          v25 = v91;
        }
        v24 = v27;
      }
      while ( v27 < v26 );
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 160LL))(v22, v23++);
    v16 >>= 1;
    if ( v23 >= *((_DWORD *)a5 + 5) )
      goto LABEL_32;
  }
}
