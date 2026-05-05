__int64 __fastcall Access_Node::get_accChildCount(Access_Node *this, int *a2)
{
  __int64 v2; // rax
  Access_Node *v3; // rbx
  __int64 GameEvent; // rax
  __int64 v8; // rbp
  Access_Node *v9; // rcx
  RenderManager *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // r9
  int v13; // ecx

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( !v2 )
    return 2147500037LL;
  if ( *(_BYTE *)(v2 + 73) )
  {
    GameEvent = Event::CreateGameEvent(0x20u);
    v8 = GameEvent;
    if ( GameEvent )
    {
      *(_DWORD *)(GameEvent + 24) = 0;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), GameEvent);
      *a2 = *(_DWORD *)(v8 + 24);
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1);
      v9 = *((_DWORD *)g_pUserInterface + 8) ? (Access_Node *)**((_QWORD **)g_pUserInterface + 6) : 0LL;
      if ( this == v9 )
      {
        if ( g_hWndStatus )
          ++*a2;
        v10 = g_pRenderManager;
        v11 = 0;
        if ( *((_DWORD *)g_pRenderManager + 32) )
        {
          v12 = 0;
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v10 + 18) + v12) + 144LL) )
              ++*a2;
            ++v11;
            v12 += 8;
          }
          while ( v11 < *((_DWORD *)v10 + 32) );
        }
      }
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 6);
    *a2 = v13;
    if ( g_hWndStatus )
    {
      if ( *((_DWORD *)g_pUserInterface + 8) )
        v3 = (Access_Node *)**((_QWORD **)g_pUserInterface + 6);
      if ( this == v3 )
        *a2 = v13 + 1;
    }
  }
  return 0;
}
