__int64 __fastcall Access_Node::get_accParent(Access_Node *this, struct IDispatch **a2)
{
  __int64 v3; // rcx
  __int64 v6; // rax
  struct IDispatch *v7; // r11
  __int64 GameEvent; // rax
  __int64 v9; // rbx
  struct NodeBase *v10; // rdx
  struct Access_Node *ANodeFor; // rax
  struct IDispatch *v12; // rdi
  void *ppvObject; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
    return 2147500037LL;
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    if ( !*(_BYTE *)(v3 + 73) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 6));
      v7 = (struct IDispatch *)*((_QWORD *)this + 6);
LABEL_6:
      *a2 = v7;
      return 0;
    }
    GameEvent = Event::CreateGameEvent(0x1Fu);
    v9 = GameEvent;
    if ( GameEvent )
    {
      *(_QWORD *)(GameEvent + 24) = 0;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), GameEvent);
      v10 = *(struct NodeBase **)(v9 + 24);
      if ( v10 )
      {
        if ( *((_BYTE *)v10 + 144) )
        {
          ANodeFor = UserInterface::Access_GetANodeFor(g_pUserInterface, v10);
          v12 = (struct IDispatch *)ANodeFor;
          if ( ANodeFor )
            (*(void (__fastcall **)(struct Access_Node *))(*(_QWORD *)ANodeFor + 8LL))(ANodeFor);
          *a2 = v12;
          (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1);
          return 0;
        }
        Log(0x800u, 77, "Access_Node.cpp", L"The access tree override returned a non accessible node");
      }
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1);
    }
  }
  else
  {
    ppvObject = 0;
    if ( !AccessibleObjectFromWindow(g_hWnd, 0, &IID_IAccessible, &ppvObject) )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvObject + 8LL))(ppvObject);
      v7 = (struct IDispatch *)ppvObject;
      goto LABEL_6;
    }
  }
  return 1;
}
