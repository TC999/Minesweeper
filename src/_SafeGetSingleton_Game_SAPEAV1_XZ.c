// Hidden C++ exception states: #wind=2
struct Game *Game::SafeGetSingleton(void)
{
  Game *v0; // rax
  Game *v1; // rax
  Str *v2; // rbx
  Game *v3; // rdi
  unsigned __int16 *v5; // [rsp+30h] [rbp-38h]
  bool v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( !Game::G )
  {
    v0 = (Game *)operator new(0x128u);
    if ( v0 )
      v1 = Game::Game(v0);
    else
      v1 = 0;
    Game::G = v1;
    if ( v1 )
    {
      v2 = Str::Str((Str *)v7, qword_1000AB3C0);
      v3 = Game::G;
      if ( Game::parseXml(Game::G, (const unsigned __int16 **)v2) )
      {
        Game::Load(v3, 1, 0, 0);
        operator delete(*((void **)v2 + 2));
        return Game::G;
      }
      operator delete(*((void **)v2 + 2));
    }
    LOBYTE(v5) = 1;
    DialogHelper::ShowMessageBox(0x66u, 0x67u, 1u, 0xFFFEu, 0, 0, v5, v6);
    if ( Game::G )
    {
      Game::`scalar deleting destructor'(Game::G);
      Game::G = 0;
    }
    PostQuitMessage(1);
  }
  return Game::G;
}
