void __fastcall UserInterface::ProcessMouseUp(UserInterface *this, int a2, char a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rsi
  __int64 GameEvent; // rax
  bool v8; // r12
  char *v9; // r14
  bool v10; // r15
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  __int64 v12; // r12
  int v13; // r11d
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // r12
  void (__fastcall ***v20)(_QWORD, __int64); // rbx
  struct NodeBase *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void (__fastcall ***v24)(_QWORD, __int64); // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !this )
    return;
  UserInterface::StandardUpdate(this, 0, 0.0);
  if ( (unsigned int)v5 > 2 || !*((_BYTE *)this + v5 + 272) )
    return;
  *((_BYTE *)this + v5 + 272) = 0;
  GameEvent = Event::CreateGameEvent(11);
  *(_DWORD *)(GameEvent + 32) = *((_DWORD *)this + 66);
  v8 = (a3 & 8) != 0;
  v9 = (char *)this + 272;
  v10 = (a3 & 4) != 0;
  *(_DWORD *)(GameEvent + 36) = *((_DWORD *)this + 67);
  *(_DWORD *)(GameEvent + 48) = v5;
  *(_QWORD *)(GameEvent + 24) = (char *)this + 272;
  *(_BYTE *)(GameEvent + 40) = v8;
  *(_QWORD *)(GameEvent + 8) = 0;
  *(_BYTE *)(GameEvent + 41) = v10;
  v11 = (void (__fastcall ***)(_QWORD, __int64))GameEvent;
  LOBYTE(v28) = v8;
  if ( *((_DWORD *)this + 30) )
  {
    v12 = 0;
    do
    {
      (***(void (__fastcall ****)(_QWORD, _QWORD))(v12 + *((_QWORD *)this + 17)))(
        *(_QWORD *)(v12 + *((_QWORD *)this + 17)),
        v11);
      ++v3;
      v12 += 8;
    }
    while ( v3 < *((_DWORD *)this + 30) );
    v8 = v28;
  }
  (**v11)(v11, 1);
  v13 = *((_DWORD *)this + 66);
  v14 = 0;
  if ( v13 >= 0 )
  {
    v15 = *((_DWORD *)this + 67);
    if ( v15 >= 0 && v13 < *((_DWORD *)this + 64) && v15 < *((_DWORD *)this + 65) )
    {
LABEL_18:
      if ( (_DWORD)v5 || !*((_QWORD *)this + 8) )
        goto LABEL_46;
      v20 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(28);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 16LL))(*((_QWORD *)this + 8), v20);
      if ( v20 )
        (**v20)(v20, 1);
      v21 = (struct NodeBase *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0;
      if ( !v21 )
      {
LABEL_46:
        v21 = RenderManager::HitTestTopLevel(g_pRenderManager, *((_DWORD *)this + 66), *((_DWORD *)this + 67), 0);
        if ( !v21 )
        {
          v21 = (struct NodeBase *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pRenderManager
                                                                                                + 15)
                                                                                             + 80LL))(
                                     *((_QWORD *)g_pRenderManager + 15),
                                     *((unsigned int *)this + 66),
                                     *((unsigned int *)this + 67),
                                     0);
          if ( !v21 )
            goto LABEL_28;
        }
      }
      if ( v21 == *((struct NodeBase **)this + v5 + 23) )
      {
        UserInterface::ReleaseCaptureNode(this);
        v22 = 6;
      }
      else
      {
LABEL_28:
        if ( !*((_QWORD *)this + v5 + 23) )
        {
LABEL_37:
          *((_QWORD *)this + v5 + 23) = 0;
          if ( !(_DWORD)v5 )
          {
            *((_BYTE *)this + 313) = 0;
            if ( *((_DWORD *)this + 52) != -1 || *((_DWORD *)this + 6) == -1 )
            {
              v27 = Event::CreateGameEvent(20);
              *(_BYTE *)(v27 + 24) = *((_DWORD *)this + 6) == *((_DWORD *)this + 52);
              if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(this, *((unsigned int *)this + 52), &v28) == 1 )
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 16LL))(v28, v27);
              *((_DWORD *)this + 52) = -1;
              (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1);
            }
          }
          UserInterface::ProcessMouseMove(this, 0);
          return;
        }
        UserInterface::ReleaseCaptureNode(this);
        v22 = 7;
      }
      v23 = Event::CreateGameEvent(v22);
      *(_DWORD *)(v23 + 32) = *((_DWORD *)this + 66);
      *(_DWORD *)(v23 + 36) = *((_DWORD *)this + 67);
      *(_QWORD *)(v23 + 24) = v9;
      *(_DWORD *)(v23 + 48) = v5;
      *(_BYTE *)(v23 + 40) = v8;
      *(_BYTE *)(v23 + 41) = v10;
      v24 = (void (__fastcall ***)(_QWORD, __int64))v23;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + v5 + 23) + 16LL))(*((_QWORD *)this + v5 + 23), v23);
      (**v24)(v24, 1);
      if ( *((_QWORD *)this + v5 + 23) )
      {
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 == 1 )
          {
            v26 = *((_QWORD *)this + 24);
            v25 = 5;
          }
          else
          {
            v25 = 7;
            v26 = *((_QWORD *)this + 25);
          }
        }
        else
        {
          v26 = *((_QWORD *)this + 23);
          v25 = 3;
        }
        NodeBase::HandleMouseEvent(
          v26,
          v25,
          *((unsigned int *)this + 66),
          *((unsigned int *)this + 67),
          (char *)this + 272);
      }
      goto LABEL_37;
    }
  }
  v16 = Event::CreateGameEvent(10);
  *(_DWORD *)(v16 + 32) = *((_DWORD *)this + 66);
  v17 = *((_DWORD *)this + 67);
  *(_QWORD *)(v16 + 24) = v9;
  *(_DWORD *)(v16 + 48) = v5;
  *(_BYTE *)(v16 + 40) = v8;
  *(_BYTE *)(v16 + 41) = v10;
  *(_DWORD *)(v16 + 36) = v17;
  *(_QWORD *)(v16 + 8) = 0;
  v18 = v16;
  if ( !*((_DWORD *)this + 36) )
  {
LABEL_17:
    (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1);
    goto LABEL_18;
  }
  v19 = 0;
  while ( 1 )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))(v19 + *((_QWORD *)this + 20)))(
      *(_QWORD *)(v19 + *((_QWORD *)this + 20)),
      v18);
    if ( *(_BYTE *)(v18 + 52) )
      break;
    ++v14;
    v19 += 8;
    if ( v14 >= *((_DWORD *)this + 36) )
    {
      v8 = v28;
      goto LABEL_17;
    }
  }
  (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1);
}
