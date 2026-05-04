void *__fastcall Array<GameAudio::MusicStream *>::SetAt(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  void *v5; // rbp
  void *result; // rax

  v4 = a2;
  if ( a2 >= GameAudio::aMusicStreams )
  {
    if ( a2 + 1 > dword_1000A6D14 )
    {
      dword_1000A6D14 = a2 + 1;
      v5 = realloc(qword_1000A6D20, 8LL * (a2 + 1));
      if ( !v5 )
        CheckAllocation(0);
      qword_1000A6D20 = v5;
    }
    GameAudio::aMusicStreams = v4 + 1;
  }
  result = qword_1000A6D20;
  *((_QWORD *)qword_1000A6D20 + v4) = a3;
  return result;
}
