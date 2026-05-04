__int64 __fastcall D3DXTex::D3DXEncodeDXT1(D3DXTex *this, float *a2, const struct D3DXCOLOR *a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  unsigned int v7; // r11d
  char *v8; // r10
  float *v9; // r9
  float *v10; // rdx
  float v11; // xmm2_4
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm2_4
  int v15; // eax
  _BYTE v17[64]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v18[4]; // [rsp+60h] [rbp-108h] BYREF
  char v19; // [rsp+64h] [rbp-104h] BYREF

  v3 = 0;
  v4 = (int)a3;
  if ( (_DWORD)a3 )
  {
    memset(v17, 0, sizeof(v17));
    v7 = 0;
    v8 = &v19;
    v9 = (float *)&v17[12];
    v10 = a2 + 3;
    do
    {
      v11 = *(v9 - 3) + *v10;
      *((float *)v8 - 1) = *(v10 - 3);
      *(float *)v8 = *(v10 - 2);
      *((float *)v8 + 1) = *(v10 - 1);
      v12 = v7 & 3;
      v13 = (float)(int)(float)(v11 + 0.5);
      *(float *)((char *)v10 + v18 - (_BYTE *)a2) = v13;
      v14 = v11 - v13;
      if ( v12 != 3 )
        *(v9 - 2) = (float)(v14 * 0.4375) + *(v9 - 2);
      if ( v7 < 0xC )
      {
        if ( (v7 & 3) != 0 )
          *v9 = (float)(v14 * 0.1875) + *v9;
        v9[1] = (float)(v14 * 0.3125) + v9[1];
        if ( v12 != 3 )
          v9[2] = (float)(v14 * 0.0625) + v9[2];
      }
      ++v7;
      v8 += 16;
      v10 += 4;
      ++v9;
    }
    while ( v7 < 0x10 );
    a2 = (float *)v18;
  }
  v15 = D3DXTex::EncodeDXT1((__int64)this, a2, 1, v4);
  if ( v15 < 0 )
    return (unsigned int)v15;
  return v3;
}
