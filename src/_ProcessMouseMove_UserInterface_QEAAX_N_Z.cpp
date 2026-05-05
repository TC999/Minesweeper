void __fastcall UserInterface::ProcessMouseMove(UserInterface *this, char a2)
{
  unsigned int v2; // esi
  int v5; // r11d
  int v6; // eax
  char v7; // r13
  char v8; // cl
  __int64 v9; // rcx
  NodeBase *v10; // rcx
  int v11; // ebp
  int v12; // ebx
  char v13; // r9
  __int64 GameEvent; // rax
  __int64 v15; // rcx
  char *v16; // r12
  float v17; // xmm3_4
  int v18; // ebx
  int v19; // r14d
  __int64 v20; // rbp
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  int v24; // r8d
  _DWORD *v25; // rax
  void (__fastcall ***v26)(_QWORD, __int64); // rbx
  void (__fastcall **v27)(_QWORD, __int64); // r11
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  struct NodeBase *v29; // rbp
  struct NodeBase *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  void (__fastcall ***v33)(_QWORD, __int64); // rbx
  struct NodeBase *v34; // rax
  struct NodeBase *v35; // rax
  unsigned int v36; // r13d
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ecx
  void (__fastcall ***v40)(_QWORD, __int64); // rbx
  __int64 v41; // rbx
  int v42; // ecx
  void (__fastcall ***v43)(_QWORD, __int64); // rbx
  int v44; // [rsp+70h] [rbp+8h] BYREF
  int v45; // [rsp+80h] [rbp+18h] BYREF
  struct tagPOINT Point; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  if ( !this || g_bMouseHidden )
    return;
  UserInterface::StandardUpdate(this, 0, 0.0);
  UserInterface::UpdateLayout(this);
  GetCursorPos(&Point);
  UserInterface::ScreenToLayout(this, Point.x, Point.y, &v45, &v44);
  v5 = v44;
  v6 = v45;
  if ( !a2 )
  {
    if ( *((_DWORD *)this + 66) != v45 )
    {
LABEL_8:
      v7 = 1;
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 67) == v44 )
      return;
  }
  if ( *((_DWORD *)this + 66) != v45 )
    goto LABEL_8;
  v7 = 0;
  if ( *((_DWORD *)this + 67) != v44 )
    goto LABEL_8;
