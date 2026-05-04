void __fastcall Game::DoNewBoardAnimation(Game *this, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // rax
  int v6; // r13d
  int v7; // r14d
  int v8; // edi
  int v9; // esi
  int v10; // r12d
  __int64 i; // r15
  int v12; // ebp
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  unsigned int v18; // ecx
  __m128i v19; // xmm6
  int v20; // ecx
  __int64 v21; // [rsp+70h] [rbp+8h]

  if ( *((_BYTE *)this + 41) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = *(_DWORD *)(v5 + 16);
    v7 = *(_DWORD *)(v5 + 12);
    if ( *((_BYTE *)Game::G + 40) )
      GameAudio::PlaySoundProto((GameAudio *)4, 0, 0, a4);
    v8 = rand() % 6;
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) == 9 )
      v8 += 2;
    v9 = 0;
    v10 = rand() % 10000 + 1;
    if ( v6 > 0 )
    {
      for ( i = 0; ; i += 8 )
      {
        v12 = 0;
        if ( v7 > 0 )
          break;
LABEL_28:
        if ( ++v9 >= v6 )
          return;
      }
      v21 = 0;
      while ( 1 )
      {
        if ( !v8 )
        {
          v18 = v6 - v9;
          if ( ((v9 >> 31) ^ v9 & 1) == v9 >> 31 )
            v18 = v9;
          v19 = _mm_cvtsi32_si128(v18);
          v20 = v7 - v12;
          if ( ((v12 >> 31) ^ v12 & 1) == v12 >> 31 )
            v20 = v12;
          v15 = _mm_cvtepi32_ps(v19).m128_f32[0] * 0.60000002;
          v16 = (float)v20 * 0.60000002;
          goto LABEL_26;
        }
        if ( v8 == 1 )
          break;
        if ( v8 == 2 )
        {
          v17 = (float)(rand() % 3) * 0.25;
LABEL_20:
          v14 = v17 + 0.0;
          goto LABEL_27;
        }
        if ( v8 == 3 )
        {
          v15 = (float)v9 * 0.25;
          v16 = (float)v12 * 0.5;
LABEL_26:
          v14 = (float)((float)(v15 / (float)v6) + 0.0) + (float)(v16 / (float)v7);
          goto LABEL_27;
        }
        v13 = sqrtf(
                (float)((float)((v9 - v6 / 2) * (v9 - (v6 - 1) / 2) + (v12 - v7 / 2) * (v12 - (v7 - 1) / 2))
                      * (float)((float)v10 * 100.0))
              / (float)(v6 * v7));
        v14 = (float)(cosf(v13) * 0.30000001) + 0.30000001;
LABEL_27:
        UITile::SetTopAlpha(
          *(UITile **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + i) + 16LL) + v21),
          0);
        Board::StartAlphaAnimation(*((Board **)this + 3), v9, v12, v14, 1);
        v21 += 8;
        if ( ++v12 >= v7 )
          goto LABEL_28;
      }
      v17 = (float)(rand() % 80) * 0.0099999998;
      goto LABEL_20;
    }
  }
}
