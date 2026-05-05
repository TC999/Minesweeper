void __fastcall UserInterface::ClearFocus(UserInterface *this)
{
  __int64 v1; // rdx
  void (__fastcall ***GameEvent)(_QWORD, __int64); // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 6);
  if ( (_DWORD)v1 != -1 )
  {
    if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(this, v1, &v4) == 1 )
    {
      GameEvent = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(18);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, GameEvent);
      if ( GameEvent )
        (**GameEvent)(GameEvent, 1);
    }
    *((_DWORD *)this + 6) = -1;
  }
}
