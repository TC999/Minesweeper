__int64 __fastcall D3DXTex::D3DXDecodeDXT3(__m128i *this, struct D3DXCOLOR *a2, const unsigned __int8 *a3)
{
  __int64 result; // rax
  unsigned int *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r11
  float *v9; // r8
  char v10; // al
  unsigned int v11; // ecx
  float *v12; // r10
  char v13; // al

  result = D3DXTex::D3DXDecodeDXT1(this, (struct D3DXCOLOR *)((char *)a2 + 8), a3);
  if ( (int)result >= 0 )
  {
    v6 = *v4;
    v7 = 8;
    v8 = 8;
    v9 = (float *)(v5 + 12);
    do
    {
      v10 = v6;
      v6 >>= 4;
      *v9 = (float)(v10 & 0xF) * 0.06666667;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    v11 = v4[1];
    v12 = (float *)(v5 + 140);
    do
    {
      v13 = v11;
      v11 >>= 4;
      *v12 = (float)(v13 & 0xF) * 0.06666667;
      v12 += 4;
      --v7;
    }
    while ( v7 );
    return 0;
  }
  return result;
}
