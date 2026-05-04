__m128i *__fastcall D3DXTex::CCodecYUV::CCodecYUV(__m128i *this, struct D3DX_BLT *a2)
{
  __int32 v4; // eax
  __int32 v5; // r8d
  unsigned int v6; // eax
  size_t v7; // rax
  unsigned __int64 v8; // kr00_8
  void *v9; // rax
  int v10; // eax

  D3DXTex::CCodec::CCodec(this, a2, 0, 1);
  v4 = this[5].m128i_i32[2];
  v5 = this[5].m128i_i32[0];
  this[10].m128i_i32[3] = 0;
  this[11].m128i_i32[2] = 0;
  this[11].m128i_i32[1] = 0;
  this[11].m128i_i32[3] = 0;
  this[12].m128i_i32[1] = 0;
  v6 = (v4 + 1) & 0xFFFFFFFE;
  v5 &= ~1u;
  this->m128i_i64[0] = (__int64)&D3DXTex::CCodec_UYVY::`vftable';
  this[11].m128i_i32[0] = v6;
  this[10].m128i_i32[2] = v5;
  this[12].m128i_i32[2] = 1;
  this[12].m128i_i32[0] = v6 - v5;
  v8 = v6 - v5;
  v7 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10u) )
    v7 = -1;
  v9 = operator new(v7, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  this[10].m128i_i64[0] = (__int64)v9;
  if ( !v9 )
    this[12].m128i_i32[2] = 0;
  v10 = *((_DWORD *)a2 + 2);
  switch ( v10 )
  {
    case 844715353:
      goto LABEL_10;
    case 1111970375:
LABEL_9:
      this[13].m128i_i32[0] = 0;
      this[12].m128i_i32[3] = 8;
      return this;
    case 1195525970:
LABEL_10:
      this[12].m128i_i32[3] = 0;
      this[13].m128i_i32[0] = 8;
      return this;
    case 1498831189:
      goto LABEL_9;
  }
  return this;
}
