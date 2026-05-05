void __fastcall AnimationState::Update(AnimationState *this, __int64 a2, __int64 a3)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  char v6; // r14
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int32 v9; // edi
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r8
  __int8 v13; // si
  bool v14; // cf
  __int64 GameEvent; // rax
  _WORD *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  _WORD *v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // rdi
  void *v22; // rax
  void *v23; // rcx
  void *v24; // rdi
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  void (__fastcall ***v31)(_QWORD, __int64); // rdi
  __m128i v32; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_BYTE *)this + 40) && *((_BYTE *)this + 24) != 1 )
  {
    v4 = *((float *)this + 15);
    v5 = *((_BYTE *)this + 41) ? v4 - 0.033333335 : v4 + 0.033333335;
    *((float *)this + 15) = v5;
    v6 = 1;
    if ( !*(_DWORD *)this )
      goto LABEL_29;
    v7 = 0;
    v8 = 1;
    do
    {
      v32 = _mm_loadu_si128((const __m128i *)(v7 + *((_QWORD *)this + 2)));
      if ( !v32.m128i_i8[12] )
      {
        v9 = v32.m128i_i32[2];
        LOBYTE(a3) = *((_BYTE *)this + 41);
        v10 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 8LL * (*((_DWORD *)this + 7) + v8));
        v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v10 + 16LL))(v10, v32.m128i_u32[2], a3) + v9;
        v32.m128i_i32[2] = v11;
        if ( v11 <= 0x186A0 )
        {
          v13 = v32.m128i_i8[12];
        }
        else
        {
          v13 = 1;
          v14 = *((_BYTE *)this + 41) != 0;
          v32.m128i_i8[12] = 1;
          v11 = v14 ? 0 : 0x186A0;
          v32.m128i_i32[2] = v11;
        }
        LOBYTE(v12) = *((_BYTE *)this + 41);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v10 + 32LL))(v10, v11, v12, v32.m128i_i64[0]);
        if ( v13 )
        {
          if ( v10[1] && !*((_BYTE *)this + 42) )
          {
            GameEvent = Event::CreateGameEvent(0xCu);
            v16 = (_WORD *)v10[1];
            v17 = GameEvent;
            operator delete(*(void **)(GameEvent + 40));
            v18 = -1;
            v19 = v16;
            do
            {
              if ( !v18 )
                break;
              v20 = *v19++ == 0;
              --v18;
            }
            while ( !v20 );
            v21 = (unsigned int)~(_DWORD)v18;
            v22 = operator new[](saturated_mul(v21, 2u));
            *(_QWORD *)(v17 + 40) = v22;
            memcpy(v22, v16, 2 * v21);
            *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 6);
            *(_DWORD *)(v17 + 32) = *((_DWORD *)this + 14);
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6), v17);
            (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1);
          }
        }
        else
        {
          v6 = 0;
        }
        if ( v8 - 1 >= *(_DWORD *)this )
        {
          if ( v8 > *((_DWORD *)this + 1) )
          {
            v23 = (void *)*((_QWORD *)this + 2);
            *((_DWORD *)this + 1) = v8;
            v24 = realloc(v23, 16LL * v8);
            if ( !v24 )
              CheckAllocation(0);
            *((_QWORD *)this + 2) = v24;
          }
          *(_DWORD *)this = v8;
        }
        *(__m128i *)(v7 + *((_QWORD *)this + 2)) = _mm_loadu_si128(&v32);
      }
      ++v8;
      v7 += 16;
    }
    while ( v8 - 1 < *(_DWORD *)this );
    if ( v6 )
    {
LABEL_29:
      v25 = *((_QWORD *)this + 4);
      v26 = *((_DWORD *)this + 7);
      if ( *((_BYTE *)this + 41) )
      {
        v27 = (unsigned int)(v26 - 1);
        if ( (unsigned int)v27 < *(_DWORD *)(v25 + 8) )
        {
          v29 = (_QWORD *)(*(_QWORD *)(v25 + 24) + 8LL * (int)v27);
          while ( *v29 )
          {
            v27 = (unsigned int)(v27 - 1);
            --v29;
            if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 8) )
              goto LABEL_39;
          }
          goto LABEL_40;
        }
      }
      else
      {
        v27 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v27 < *(_DWORD *)(v25 + 8) )
        {
          v28 = (_QWORD *)(*(_QWORD *)(v25 + 24) + 8LL * (int)v27);
          while ( *v28 )
          {
            v27 = (unsigned int)(v27 + 1);
            ++v28;
            if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 8) )
              goto LABEL_39;
          }
          goto LABEL_40;
        }
      }
LABEL_39:
      v27 = 0xFFFFFFFFLL;
LABEL_40:
      if ( (_DWORD)v27 == -1 )
      {
        *((_BYTE *)this + 24) = 1;
        *((_BYTE *)this + 40) = 0;
        if ( *(_BYTE *)v25 )
        {
          if ( !*((_BYTE *)this + 42) )
          {
            v30 = Event::CreateGameEvent(0xDu);
            *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 6);
            v31 = (void (__fastcall ***)(_QWORD, __int64))v30;
            *(_DWORD *)(v30 + 32) = *((_DWORD *)this + 14);
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6), v30);
            (**v31)(v31, 1);
          }
        }
      }
      else
      {
        AnimationState::ResetToSync(this, (_QWORD *)v27);
      }
    }
  }
}
