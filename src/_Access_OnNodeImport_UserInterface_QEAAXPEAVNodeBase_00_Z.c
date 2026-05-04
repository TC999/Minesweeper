void __fastcall UserInterface::Access_OnNodeImport(
        UserInterface *this,
        struct NodeBase *a2,
        struct NodeBase *a3,
        struct NodeBase *a4)
{
  UserInterface *v4; // rdi
  __int64 v5; // rbp
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rsi
  HWND v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rbx
  HWND v15; // rdx
  struct Access_Node *ANodeFor; // rsi
  struct Access_Node *v17; // r13
  unsigned int i; // ebx
  __int64 v19; // r14
  struct NodeBase *v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // r9
  HWND v23; // rdx
  HWND v24; // rdx

  v4 = g_pUserInterface;
  v5 = 0;
  if ( *((_BYTE *)a3 + 144) )
  {
    v8 = 0;
    if ( !*((_DWORD *)g_pUserInterface + 8) )
      goto LABEL_6;
    v9 = *((_QWORD *)g_pUserInterface + 6);
    while ( *(struct NodeBase **)(*(_QWORD *)v9 + 16LL) != a3 )
    {
      ++v8;
      v9 += 8;
      if ( v8 >= *((_DWORD *)g_pUserInterface + 8) )
        goto LABEL_6;
    }
    v10 = *(_QWORD *)(*((_QWORD *)g_pUserInterface + 6) + 8LL * v8);
    if ( v10 )
    {
      Array<Access_Node *>::FindRemove(*(_QWORD *)(v10 + 48) + 24LL, v10);
      v11 = g_hWnd;
      *((_QWORD *)v4 + 7) = *(_QWORD *)(v10 + 48);
      NotifyWinEvent(0x8004u, v11, *(_DWORD *)(*(_QWORD *)(v10 + 48) + 12LL), 0);
      if ( !a2 )
        goto LABEL_19;
      do
      {
        if ( *((_BYTE *)a2 + 144) )
          break;
        a2 = (struct NodeBase *)*((_QWORD *)a2 + 17);
      }
      while ( a2 );
      if ( a2 )
      {
        v12 = 0;
        if ( !*((_DWORD *)v4 + 8) )
          goto LABEL_16;
        v13 = *((_QWORD *)v4 + 6);
        while ( *(struct NodeBase **)(*(_QWORD *)v13 + 16LL) != a2 )
        {
          ++v12;
          v13 += 8;
          if ( v12 >= *((_DWORD *)v4 + 8) )
            goto LABEL_16;
        }
        v14 = *(_QWORD *)(*((_QWORD *)v4 + 6) + 8LL * v12);
        if ( v14 )
        {
          Array<IEventListener *>::Add(v14 + 24, v10);
          v15 = g_hWnd;
          *(_QWORD *)(v10 + 48) = v14;
          *((_QWORD *)v4 + 7) = v14;
          NotifyWinEvent(0x8004u, v15, *(_DWORD *)(v14 + 12), 0);
        }
        else
        {
LABEL_16:
          Log(0x800u, 137, "UserInterface.cpp", L"Couldn't find a anode for an accessible nodebase");
        }
      }
      else
      {
LABEL_19:
        Log(0x800u, 120, "UserInterface.cpp", L"Somehow the root node isn't accessible. Panic!");
      }
    }
    else
    {
LABEL_6:
      Log(0x800u, 91, "UserInterface.cpp", L"Couldn't find an accessible node in the accessible graph");
    }
  }
  else
  {
    while ( a4 && !*((_BYTE *)a4 + 144) )
      a4 = (struct NodeBase *)*((_QWORD *)a4 + 17);
    ANodeFor = UserInterface::Access_GetANodeFor(g_pUserInterface, a4);
    if ( ANodeFor )
    {
      while ( a2 && !*((_BYTE *)a2 + 144) )
        a2 = (struct NodeBase *)*((_QWORD *)a2 + 17);
      v17 = UserInterface::Access_GetANodeFor(v4, a2);
      if ( ANodeFor != v17 )
      {
        for ( i = 0; i < *((_DWORD *)ANodeFor + 6); v5 += 8 )
        {
          v19 = *(_QWORD *)(*((_QWORD *)ANodeFor + 5) + v5);
          v20 = *(struct NodeBase **)(v19 + 16);
          if ( v20 )
          {
            while ( 1 )
            {
              v20 = (struct NodeBase *)*((_QWORD *)v20 + 17);
              if ( !v20 )
                break;
              if ( v20 == a3 )
              {
                v21 = i;
                if ( i < *((_DWORD *)ANodeFor + 6) - 1 )
                {
                  v22 = v5;
                  do
                  {
                    ++v21;
                    *(_QWORD *)(v22 + *((_QWORD *)ANodeFor + 5)) = *(_QWORD *)(v22 + *((_QWORD *)ANodeFor + 5) + 8);
                    v22 += 8;
                  }
                  while ( v21 < *((_DWORD *)ANodeFor + 6) - 1 );
                }
                --*((_DWORD *)ANodeFor + 6);
                v23 = g_hWnd;
                *((_QWORD *)v4 + 7) = ANodeFor;
                --i;
                v5 -= 8;
                NotifyWinEvent(0x8004u, v23, *((_DWORD *)ANodeFor + 3), 0);
                Array<IEventListener *>::Add((__int64)v17 + 24, v19);
                v24 = g_hWnd;
                *(_QWORD *)(v19 + 48) = v17;
                *((_QWORD *)v4 + 7) = v17;
                NotifyWinEvent(0x8004u, v24, *((_DWORD *)v17 + 3), 0);
                break;
              }
            }
          }
          ++i;
        }
      }
    }
    else
    {
      Log(0x800u, 159, "UserInterface.cpp", L"No parent accessible node found on import - this is very bad");
    }
  }
}
