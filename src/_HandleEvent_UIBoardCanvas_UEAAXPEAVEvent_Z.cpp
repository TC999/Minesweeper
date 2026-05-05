void __fastcall UIBoardCanvas::HandleEvent(UIBoardCanvas *this, struct Event *a2)
{
  int v2; // eax
  Game *v5; // rcx
  __int16 v6; // ax
  Board *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r11
  RenderManager *v10; // rax

  v2 = *((_DWORD *)a2 + 4);
  if ( v2 == 4 )
  {
LABEL_4:
    v5 = Game::G;
    if ( v2 == 4 )
      *((_BYTE *)Game::G + 46) = 0;
    if ( *((_DWORD *)a2 + 4) == 29 )
    {
      v6 = *((_WORD *)a2 + 12);
      if ( v6 == 37 || v6 == 39 || v6 == 38 || v6 == 40 )
        *((_BYTE *)v5 + 46) = 1;
    }
    if ( !*((_QWORD *)a2 + 1) )
    {
      Game::RequestSkipAnimation(v5);
      v7 = (Board *)*((_QWORD *)this + 7);
      if ( v7 )
      {
        if ( *((_DWORD *)v7 + 14) )
        {
          Board::FinishAnimations(v7, this);
          if ( (unsigned int)GameAudio::aSoundEffects > 4 )
            Audio::StopSound(g_pAudio, **((_DWORD **)Block + 4), 0);
          if ( *((_DWORD *)a2 + 4) == 4 )
            *((_BYTE *)a2 + 52) = 1;
        }
      }
    }
    return;
  }
  if ( v2 != 12 )
  {
    if ( v2 != 29 )
      return;
    goto LABEL_4;
  }
  v8 = *((_DWORD *)this + 12);
  if ( *((_DWORD *)a2 + 8) == v8 )
  {
    NodeBase::StopAnimation(*((NodeBase **)this + 9), v8);
    v9 = *((_QWORD *)this + 9);
    if ( *(_BYTE *)(v9 + 41) )
    {
      v10 = g_pRenderManager;
      *(_BYTE *)(v9 + 41) = 0;
      *((_BYTE *)v10 + 20) = 1;
      *((_BYTE *)v10 + 88) = 1;
    }
    *(_BYTE *)(*((_QWORD *)this + 9) + 72LL) = 0;
    NodeBase::RemoveListener(*((NodeBase **)this + 9), this);
    Log(0x1000000u, L"Scanbar animation complete");
    *((_DWORD *)this + 12) = 0;
  }
}
