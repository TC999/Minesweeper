__int64 __fastcall Access_Node::get_accChild(Access_Node *this, struct tagVARIANT *a2, struct IDispatch **a3)
{
  __int64 v6; // rax
  Access_Node *v7; // rbx
  unsigned int Lo; // ecx
  Access_Node *v10; // rcx
  struct IDispatch v11; // rax
  unsigned int v12; // r11d
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 GameEvent; // rax
  __int64 v17; // rsi
  struct NodeBase *v18; // rdx
  struct IDispatch *v19; // rax
  struct Access_Node *ANodeFor; // rax
  struct IDispatch *v21; // rdi
  __int64 v22; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF

  if ( a2->vt != 3 )
    return 2147942487LL;
  v6 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( !v6 )
    return 2147500037LL;
  Lo = a2->cyVal.Lo;
  if ( !Lo )
  {
    (*(void (__fastcall **)(Access_Node *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (struct IDispatch *)this;
    return 0;
  }
  if ( !*(_BYTE *)(v6 + 73) )
  {
    if ( g_hWndStatus )
    {
      if ( *((_DWORD *)g_pUserInterface + 8) )
        v7 = (Access_Node *)**((_QWORD **)g_pUserInterface + 6);
      if ( this == v7 && Lo == *((_DWORD *)this + 6) + 1 )
      {
        CreateStdAccessibleProxyW(g_hWndStatus, L"msctls_statusbar32", -4, &IID_IAccessible, (void **)a3);
        return 0;
      }
    }
    if ( Lo <= *((_DWORD *)this + 6) )
    {
      v22 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * (Lo - 1));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      *a3 = *(struct IDispatch **)(*((_QWORD *)this + 5) + 8LL * (unsigned int)(a2->lVal - 1));
      return 0;
    }
    return 2147942487LL;
  }
  if ( *((_DWORD *)g_pUserInterface + 8) )
    v10 = (Access_Node *)**((_QWORD **)g_pUserInterface + 6);
  else
    v10 = 0;
  if ( this != v10 )
    goto LABEL_22;
  v11.lpVtbl = *(struct IDispatchVtbl **)this;
  v23 = 0;
  ((void (__fastcall *)(Access_Node *, int *))v11.lpVtbl[1].AddRef)(this, &v23);
  if ( a2->lVal == v23 && g_hWndStatus )
  {
    CreateStdAccessibleProxyW(g_hWndStatus, L"msctls_statusbar32", -4, &IID_IAccessible, (void **)a3);
    return 0;
  }
  v12 = *((_DWORD *)g_pRenderManager + 32);
  v13 = 0;
  v14 = 0;
  if ( !v12 )
  {
LABEL_22:
    GameEvent = Event::CreateGameEvent(0x21u);
    v17 = GameEvent;
    if ( !GameEvent )
      return 0;
    *(_DWORD *)(GameEvent + 32) = a2->lVal;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), GameEvent);
    v18 = *(struct NodeBase **)(v17 + 24);
    if ( v18 )
    {
      ANodeFor = UserInterface::Access_GetANodeFor(g_pUserInterface, v18);
      v21 = (struct IDispatch *)ANodeFor;
      if ( ANodeFor )
      {
        (*(void (__fastcall **)(struct Access_Node *))(*(_QWORD *)ANodeFor + 8LL))(ANodeFor);
        *a3 = v21;
        (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1);
        return 0;
      }
      (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1);
      Log(0x800u, 295, "Access_Node.cpp", L"Non accessible node returned in overridden access tree GetChild");
    }
    else
    {
      (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1);
    }
    return 2147942487LL;
  }
  v15 = *((_QWORD *)g_pRenderManager + 18);
  while ( !*(_BYTE *)(*(_QWORD *)v15 + 144LL) )
  {
LABEL_21:
    ++v14;
    v15 += 8;
    if ( v14 >= v12 )
      goto LABEL_22;
  }
  if ( v13 != v23 - (g_hWndStatus != 0) - a2->lVal )
  {
    ++v13;
    goto LABEL_21;
  }
  v19 = (struct IDispatch *)UserInterface::Access_GetANodeFor(
                              g_pUserInterface,
                              *(struct NodeBase **)(*((_QWORD *)g_pRenderManager + 18) + 8LL * v14));
  *a3 = v19;
  if ( !v19 )
    SharedDialogs::FatalDialog::Show(0);
  ((void (__fastcall *)(struct IDispatch *))v19->lpVtbl->AddRef)(v19);
  return 0;
}
