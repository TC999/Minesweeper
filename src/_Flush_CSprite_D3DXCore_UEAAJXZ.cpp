__int64 __fastcall D3DXCore::CSprite::Flush(D3DXCore::CSprite *this)
{
  struct D3DXVECTOR3 *v3; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rdx
  D3DXCore *v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm2_4
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  float v16; // xmm3_4
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rcx
  float v20; // xmm0_4
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // esi
  unsigned int v24; // edi
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rcx
  int v29; // ebp
  unsigned int v30; // r14d
  __int64 v31; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 56) )
    return 2289436780LL;
  if ( !*((_DWORD *)this + 37) && (*((_BYTE *)this + 228) & 8) == 0 )
  {
    v3 = (struct D3DXVECTOR3 *)(*((_QWORD *)this + 32) + 24LL * (unsigned int)(4 * *((_DWORD *)this + 68)));
    off_1000A6870(
      v3,
      0x18u,
      v3,
      0x18u,
      *((const struct D3DXMATRIX **)this + 20),
      4 * (*((_DWORD *)this + 66) - *((_DWORD *)this + 68)));
  }
  v4 = *((_DWORD *)this + 57);
  v5 = *((_DWORD *)this + 66);
  v6 = 0;
  *((_DWORD *)this + 68) = v5;
  if ( (v4 & 0x20) == 0 )
  {
    if ( (v4 & 0xC0) == 0 )
      goto LABEL_37;
    v10 = FLOAT_3_4028235e38;
    v11 = FLOAT_N3_4028235e38;
    if ( (v4 & 4) == 0 || (v4 & 8) != 0 )
    {
      v17 = 0;
      if ( !v5 )
        goto LABEL_31;
      v18 = 0;
      v19 = 48;
      do
      {
        LODWORD(v20) = COERCE_UNSIGNED_INT(
                         (float)((float)(*(float *)(*((_QWORD *)this + 32) + v19 - 40)
                                       + *(float *)(*((_QWORD *)this + 32) + v19 - 16))
                               + *(float *)(*((_QWORD *)this + 32) + v19 + 8))
                       + *(float *)(*((_QWORD *)this + 32) + v19 + 32))
                     ^ _mask__NegFloat_;
        if ( v10 > v20 )
          LODWORD(v10) = COERCE_UNSIGNED_INT(
                           (float)((float)(*(float *)(*((_QWORD *)this + 32) + v19 - 40)
                                         + *(float *)(*((_QWORD *)this + 32) + v19 - 16))
                                 + *(float *)(*((_QWORD *)this + 32) + v19 + 8))
                         + *(float *)(*((_QWORD *)this + 32) + v19 + 32))
                       ^ _mask__NegFloat_;
        if ( v20 > v11 )
          LODWORD(v11) = COERCE_UNSIGNED_INT(
                           (float)((float)(*(float *)(*((_QWORD *)this + 32) + v19 - 40)
                                         + *(float *)(*((_QWORD *)this + 32) + v19 - 16))
                                 + *(float *)(*((_QWORD *)this + 32) + v19 + 8))
                         + *(float *)(*((_QWORD *)this + 32) + v19 + 32))
                       ^ _mask__NegFloat_;
        ++v17;
        v19 += 96;
        *(float *)(v18 + *((_QWORD *)this + 31)) = v20;
        v18 += 4;
      }
      while ( v17 < *((_DWORD *)this + 66) );
    }
    else
    {
      v12 = 0;
      if ( !v5 )
        goto LABEL_31;
      v13 = 0;
      v14 = 48;
      do
      {
        v15 = *((_QWORD *)this + 32);
        v16 = (float)((float)((float)((float)((float)(*(float *)(v15 + v14 - 20) + *(float *)(v15 + v14 - 44))
                                            + *(float *)(v15 + v14 + 4))
                                    + *(float *)(v15 + v14 + 28))
                            * *((float *)this + 51))
                    + (float)((float)((float)((float)(*(float *)(v15 + v14 - 48) + *(float *)(v15 + v14 - 24))
                                            + *(float *)(v15 + v14))
                                    + *(float *)(v15 + v14 + 24))
                            * *((float *)this + 50)))
            + (float)((float)((float)((float)(*(float *)(v15 + v14 - 16) + *(float *)(v15 + v14 - 40))
                                    + *(float *)(v15 + v14 + 8))
                            + *(float *)(v15 + v14 + 32))
                    * *((float *)this + 52));
        if ( v10 > v16 )
          v10 = (float)((float)((float)((float)((float)(*(float *)(v15 + v14 - 20) + *(float *)(v15 + v14 - 44))
                                              + *(float *)(v15 + v14 + 4))
                                      + *(float *)(v15 + v14 + 28))
                              * *((float *)this + 51))
                      + (float)((float)((float)((float)(*(float *)(v15 + v14 - 48) + *(float *)(v15 + v14 - 24))
                                              + *(float *)(v15 + v14))
                                      + *(float *)(v15 + v14 + 24))
                              * *((float *)this + 50)))
              + (float)((float)((float)((float)(*(float *)(v15 + v14 - 16) + *(float *)(v15 + v14 - 40))
                                      + *(float *)(v15 + v14 + 8))
                              + *(float *)(v15 + v14 + 32))
                      * *((float *)this + 52));
        if ( v16 > v11 )
          v11 = (float)((float)((float)((float)((float)(*(float *)(v15 + v14 - 20) + *(float *)(v15 + v14 - 44))
                                              + *(float *)(v15 + v14 + 4))
                                      + *(float *)(v15 + v14 + 28))
                              * *((float *)this + 51))
                      + (float)((float)((float)((float)(*(float *)(v15 + v14 - 48) + *(float *)(v15 + v14 - 24))
                                              + *(float *)(v15 + v14))
                                      + *(float *)(v15 + v14 + 24))
                              * *((float *)this + 50)))
              + (float)((float)((float)((float)(*(float *)(v15 + v14 - 16) + *(float *)(v15 + v14 - 40))
                                      + *(float *)(v15 + v14 + 8))
                              + *(float *)(v15 + v14 + 32))
                      * *((float *)this + 52));
        ++v12;
        v14 += 96;
        *(float *)(v13 + *((_QWORD *)this + 31)) = v16;
        v13 += 4;
      }
      while ( v12 < *((_DWORD *)this + 66) );
    }
    if ( v10 == v11 )
      goto LABEL_37;
LABEL_31:
    v21 = 0;
    if ( *((_DWORD *)this + 66) )
    {
      v22 = 0;
      do
      {
        *(_DWORD *)(v22 + *((_QWORD *)this + 29)) = v21++;
        v22 += 4;
      }
      while ( v21 < *((_DWORD *)this + 66) );
    }
    v9 = (D3DXCore *)D3DXCore::CSprite::CompareDepthFTB;
    if ( (*((_BYTE *)this + 228) & 0x40) == 0 )
      v9 = (D3DXCore *)D3DXCore::CSprite::CompareDepthBTF;
    goto LABEL_36;
  }
  if ( *((_DWORD *)this + 69) )
  {
    v7 = 0;
    if ( v5 )
    {
      v8 = 0;
      do
      {
        *(_DWORD *)(v8 + *((_QWORD *)this + 29)) = v7++;
        v8 += 4;
      }
      while ( v7 < *((_DWORD *)this + 66) );
    }
    v9 = (D3DXCore *)D3DXCore::CSprite::CompareTexture;
LABEL_36:
    D3DXCore::HeapSort(
      v9,
      *((int (**)(unsigned int, unsigned int, const void *))this + 29),
      (unsigned int *)*((unsigned int *)this + 66),
      (__int64)this);
    v6 = 1;
  }
