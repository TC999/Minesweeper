void __fastcall Board::Update(Board *this, float a2, struct UIBoardCanvas *a3)
{
  int v3; // r14d
  unsigned int v4; // edi
  __int64 v7; // rsi
  float v8; // xmm3_4
  float *v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm3_4
  char v12; // r13
  float v13; // xmm0_4
  UITile *v14; // r12
  int v15; // ebp
  unsigned int v16; // r9d
  void *v17; // rcx
  __int64 v18; // r10

  v3 = *((_DWORD *)this + 14);
  v4 = 0;
  if ( !v3 )
    return;
  v7 = 0;
  do
  {
    v8 = a2;
    v9 = *(float **)(v7 + *((_QWORD *)this + 9));
    v10 = v9[2];
    if ( v10 > 0.0 )
    {
      v9[2] = v10 - a2;
LABEL_12:
      ++v4;
      v7 += 8;
      continue;
    }
    if ( v10 < 0.0 )
    {
      v9[2] = 0.0;
      v8 = a2 - v10;
    }
    v11 = v8 + v9[6];
    v12 = 0;
    v13 = v9[5];
    v14 = *(UITile **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 3) + 8LL * *(unsigned int *)v9) + 16LL)
                     + 8LL * *((unsigned int *)v9 + 1));
    v9[6] = v11;
    if ( v11 < v13 )
    {
      v15 = (int)(float)((float)((float)(1.0 - (float)(v11 / v13)) * (float)*((int *)v9 + 3))
                       + (float)((float)*((int *)v9 + 4) * (float)(v11 / v13)));
    }
    else
    {
      v15 = *((_DWORD *)v9 + 4);
      v9[6] = v13;
      v12 = 1;
      if ( !v15 )
        UITile::SetTopVisible(v14, 0);
    }
    UITile::SetTopAlpha(v14, v15);
    if ( !v12 )
      goto LABEL_12;
    v16 = v4;
    v17 = *(void **)(v7 + *((_QWORD *)this + 9));
    if ( v4 < *((_DWORD *)this + 14) - 1 )
    {
      v18 = v7;
      do
      {
        ++v16;
        *(_QWORD *)(v18 + *((_QWORD *)this + 9)) = *(_QWORD *)(v18 + *((_QWORD *)this + 9) + 8);
        v18 += 8;
      }
      while ( v16 < *((_DWORD *)this + 14) - 1 );
    }
    --*((_DWORD *)this + 14);
    operator delete(v17);
  }
  while ( v4 < *((_DWORD *)this + 14) );
  if ( v3 > 0 && !*((_DWORD *)this + 14) && !*((_BYTE *)Game::G + 46) )
    UserInterface::ProcessMouseMove(g_pUserInterface, 1);
}
