__int64 __fastcall Access_Node::accSelect(Access_Node *this, int a2, struct tagVARIANT *a3)
{
  __int64 GameEvent; // rax
  __int64 v6; // rbx

  if ( a2 != 1 || a3->vt != 3 || a3->lVal )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 2) )
    return 2147500037LL;
  GameEvent = Event::CreateGameEvent(0x10u);
  v6 = GameEvent;
  if ( GameEvent )
  {
    *(_BYTE *)(GameEvent + 24) = 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), GameEvent);
    if ( !*(_BYTE *)(v6 + 24) )
    {
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1);
      return 2147942487LL;
    }
    (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1);
  }
  UserInterface::SetFocus(g_pUserInterface, *((struct NodeBase **)this + 2));
  return 0;
}
