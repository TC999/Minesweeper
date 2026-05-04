void __fastcall Game::CacheSounds(Game *this, unsigned int a2)
{
  unsigned int v3; // edx
  __int64 v4; // rax

  if ( *((_BYTE *)this + 40) )
  {
    GameAudio::Pin(0, a2);
    if ( *((_BYTE *)this + 41) )
    {
      v4 = *((_QWORD *)this + 2);
      if ( v4 )
      {
        if ( !*(_BYTE *)(v4 + 277) )
        {
          GameAudio::Pin((GameAudio *)5, v3);
          return;
        }
      }
    }
  }
  else
  {
    GameAudio::Unpin(0, a2);
  }
  GameAudio::Unpin((GameAudio *)5, v3);
}
