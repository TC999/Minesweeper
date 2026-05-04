char __fastcall GameStat::attemptAddNewHighScore(GameStat *this, int a2)
{
  char v4; // di
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // edx
  Game *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx

  v4 = 0;
  v5 = operator new(0x18u);
  v6 = v5;
  if ( v5 )
  {
    *v5 = &HighScore::`vftable';
    *((_DWORD *)v5 + 2) = a2;
    _time64(v5 + 2);
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    v8 = Game::G;
    v9 = 0;
    do
    {
      if ( v4 || (v10 = *(_QWORD *)(v9 + *((_QWORD *)this + 8)), a2 < *(_DWORD *)(v10 + 8)) || !*(_DWORD *)(v10 + 8) )
      {
        if ( !v7 )
          *((_BYTE *)v8 + 293) = 1;
        v11 = *((_QWORD *)this + 8);
        v12 = v6;
        v4 = 1;
        v6 = *(_QWORD **)(v9 + v11);
        *(_QWORD *)(v9 + v11) = v12;
      }
      ++v7;
      v9 += 8;
    }
    while ( v7 < *((_DWORD *)this + 12) );
  }
  if ( v6 )
  {
    *v6 = &HighScore::`vftable';
    operator delete(v6);
  }
  return v4;
}
