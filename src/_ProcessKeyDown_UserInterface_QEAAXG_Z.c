void __fastcall UserInterface::ProcessKeyDown(UserInterface *this, __int16 a2)
{
  UserInterface *v2; // rbx
  __int64 GameEvent; // rax
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  unsigned int v8; // esi
  struct NodeBase *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  void (__fastcall **v13)(_QWORD, __int64); // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  __int64 v15; // rax
  SHORT KeyState; // ax
  __int64 v17; // rdx
  char v18; // al
  unsigned int v19; // r13d
  __int64 v20; // r14
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  struct NodeBase *v23; // rsi
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  unsigned int NextFocus; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  void (__fastcall ***v30)(_QWORD, __int64); // rsi
  struct NodeBase *v31; // rdi
  struct NodeBase *v32; // [rsp+60h] [rbp+8h] BYREF
  DWORD pdwDefaultLayout; // [rsp+68h] [rbp+10h] BYREF
  __int64 v34; // [rsp+70h] [rbp+18h] BYREF

  v32 = this;
  v2 = g_pUserInterface;
  GameEvent = Event::CreateGameEvent(29);
  *(_QWORD *)(GameEvent + 8) = 0;
  *(_WORD *)(GameEvent + 24) = a2;
  v5 = GameEvent;
  v6 = 0;
  if ( *((_DWORD *)v2 + 24) )
  {
    v7 = 0;
    while ( 1 )
    {
      (***(void (__fastcall ****)(_QWORD, __int64))(v7 + *((_QWORD *)v2 + 14)))(
        *(_QWORD *)(v7 + *((_QWORD *)v2 + 14)),
        v5);
      if ( *(_BYTE *)(v5 + 26) )
        break;
      ++v6;
      v7 += 8;
      if ( v6 >= *((_DWORD *)v2 + 24) )
        goto LABEL_5;
    }
    v13 = *(void (__fastcall ***)(_QWORD, __int64))v5;
    v14 = (void (__fastcall ***)(_QWORD, __int64))v5;
    goto LABEL_71;
  }
LABEL_5:
  (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1);
  if ( a2 != 9 )
    goto LABEL_40;
  if ( !*((_DWORD *)v2 + 4) )
    return;
  v8 = *((_DWORD *)v2 + 6);
  *((_BYTE *)v2 + 300) = 1;
  v9 = 0;
  v32 = 0;
  v34 = 0;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v8, &v34) )
  {
    v10 = v34;
    if ( *(_BYTE *)(v34 + 75) == 1 )
    {
      v11 = Event::CreateGameEvent(22);
      *(_DWORD *)(v11 + 24) = -1;
      v12 = v11;
      *(_BYTE *)(v11 + 28) = GetKeyState(16) < 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v12);
LABEL_14:
      v17 = *(unsigned int *)(v12 + 24);
      if ( (_DWORD)v17 != -1 )
      {
        v18 = SortedListI<NodeBase *>::TryGet(v2, v17, &v32);
        v9 = (struct NodeBase *)((unsigned __int64)v32 & -(__int64)(v18 != 0));
      }
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1);
      goto LABEL_37;
    }
  }
  if ( v8 == -1 )
  {
    if ( *((_QWORD *)v2 + 21) )
    {
      v15 = Event::CreateGameEvent(22);
      *(_DWORD *)(v15 + 24) = -1;
      v12 = v15;
      KeyState = GetKeyState(16);
      *(_QWORD *)(v12 + 8) = 0;
      *(_BYTE *)(v12 + 28) = KeyState < 0;
      (***((void (__fastcall ****)(_QWORD, __int64))v2 + 21))(*((_QWORD *)v2 + 21), v12);
      goto LABEL_14;
    }
    v8 = *((_DWORD *)v2 + 57);
    if ( v8 == -1 )
      v8 = 0;
  }
  v19 = **(_DWORD **)v2 + 1;
  v20 = Event::CreateGameEvent(16);
  if ( GetKeyState(16) >= 0
    && (pdwDefaultLayout = 0, GetProcessDefaultLayout(&pdwDefaultLayout), (pdwDefaultLayout & 1) == 0)
    || GetKeyState(16) < 0
    && (pdwDefaultLayout = 0, GetProcessDefaultLayout(&pdwDefaultLayout), (pdwDefaultLayout & 1) != 0) )
  {
    v21 = 0;
    if ( v19 )
    {
      v22 = v8 + 1;
      while ( 1 )
      {
        if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v22 % v19, &v32) == 1 )
        {
          v23 = v32;
          *(_BYTE *)(v20 + 24) = 0;
          (*(void (__fastcall **)(struct NodeBase *, __int64))(*(_QWORD *)v23 + 16LL))(v23, v20);
          if ( *(_BYTE *)(v20 + 24) )
            break;
        }
        ++v21;
        ++v22;
        if ( v21 >= v19 )
          goto LABEL_36;
      }