LABEL_9:
  if ( !*((_BYTE *)this + 300) || (v8 = 1, v7) )
    v8 = 0;
  *((_BYTE *)this + 300) = v8;
  v9 = *((_QWORD *)this + 8);
  *((_DWORD *)this + 66) = v6;
  *((_DWORD *)this + 67) = v5;
  if ( v9 )
  {
    v10 = *(NodeBase **)(v9 + 136);
    v11 = -*((_DWORD *)this + 18);
    v12 = -*((_DWORD *)this + 19);
    if ( v10 )
    {
      NodeBase::GetLayoutLocation(v10, &v44, &v45);
      v11 += v44;
      v12 += v45;
    }
    NodeBase::SetPosition(*((NodeBase **)this + 8), *((_DWORD *)this + 66) - v11, *((_DWORD *)this + 67) - v12);
    if ( v13 )
    {
      GameEvent = Event::CreateGameEvent(27);
      v15 = *((_QWORD *)this + 8);
LABEL_54:
      v43 = (void (__fastcall ***)(_QWORD, __int64))GameEvent;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, GameEvent);
      v27 = *v43;
      v28 = v43;
LABEL_55:
      (*v27)(v28, 1);
      return;
    }
    return;
  }
  v16 = (char *)this + 272;
  if ( *((_BYTE *)this + 272) && *((_QWORD *)this + 23) && !*((_BYTE *)this + 313) )
  {
    v17 = (float)*((int *)this + 64);
    v18 = (int)(float)((float)(v17 / (float)*((int *)this + 73)) * (float)*((int *)this + 22));
    v19 = (int)(float)((float)(v17 / (float)*((int *)this + 74)) * (float)*((int *)this + 23));
    v20 = Event::CreateGameEvent(25);
    *(_BYTE *)(v20 + 24) = 0;
    if ( (int)abs32(*((_DWORD *)this + 66) - *((_DWORD *)this + 20)) >= v18 / 2
      || (v21 = 0, (int)abs32(*((_DWORD *)this + 67) - *((_DWORD *)this + 21)) >= v19 / 2) )
    {
      v21 = 1;
    }
    *(_BYTE *)(v20 + 25) = v21;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 16LL))(*((_QWORD *)this + 23), v20);
    if ( *(_BYTE *)(v20 + 24) )
    {
      *((_QWORD *)this + 8) = *((_QWORD *)this + 23);
      UserInterface::UpdateLayout(this);
      NodeBase::GetLayoutLocation(*((NodeBase **)this + 8), (int *)this + 18, (int *)this + 19);
      v22 = *((_DWORD *)this + 21);
      *((_DWORD *)this + 18) -= *((_DWORD *)this + 20);
      *((_DWORD *)this + 19) -= v22;
      v23 = *((_QWORD *)this + 8);
      v24 = *((_DWORD *)this + 19);
      if ( *(_DWORD *)(v23 + 104) )
      {
        v25 = *(_DWORD **)(v23 + 120);
        while ( *v25 != 1 )
        {
          ++v2;
          ++v25;
          if ( v2 >= *(_DWORD *)(v23 + 104) )
            goto LABEL_30;
        }
        *((_DWORD *)this + 18) += *(_DWORD *)(v23 + 388);
        *((_DWORD *)this + 19) = v24 + *(_DWORD *)(v23 + 392);
      }
LABEL_30:
      v26 = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(26);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 16LL))(*((_QWORD *)this + 8), v26);
      (**v26)(v26, 1);
      v27 = *(void (__fastcall ***)(_QWORD, __int64))v20;
      v28 = (void (__fastcall ***)(_QWORD, __int64))v20;
      goto LABEL_55;
    }
    (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1);
  }
  v29 = RenderManager::HitTestTopLevel(g_pRenderManager, *((_DWORD *)this + 66), *((_DWORD *)this + 67), 0);
  if ( !v29 )
    v29 = (struct NodeBase *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pRenderManager
                                                                                          + 15)
                                                                                       + 80LL))(
                               *((_QWORD *)g_pRenderManager + 15),
                               *((unsigned int *)this + 66),
                               *((unsigned int *)this + 67),
                               0);
  v30 = (struct NodeBase *)*((_QWORD *)this + 38);
  if ( v30 )
  {
    if ( *((_BYTE *)this + 312) )
    {
      if ( v29 == v30 )
        goto LABEL_42;
      v31 = 3;
    }
    else
    {
      if ( v29 != v30 )
      {
LABEL_42:
        v34 = (struct NodeBase *)*((_QWORD *)this + 38);
        *((_QWORD *)this + 22) = v34;
        *((_BYTE *)this + 312) = v29 == v34;
        return;
      }
      v31 = 2;
    }
    v32 = Event::CreateGameEvent(v31);
    *(_DWORD *)(v32 + 32) = *((_DWORD *)this + 66);
    *(_DWORD *)(v32 + 36) = *((_DWORD *)this + 67);
    *(_QWORD *)(v32 + 24) = v16;
    v33 = (void (__fastcall ***)(_QWORD, __int64))v32;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 16LL))(*((_QWORD *)this + 38), v32);
    (**v33)(v33, 1);
    goto LABEL_42;
  }
  *((_BYTE *)this + 280) = v7;
  UserInterface::SetFocus(this, v29);
  v35 = (struct NodeBase *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 280) = 0;
  if ( v29 != v35 )
  {
    if ( v35 )
    {
      v36 = 0;
      if ( *((_DWORD *)v35 + 84) )
      {
        v37 = 0;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 22)
                                                                                              + 352LL)
                                                                                  + v37))(
            *((_QWORD *)this + 22),
            1,
            *((unsigned int *)this + 66),
            *((unsigned int *)this + 67),
            (char *)this + 272,
            *(_QWORD *)(*((_QWORD *)this + 22) + 368LL));
          ++v36;
          v37 += 8;
        }
        while ( v36 < *(_DWORD *)(*((_QWORD *)this + 22) + 336LL) );
      }
      v38 = Event::CreateGameEvent(3);
      *(_DWORD *)(v38 + 32) = *((_DWORD *)this + 66);
      v39 = *((_DWORD *)this + 67);
      *(_QWORD *)(v38 + 24) = v16;
      *(_DWORD *)(v38 + 36) = v39;
      v40 = (void (__fastcall ***)(_QWORD, __int64))v38;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 16LL))(*((_QWORD *)this + 22), v38);
      (**v40)(v40, 1);
    }
    *((_QWORD *)this + 22) = v29;
    if ( v29 )
    {
      if ( *((_DWORD *)v29 + 84) )
      {
        v41 = 0;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 22)
                                                                                             + 352LL)
                                                                                 + v41))(
            *((_QWORD *)this + 22),
            0,
            *((unsigned int *)this + 66),
            *((unsigned int *)this + 67),
            (char *)this + 272,
            *(_QWORD *)(*((_QWORD *)this + 22) + 368LL));
          ++v2;
          v41 += 8;
        }
        while ( v2 < *(_DWORD *)(*((_QWORD *)this + 22) + 336LL) );
      }
      GameEvent = Event::CreateGameEvent(2);
      *(_DWORD *)(GameEvent + 32) = *((_DWORD *)this + 66);
      v42 = *((_DWORD *)this + 67);
      *(_QWORD *)(GameEvent + 24) = v16;
      *(_DWORD *)(GameEvent + 36) = v42;
      v15 = *((_QWORD *)this + 22);
      goto LABEL_54;
    }
  }
}
