bool __fastcall NodeEmitter::doRunning(NodeEmitter *this, float a2, __int64 a3)
{
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64); // rax
  void (*v16)(void); // rax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64, __int64, __int64); // rax
  float v19; // xmm0_4
  float v20; // xmm1_4
  void (__fastcall *v21)(__int64, float *, __int64); // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // [rsp+90h] [rbp+8h] BYREF
  float v26; // [rsp+A0h] [rbp+18h]

  if ( !*((_BYTE *)this + 41) )
    return *((_DWORD *)this + 118) != 0;
  if ( *((_DWORD *)this + 145) )
    (*((void (**)(void))this + 69))();
  v6 = 0;
  if ( *((_DWORD *)this + 118) )
  {
    v7 = 0;
    do
    {
      v8 = *((_QWORD *)this + 61);
      v9 = *(_QWORD *)(v8 + v7);
      *((_QWORD *)this + 71) = v9;
      if ( *(_BYTE *)(v9 + 24) == 1 )
      {
        *(_QWORD *)(v8 + v7) = *(_QWORD *)(v8 + 8LL * (unsigned int)(*((_DWORD *)this + 118) - 1));
        v10 = *((_DWORD *)this + 118);
        if ( v10 )
          *((_DWORD *)this + 118) = v10 - 1;
        Array<IEventListener *>::Add((__int64)this + 496, *((_QWORD *)this + 71));
        --v6;
        v7 -= 8;
      }
      else
      {
        v11 = a2;
        if ( a2 > *(float *)(v9 + 12) )
          v11 = *(float *)(v9 + 12);
        v12 = *(float *)(v9 + 12) - v11;
        *(float *)(v9 + 12) = v12;
        if ( v12 <= 0.0 )
        {
          *(_DWORD *)(v9 + 12) = 0;
          *(_BYTE *)(v9 + 24) = 1;
        }
        v13 = *(_QWORD *)(v9 + 16);
        v14 = v9 + 52;
        *(_DWORD *)(v9 + 52) = (int)(float)((float)(*(float *)(v9 + 12) / *(float *)(v9 + 8)) * 255.0);
        v15 = *(void (__fastcall **)(__int64, __int64))(v13 + 584);
        if ( v15 )
        {
          v15(v13, v13);
        }
        else
        {
          v16 = *(void (**)(void))(v13 + 560);
          if ( v16 )
            v16();
          v17 = *(_QWORD *)(v9 + 16);
          v18 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v17 + 544);
          if ( v18 )
          {
            v18(v17, v14, v9 + 28, v9 + 32);
          }
          else
          {
            v19 = 0.0;
            v20 = 0.0;
            v25 = 0.0;
            v26 = 0.0;
            v21 = *(void (__fastcall **)(__int64, float *, __int64))(v17 + 536);
            if ( v21 )
            {
              v21(v17, &v25, a3);
              v19 = v25;
              v20 = v26;
            }
            v22 = (float)(v19 * v11) + *(float *)(v9 + 36);
            v23 = (float)(v20 * v11) + *(float *)(v9 + 40);
            *(float *)(v9 + 36) = v22;
            *(float *)(v9 + 40) = v23;
            v24 = (float)(v23 * v11) + *(float *)(v9 + 32);
            *(float *)(v9 + 28) = (float)(v22 * v11) + *(float *)(v9 + 28);
            *(float *)(v9 + 32) = v24;
          }
        }
      }
      ++v6;
      v7 += 8;
    }
    while ( v6 < *((_DWORD *)this + 118) );
  }
  return 1;
}
