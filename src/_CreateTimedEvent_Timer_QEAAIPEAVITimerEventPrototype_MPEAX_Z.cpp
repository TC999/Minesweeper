__int64 __fastcall Timer::CreateTimedEvent(Timer *this, struct ITimerEventPrototype *a2, float a3, void *a4)
{
  Timer *v4; // rcx
  unsigned int v5; // ebx
  bool v6; // zf
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  struct ITimerEventPrototype *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  void *v11; // [rsp+38h] [rbp-10h]

  v10 = 0;
  v4 = g_pTimer;
  v9 = a2;
  v8 = LODWORD(a3);
  v11 = a4;
  v5 = g_uiNextHandle;
  v6 = *((_BYTE *)g_pTimer + 72) == 0;
  ++g_uiNextHandle;
  if ( !v6 )
    v4 = (Timer *)((char *)g_pTimer + 48);
  SortedListI<Timer::TimerEvent>::Add(v4, v5, &v8, a4, v8, v9, v10, v11);
  return v5;
}
