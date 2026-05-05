bool __fastcall UIBoardCanvas::DoRevealAction(UIBoardCanvas *this, struct UITile *a2)
{
  Game *v3; // rcx
  bool v5; // bl
  int v6; // eax
  unsigned int *v7; // r9
  bool result; // al

  v3 = Game::G;
  *((_BYTE *)Game::G + 273) = 1;
  v5 = 0;
  v6 = Board::AttemptReveal(*((Board **)v3 + 3), *((_DWORD *)a2 + 12), *((_DWORD *)a2 + 13));
  if ( v6 > 0 )
  {
    if ( v6 >= 10 && *((_BYTE *)Game::G + 40) )
      GameAudio::PlaySoundProto((GameAudio *)3, 0, 0, v7);
  }
  else
  {
    *((_QWORD *)this + 31) = a2;
    v5 = 1;
  }
  result = v5;
  *((_BYTE *)this + 276) = 1;
  return result;
}
