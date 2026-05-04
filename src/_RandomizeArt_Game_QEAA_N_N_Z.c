bool __fastcall Game::RandomizeArt(Game *this, bool a2)
{
  int v2; // ebx
  int v5; // edx
  int v6; // ebx
  int v7; // edi
  int v8; // eax

  v2 = *((_DWORD *)this + 48);
  v5 = rand() % v2;
  v6 = *((_DWORD *)this + 30);
  v7 = v5;
  v8 = rand();
  return Game::SetArt(this, v7, v8 % v6, a2);
}
