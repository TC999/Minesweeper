void __fastcall GameStat::freeRes(GameStat *this)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  _QWORD *v4; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD **)(v3 + *((_QWORD *)this + 8));
      if ( v4 )
      {
        *v4 = &HighScore::`vftable';
        operator delete(v4);
      }
      ++v1;
      *(_QWORD *)(v3 + *((_QWORD *)this + 8)) = 0;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 12) );
  }
  *((_DWORD *)this + 12) = 0;
}
