// Hidden C++ exception states: #wind=1
void __fastcall UserInterface::Access_ClipNode(UserInterface *this, struct NodeBase *a2)
{
  UserInterface *v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // r12
  __int64 i; // r8
  __int64 v7; // rdi
  int v8; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rbx
  _DWORD v14[4]; // [rsp+28h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-20h]

  v3 = g_pUserInterface;
  v4 = 0;
  v5 = (_DWORD *)((char *)g_pUserInterface + 32);
  if ( *((_DWORD *)g_pUserInterface + 8) )
  {
    for ( i = *((_QWORD *)g_pUserInterface + 6); *(struct NodeBase **)(*(_QWORD *)i + 16LL) != a2; i += 8 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *v5 )
        return;
    }
    v7 = *(_QWORD *)(*((_QWORD *)g_pUserInterface + 6) + 8 * v4);
    if ( v7 )
    {
      Array<Access_Node *>::FindRemove(*(_QWORD *)(v7 + 48) + 24LL, v7);
      *((_QWORD *)v3 + 7) = v7;
      NotifyWinEvent(0x8001u, g_hWnd, *(_DWORD *)(v7 + 12), 0);
      v14[0] = 0;
      v14[1] = 0;
      v14[2] = 16;
      Block = 0;
      Array<IEventListener *>::Add((__int64)v14, v7);
      v8 = v14[0];
      if ( v14[0] )
      {
        v9 = Block;
        do
        {
          v10 = v9[v8 - 1];
          if ( v8 )
            --v8;
          v14[0] = v8;
          v11 = *(_QWORD *)(v10 + 16);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 144) = 0;
            *(_QWORD *)(v10 + 16) = 0;
          }
          v12 = 0;
          if ( *(_DWORD *)(v10 + 24) )
          {
            v13 = 0;
            do
            {
              Array<IEventListener *>::Add((__int64)v14, *(_QWORD *)(*(_QWORD *)(v10 + 40) + v13));
              ++v12;
              v13 += 8;
            }
            while ( v12 < *(_DWORD *)(v10 + 24) );
            v9 = Block;
            v8 = v14[0];
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          Array<Access_Node *>::FindRemove((__int64)v5, v10);
        }
        while ( v8 );
      }
      else
      {
        v9 = Block;
      }
      *((_BYTE *)a2 + 144) = 0;
      if ( v9 )
        free(v9);
    }
  }
}
