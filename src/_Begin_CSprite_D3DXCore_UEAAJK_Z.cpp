__int64 __fastcall D3DXCore::CSprite::Begin(D3DXCore::CSprite *this, int a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  unsigned int v5; // r11d
  __int64 v6; // r8
  __int16 v7; // cx
  unsigned int i; // edi
  char *v9; // rdx
  unsigned int j; // edi
  char *v11; // rdx
  unsigned int k; // edi
  __int64 v13; // rcx
  char *v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  float v18; // xmm6_4
  float v19; // xmm7_4
  __int64 v20; // rcx
  _DWORD v21[8]; // [rsp+40h] [rbp-B8h] BYREF
  float v22[28]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v23; // [rsp+100h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 56) || (a2 & 0xFFFFFF00) != 0 )
    return 2289436780LL;
  *((_DWORD *)this + 57) = a2;
  if ( (a2 & 8) != 0 )
    *((_DWORD *)this + 57) = a2 | 4;
  v4 = (_QWORD *)((char *)this + 40);
  if ( !*((_QWORD *)this + 5) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 3) + 216LL))(
               *((_QWORD *)this + 3),
               49152,
               8,
               101,
               *((_DWORD *)this + 30),
               v4,
               0);
    if ( (int)result < 0 )
      return result;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _DWORD))(*(_QWORD *)*v4 + 88LL))(*v4, 0, 0, &v23, 0);
    v5 = 0;
    v6 = 4;
    do
    {
      *(_WORD *)(v6 + v23 - 4) = v5;
      *(_WORD *)(v6 + v23 - 2) = v5 + 1;
      *(_WORD *)(v6 + v23) = v5 + 2;
      v6 += 12;
      *(_WORD *)(v6 + v23 - 10) = v5 + 2;
      v7 = v5 + 3;
      *(_WORD *)(v6 + v23 - 8) = v5 + 1;
      v5 += 4;
      *(_WORD *)(v6 + v23 - 6) = v7;
    }
    while ( v5 < 0x4000 );
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 96LL))(*v4);
  }
  if ( !*((_QWORD *)this + 6) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, char *, _QWORD))(**((_QWORD **)this + 3)
                                                                                                 + 208LL))(
               *((_QWORD *)this + 3),
               393216,
               520,
               0,
               *((_DWORD *)this + 30),
               (char *)this + 48,
               0);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 15) = 0;
  }
  D3DXDebugMuteInt(1u);
  if ( !*((_QWORD *)this + 8) )
  {
    for ( i = 0; i < 2; ++i )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 480LL))(*((_QWORD *)this + 3));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 696LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 736LL))(*((_QWORD *)this + 3), 0);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 856LL))(*((_QWORD *)this + 3), 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 8, 3);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 9, 2);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 22, 1);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 128, 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        136,
        1);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 151, 0);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 152, 0);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 632LL))(*((_QWORD *)this + 3));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 167, 0);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 184, 0);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 194, 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        168,
        15);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 28);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 48);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 29);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 52);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 137, 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        145,
        1);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        0,
        1,
        4);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        0,
        2,
        2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 536LL))(*((_QWORD *)this + 3), 0, 3);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        0,
        4,
        4);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        0,
        5,
        2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 536LL))(*((_QWORD *)this + 3), 0, 6);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 536LL))(*((_QWORD *)this + 3), 0, 11);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 536LL))(*((_QWORD *)this + 3), 0, 24);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        1,
        1,
        1);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 3) + 536LL))(
        *((_QWORD *)this + 3),
        1,
        4,
        1);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        1,
        3);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        2,
        3);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        5,
        *((unsigned int *)this + 31));
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        6,
        *((unsigned int *)this + 32));
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        7,
        *((unsigned int *)this + 33));
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 552LL))(*((_QWORD *)this + 3), 0, 8);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 552LL))(*((_QWORD *)this + 3), 0, 9);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 552LL))(
        *((_QWORD *)this + 3),
        0,
        10,
        *((unsigned int *)this + 34));
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 552LL))(*((_QWORD *)this + 3), 0, 11);
      if ( !i )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 696LL))(
          *((_QWORD *)this + 3),
          *((_QWORD *)this + 4));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 832LL))(*((_QWORD *)this + 3), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 3) + 800LL))(
          *((_QWORD *)this + 3),
          0,
          0,
          0,
          0);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 520LL))(*((_QWORD *)this + 3), 0, 0);
      }
      v9 = (char *)this + 64;
      if ( i )
        v9 = (char *)this + 72;
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 488LL))(*((_QWORD *)this + 3), v9);
    }
  }
  if ( !*((_QWORD *)this + 10) )
  {
    for ( j = 0; j < 2; ++j )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 480LL))(*((_QWORD *)this + 3));
      (*(void (__fastcall **)(_QWORD, __int64, bool))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        15,
        *((_DWORD *)this + 35) != 0);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        24,
        *((_DWORD *)this + 36) == 0 ? 0x3F : 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 25, 5);
      (*(void (__fastcall **)(_QWORD, __int64, bool))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        27,
        *((_DWORD *)this + 36) != 0);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 206, 0);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 19, 5);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(*((_QWORD *)this + 3), 20, 6);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 456LL))(
        *((_QWORD *)this + 3),
        171,
        1);
      v11 = (char *)this + 80;
      if ( j )
        v11 = (char *)this + 88;
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 488LL))(*((_QWORD *)this + 3), v11);
    }
  }
  if ( !*((_QWORD *)this + 12) )
  {
    for ( k = 0; k < 2; ++k )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 480LL))(*((_QWORD *)this + 3));
      v13 = *((_QWORD *)this + 3);
      v22[14] = 0.0;
      v22[13] = 0.0;
      v22[12] = 0.0;
      v22[11] = 0.0;
      v22[9] = 0.0;
      v22[8] = 0.0;
      v22[7] = 0.0;
      v22[6] = 0.0;
      v22[4] = 0.0;
      v22[3] = 0.0;
      v22[2] = 0.0;
      v22[1] = 0.0;
      v22[15] = 1.0;
      v22[10] = 1.0;
      v22[5] = 1.0;
      v22[0] = 1.0;
      (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v13 + 352LL))(v13, 256, v22);
      (*(void (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 3) + 352LL))(
        *((_QWORD *)this + 3),
        2,
        v22);
      if ( !k )
        (*(void (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 3) + 352LL))(
          *((_QWORD *)this + 3),
          3,
          v22);
      v14 = (char *)this + 96;
      if ( k )
        v14 = (char *)this + 104;
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 488LL))(*((_QWORD *)this + 3), v14);
    }
  }
  v15 = *((_DWORD *)this + 57);
  if ( (v15 & 2) == 0 )
  {
    if ( (v15 & 1) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 32LL))(*((_QWORD *)this + 8));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
  }
  v16 = *((_DWORD *)this + 57);
  if ( (v16 & 0x10) != 0 )
  {
    if ( (v16 & 1) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  }
  v17 = *((_DWORD *)this + 57);
  if ( (v17 & 4) != 0 )
  {
    if ( (v17 & 8) != 0 )
    {
      if ( (v17 & 1) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 40LL))(*((_QWORD *)this + 13));
    }
  }
  else
  {
    if ( (v17 & 1) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 40LL))(*((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 3) + 384LL))(*((_QWORD *)this + 3), v21);
    v18 = 1.0 / (float)v21[2];
    v19 = 1.0 / (float)v21[3];
    memset(v22, 0, 0x40u);
    v20 = *((_QWORD *)this + 3);
    v22[10] = 1.0;
    v22[15] = 1.0;
    v22[0] = v18 * 2.0;
    v22[5] = v19 * -2.0;
    v22[12] = (float)((float)((float)(v18 * -2.0) * (float)v21[0]) - v18) - 1.0;
    v22[13] = (float)((float)((float)(v19 * 2.0) * (float)v21[1]) + v19) + 1.0;
    (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v20 + 352LL))(v20, 3, v22);
  }
  D3DXDebugMuteInt(0);
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 56) = 1;
  return 0;
}