LABEL_37:
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 696LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 832LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**((_QWORD **)this + 3) + 800LL))(
    *((_QWORD *)this + 3),
    0,
    *((_QWORD *)this + 6),
    0,
    24);
  v23 = 0;
  if ( v6 )
    v24 = **((_DWORD **)this + 29);
  else
    v24 = 0;
  v25 = -1;
  v26 = 0;
  v27 = v6;
  if ( *((_DWORD *)this + 66) )
  {
    do
    {
      v28 = *((_QWORD *)this + 30);
      if ( v25 != *(_QWORD *)(v28 + 8LL * v24) )
      {
        v25 = *(_QWORD *)(v28 + 8LL * v24);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 520LL))(
          *((_QWORD *)this + 3),
          0,
          v25);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 88LL))(
        *((_QWORD *)this + 6),
        0,
        0,
        &v31,
        *((_DWORD *)this + 15) != 0 ? 4096 : 0x2000);
      v29 = *((_DWORD *)this + 14);
      v30 = *((_DWORD *)this + 15);
      while ( v23 < *((_DWORD *)this + 66)
           && v25 == *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * v24)
           && *((_DWORD *)this + 15) < 0x4000u )
      {
        memcpy(
          (void *)(v31 + 24LL * *((unsigned int *)this + 15)),
          (const void *)(*((_QWORD *)this + 32) + 96LL * v24),
          0x60u);
        *((_DWORD *)this + 15) += 4;
        *((_DWORD *)this + 14) += 6;
        ++v23;
        ++v26;
        if ( v27 )
          v24 = *(_DWORD *)(*((_QWORD *)this + 29) + 4 * v26);
        else
          v24 = v23;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 96LL))(*((_QWORD *)this + 6));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned int, int, unsigned int))(**((_QWORD **)this + 3)
                                                                                               + 656LL))(
        *((_QWORD *)this + 3),
        4,
        0,
        v30,
        *((_DWORD *)this + 15) - v30,
        v29,
        (*((_DWORD *)this + 14) - v29) / 3u);
      if ( *((_DWORD *)this + 15) >= 0x4000u )
      {
        *((_DWORD *)this + 15) = 0;
        *((_DWORD *)this + 14) = 0;
      }
    }
    while ( v23 < *((_DWORD *)this + 66) );
  }
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  return 0;
}
