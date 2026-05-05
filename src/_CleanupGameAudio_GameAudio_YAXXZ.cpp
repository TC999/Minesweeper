void __fastcall GameAudio::CleanupGameAudio(GameAudio *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx

  v1 = GameAudio::aSoundEffects;
  v2 = 0;
  if ( GameAudio::aSoundEffects )
  {
    v3 = 0;
    do
    {
      if ( *(_QWORD *)((char *)Block + v3) )
      {
        ResourceManager::DestroyResource(g_pResourceManager, **(_DWORD **)((char *)Block + v3));
        operator delete(*(void **)((char *)Block + v3));
        *(_QWORD *)((char *)Block + v3) = 0;
        v1 = GameAudio::aSoundEffects;
      }
      ++v2;
      v3 += 8;
    }
    while ( v2 < v1 );
  }
  GameAudio::aSoundEffects = 0;
  dword_1000A6CFC = 0;
  free(Block);
  v4 = GameAudio::aMusicStreams;
  Block = 0;
  v5 = 0;
  if ( GameAudio::aMusicStreams )
  {
    v6 = 0;
    do
    {
      if ( *(_QWORD *)((char *)qword_1000A6D20 + v6) )
      {
        ResourceManager::DestroyResource(g_pResourceManager, **(_DWORD **)((char *)qword_1000A6D20 + v6));
        operator delete(*(void **)((char *)qword_1000A6D20 + v6));
        *(_QWORD *)((char *)qword_1000A6D20 + v6) = 0;
        v4 = GameAudio::aMusicStreams;
      }
      ++v5;
      v6 += 8;
    }
    while ( v5 < v4 );
  }
  GameAudio::aMusicStreams = 0;
  dword_1000A6D14 = 0;
  free(qword_1000A6D20);
  qword_1000A6D20 = 0;
}
