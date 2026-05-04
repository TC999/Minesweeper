__int64 __fastcall Access_Node::accDoDefaultAction(Access_Node *this, struct tagVARIANT *a2)
{
  __int64 GameEvent; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rdi

  if ( a2->vt != 3 || a2->lVal )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 2) )
    return 2147500037LL;
  GameEvent = Event::CreateGameEvent(0x18u);
  v5 = (void (__fastcall ***)(_QWORD, __int64))GameEvent;
  if ( GameEvent )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), GameEvent);
    (**v5)(v5, 1);
  }
  return 0;
}
