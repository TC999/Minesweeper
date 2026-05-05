void __fastcall UserInterface::ProcessMouseDown(UserInterface *this, int a2, char a3)
{
  UserInterface *v3; // rdi
  __int64 v5; // rbp
  __int64 GameEvent; // rax
  int v7; // ecx
  char *v8; // r13
  bool v9; // si
  bool v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // r11d
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r12d
  int v18; // ecx
  __int64 v19; // rsi
  struct NodeBase *v20; // rsi
  __int64 v21; // rax
  char v22; // r12
  int v23; // ecx
  void (__fastcall ***v24)(_QWORD, __int64); // rbx
  __int64 v25; // rdx
  char v26; // bp
  int v27; // ebx
  int v28; // ecx
  UINT v29; // ebx
  __int64 v30; // rax
  int v31; // ecx
  void (__fastcall ***v32)(_QWORD, __int64); // rbx
  int v33; // eax
  void (__fastcall ***v34)(_QWORD, __int64); // rsi
  UserInterface *v35; // rbx
  UserInterface *v36; // [rsp+60h] [rbp+8h] BYREF

  v36 = this;
  v3 = g_pUserInterface;
  v5 = a2;
  if ( g_pUserInterface )
  {
    UserInterface::StandardUpdate(g_pUserInterface, 0, 0.0);
    if ( (unsigned int)v5 <= 2 && *((_BYTE *)v3 + v5 + 272) != 1 )
    {
      *((_BYTE *)v3 + v5 + 272) = 1;
      GameEvent = Event::CreateGameEvent(4);
      *(_DWORD *)(GameEvent + 32) = *((_DWORD *)v3 + 66);
      v7 = *((_DWORD *)v3 + 67);
      *(_QWORD *)(GameEvent + 8) = 0;
      v8 = (char *)v3 + 272;
      v9 = (a3 & 8) != 0;
      v10 = (a3 & 4) != 0;
      v11 = 0;
      *(_DWORD *)(GameEvent + 36) = v7;
      *(_QWORD *)(GameEvent + 24) = (char *)v3 + 272;
      *(_DWORD *)(GameEvent + 48) = v5;
      *(_BYTE *)(GameEvent + 40) = v9;
      *(_BYTE *)(GameEvent + 41) = v10;
      v12 = GameEvent;
      LOBYTE(v36) = v9;
      if ( *((_DWORD *)v3 + 30) )
      {
        v13 = 0;
        while ( 1 )
        {
          (***(void (__fastcall ****)(_QWORD, __int64))(v13 + *((_QWORD *)v3 + 17)))(
            *(_QWORD *)(v13 + *((_QWORD *)v3 + 17)),
            v12);
          if ( *(_BYTE *)(v12 + 52) )
            goto LABEL_24;
          ++v11;
          v13 += 8;
          if ( v11 >= *((_DWORD *)v3 + 30) )
          {
            v9 = (char)v36;
            break;
          }
        }
      }
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1);
      v14 = *((_DWORD *)v3 + 66);
      if ( v14 < 0
        || (v15 = *((_DWORD *)v3 + 67), v15 < 0)
        || v14 >= *((_DWORD *)v3 + 64)
        || v15 >= *((_DWORD *)v3 + 65) )
      {
        v16 = Event::CreateGameEvent(9);
        v17 = 0;
        *(_DWORD *)(v16 + 32) = *((_DWORD *)v3 + 66);
        v18 = *((_DWORD *)v3 + 67);
        *(_QWORD *)(v16 + 8) = 0;
        *(_DWORD *)(v16 + 36) = v18;
        *(_QWORD *)(v16 + 24) = v8;
        *(_DWORD *)(v16 + 48) = v5;
        *(_BYTE *)(v16 + 40) = v9;
        *(_BYTE *)(v16 + 41) = v10;
        v12 = v16;
        if ( *((_DWORD *)v3 + 36) )
        {
          v19 = 0;
          while ( 1 )
          {
            (***(void (__fastcall ****)(_QWORD, __int64))(v19 + *((_QWORD *)v3 + 20)))(
              *(_QWORD *)(v19 + *((_QWORD *)v3 + 20)),
              v12);
            if ( *(_BYTE *)(v12 + 52) )
              break;
            ++v17;
            v19 += 8;
            if ( v17 >= *((_DWORD *)v3 + 36) )
              goto LABEL_17;
          }
LABEL_24:
          (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1);
          return;
        }
LABEL_17:
        (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1);
      }
      v20 = (struct NodeBase *)*((_QWORD *)v3 + 8);
      if ( v20
        || (v20 = RenderManager::HitTestTopLevel(g_pRenderManager, *((_DWORD *)v3 + 66), *((_DWORD *)v3 + 67), 0)) != 0
        || (v20 = (struct NodeBase *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pRenderManager
                                                                                                  + 15)
                                                                                               + 80LL))(
                                       *((_QWORD *)g_pRenderManager + 15),
                                       *((unsigned int *)v3 + 66),
                                       *((unsigned int *)v3 + 67),
                                       0)) != 0 )
      {
        v21 = Event::CreateGameEvent(4);
        v22 = (char)v36;
        *(_DWORD *)(v21 + 32) = *((_DWORD *)v3 + 66);
        v23 = *((_DWORD *)v3 + 67);
        *(_QWORD *)(v21 + 24) = v8;
        *(_DWORD *)(v21 + 36) = v23;
        *(_DWORD *)(v21 + 48) = v5;
        *(_BYTE *)(v21 + 40) = v22;
        *(_BYTE *)(v21 + 41) = v10;
        v24 = (void (__fastcall ***)(_QWORD, __int64))v21;
        (*(void (__fastcall **)(struct NodeBase *, __int64))(*(_QWORD *)v20 + 16LL))(v20, v21);
        (**v24)(v24, 1);
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 == 1 )
            v25 = 4;
          else
            v25 = 6;
        }
        else
        {
          v25 = 2;
        }
        NodeBase::HandleMouseEvent(v20, v25, *((unsigned int *)v3 + 66), *((unsigned int *)v3 + 67), (char *)v3 + 272);
        *((_QWORD *)v3 + v5 + 23) = v20;
      }
      else
      {
        v22 = (char)v36;
      }
      if ( !(_DWORD)v5 )
      {
        v26 = 0;
        if ( v20 )
        {
          if ( v20 != *((struct NodeBase **)v3 + 27) )
            goto LABEL_38;
          v27 = GetSystemMetrics(36) / 2;
          v28 = GetSystemMetrics(37) / 2;
          if ( (int)abs32(*((_DWORD *)v3 + 20) - *((_DWORD *)v3 + 66)) < v27
            && (int)abs32(*((_DWORD *)v3 + 21) - *((_DWORD *)v3 + 67)) < v28
            || g_bMouseHidden )
          {
            v29 = timeGetTime() - *((_DWORD *)v3 + 56);
            if ( v29 < GetDoubleClickTime() )
            {
              v30 = Event::CreateGameEvent(5);
              v26 = 1;
              *(_DWORD *)(v30 + 32) = *((_DWORD *)v3 + 66);
              v31 = *((_DWORD *)v3 + 67);
              *(_QWORD *)(v30 + 24) = v8;
              *(_DWORD *)(v30 + 36) = v31;
              *(_DWORD *)(v30 + 48) = 0;
              *(_BYTE *)(v30 + 40) = v22;
              *(_BYTE *)(v30 + 41) = v10;
              *((_BYTE *)v3 + 313) = 1;
              v32 = (void (__fastcall ***)(_QWORD, __int64))v30;
              (*(void (__fastcall **)(struct NodeBase *, __int64))(*(_QWORD *)v20 + 16LL))(v20, v30);
              (**v32)(v32, 1);
            }
          }
          *((_QWORD *)v3 + 27) = 0;
          if ( !v26 )
          {
LABEL_38:
            *((_QWORD *)v3 + 27) = v20;
            *((_DWORD *)v3 + 56) = timeGetTime();
          }
        }
        if ( *((_DWORD *)v3 + 52) == -1 )
        {
          v33 = *((_DWORD *)v3 + 6);
          if ( v33 != -1 && v20 && *((_DWORD *)v20 + 56) == v33 )
          {
            v34 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(19);
            if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(v3, *((unsigned int *)v3 + 6), &v36) )
            {
              v35 = v36;
              (*(void (__fastcall **)(UserInterface *, _QWORD))(*(_QWORD *)v36 + 16LL))(v36, v34);
              *((_DWORD *)v3 + 52) = *((_DWORD *)v35 + 56);
            }
            else
            {
              *((_DWORD *)v3 + 6) = -1;
            }
            if ( v34 )
              (**v34)(v34, 1);
          }
        }
      }
      *((_DWORD *)v3 + 20) = *((_DWORD *)v3 + 66);
      *((_DWORD *)v3 + 21) = *((_DWORD *)v3 + 67);
      UserInterface::ProcessMouseMove(v3, 0);
    }
  }
}
