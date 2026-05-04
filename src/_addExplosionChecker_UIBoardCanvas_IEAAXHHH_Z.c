void __fastcall UIBoardCanvas::addExplosionChecker(void **this, int a2, int a3, int a4)
{
  float v8; // xmm6_4
  _DWORD *v9; // rdi
  unsigned int TimedEvent; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  void *v13; // rax

  if ( *((_DWORD *)this + 70) < 0x64u )
  {
    v8 = (float)((float)(rand() % 4) * 0.07) + 0.15000001;
    v9 = operator new(0x20u);
    if ( v9 )
    {
      v9[4] = a2;
      v9[5] = a3;
      v9[6] = a4;
      *((_BYTE *)v9 + 13) = 0;
      *(_QWORD *)v9 = &DelayedExplosionCheck::`vftable';
    }
    else
    {
      v9 = 0;
    }
    TimedEvent = Timer::CreateTimedEvent(g_pTimer, (struct ITimerEventPrototype *)v9, v8, this);
    *((_BYTE *)v9 + 12) = 1;
    v9[2] = TimedEvent;
    v11 = *((_DWORD *)this + 71);
    if ( ++*((_DWORD *)this + 70) > v11 )
    {
      v12 = *((_DWORD *)this + 72) + v11;
      *((_DWORD *)this + 71) = v12;
      v13 = realloc(this[37], 8 * v12);
      if ( !v13 )
      {
        CheckAllocation(0);
        return;
      }
      this[37] = v13;
    }
    *((_QWORD *)this[37] + (unsigned int)(*((_DWORD *)this + 70) - 1)) = v9;
  }
}
