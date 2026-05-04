void __fastcall GameStat::Reset(GameStat *this, char a2)
{
  char *v3; // rsi
  __int64 v4; // rdi
  void *v5; // rax
  __int64 v6; // rbx

  if ( a2 )
    GameStat::freeRes(this);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 40) = 0;
  v3 = (char *)this + 48;
  v4 = 5;
  do
  {
    v5 = operator new(0x18u);
    v6 = (__int64)v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = 0;
      *(_QWORD *)v5 = &HighScore::`vftable';
      _time64((__time64_t *)v5 + 2);
    }
    else
    {
      v6 = 0;
    }
    Array<IEventListener *>::Add((__int64)v3, v6);
    --v4;
  }
  while ( v4 );
}
