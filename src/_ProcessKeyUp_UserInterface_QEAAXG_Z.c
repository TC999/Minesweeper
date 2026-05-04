void __fastcall UserInterface::ProcessKeyUp(UserInterface *this, __int16 a2)
{
  UserInterface *v2; // rbx
  __int64 GameEvent; // rax
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r12
  UserInterface *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v2 = g_pUserInterface;
  GameEvent = Event::CreateGameEvent(30);
  v5 = 0;
  *(_WORD *)(GameEvent + 24) = a2;
  v6 = GameEvent;
  if ( *((_DWORD *)v2 + 24) )
  {
    v7 = 0;
    do
    {
      (***(void (__fastcall ****)(_QWORD, __int64))(v7 + *((_QWORD *)v2 + 14)))(
        *(_QWORD *)(v7 + *((_QWORD *)v2 + 14)),
        v6);
      if ( *(_BYTE *)(v6 + 26) )
        goto LABEL_13;
      ++v5;
      v7 += 8;
    }
    while ( v5 < *((_DWORD *)v2 + 24) );
  }
  (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1);
  if ( (a2 == 32 || a2 == 13) && (*((_DWORD *)v2 + 52) != -1 || *((_DWORD *)v2 + 6) == -1) )
  {
    v6 = Event::CreateGameEvent(20);
    *(_BYTE *)(v6 + 24) = *((_DWORD *)v2 + 6) == *((_DWORD *)v2 + 52);
    if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, *((unsigned int *)v2 + 52), &v8) == 1 )
    {
      if ( *((_BYTE *)v8 + 72) )
        (*(void (__fastcall **)(UserInterface *, __int64))(*(_QWORD *)v8 + 16LL))(v8, v6);
    }
    *((_DWORD *)v2 + 52) = -1;
LABEL_13:
    (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1);
  }
}
