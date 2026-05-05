// Hidden C++ exception states: #wind=3
void __fastcall Game::DisarmBoard(Game *this)
{
  Game *v1; // rdi
  Game *v2; // rbx
  __int64 v3; // rax
  int v4; // esi
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  bool v9; // cc
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int *v12; // r9
  unsigned int v13; // r9d
  Game *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = this;
  v1 = Game::G;
  v2 = Game::G;
  if ( *((_DWORD *)Game::G + 14) == 1 )
  {
    v3 = *((_QWORD *)Game::G + 3);
    v4 = *(_DWORD *)(v3 + 36);
    if ( v4 != 4 )
    {
      v5 = (int)floorf(*(float *)(v3 + 32));
      if ( (unsigned int)(v4 - 1) <= 2 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)v1 + 32) + 8LL * (unsigned int)(v4 - 1));
        if ( !v5 )
          v5 = 1;
        ++*(_DWORD *)(v6 + 12);
        ++*(_DWORD *)(v6 + 8);
        v7 = *(_DWORD *)(v6 + 12);
        if ( *(_BYTE *)(v6 + 40) )
        {
          v8 = ++*(_DWORD *)(v6 + 36);
          if ( v8 > *(_DWORD *)(v6 + 28) )
            *(_DWORD *)(v6 + 28) = v8;
        }
        else
        {
          v9 = *(_DWORD *)(v6 + 28) < 1;
          *(_DWORD *)(v6 + 36) = 1;
          *(_BYTE *)(v6 + 40) = 1;
          if ( v9 )
            *(_DWORD *)(v6 + 28) = 1;
        }
        if ( v5 > *(_DWORD *)(v6 + 16) || !*(_DWORD *)(v6 + 16) )
          *(_DWORD *)(v6 + 16) = v5;
        if ( v5 < *(_DWORD *)(v6 + 20) || !*(_DWORD *)(v6 + 20) )
          *(_DWORD *)(v6 + 20) = v5;
        *(_DWORD *)(v6 + 24) = (int)(float)((float)(v5 + *(_DWORD *)(v6 + 24) * (v7 - 1)) / (float)v7);
        GameStat::attemptAddNewHighScore((GameStat *)v6, v5);
        v1 = Game::G;
      }
      Game::Save(v1, 0, 0);
    }
    Game::RequestSetState(v2, 3);
    if ( *((_BYTE *)v2 + 40) )
    {
      if ( GameAudio::Pin((GameAudio *)1, v10) )
        GameAudio::Unpin((GameAudio *)1, v11);
      if ( *((_BYTE *)v2 + 40) )
      {
        if ( !*((_BYTE *)v2 + 268) )
        {
          LODWORD(v14) = 0;
          GameAudio::PlaySoundProto((GameAudio *)1, 0, (bool)&v14, v12);
          GameAudio::SetSoundVolume((GameAudio *)1, 100, (int)v14, v13);
          *((_BYTE *)v2 + 268) = 1;
        }
      }
    }
    UIBoardCanvas::DoDisarmAction(*((UIBoardCanvas **)v2 + 2));
  }
}
