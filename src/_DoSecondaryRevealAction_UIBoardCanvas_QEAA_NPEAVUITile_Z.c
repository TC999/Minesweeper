char __fastcall UIBoardCanvas::DoSecondaryRevealAction(
        UIBoardCanvas *this,
        struct UITile *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r12
  int v7; // r14d
  char v9; // r13
  int v11; // ebx
  unsigned int *v12; // r9
  signed int v13; // ebx
  unsigned int v14; // ecx
  signed int v15; // eax
  signed int v16; // r14d
  signed int v17; // edi
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // r8
  int v21; // esi
  __int64 v22; // rdx
  __int64 i; // r10
  struct UITile *v24; // rdx
  Str *v25; // rax
  __int64 v26; // rdx
  Game *v27; // rax
  NodeBase *v28; // rbx
  unsigned int v29; // eax
  _BYTE v31[88]; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+A8h] [rbp+10h]

  v4 = *((int *)a2 + 12);
  v5 = *((_QWORD *)this + 7);
  v6 = *((int *)a2 + 13);
  v7 = 0;
  v9 = 1;
  v32 = 0;
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 80) + 16LL) + 8LL * *((unsigned int *)a2 + 12))
                              + 16LL)
                  + 4LL * *((unsigned int *)a2 + 13));
  if ( (unsigned int)(v11 - 1) <= 7 && (unsigned int)Board::getSurroundingFlagCount((Board *)v5, v4, v6) == v11 )
  {
    if ( Board::validateSurroundingFlags((Board *)v5, v4, v6) )
    {
      v13 = v4 - 1;
      if ( (int)v4 - 1 <= (int)v4 + 1 )
      {
        v14 = 0;
        v15 = v6 - 1;
        v16 = v6 + 1;
        do
        {
          v17 = v15;
          if ( v15 <= v16 )
          {
            do
            {
              if ( v13 >= 0
                && v13 < *(_DWORD *)(v5 + 16)
                && v17 >= 0
                && v17 < *(_DWORD *)(v5 + 12)
                && (v13 != (_DWORD)v4 || v17 != (_DWORD)v6) )
              {
                v14 = Board::revealAt((Board *)v5, v13, v17, 0, v4, v6, v14);
              }
              ++v17;
            }
            while ( v17 <= v16 );
            v32 = v14;
            v15 = v6 - 1;
          }
          ++v13;
        }
        while ( v13 <= (int)v4 + 1 );
        v7 = v32;
      }
      v9 = 1;
    }
    else
    {
      v18 = v4 - 1;
      v19 = v4;
      v20 = (int)v4 - 1;
      if ( !*((_QWORD *)this + 31) )
      {
        v21 = v4 + 1;
        do
        {
          if ( v18 > v21 )
            break;
          v22 = (unsigned int)(v6 - 1);
          for ( i = v6 - 1; !*((_QWORD *)this + 31); ++i )
          {
            if ( (int)v22 > (int)v6 + 1 )
              break;
            if ( v20 >= 0
              && v18 < *(_DWORD *)(v5 + 16)
              && (int)v22 >= 0
              && (int)v22 < *(_DWORD *)(v5 + 12)
              && (v20 != v19 || i != v6)
              && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 80) + 16LL) + 8 * v20) + 16LL) + 4 * i) != 10
              && *(_BYTE *)(v22 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) + 8 * v20) + 16LL)) )
            {
              *((_QWORD *)this + 31) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v20) + 16LL)
                                                 + 8 * i);
            }
            v22 = (unsigned int)(v22 + 1);
          }
          ++v18;
          ++v20;
        }
        while ( !*((_QWORD *)this + 31) );
      }
      v24 = (struct UITile *)*((_QWORD *)this + 31);
      if ( v24 )
      {
        v9 = 0;
        UIBoardCanvas::DoRevealAction(this, v24);
      }
      else
      {
        v25 = Str::Str((Str *)v31, L"Couldn't find unflaged mine tile on secondary reveal failure");
        LOBYTE(v26) = 1;
        StrErr(v25, v26);
      }
    }
    *((_BYTE *)this + 276) = 1;
LABEL_45:
    if ( v7 >= 10 && *((_BYTE *)Game::G + 40) )
      GameAudio::PlaySoundProto((GameAudio *)3, 0, 0, v12);
    return v9;
  }
  v27 = Game::G;
  if ( *((_BYTE *)Game::G + 40) )
  {
    GameAudio::PlaySoundProto(0, 0, 0, a4);
    v27 = Game::G;
  }
  if ( *((_BYTE *)v27 + 41) )
  {
    if ( *((_DWORD *)a2 + 35) )
      UITile::RemoveInvalidMoveAnimation(a2);
    v28 = UITile::ShowBadGuess(a2);
    v29 = NodeBase::AddAnimation(v28, UITile::_alphaQuickPulseAnimationId, 0);
    *((_DWORD *)a2 + 35) = v29;
    NodeBase::ResumeAnimation(v28, v29);
    Array<IEventListener *>::Add((__int64)v28 + 200, (__int64)a2);
    goto LABEL_45;
  }
  return v9;
}
