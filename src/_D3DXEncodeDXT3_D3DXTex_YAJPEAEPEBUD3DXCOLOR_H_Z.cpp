__int64 __fastcall D3DXTex::D3DXEncodeDXT3(D3DXTex *this, float *a2, const struct D3DXCOLOR *a3)
{
  int v3; // edi
  unsigned int v6; // r9d
  float *v7; // r8
  float *v8; // r10
  unsigned __int64 v9; // r11
  float v10; // xmm1_4
  int v11; // ebp
  int v12; // eax
  float v13; // xmm1_4
  _BYTE v15[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = (int)a3;
  if ( (_DWORD)a3 )
    memset(v15, 0, sizeof(v15));
  v6 = 0;
  v7 = (float *)&v15[12];
  v8 = a2 + 3;
  v9 = 0;
  do
  {
    v10 = *v8;
    if ( v3 )
      v10 = v10 + *(v7 - 3);
    v11 = (int)(float)((float)(v10 * 15.0) + 0.5);
    *((_DWORD *)this + (v9 >> 3)) = (v11 << 28) | (*((_DWORD *)this + (v9 >> 3)) >> 4);
    if ( v3 )
    {
      v12 = v6 & 3;
      v13 = v10 - (float)((float)v11 * 0.06666667);
      if ( v12 != 3 )
        *(v7 - 2) = (float)(v13 * 0.4375) + *(v7 - 2);
      if ( v6 < 0xC )
      {
        if ( (v6 & 3) != 0 )
          *v7 = (float)(v13 * 0.1875) + *v7;
        v7[1] = (float)(v13 * 0.3125) + v7[1];
        if ( v12 != 3 )
          v7[2] = (float)(v13 * 0.0625) + v7[2];
      }
    }
    ++v6;
    ++v9;
    v8 += 4;
    ++v7;
  }
  while ( v6 < 0x10 );
  return D3DXTex::EncodeDXT1((__int64)this + 8, a2, 0, v3);
}
