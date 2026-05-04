void __fastcall Game::RequestSkipAnimation(Game *this)
{
  Game *v1; // rcx
  GameAudio *v2; // rcx

  v1 = Game::G;
  if ( *((_DWORD *)Game::G + 14) == 3 || *((_DWORD *)Game::G + 14) == 4 && *((_QWORD *)Game::G + 2) )
  {
    *((_DWORD *)Game::G + 15) = 0;
    UIBoardCanvas::ClearAnimations(*((UIBoardCanvas **)v1 + 2));
    GameAudio::StopAllSounds(v2);
  }
}
