void Game::OnSecondElapsed(void)
{
  Game *v0; // rcx

  v0 = Game::G;
  if ( Game::G )
  {
    if ( *((_DWORD *)Game::G + 14) == 1 )
    {
      *(float *)(*((_QWORD *)Game::G + 3) + 32LL) = *(float *)(*((_QWORD *)Game::G + 3) + 32LL) + 1.0;
      UIBoardCanvas::RefreshLabels(*((UIBoardCanvas **)v0 + 2));
      InvalidateRect(g_hWnd, 0, 0);
    }
  }
}
