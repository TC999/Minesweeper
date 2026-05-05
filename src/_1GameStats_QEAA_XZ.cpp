// Hidden C++ exception states: #wind=2
void __fastcall GameStats::~GameStats(GameStats *this)
{
  __int64 i; // rbx
  GameStat *v3; // rsi
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &GameStats::`vftable';
  for ( i = 0; i <= 24; i += 8 )
  {
    v3 = *(GameStat **)(i + *((_QWORD *)this + 3));
    if ( v3 )
    {
      *(_QWORD *)v3 = &GameStat::`vftable';
      GameStat::freeRes(v3);
      v4 = (void *)*((_QWORD *)v3 + 8);
      if ( v4 )
        free(v4);
      operator delete(v3);
    }
    *(_QWORD *)(i + *((_QWORD *)this + 3)) = 0;
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    free(v5);
}
