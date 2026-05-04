char __fastcall Game::SetArt(Game *this, int a2, int a3, char a4)
{
  __int64 v6; // rcx
  int v7; // ebx

  if ( a2 == *((_DWORD *)this + 17) && a3 == *((_DWORD *)this + 16) )
    return 0;
  *((_DWORD *)this + 16) = a3;
  *((_DWORD *)this + 17) = a2;
  if ( a4 )
  {
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v6 + 28) = 1;
    Game::RebuildCanvas(this);
    *(_DWORD *)(*((_QWORD *)this + 3) + 28LL) = v7;
  }
  return 1;
}
