// Hidden C++ exception states: #wind=4
void __fastcall Game::Reset(Game *this, char a2, char a3, char a4)
{
  __int64 v6; // rax
  Game *v7; // rsi
  int v8; // ebx
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // esi
  _DWORD *v14; // rax
  int v15; // ebp
  int v16; // r12d
  int v17; // r13d
  __int64 v18; // rbx
  int v19; // r14d
  int v20; // r15d
  void *v21; // rcx
  void *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ebx
  char v25; // bl
  Board *v26; // rbx
  void *v27; // rcx
  void *v28; // rbx
  int v29; // eax
  __int64 v30; // rax
  char v31; // si
  int v32; // [rsp+50h] [rbp-58h]

  if ( *((_BYTE *)this + 294) )
  {
    *((_BYTE *)this + 294) = 0;
    if ( *(_QWORD *)g_pSecondTimerCallback )
    {
      *(_QWORD *)g_pSecondTimerCallback = 0;
      KillTimer(g_hWnd, 0x400u);
    }
  }
  if ( !a3 )
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      if ( *(int *)(v6 + 28) > 0 )
      {
        v7 = Game::G;
        if ( *((_DWORD *)Game::G + 14) == 1 )
        {
          v8 = *(_DWORD *)(v6 + 36);
          if ( v8 != 4 )
          {
            v9 = (int)floorf(*(float *)(v6 + 32));
            if ( (unsigned int)(v8 - 1) <= 2 )
            {
              v10 = *(_QWORD *)(*((_QWORD *)this + 32) + 8LL * (unsigned int)(v8 - 1));
              if ( !v9 )
                v9 = 1;
              v11 = ++*(_DWORD *)(v10 + 12);
              if ( *(_BYTE *)(v10 + 40) )
              {
                *(_DWORD *)(v10 + 36) = 1;
                *(_BYTE *)(v10 + 40) = 0;
                if ( *(int *)(v10 + 32) < 1 )
                  *(_DWORD *)(v10 + 32) = 1;
              }
              else
              {
                v12 = ++*(_DWORD *)(v10 + 36);
                if ( v12 > *(_DWORD *)(v10 + 32) )
                  *(_DWORD *)(v10 + 32) = v12;
              }
              if ( v9 > *(_DWORD *)(v10 + 16) || !*(_DWORD *)(v10 + 16) )
                *(_DWORD *)(v10 + 16) = v9;
              if ( v9 < *(_DWORD *)(v10 + 20) || !*(_DWORD *)(v10 + 20) )
                *(_DWORD *)(v10 + 20) = v9;
              *(_DWORD *)(v10 + 24) = (int)(float)((float)(v9 + *(_DWORD *)(v10 + 24) * (v11 - 1)) / (float)v11);
            }
            Game::Save(v7, 0, 0);
          }
        }
      }
    }
  }
  v13 = *((_DWORD *)this + 69);
  *((_DWORD *)this + 15) = 1065353216;
  if ( a3 && (v14 = (_DWORD *)*((_QWORD *)this + 3)) != 0 )
  {
    v13 = v14[9];
    v15 = v14[4];
    v16 = v14[3];
    v17 = v14[2];
  }
  else if ( v13 == 4 )
  {
    v15 = *((_DWORD *)this + 70);
    v16 = *((_DWORD *)this + 71);
    v17 = *((_DWORD *)this + 72);
  }
  else
  {
    v15 = EDifficultyToWidth(v13);
    v16 = EDifficultyToHeight(v13);
    v17 = EDifficultyToMineCount(v13);
  }
  if ( a3 && (v18 = *((_QWORD *)this + 3)) != 0 )
  {
    v19 = *(_DWORD *)(v18 + 40);
    v20 = *(_DWORD *)(v18 + 44);
    v32 = *(_DWORD *)(v18 + 48);
    *(_QWORD *)v18 = &Board::`vftable';
    Board::freeRes((Board *)v18);
    v21 = *(void **)(v18 + 72);
    if ( v21 )
      free(v21);
    operator delete((void *)v18);
    *((_QWORD *)this + 3) = 0;
    v22 = operator new(0x60u);
    if ( v22 )
      v23 = Board::Board((__int64)v22, v13, v15, v16, v17, v32, v19, v20, 1);
    else
      v23 = 0;
    *((_QWORD *)this + 3) = v23;
    *(_DWORD *)(v23 + 28) = 0;
    v24 = time(0);
    srand(v24);
    Seed = v24;
    v25 = 1;
  }
  else
  {
    v26 = (Board *)*((_QWORD *)this + 3);
    if ( v26 )
    {
      *(_QWORD *)v26 = &Board::`vftable';
      Board::freeRes(v26);
      v27 = (void *)*((_QWORD *)v26 + 9);
      if ( v27 )
        free(v27);
      operator delete(v26);
      *((_QWORD *)this + 3) = 0;
    }
    v28 = operator new(0x60u);
    if ( v28 )
    {
      v29 = time(0);
      v30 = Board::Board((__int64)v28, v13, v15, v16, v17, v29, -1, -1, 0);
    }
    else
    {
      v30 = 0;
    }
    *((_QWORD *)this + 3) = v30;
    v25 = 0;
  }
  Game::SaveGameExplorerStatistics(this);
  *((_BYTE *)this + 293) = 0;
  if ( *((_BYTE *)this + 269) && Game::RandomizeArt(this, 1) )
  {
    v31 = a2;
  }
  else
  {
    v31 = a2;
    if ( !a2 )
      goto LABEL_56;
    if ( *((_BYTE *)this + 43) )
      UIBoardCanvas::SetAllTilesTopAlpha(*((UIBoardCanvas **)this + 2), 0);
    Game::ResetCanvas(this);
  }
  if ( v31 )
  {
    Game::RequestSetState((__int64)this, 1);
    UIBoardCanvas::Refresh(*((UIBoardCanvas **)this + 2), 1);
    Game::DoNewBoardAnimation(this);
  }
LABEL_56:
  if ( v25 )
    UIBoardCanvas::ShowTipMessage(*((UIBoardCanvas **)this + 2), L"Restart");
  if ( a4 )
  {
    UserInterface::ProcessMouseMove(g_pUserInterface, 1);
    Engine_ResetTimer();
  }
  if ( a3 )
    *(_DWORD *)(*((_QWORD *)this + 3) + 28LL) = 1;
  *((_BYTE *)this + 273) = 0;
}
