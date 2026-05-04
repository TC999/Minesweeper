// Hidden C++ exception states: #wind=11
Game *__fastcall Game::Game(Game *this)
{
  char *v2; // rsi
  __int64 v3; // rbp
  _DWORD *v4; // rbx
  unsigned int v5; // ebx

  *(_QWORD *)this = &Game::`vftable';
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 16;
  *((_QWORD *)this + 11) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 16;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 16;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 16;
  *((_QWORD *)this + 20) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 16;
  *((_QWORD *)this + 23) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 16;
  *((_QWORD *)this + 26) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &GameStats::`vftable';
  v2 = (char *)this + 240;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 16;
  *((_QWORD *)this + 32) = 0;
  v3 = 4;
  do
  {
    v4 = operator new(0x48u);
    if ( v4 )
    {
      *(_QWORD *)v4 = &GameStat::`vftable';
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 16;
      *((_QWORD *)v4 + 8) = 0;
      GameStat::Reset((GameStat *)v4, 0);
    }
    else
    {
      v4 = 0;
    }
    Array<IEventListener *>::Add(v2, v4);
    --v3;
  }
  while ( v3 );
  Game::G = this;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 294) = 0;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_BYTE *)this + 273) = 0;
  *((_BYTE *)this + 271) = 1;
  *((_BYTE *)this + 269) = 0;
  *((_BYTE *)this + 270) = 0;
  *((_BYTE *)this + 272) = 0;
  *((_BYTE *)this + 268) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_BYTE *)this + 40) = 1;
  *((_BYTE *)this + 41) = 1;
  *((_BYTE *)this + 42) = 1;
  *((_BYTE *)this + 43) = 1;
  *((_BYTE *)this + 44) = 1;
  *((_BYTE *)this + 45) = 1;
  *((_BYTE *)this + 46) = 0;
  *((_DWORD *)this + 12) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 69) = 1;
  *((_DWORD *)this + 70) = EDifficultyToWidth(1);
  *((_DWORD *)this + 71) = EDifficultyToHeight(*((unsigned int *)this + 69));
  *((_DWORD *)this + 72) = EDifficultyToMineCount(*((unsigned int *)this + 69));
  v5 = time(0);
  srand(v5);
  Seed = v5;
  *((_DWORD *)this + 54) = 6087;
  *((_QWORD *)this + 28) = GetTickCount64();
  Game::Reset(this, 0, 0, 0);
  Game::RequestSetState(this, 0);
  *((_BYTE *)this + 292) = 0;
  *((_BYTE *)this + 293) = 0;
  return this;
}
