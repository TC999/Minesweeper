void __fastcall Board::FinishAnimations(Board *this, struct UIBoardCanvas *a2)
{
  unsigned int *v4; // rdi
  UITile *v5; // rsi
  int v6; // eax
  Game *v7; // rcx

  while ( *((_DWORD *)this + 14) )
  {
    v4 = *(unsigned int **)(*((_QWORD *)this + 9) + 8LL * (unsigned int)(*((_DWORD *)this + 14) - 1));
    v5 = *(UITile **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL * *v4) + 16LL) + 8LL * v4[1]);
    UITile::SetTopAlpha(v5, v4[4]);
    if ( !v4[4] )
      UITile::SetTopVisible(v5, 0);
    v6 = *((_DWORD *)this + 14);
    if ( v6 )
      *((_DWORD *)this + 14) = v6 - 1;
    operator delete(v4);
  }
  v7 = Game::G;
  if ( !*((_BYTE *)Game::G + 46) )
  {
    UserInterface::ProcessMouseMove(g_pUserInterface, 1);
    v7 = Game::G;
  }
  UIBoardCanvas::Refresh(*((UIBoardCanvas **)v7 + 2), 1);
}
