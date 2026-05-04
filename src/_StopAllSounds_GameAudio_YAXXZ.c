void __fastcall GameAudio::StopAllSounds(GameAudio *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi

  v1 = 0;
  if ( GameAudio::aSoundEffects )
  {
    v2 = 0;
    do
    {
      Audio::StopSound(g_pAudio, **(_DWORD **)((char *)Block + v2), 0);
      ++v1;
      v2 += 8;
    }
    while ( GameAudio::aSoundEffects > v1 );
  }
}
