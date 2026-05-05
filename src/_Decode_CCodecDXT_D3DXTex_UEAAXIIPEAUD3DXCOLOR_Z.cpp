void __fastcall D3DXTex::CCodecDXT::Decode(D3DXTex::CCodecDXT *this, int a2, int a3, struct D3DXCOLOR *i)
{
  int v5; // esi
  int v6; // r12d
  unsigned __int64 v8; // r9
  size_t v9; // rax
  void *v10; // rax
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  int v17; // eax
  unsigned int v18; // edx
  int v19; // esi
  unsigned int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rax
  struct D3DXCOLOR *v24; // rcx
  __m128i v25[2]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_DWORD *)this + 21) + a2;
  v6 = *((_DWORD *)this + 24) + a3;
  if ( *((_QWORD *)this + 36) )
    goto LABEL_5;
  v8 = (unsigned int)(16 * *((_DWORD *)this + 66));
  v9 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10u) )
    v9 = -1;
  v10 = operator new(v9, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  *((_QWORD *)this + 36) = v10;
  if ( v10 )
  {
LABEL_5:
    v11 = v5 & 0xFFFFFFFC;
    if ( (v5 & 0xFFFFFFFC) != *((_DWORD *)this + 69) || v6 != *((_DWORD *)this + 70) )
    {
      v12 = *((_DWORD *)this + 33);
      v13 = *((_DWORD *)this + 60);
      *((_DWORD *)this + 69) = v11;
      v14 = (unsigned int)(v6 * v12);
      *((_DWORD *)this + 70) = v6;
      v15 = *((_QWORD *)this + 36);
      v16 = *((_QWORD *)this + 5)
          + v14
          + *((_DWORD *)this + 42) * (v13 >> 2)
          + (unsigned __int64)(*((_DWORD *)this + 32) * (v11 >> 2));
      while ( v13 < *((_DWORD *)this + 62) )
      {
        (*((void (__fastcall **)(__int64, unsigned __int64))this + 22))(v15, v16);
        v15 += 256;
        v16 += *((unsigned int *)this + 42);
        v13 += 4;
      }
    }
    v17 = *((_DWORD *)this + 34);
    v18 = *((_DWORD *)this + 20) - *((_DWORD *)this + 60);
    v19 = (v5 - *((_DWORD *)this + 61)) & 3;
    v20 = v18 + v17;
    if ( v18 < v18 + v17 )
    {
      v21 = v18;
      do
      {
        v22 = v18++;
        v23 = v21++ & 3;
        *(__m128i *)i = _mm_loadu_si128((const __m128i *)(*((_QWORD *)this + 36)
                                                        + 16 * (v23 | (4 * (v19 | v22 & 0xFFFFFFFC)))));
        i = (struct D3DXCOLOR *)((char *)i + 16);
      }
      while ( v18 < v20 );
    }
    if ( *((_DWORD *)this + 7) )
    {
      v24 = i;
      for ( i = (struct D3DXCOLOR *)((char *)i - 16 * *((unsigned int *)this + 34));
            i < v24;
            i = (struct D3DXCOLOR *)((char *)i + 16) )
      {
        if ( (float)((float)(int)(float)((float)(*(float *)i * 31.0) + 0.5) * 0.032258064) == *((float *)this + 12)
          && (float)((float)(int)(float)((float)(*((float *)i + 1) * 63.0) + 0.5) * 0.015873017) == *((float *)this + 13)
          && (float)((float)(int)(float)((float)(*((float *)i + 2) * 31.0) + 0.5) * 0.032258064) == *((float *)this + 14)
          && (float)((float)(int)(float)((float)(*((float *)i + 3) * *((float *)this + 40)) + 0.5)
                   * *((float *)this + 41)) == *((float *)this + 15) )
        {
          v25[0] = 0u;
          *(__m128i *)i = _mm_loadu_si128(v25);
        }
      }
    }
    if ( *((_DWORD *)this + 5) )
      D3DXTex::CCodec::DecodeGamma22(this, (struct D3DXCOLOR *)((char *)i - 16 * *((unsigned int *)this + 34)));
  }
}
