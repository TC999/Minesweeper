char __fastcall Game::RequestFlagToggle(Game *this)
{
  Game *v1; // rdi
  char v2; // bl
  struct NodeBase *CurrentFocus; // r11
  __int64 v4; // r9
  struct UITile *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r10
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax

  v1 = Game::G;
  v2 = 0;
  if ( *((_QWORD *)Game::G + 2) )
  {
    if ( *((_QWORD *)Game::G + 3) )
    {
      if ( *((_DWORD *)Game::G + 14) == 1 )
      {
        CurrentFocus = UserInterface::GetCurrentFocus(g_pUserInterface);
        if ( CurrentFocus )
        {
          v4 = *((_QWORD *)v1 + 2);
          v5 = 0;
          v6 = 0;
          v7 = 0;
          do
          {
            if ( v6 >= *(_DWORD *)(v4 + 8) )
              break;
            v8 = 0;
            v9 = 0;
            v10 = *(_QWORD *)(v7 + *(_QWORD *)(v4 + 24));
            do
            {
              if ( v8 >= *(_DWORD *)v10 )
                break;
              v11 = *(_QWORD *)(v10 + 16);
              if ( *(struct NodeBase **)(*(_QWORD *)(v11 + v9) + 24LL) == CurrentFocus )
                v5 = *(struct UITile **)(v11 + v9);
              ++v8;
              v9 += 8;
            }
            while ( !v5 );
            ++v6;
            v7 += 8;
          }
          while ( !v5 );
          if ( v5 )
          {
            UIBoardCanvas::ToggleFlag((UIBoardCanvas *)v4, v5);
            return 1;
          }
        }
      }
    }
  }
  return v2;
}
