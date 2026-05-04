void __fastcall UIBoardCanvas::doMineExplosion(UIBoardCanvas *this, unsigned int a2, unsigned int a3, char a4)
{
  UITile *v8; // rbx
  unsigned int *v9; // r9
  int v10; // edi
  int v11; // eax
  Game *v12; // rbx
  unsigned int v13; // r9d
  int v14; // [rsp+58h] [rbp+20h] BYREF

  v8 = *(UITile **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2) + 16LL) + 8LL * a3);
  UITile::StartExplosionAnimation(v8);
  Array<IEventListener *>::Add((__int64)this + 328, (__int64)v8);
  v10 = 100;
  if ( !a4 )
  {
    v11 = rand();
    if ( v11 == 15 * (v11 / 15) )
      v10 = 100 - rand() % 21;
    else
      v10 = 25 - rand() % 16;
  }
  if ( !*((_BYTE *)this + 277) )
  {
    v12 = Game::G;
    if ( *((_BYTE *)Game::G + 40) )
    {
      if ( !*((_BYTE *)Game::G + 268) )
      {
        v14 = 0;
        GameAudio::PlaySoundProto((GameAudio *)5, 0, (bool)&v14, v9);
        GameAudio::SetSoundVolume((GameAudio *)5, v10, v14, v13);
        *((_BYTE *)v12 + 268) = 1;
      }
    }
  }
  if ( a4 )
    UIBoardCanvas::addExplosionChecker(this, a2, a3, 1);
}
