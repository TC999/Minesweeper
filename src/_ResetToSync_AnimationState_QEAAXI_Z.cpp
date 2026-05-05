void __fastcall AnimationState::ResetToSync(AnimationState *this, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rcx
  double v17; // xmm0_8
  bool v18; // zf
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rcx
  double v22; // xmm0_8
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ecx
  bool v30; // cf
  __int64 v31; // rdx
  void *v32; // rax
  __m128i v33; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  v3 = (int)a2;
  if ( *(_DWORD *)this )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(v5 + *((_QWORD *)this + 2));
      if ( v6 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1);
      ++v2;
      v5 += 16;
    }
    while ( v2 < *(_DWORD *)this );
  }
  v7 = *((_QWORD *)this + 4);
  *(_DWORD *)this = 0;
  v8 = v3 + 1;
  v9 = v3 + 1;
  v10 = 0;
  if ( (unsigned int)(v3 + 1) < *(_DWORD *)(v7 + 8) )
  {
    a2 = (_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL * (int)v8);
    do
    {
      if ( !*a2 )
        break;
      ++v9;
      ++v10;
      ++a2;
    }
    while ( v9 < *(_DWORD *)(v7 + 8) );
  }
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  if ( (_DWORD)v3 )
  {
    v14 = 0;
    v15 = (unsigned int)v3;
    do
    {
      v16 = *(_QWORD *)(v7 + 24);
      if ( *(_QWORD *)(v14 + v16) )
      {
        if ( v13 <= (*(float (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v14 + v16) + 24LL))(
                      *(_QWORD *)(v14 + v16),
                      a2) )
        {
          v17 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + *(_QWORD *)(v7 + 24)) + 24LL))(*(_QWORD *)(v14 + *(_QWORD *)(v7 + 24)));
          v13 = *(float *)&v17;
        }
      }
      else
      {
        v12 = v12 + v13;
        v13 = 0.0;
      }
      v14 += 8;
      --v15;
    }
    while ( v15 );
  }
  v18 = *((_BYTE *)this + 41) == 0;
  *((float *)this + 15) = v12;
  if ( !v18 )
  {
    v19 = *((_QWORD *)this + 4);
    if ( v8 < *(_DWORD *)(v19 + 8) )
    {
      v20 = 8LL * (int)v8;
      do
      {
        v21 = *(_QWORD *)(v19 + 24);
        if ( !*(_QWORD *)(v20 + v21) )
          break;
        if ( v11 <= (*(float (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v20 + v21) + 24LL))(
                      *(_QWORD *)(v20 + v21),
                      a2) )
        {
          v22 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + *(_QWORD *)(v19 + 24)) + 24LL))(*(_QWORD *)(v20 + *(_QWORD *)(v19 + 24)));
          v11 = *(float *)&v22;
        }
        ++v8;
        v20 += 8;
      }
      while ( v8 < *(_DWORD *)(v19 + 8) );
    }
    *((float *)this + 15) = v11 + *((float *)this + 15);
  }
  if ( v10 )
  {
    v23 = 8 * v3 + 8;
    v24 = v10;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23 + *(_QWORD *)(*((_QWORD *)this + 4) + 48LL));
      v26 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 16LL))(
                         v25,
                         *((unsigned int *)this + 14));
      v27 = *((_QWORD *)this + 6);
      v28 = *v26;
      v33.m128i_i64[0] = (__int64)v26;
      (*(void (__fastcall **)(__int64 *, __int64))(v28 + 32))(v26, v27);
      v29 = *((_DWORD *)this + 1);
      v30 = *((_BYTE *)this + 41) != 0;
      v33.m128i_i8[12] = 0;
      ++*(_DWORD *)this;
      v33.m128i_i32[2] = v30 ? 0x186A0 : 0;
      if ( *(_DWORD *)this <= v29 )
        goto LABEL_31;
      v31 = *((_DWORD *)this + 2) + v29;
      *((_DWORD *)this + 1) = v31;
      v32 = realloc(*((void **)this + 2), 16 * v31);
      if ( v32 )
        break;
      CheckAllocation(0);
LABEL_32:
      v23 += 8;
      if ( !--v24 )
        goto LABEL_33;
    }
    *((_QWORD *)this + 2) = v32;
LABEL_31:
    *(__m128i *)(*((_QWORD *)this + 2) + 16LL * (unsigned int)(*(_DWORD *)this - 1)) = _mm_loadu_si128(&v33);
    goto LABEL_32;
  }
LABEL_33:
  *((_DWORD *)this + 7) = v3;
}
