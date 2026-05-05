void __fastcall UserInterface::SetFocus(UserInterface *this, struct NodeBase *a2)
{
  UserInterface *v3; // rbx
  __int64 GameEvent; // rax
  __int64 v5; // rsi
  __int64 i; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  int v9; // eax
  struct Access_Node *ANodeFor; // rax
  HWND v11; // rdx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = this;
  if ( !a2 )
  {
LABEL_2:
    UserInterface::ClearFocus(this);
    return;
  }
  if ( *((_DWORD *)a2 + 56) != *((_DWORD *)this + 6) )
  {
    GameEvent = Event::CreateGameEvent(16);
    *(_BYTE *)(GameEvent + 24) = 0;
    v5 = GameEvent;
    (*(void (__fastcall **)(struct NodeBase *, __int64))(*(_QWORD *)a2 + 16LL))(a2, GameEvent);
    if ( !*(_BYTE *)(v5 + 24) )
    {
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1);
      if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v3, *((unsigned int *)v3 + 6), &v12) == 1 )
      {
        for ( i = *((_QWORD *)a2 + 17); i; i = *(_QWORD *)(i + 136) )
        {
          if ( i == v12 )
            return;
        }
      }
      this = v3;
      goto LABEL_2;
    }
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1);
    if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v3, *((unsigned int *)v3 + 6), &v12) == 1 )
    {
      v7 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(18);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 16LL))(v12, v7);
      if ( v7 )
        (**v7)(v7, 1);
      *((_DWORD *)v3 + 6) = -1;
    }
    v8 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(17);
    (*(void (__fastcall **)(struct NodeBase *, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v8);
    if ( v8 )
      (**v8)(v8, 1);
    v9 = *((_DWORD *)a2 + 56);
    *((_DWORD *)v3 + 6) = v9;
    *((_DWORD *)v3 + 57) = v9;
    *((_DWORD *)v3 + 79) = *((_DWORD *)g_pRenderManager + 44);
    if ( *((_BYTE *)a2 + 144) )
    {
      ANodeFor = UserInterface::Access_GetANodeFor(v3, a2);
      v11 = g_hWnd;
      *((_QWORD *)v3 + 7) = ANodeFor;
      NotifyWinEvent(0x8005u, v11, *((_DWORD *)ANodeFor + 3), 0);
    }
  }
}
