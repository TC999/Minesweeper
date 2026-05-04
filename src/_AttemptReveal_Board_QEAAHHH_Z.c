__int64 __fastcall Board::AttemptReveal(Board *this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int *v7; // r9
  unsigned int v8; // eax

  v5 = 0;
  v7 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 8LL * a2) + 16LL);
  if ( v7[a3] == 9 || v7[a3] == 11 )
  {
    if ( *((_DWORD *)this + 7) )
    {
      if ( *(_BYTE *)(a3 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 8LL * a2) + 16LL)) )
      {
LABEL_10:
        ++*((_DWORD *)this + 7);
        goto LABEL_11;
      }
      v8 = Board::revealAt(this, a2, a3, 0, a2, a3, 0);
    }
    else
    {
      Board::placeMines(this, a2, a3);
      v8 = Board::revealAt(this, a2, a3, 0, a2, a3, 0);
      *((_DWORD *)this + 10) = a2;
      *((_DWORD *)this + 11) = a3;
    }
    v5 = v8;
    goto LABEL_10;
  }
  if ( *((_BYTE *)Game::G + 40) )
    GameAudio::PlaySoundProto(0, 0, 0, v7);
LABEL_11:
  if ( !*((_DWORD *)this + 14) )
    UIBoardCanvas::Refresh(*((UIBoardCanvas **)Game::G + 2), 1);
  return v5;
}
