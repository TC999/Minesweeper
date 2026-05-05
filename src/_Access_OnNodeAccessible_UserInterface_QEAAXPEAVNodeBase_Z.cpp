void __fastcall UserInterface::Access_OnNodeAccessible(UserInterface *this, struct NodeBase *a2)
{
  UserInterface *v2; // rsi
  __int64 i; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  void *v11; // rax
  int v12; // r8d
  __int64 v13; // r9
  bool v14; // zf
  HWND v15; // rdx

  v2 = g_pUserInterface;
  for ( i = *((_QWORD *)a2 + 17); i && !*(_BYTE *)(i + 144); i = *(_QWORD *)(i + 136) )
    ;
  v5 = 0;
  if ( *((_DWORD *)g_pUserInterface + 8) )
  {
    v6 = *((_QWORD *)g_pUserInterface + 6);
    while ( *(_QWORD *)(*(_QWORD *)v6 + 16LL) != i )
    {
      v5 = (unsigned int)(v5 + 1);
      v6 += 8;
      if ( (unsigned int)v5 >= *((_DWORD *)g_pUserInterface + 8) )
        goto LABEL_9;
    }
    v7 = operator new(0x38u);
    if ( v7 )
    {
      *(_QWORD *)v7 = &Access_Node::`vftable';
      v7[6] = 0;
      v7[7] = 0;
      *((_QWORD *)v7 + 5) = 0;
      v7[8] = 16;
      v7[3] = 0;
      v7[2] = 1;
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)(*((_QWORD *)v2 + 6) + 8 * v5);
    *((_QWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 6) = v8;
    v7[3] = (*((_DWORD *)v2 + 69))++;
    Array<IEventListener *>::Add(*((_QWORD *)v7 + 6) + 24LL, (__int64)v7);
    Array<IEventListener *>::Add((__int64)v2 + 32, (__int64)v7);
  }
  else
  {
LABEL_9:
    v7 = operator new(0x38u);
    if ( v7 )
    {
      *(_QWORD *)v7 = &Access_Node::`vftable';
      v7[6] = 0;
      v7[7] = 0;
      *((_QWORD *)v7 + 5) = 0;
      v7[8] = 16;
      v7[3] = 0;
      v7[2] = 1;
    }
    else
    {
      v7 = 0;
    }
    *((_QWORD *)v7 + 6) = 0;
    *((_QWORD *)v7 + 2) = a2;
    v7[3] = (*((_DWORD *)v2 + 69))++;
    v9 = *((_DWORD *)v2 + 9);
    if ( ++*((_DWORD *)v2 + 8) > v9 )
    {
      v10 = *((_DWORD *)v2 + 10) + v9;
      *((_DWORD *)v2 + 9) = v10;
      v11 = realloc(*((void **)v2 + 6), 8 * v10);
      if ( !v11 )
      {
        CheckAllocation(0);
        goto LABEL_24;
      }
      *((_QWORD *)v2 + 6) = v11;
    }
    v12 = *((_DWORD *)v2 + 8) - 1;
    if ( *((_DWORD *)v2 + 8) != 1 )
    {
      v13 = 8LL * v12;
      do
      {
        v14 = v12-- == 1;
        *(_QWORD *)(v13 + *((_QWORD *)v2 + 6)) = *(_QWORD *)(v13 + *((_QWORD *)v2 + 6) - 8);
        v13 -= 8;
      }
      while ( !v14 );
    }
    **((_QWORD **)v2 + 6) = v7;
  }
LABEL_24:
  v15 = g_hWnd;
  *((_QWORD *)v2 + 7) = v7;
  NotifyWinEvent(0x8000u, v15, v7[3], 0);
  NotifyWinEvent(0x8002u, g_hWnd, v7[3], 0);
}
