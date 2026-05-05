void *__fastcall Array<GameAudio::SoundEffect *>::SetAt(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  void *v5; // rbp
  void *result; // rax

  v4 = a2;
  if ( a2 >= GameAudio::aSoundEffects )
  {
    if ( a2 + 1 > dword_1000A6CFC )
    {
      dword_1000A6CFC = a2 + 1;
      v5 = realloc(Block, 8LL * (a2 + 1));
      if ( !v5 )
        CheckAllocation(0);
      Block = v5;
    }
    GameAudio::aSoundEffects = v4 + 1;
  }
  result = Block;
  *((_QWORD *)Block + v4) = a3;
  return result;
}
