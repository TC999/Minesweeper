void __fastcall Tip::Close(Tip *this, char a2)
{
  __int64 v3; // rdx
  __int64 GameEvent; // rbx
  int TimerEvent; // eax

  v3 = *((unsigned int *)this + 29);
  if ( (_DWORD)v3 )
  {
    Timer::DeleteEvent(g_pTimer, v3);
    *((_DWORD *)this + 29) = 0;
  }
  GameEvent = Event::CreateGameEvent(0x22u);
  *(_QWORD *)(GameEvent + 24) = this;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16), GameEvent);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 16LL))(*((_QWORD *)this + 17), GameEvent);
  (**(void (__fastcall ***)(__int64, __int64))GameEvent)(GameEvent, 1);
  if ( a2 )
  {
    TimerEvent = Timer::CreateTimerEvent(g_pTimer, this, 0.0099999998, 0);
    *((_DWORD *)this + 28) = -255;
    *((_DWORD *)this + 29) = TimerEvent;
  }
  else
  {
    Tip::OnTipFadedOut(this);
  }
}
