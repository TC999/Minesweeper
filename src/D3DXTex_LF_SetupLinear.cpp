float *__fastcall D3DXTex::LF_SetupLinear(int a1, unsigned int a2, int a3)
{
  size_t v6; // rax
  float *v7; // rax
  float *v8; // r11
  float *v10; // r9
  int i; // r8d
  float v12; // xmm0_4
  unsigned int v13; // edx
  int v14; // eax
  float v15; // xmm2_4

  v6 = 16LL * a2;
  if ( !is_mul_ok(a2, 0x10u) )
    v6 = -1;
  v7 = (float *)operator new(v6, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v8 = v7;
  if ( !v7 )
    return 0;
  v10 = v7;
  for ( i = 0; i < a2; *(v8 - 1) = 1.0 - v15 )
  {
    v12 = (float)((float)((float)i + 0.5) * (float)((float)a1 / (float)(int)a2)) + 0.5;
    v13 = (int)v12;
    v14 = (int)v12 - 1;
    v15 = (float)((float)(int)v12 + 1.0) - v12;
    if ( v14 < 0 )
      v14 = a3 != 0 ? a1 - 1 : 0;
    if ( v13 >= a1 )
    {
      v13 = a1 - 1;
      if ( a3 )
        v13 = 0;
    }
    ++i;
    v8[1] = v15;
    *(_DWORD *)v8 = v14;
    *((_DWORD *)v8 + 2) = v13;
    v8 += 4;
  }
  return v10;
}
