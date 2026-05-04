void __fastcall EngineHandler::GetInitialLayout(EngineHandler *this, unsigned int *a2, unsigned int *a3)
{
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  if ( Game::SafeGetSingleton() )
  {
    v6 = 0;
    v5[0] = 0;
    if ( Game::GetCanvasDimensions(Game::G, (unsigned int *)&v6, v5) )
    {
      *a2 = v6;
      *a3 = v5[0];
    }
  }
}