LABEL_35:
      v9 = v23;
    }
  }
  else
  {
    v24 = v19 - 1;
    if ( v19 )
    {
      v25 = v24 + v8;
      do
      {
        if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v25 % v19, &v32) == 1 )
        {
          v23 = v32;
          *(_BYTE *)(v20 + 24) = 0;
          (*(void (__fastcall **)(struct NodeBase *, __int64))(*(_QWORD *)v23 + 16LL))(v23, v20);
          if ( *(_BYTE *)(v20 + 24) )
            goto LABEL_35;
        }
        --v24;
        --v25;
      }
      while ( v24 < v19 );
    }
  }
LABEL_36:
  (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1);
LABEL_37:
  if ( !v9 || !*((_BYTE *)v9 + 72) )
    return;
  UserInterface::SetFocus(v2, v9);
LABEL_40:
  if ( a2 == 40 )
  {
    *((_BYTE *)v2 + 300) = 1;
    NextFocus = UserInterface::GetNextFocus((__int64)v2, 0);
    if ( NextFocus == -1
      || !(unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, NextFocus, &v32)
      || !*((_BYTE *)v32 + 72) )
    {
      return;
    }
    UserInterface::SetFocus(v2, v32);
  }
  if ( a2 == 38 )
  {
    *((_BYTE *)v2 + 300) = 1;
    v27 = UserInterface::GetNextFocus((__int64)v2, 1);
    if ( v27 == -1 || !(unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v27, &v32) || !*((_BYTE *)v32 + 72) )
      return;
    UserInterface::SetFocus(v2, v32);
  }
  if ( a2 == 37 )
  {
    *((_BYTE *)v2 + 300) = 1;
    v28 = UserInterface::GetNextFocus((__int64)v2, 2);
    if ( v28 == -1 || !(unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v28, &v32) || !*((_BYTE *)v32 + 72) )
      return;
    UserInterface::SetFocus(v2, v32);
  }
  if ( a2 == 39 )
  {
    *((_BYTE *)v2 + 300) = 1;
    v29 = UserInterface::GetNextFocus((__int64)v2, 3);
    if ( v29 == -1 || !(unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, v29, &v32) || !*((_BYTE *)v32 + 72) )
      return;
    UserInterface::SetFocus(v2, v32);
  }
  if ( a2 == 32 || a2 == 13 )
  {
    *((_BYTE *)v2 + 300) = 1;
    if ( *((_DWORD *)v2 + 52) == -1 && *((_DWORD *)v2 + 6) != -1 )
    {
      v30 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(19);
      if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v2, *((unsigned int *)v2 + 6), &v32) )
      {
        v31 = v32;
        if ( *((_BYTE *)v32 + 72) )
          (*(void (__fastcall **)(struct NodeBase *, _QWORD))(*(_QWORD *)v32 + 16LL))(v32, v30);
        *((_DWORD *)v2 + 52) = *((_DWORD *)v31 + 56);
      }
      else
      {
        *((_DWORD *)v2 + 6) = -1;
      }
      if ( v30 )
      {
        v13 = *v30;
        v14 = v30;
LABEL_71:
        (*v13)(v14, 1);
      }
    }
  }
}
