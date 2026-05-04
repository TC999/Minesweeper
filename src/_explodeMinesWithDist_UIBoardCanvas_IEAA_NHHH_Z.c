char __fastcall UIBoardCanvas::explodeMinesWithDist(UIBoardCanvas *this, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  signed int v5; // ebp
  signed int v6; // r12d
  unsigned int v10; // r10d
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r11
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // r10d
  int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // r11d
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // r13d
  int v26; // r12d
  unsigned int v27; // ebp
  __int64 v28; // r15
  int v29; // edx
  int v30; // esi
  __m128i v31; // xmm0
  int v32; // ecx
  int v33; // eax
  float v34; // xmm6_4
  _DWORD *v35; // rsi
  unsigned int TimedEvent; // eax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  void *v39; // rax
  int v41; // [rsp+20h] [rbp-88h]
  int v42; // [rsp+24h] [rbp-84h]
  unsigned int v43; // [rsp+28h] [rbp-80h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  __int64 v46; // [rsp+40h] [rbp-68h]
  char v47; // [rsp+B0h] [rbp+8h]

  v4 = *((_QWORD *)this + 7);
  v5 = *(_DWORD *)(v4 + 16);
  v6 = *(_DWORD *)(v4 + 12);
  v47 = 1;
  v10 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v11 = *((_QWORD *)this + 3);
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + v11);
      v14 = 0;
      if ( *(_DWORD *)v13 )
        break;
LABEL_9:
      ++v10;
      v12 += 8;
      if ( v10 >= *((_DWORD *)this + 2) )
        goto LABEL_10;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v14
                    + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 88LL) + 16LL) + v12) + 16LL)) )
      {
        v16 = *(_QWORD *)(v13 + 16);
        if ( !*(_QWORD *)(*(_QWORD *)(v16 + v15) + 56LL) && *(_QWORD *)(v16 + v15) != *((_QWORD *)this + 31) )
          break;
      }
      ++v14;
      v15 += 8;
      if ( v14 >= *(_DWORD *)v13 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_10:
    UIBoardCanvas::clearExplosionCheckers(this);
    v47 = 0;
  }
  v17 = a2;
  v18 = v5 - 1;
  if ( (int)(a2 + a4) < v5 )
    v18 = a2 + a4;
  LODWORD(v19) = v6 - 1;
  v20 = 0;
  v21 = 0;
  if ( (int)(a3 - a4) >= 0 )
    v20 = a3 - a4;
  if ( (int)(a3 + a4) < v6 )
    LODWORD(v19) = a3 + a4;
  v22 = v18;
  if ( (int)(a2 - a4) >= 0 )
    v21 = a2 - a4;
  v23 = (int)v20;
  v19 = (int)v19;
  v24 = v21;
  v43 = v20;
  v46 = v18;
  v45 = (int)v20;
  v44 = (int)v19;
  if ( v21 > (__int64)v18 )
    return v47;
  v25 = v21 - a2;
  v26 = a2 - v21;
  do
  {
    v27 = v20;
    v28 = v23;
    if ( v23 > v19 )
      goto LABEL_44;
    v29 = a3;
    v30 = a3 - v20;
    v41 = v20 - a3;
    v42 = a3 - v20;
    do
    {
      if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v24) + 16LL) + 8 * v28) + 56LL)
        && *(_BYTE *)(v27
                    + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 88LL) + 16LL) + 8 * v24)
                                + 16LL))
        && (v17 != v21 || v29 != v27) )
      {
        v31 = _mm_cvtsi32_si128(a4);
        v32 = v26;
        if ( v21 > v17 )
          v32 = v25;
        v33 = v30;
        if ( (int)v27 > v29 )
          v33 = v41;
        if ( _mm_cvtepi32_ps(v31).m128_f32[0] <= sqrt((double)(v32 * v32 + v33 * v33)) )
          goto LABEL_41;
        v34 = (float)(rand() % 41) * 0.0099999998;
        v35 = operator new(0x18u);
        if ( v35 )
        {
          v35[4] = v21;
          v35[5] = v27;
          *(_QWORD *)v35 = &DelayedExplosion::`vftable';
          *((_BYTE *)v35 + 13) = 0;
        }
        else
        {
          v35 = 0;
        }
        TimedEvent = Timer::CreateTimedEvent(g_pTimer, (struct ITimerEventPrototype *)v35, v34, this);
        *((_BYTE *)v35 + 12) = 1;
        v35[2] = TimedEvent;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v24) + 16LL) + 8 * v28) + 56LL) = v35;
        v37 = *((_DWORD *)this + 77);
        if ( ++*((_DWORD *)this + 76) > v37 )
        {
          v38 = *((_DWORD *)this + 78) + v37;
          *((_DWORD *)this + 77) = v38;
          v39 = realloc(*((void **)this + 40), 8 * v38);
          if ( !v39 )
          {
            CheckAllocation(0);
LABEL_40:
            v30 = v42;
LABEL_41:
            v17 = a2;
            v29 = a3;
            goto LABEL_42;
          }
          *((_QWORD *)this + 40) = v39;
        }
        *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(*((_DWORD *)this + 76) - 1)) = v35;
        goto LABEL_40;
      }
LABEL_42:
      v19 = v44;
      ++v41;
      --v30;
      ++v28;
      ++v27;
      v42 = v30;
    }
    while ( v28 <= v44 );
    v20 = v43;
    v23 = v45;
    v22 = v46;
LABEL_44:
    ++v24;
    ++v21;
    ++v25;
    --v26;
  }
  while ( v24 <= v22 );
  return v47;
}
