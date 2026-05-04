void __fastcall Timer::Update(Timer *this, float a2)
{
  Timer *v2; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r9
  float v8; // xmm6_4
  void (__fastcall ***v9)(_QWORD, __int64); // r15
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 GameEvent; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rbx
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rsi
  unsigned int v23; // ebp
  _QWORD Src[6]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+8h]
  __int64 v26; // [rsp+B0h] [rbp+18h]

  v2 = g_pTimer;
  *((_BYTE *)g_pTimer + 72) = 1;
  v3 = 0;
  v25 = 0;
  if ( *((_DWORD *)v2 + 4) )
  {
    v4 = 0;
    v5 = 0;
    v26 = 0;
    do
    {
      memcpy(Src, (const void *)(v5 + *((_QWORD *)v2 + 1)), 0x20u);
      v6 = *(_QWORD *)v2;
      v7 = *((unsigned int *)v2 + 10);
      v8 = *((float *)Src + 1) + a2;
      *((float *)Src + 1) = *((float *)Src + 1) + a2;
      if ( (int)SortedListI<Event::RegisteredType>::BinSearch((char *)v2 + 24, *(unsigned int *)(v4 + v6), 0, v7) < 0 )
      {
        if ( v8 > *(float *)Src )
        {
          v9 = (void (__fastcall ***)(_QWORD, __int64))Src[2];
          v10 = Src[1];
          v11 = Src[3];
          do
          {
            v12 = *(_DWORD *)(v4 + v6);
            v8 = v8 + (float)(0.0 - *(float *)Src);
            if ( v9 )
            {
              GameEvent = Event::CreateGameEvent(15);
              *(_QWORD *)(GameEvent + 32) = v11;
              *(_DWORD *)(GameEvent + 24) = v12;
              v14 = (void (__fastcall ***)(_QWORD, __int64))GameEvent;
              (**v9)(v9, GameEvent);
              (**v14)(v14, 1);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 8LL))(v10, v12, v11);
            }
            v6 = *(_QWORD *)v2;
          }
          while ( (int)SortedListI<Event::RegisteredType>::BinSearch(
                         (char *)v2 + 24,
                         *(unsigned int *)(v4 + *(_QWORD *)v2),
                         0,
                         *((unsigned int *)v2 + 10)) < 0
               && v8 > *(float *)Src );
          v3 = v25;
          v5 = v26;
          *((float *)Src + 1) = v8;
        }
        v15 = *(_DWORD *)(v4 + *(_QWORD *)v2);
        if ( (int)SortedListI<Event::RegisteredType>::BinSearch((char *)v2 + 24, v15, 0, *((unsigned int *)v2 + 10)) < 0 )
        {
          v16 = SortedListI<Event::RegisteredType>::BinSearch(v2, v15, 0, *((unsigned int *)v2 + 4));
          memcpy((void *)(*((_QWORD *)v2 + 1) + 32LL * v16), Src, 0x20u);
        }
      }
      ++v3;
      v5 += 32;
      v4 += 4;
      v25 = v3;
      v26 = v5;
    }
    while ( v3 < *((_DWORD *)v2 + 4) );
  }
  *((_BYTE *)v2 + 72) = 0;
  v17 = 0;
  if ( *((_DWORD *)v2 + 16) )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      memcpy(Src, (const void *)(v19 + *((_QWORD *)v2 + 7)), 0x20u);
      ((void (__fastcall *)(Timer *, _QWORD, _QWORD *, __int64))SortedListI<Timer::TimerEvent>::Add)(
        v2,
        *(unsigned int *)(v18 + *((_QWORD *)v2 + 6)),
        Src,
        v20);
      ++v17;
      v19 += 32;
      v18 += 4;
    }
    while ( v17 < *((_DWORD *)v2 + 16) );
  }
  *((_DWORD *)v2 + 16) = 0;
  v21 = 0;
  if ( *((_DWORD *)v2 + 10) )
  {
    v22 = 0;
    do
    {
      v23 = *(_DWORD *)(v22 + *((_QWORD *)v2 + 4));
      if ( (int)SortedListI<Event::RegisteredType>::BinSearch(v2, v23, 0, *((unsigned int *)v2 + 4)) >= 0 )
        SortedListI<Timer::TimerEvent>::Remove(v2, v23);
      ++v21;
      v22 += 4;
    }
    while ( v21 < *((_DWORD *)v2 + 10) );
  }
  *((_DWORD *)v2 + 10) = 0;
}
