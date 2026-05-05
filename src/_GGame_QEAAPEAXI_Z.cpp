// Hidden C++ exception states: #wind=8
Game *__fastcall Game::`scalar deleting destructor'(Game *this)
{
  Game *v2; // r11
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &Game::`vftable';
  Game::freeGameRes(this);
  v2 = Game::G;
  if ( this == Game::G )
    v2 = 0;
  Game::G = v2;
  GameStats::~GameStats((Game *)((char *)this + 232));
  CSQMTimeRecorder::~CSQMTimeRecorder((Game *)((char *)this + 216));
  v3 = (void *)*((_QWORD *)this + 26);
  if ( v3 )
    free(v3);
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 )
    free(v4);
  v5 = (void *)*((_QWORD *)this + 20);
  if ( v5 )
    free(v5);
  v6 = (void *)*((_QWORD *)this + 17);
  if ( v6 )
    free(v6);
  v7 = (void *)*((_QWORD *)this + 14);
  if ( v7 )
    free(v7);
  v8 = (void *)*((_QWORD *)this + 11);
  if ( v8 )
    free(v8);
  operator delete(this);
  return this;
}
