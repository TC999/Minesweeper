__m128i *__fastcall D3DXTex::CCodec::CCodec(__m128i *this, struct D3DX_BLT *a2, unsigned int a3, __int32 a4)
{
  __int32 v7; // ebp
  __m128i *v8; // rcx
  __int32 v9; // eax
  char *v10; // rdx
  void *v12; // rax
  __int32 v13; // r14d
  unsigned int v14; // r11d
  int v15; // eax
  __int32 v16; // eax
  unsigned int v17; // ecx
  __int32 v18; // edx
  int v19; // r8d
  __int32 v20; // r10d
  __int32 v21; // ecx
  __int32 v22; // r9d
  __int32 v23; // eax
  int v24; // r10d
  int v25; // eax
  size_t v26; // rax
  void *v27; // rax
  __m128i v29; // [rsp+20h] [rbp-38h] BYREF

  this->m128i_i64[0] = (__int64)&D3DXTex::CCodec::`vftable';
  this[2].m128i_i64[1] = *(_QWORD *)a2;
  v7 = *((_DWORD *)a2 + 2);
  v8 = this + 5;
  v8[-5].m128i_i32[2] = v7;
  v9 = *((_DWORD *)a2 + 3);
  v10 = (char *)a2 + 44;
  v8[3].m128i_i32[0] = v9;
  v8[3].m128i_i32[1] = *((_DWORD *)v10 - 7);
  memcpy(v8, v10, 0x18u);
  v12 = &unk_1000A6570;
  v13 = 0;
  if ( *((_DWORD *)a2 + 17) )
    v12 = &unk_1000A65F0;
  v14 = a3 >> 3;
  LOBYTE(v13) = a3 != 0;
  this->m128i_i32[3] = a4;
  this[6].m128i_i32[2] = 0;
  this[4].m128i_i64[0] = (__int64)v12;
  this[9].m128i_i32[2] = a3 >> 3;
  this[7].m128i_i64[0] = 0;
  this[1].m128i_i32[0] = v13;
  this[1].m128i_i32[3] = *((_DWORD *)a2 + 20);
  if ( v7 == 41 || (v15 = 0, v7 == 40) )
    v15 = 1;
  this[2].m128i_i32[0] = v15;
  this[4].m128i_i64[1] = 0;
  v16 = *((_DWORD *)a2 + 19);
  this[1].m128i_i32[2] = 0;
  this[7].m128i_i64[1] = 0;
  this[1].m128i_i32[1] = v16;
  if ( this[1].m128i_i32[3] )
  {
    v17 = *((_DWORD *)a2 + 20);
    *(float *)v29.m128i_i32 = (float)BYTE2(v17) * 0.0039215689;
    *(float *)&v29.m128i_i32[1] = (float)BYTE1(v17) * 0.0039215689;
    *(float *)&v29.m128i_i32[2] = (float)(unsigned __int8)v17 * 0.0039215689;
    *(float *)&v29.m128i_i32[3] = (float)HIBYTE(v17) * 0.0039215689;
    this[3] = _mm_loadu_si128(&v29);
  }
  if ( a4 == 2 )
  {
    if ( v7 == 61 )
      goto LABEL_13;
    this[1].m128i_i32[1] = 0;
  }
  if ( a4 == 3 )
    this[1].m128i_i32[1] = 0;
LABEL_13:
  v18 = this[5].m128i_i32[0];
  v19 = this[5].m128i_i32[3] - this[5].m128i_i32[1];
  v20 = this[6].m128i_i32[0];
  v21 = this[5].m128i_i32[2] - v18;
  v22 = this[6].m128i_i32[1] - v20;
  this[8].m128i_i32[3] = v19;
  this[8].m128i_i32[2] = v21;
  this[9].m128i_i32[0] = v22;
  this[9].m128i_i32[1] = v14 * v21;
  if ( v13 )
  {
    v23 = this[8].m128i_i32[0];
    v24 = this[8].m128i_i32[1] * v20;
    this[5].m128i_i32[0] = 0;
    this[6].m128i_i32[0] = 0;
    this[5].m128i_i32[2] = v21;
    v25 = this[5].m128i_i32[1] * v23;
    this[5].m128i_i32[3] = v19;
    this[6].m128i_i32[1] = v22;
    this[5].m128i_i32[1] = 0;
    this[2].m128i_i64[1] += v24 + v14 * v18 + v25;
  }
  if ( *((_DWORD *)a2 + 18) )
  {
    v26 = 16LL * (unsigned int)(v21 + 2);
    if ( !is_mul_ok((unsigned int)(v21 + 2), 0x10u) )
      v26 = -1;
    v27 = operator new(v26, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    this[7].m128i_i64[1] = (__int64)v27;
    if ( v27 )
      memset(v27, 0, 16LL * (unsigned int)(this[8].m128i_i32[2] + 2));
  }
  return this;
}
