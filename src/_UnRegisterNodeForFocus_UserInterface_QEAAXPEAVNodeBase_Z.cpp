void __fastcall UserInterface::UnRegisterNodeForFocus(UserInterface *this, struct NodeBase *a2)
{
  UserInterface *v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // edi
  struct NodeBase **i; // rcx
  signed int v6; // eax
  unsigned int v7; // r11d
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = g_pUserInterface;
  v3 = 0;
  v4 = *((_DWORD *)g_pUserInterface + 4);
  if ( v4 )
  {
    for ( i = (struct NodeBase **)*((_QWORD *)g_pUserInterface + 1); *i != a2; ++i )
    {
      if ( ++v3 >= v4 )
        return;
    }
    v6 = SortedListI<Event::RegisteredType>::BinSearch(
           g_pUserInterface,
           *(unsigned int *)(*(_QWORD *)g_pUserInterface + 4LL * v3),
           0,
           v4);
    v7 = v6;
    if ( v6 < v4 - 1 )
    {
      v8 = 8LL * v6;
      v9 = 4LL * v6;
      do
      {
        ++v7;
        *(_DWORD *)(v9 + *(_QWORD *)v2) = *(_DWORD *)(v9 + *(_QWORD *)v2 + 4);
        v9 += 4;
        *(_QWORD *)(*((_QWORD *)v2 + 1) + v8) = *(_QWORD *)(*((_QWORD *)v2 + 1) + v8 + 8);
        v8 += 8;
      }
      while ( v7 < *((_DWORD *)v2 + 4) - 1 );
    }
    --*((_DWORD *)v2 + 4);
  }
}
