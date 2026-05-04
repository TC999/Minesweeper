__int64 __fastcall Board::revealAt(
        Board *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // edx
  __int64 v16; // rax
  float v17; // xmm3_4
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+80h] [rbp+8h]
  int v26; // [rsp+80h] [rbp+8h]

  if ( a4 > *((_DWORD *)this + 4) * *((_DWORD *)this + 3) + 1 )
    return a7;
  v9 = a2;
  v25 = a2;
  v24 = a3;
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 8LL * a2) + 16LL) + 4LL * a3);
  v11 = Board::attemptRevealStatus(this);
  v12 = v11;
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 8 * v9);
  v14 = a7;
  if ( !*(_BYTE *)(v24 + *(_QWORD *)(v13 + 16)) )
  {
    if ( v10 == v11 )
      return v14;
    v14 = a7 + 1;
  }
  if ( v10 == v11 )
    return v14;
  if ( v11 != 9 && v11 != 10 && v11 != 11 )
  {
    if ( *((_BYTE *)Game::G + 41) )
    {
      v15 = (a2 - a5) * (a2 - a5) + (a3 - a6) * (a3 - a6);
      if ( v15 >= 4 )
      {
        v17 = (double)v15 / 10.0 * 0.01;
        Board::StartAlphaAnimation(this, a2, a3, v17, 0);
        goto LABEL_16;
      }
      v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Game::G + 2) + 24LL) + 8 * v25);
    }
    else
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Game::G + 2) + 24LL) + 8 * v25);
    }
    UITile::SetTopVisible(*(UITile **)(*(_QWORD *)(v16 + 16) + 8 * v24), 0);
  }
LABEL_16:
  if ( v12 == 12 )
  {
    if ( (int)(a2 - 1) >= 0 )
    {
      v18 = Board::revealAt(this, a2 - 1, a3, a4 + 1, a5, a6, v14);
      v19 = a3;
      v14 = v18;
      if ( (int)(a3 - 1) < 0 )
        goto LABEL_21;
      v14 = Board::revealAt(this, a2 - 1, a3 - 1, a4 + 1, a5, a6, v18);
    }
    v19 = a3;
LABEL_21:
    if ( (signed int)(a2 + 1) < *((_DWORD *)this + 4) )
    {
      v14 = Board::revealAt(this, a2 + 1, v19, a4 + 1, a5, a6, v14);
      v20 = a3;
      if ( (signed int)(a3 + 1) >= *((_DWORD *)this + 3) )
        goto LABEL_25;
      v14 = Board::revealAt(this, a2 + 1, a3 + 1, a4 + 1, a5, a6, v14);
    }
    v20 = a3;
LABEL_25:
    v26 = v20 - 1;
    if ( (int)(v20 - 1) >= 0 )
    {
      v21 = Board::revealAt(this, a2, v20 - 1, a4 + 1, a5, a6, v14);
      v22 = a2;
      v14 = v21;
      if ( (signed int)(a2 + 1) >= *((_DWORD *)this + 4) )
      {
        v20 = a3;
LABEL_29:
        v23 = v20 + 1;
        if ( v23 < *((_DWORD *)this + 3) )
        {
          v14 = Board::revealAt(this, v22, v23, a4 + 1, a5, a6, v14);
          if ( (int)(a2 - 1) >= 0 )
            return (unsigned int)Board::revealAt(this, a2 - 1, a3 + 1, a4 + 1, a5, a6, v14);
        }
        return v14;
      }
      v14 = Board::revealAt(this, a2 + 1, v26, a4 + 1, a5, a6, v21);
      v20 = a3;
    }
    v22 = a2;
    goto LABEL_29;
  }
  return v14;
}
