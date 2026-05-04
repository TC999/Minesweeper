void __fastcall UserInterface::RegisterNodeForFocus(UserInterface *this, struct NodeBase *a2)
{
  UserInterface *v2; // rbx
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // esi
  int v8; // esi
  void *v9; // rbp
  void *v10; // rax
  void *v11; // r12
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rax

  v2 = g_pUserInterface;
  v4 = 1;
  v5 = *((_DWORD *)g_pUserInterface + 4);
  if ( v5 )
    v4 = *(_DWORD *)(*(_QWORD *)g_pUserInterface + 4LL * (unsigned int)(v5 - 1)) + 1;
  *((_DWORD *)a2 + 56) = v4;
  v6 = *((_DWORD *)v2 + 4);
  v7 = SortedListI<Event::RegisteredType>::BinSearch(v2, v4, 0, v6);
  if ( v7 < 0 )
  {
    v8 = ~v7;
    if ( v6 + 1 >= *((_DWORD *)v2 + 5) )
    {
      if ( !*((_DWORD *)v2 + 5) )
        *((_DWORD *)v2 + 5) = 2;
      v9 = malloc(8LL * *((unsigned int *)v2 + 5));
      v10 = malloc(16LL * *((unsigned int *)v2 + 5));
      v11 = v10;
      if ( !v10 || !v9 )
      {
        CheckAllocation(v10);
        CheckAllocation(v9);
        return;
      }
      memcpy(v9, *(const void **)v2, 4LL * *((unsigned int *)v2 + 4));
      memcpy(v11, *((const void **)v2 + 1), 8LL * *((unsigned int *)v2 + 4));
      free(*(void **)v2);
      free(*((void **)v2 + 1));
      v12 = *((_DWORD *)v2 + 5);
      *(_QWORD *)v2 = v9;
      *((_QWORD *)v2 + 1) = v11;
      *((_DWORD *)v2 + 5) = 2 * v12;
    }
    v13 = *((_DWORD *)v2 + 4) - 1;
    if ( v13 >= v8 )
    {
      v14 = 8LL * (int)v13;
      v15 = 4LL * (int)v13;
      do
      {
        if ( v13 >= *((_DWORD *)v2 + 4) )
          break;
        --v13;
        v16 = *(_DWORD *)(v15 + *(_QWORD *)v2);
        v15 -= 4;
        *(_DWORD *)(v15 + *(_QWORD *)v2 + 8) = v16;
        v17 = *((_QWORD *)v2 + 1);
        v18 = *(_QWORD *)(v17 + v14);
        v14 -= 8;
        *(_QWORD *)(v17 + v14 + 16) = v18;
      }
      while ( v13 >= v8 );
    }
    v19 = *(_DWORD **)v2;
    ++*((_DWORD *)v2 + 4);
    v19[v8] = v4;
    *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL * v8) = a2;
  }
}
