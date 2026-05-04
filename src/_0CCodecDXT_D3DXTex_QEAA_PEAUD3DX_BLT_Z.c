__m128i *__fastcall D3DXTex::CCodecDXT::CCodecDXT(__m128i *this, struct D3DX_BLT *a2)
{
  __int32 v4; // eax
  __int64 (__fastcall *v5)(D3DXTex *__hidden, struct D3DXCOLOR *, const unsigned __int8 *); // rax
  __int32 v6; // r10d
  __int32 v7; // r8d
  __int32 v8; // r9d
  __int32 v9; // r11d
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  __int32 v13; // eax

  D3DXTex::CCodec::CCodec(this, a2, 0, 1);
  v4 = this->m128i_i32[2];
  this->m128i_i64[0] = (__int64)&D3DXTex::CCodecDXT::`vftable';
  switch ( v4 )
  {
    case 827611204:
      this[10].m128i_i32[2] = 8;
      this[11].m128i_i64[1] = (__int64)D3DXTex::D3DXEncodeDXT1;
      v5 = D3DXTex::D3DXDecodeDXT1;
      goto LABEL_11;
    case 844388420:
      this[10].m128i_i32[2] = 16;
      this[11].m128i_i64[1] = (__int64)D3DXTex::D3DXEncodeDXT2;
      v5 = D3DXTex::D3DXDecodeDXT2;
      goto LABEL_11;
    case 861165636:
      this[10].m128i_i32[2] = 16;
      this[11].m128i_i64[1] = (__int64)D3DXTex::D3DXEncodeDXT3;
      v5 = D3DXTex::D3DXDecodeDXT3;
      goto LABEL_11;
    case 877942852:
      this[10].m128i_i32[2] = 16;
      this[11].m128i_i64[1] = (__int64)D3DXTex::D3DXEncodeDXT4;
      v5 = D3DXTex::D3DXDecodeDXT4;
      goto LABEL_11;
    case 894720068:
      this[10].m128i_i32[2] = 16;
      this[11].m128i_i64[1] = (__int64)D3DXTex::D3DXEncodeDXT5;
      v5 = D3DXTex::D3DXDecodeDXT5;
LABEL_11:
      this[11].m128i_i64[0] = (__int64)v5;
      break;
  }
  memcpy(&this[12], (char *)a2 + 20, 0x18u);
  v6 = this[6].m128i_i32[0];
  v7 = this[5].m128i_i32[0];
  v8 = this[5].m128i_i32[1];
  v9 = this[12].m128i_i32[0];
  v10 = this[5].m128i_i32[2] + 3;
  v11 = this[5].m128i_i32[3] + 3;
  this[13].m128i_i32[3] = this[12].m128i_i32[1] & 0xFFFFFFFC;
  v10 &= 0xFFFFFFFC;
  this[14].m128i_i32[2] = this[13].m128i_i32[0];
  v11 &= 0xFFFFFFFC;
  v7 &= 0xFFFFFFFC;
  v8 &= 0xFFFFFFFC;
  v12 = (this[12].m128i_i32[2] + 3) & 0xFFFFFFFC;
  this[15].m128i_i32[2] = v10;
  this[15].m128i_i32[3] = v11;
  this[14].m128i_i32[0] = v12;
  this[14].m128i_i32[1] = (this[12].m128i_i32[3] + 3) & 0xFFFFFFFC;
  this[14].m128i_i32[3] = this[13].m128i_i32[1];
  v13 = this[6].m128i_i32[1];
  this[13].m128i_i32[2] = v9 & 0xFFFFFFFC;
  this[16].m128i_i32[1] = v13;
  this[15].m128i_i32[0] = v7;
  this[17].m128i_i32[0] = v13 - v6;
  this[15].m128i_i32[1] = v8;
  this[17].m128i_i32[1] = -1;
  this[17].m128i_i32[2] = -1;
  this[18].m128i_i64[0] = 0;
  this[18].m128i_i32[2] = 0;
  this[19].m128i_i64[0] = 0;
  this[16].m128i_i32[0] = v6;
  this[16].m128i_i32[2] = (unsigned int)(v10 - v7) >> 2;
  this[16].m128i_i32[3] = (unsigned int)(v11 - v8) >> 2;
  this[19].m128i_i32[2] = *((_DWORD *)a2 + 17);
  return this;
}
