__int64 __fastcall D3DXCore::CSprite::Draw(
        D3DXCore::CSprite *this,
        struct IDirect3DTexture9 *a2,
        const __m128i *a3,
        const struct D3DXVECTOR3 *a4,
        const struct D3DXVECTOR3 *a5,
        unsigned int a6)
{
  const __m128i *v7; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  size_t v15; // rax
  size_t v16; // rax
  void *v17; // r13
  size_t v18; // rax
  void *v19; // r15
  size_t v20; // rax
  void *v21; // r14
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  bool v25; // zf
  int v26; // ecx
  float v27; // xmm1_4
  int v28; // ebp
  int v29; // r12d
  int v30; // r13d
  int v31; // r14d
  float v32; // xmm10_4
  float v33; // xmm11_4
  const struct D3DXMATRIX *v34; // r8
  const struct D3DXMATRIX *v35; // rdx
  struct D3DXMATRIX *v36; // rcx
  float *v37; // rbx
  float v38; // xmm7_4
  float v39; // xmm0_4
  float *v40; // rax
  const struct D3DXVECTOR3 *v41; // rdx
  const struct D3DXMATRIX *v42; // r8
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm7_4
  float v46; // xmm9_4
  float v47; // xmm8_4
  float *p_Size; // rcx
  float v49; // xmm1_4
  float v50; // xmm0_4
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned int v54; // xmm3_4
  unsigned int v55; // xmm5_4
  unsigned int v56; // xmm4_4
  float v57; // xmm0_4
  __int32 v58; // xmm1_4
  float v59; // xmm0_4
  __m128i Size; // [rsp+20h] [rbp-C8h] BYREF
  int v61; // [rsp+38h] [rbp-B0h]
  int v62; // [rsp+3Ch] [rbp-ACh]
  float v63; // [rsp+40h] [rbp-A8h] BYREF
  float v64; // [rsp+44h] [rbp-A4h]
  float v65; // [rsp+48h] [rbp-A0h]
  void *Block; // [rsp+F0h] [rbp+8h]
  void *Blocka; // [rsp+F0h] [rbp+8h]

  v7 = a3;
  if ( !*((_DWORD *)this + 56) || !a2 )
    return 2289436780LL;
  v11 = *((unsigned int *)this + 66);
  v12 = *((unsigned int *)this + 67);
  if ( (unsigned int)v11 >= (unsigned int)v12 )
  {
    v13 = 64;
    if ( (_DWORD)v12 )
    {
      v13 = 2 * v12;
      if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
        return 2147942934LL;
    }
    Size.m128i_i64[0] = 8 * v11;
    if ( (unsigned __int64)(8 * v11) > 0xFFFFFFFF )
      return 2147942934LL;
    if ( 4 * (unsigned __int64)v13 > 0xFFFFFFFF )
      return 2147942934LL;
    v14 = 96 * v11;
    if ( (unsigned __int64)(96 * v11) > 0xFFFFFFFF )
      return 2147942934LL;
    v15 = 4LL * v13;
    if ( !is_mul_ok(v13, 4u) )
      v15 = -1;
    Block = operator new(v15, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v16 = 8LL * v13;
    if ( !is_mul_ok(v13, 8u) )
      v16 = -1;
    v17 = operator new(v16, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v18 = 4LL * v13;
    if ( !is_mul_ok(v13, 4u) )
      v18 = -1;
    v19 = operator new(v18, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v20 = 96LL * v13;
    if ( !is_mul_ok(4 * v13, 0x18u) )
      v20 = -1;
    v21 = operator new(v20, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( !Block || !v17 || !v19 || !v21 )
    {
      operator delete(Block);
      operator delete(v17);
      operator delete(v19);
      operator delete(v21);
      return 2147942414LL;
    }
    memcpy(v17, *((const void **)this + 30), Size.m128i_u32[0]);
    memcpy(v21, *((const void **)this + 32), v14);
    operator delete(*((void **)this + 29));
    v22 = (void *)*((_QWORD *)this + 30);
    *((_QWORD *)this + 29) = Block;
    operator delete(v22);
    v23 = (void *)*((_QWORD *)this + 31);
    *((_QWORD *)this + 30) = v17;
    operator delete(v23);
    v24 = (void *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 31) = v19;
    operator delete(v24);
    *((_DWORD *)this + 67) = v13;
    v7 = a3;
    *((_QWORD *)this + 32) = v21;
  }
  if ( *((struct IDirect3DTexture9 **)this + 35) != a2 )
  {
    v25 = *((_DWORD *)this + 66) == 0;
    *((_QWORD *)this + 35) = a2;
    if ( !v25 )
      ++*((_DWORD *)this + 69);
    ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, __m128i *))a2->lpVtbl->GetLevelDesc)(a2, 0, &Size);
    v26 = v62;
    v27 = (float)v61;
    *((_DWORD *)this + 72) = v61;
    *((_DWORD *)this + 73) = v26;
    *((float *)this + 74) = 1.0 / v27;
    *((float *)this + 75) = 1.0 / (float)v26;
  }
  if ( v7 )
  {
    Size = _mm_loadu_si128(v7);
    v28 = Size.m128i_i32[3];
    v29 = Size.m128i_i32[2];
    v30 = Size.m128i_i32[1];
    v31 = Size.m128i_i32[0];
  }
  else
  {
    v29 = *((_DWORD *)this + 72);
    v28 = *((_DWORD *)this + 73);
    v31 = 0;
    v30 = 0;
  }
  *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * *((unsigned int *)this + 66)) = *((_QWORD *)this + 35);
  v32 = (float)(v29 - v31);
  v33 = (float)(v28 - v30);
  if ( (*((_BYTE *)this + 228) & 8) == 0 )
  {
    p_Size = (float *)a5;
    if ( !a5 )
    {
      Size.m128i_i64[0] = 0;
      Size.m128i_i32[2] = 0;
      p_Size = (float *)&Size;
    }
    v63 = *p_Size;
    v64 = p_Size[1];
    v65 = p_Size[2];
    if ( a4 )
    {
      v45 = v63 + (float)(0.0 - *(float *)a4);
      v47 = v64 + (float)(0.0 - *((float *)a4 + 1));
      v46 = v65 + (float)(0.0 - *((float *)a4 + 2));
      goto LABEL_44;
    }
LABEL_49:
    v46 = v65;
    v47 = v64;
    v45 = v63;
    goto LABEL_50;
  }
  if ( !*((_DWORD *)this + 38) )
  {
    v34 = (const struct D3DXMATRIX *)*((_QWORD *)this + 22);
    v35 = (const struct D3DXMATRIX *)*((_QWORD *)this + 20);
    v36 = (struct D3DXMATRIX *)*((_QWORD *)this + 24);
    *((_DWORD *)this + 38) = 1;
    off_1000A6688(v36, v35, v34);
    v37 = (float *)*((_QWORD *)this + 24);
    v38 = sqrtf((float)((float)(*v37 * *v37) + (float)(v37[1] * v37[1])) + (float)(v37[2] * v37[2]));
    *((float *)this + 53) = v38;
    *((float *)this + 54) = sqrtf((float)((float)(v37[4] * v37[4]) + (float)(v37[5] * v37[5])) + (float)(v37[6] * v37[6]));
    v39 = sqrtf((float)((float)(v37[8] * v37[8]) + (float)(v37[9] * v37[9])) + (float)(v37[10] * v37[10]));
    v40 = (float *)*((_QWORD *)this + 20);
    *((float *)this + 55) = v39;
    if ( *v40 < 0.0 )
      *((_DWORD *)this + 53) = LODWORD(v38) ^ _mask__NegFloat_;
    if ( v40[5] < 0.0 )
      *((_DWORD *)this + 54) ^= _mask__NegFloat_;
    if ( v40[10] < 0.0 )
      *((_DWORD *)this + 55) ^= _mask__NegFloat_;
  }
  v41 = a5;
  v42 = (const struct D3DXMATRIX *)*((_QWORD *)this + 24);
  if ( !a5 )
  {
    Size.m128i_i64[0] = 0;
    Size.m128i_i32[2] = 0;
    v41 = (const struct D3DXVECTOR3 *)&Size;
  }
  off_1000A66C0((struct D3DXVECTOR3 *)&v63, v41, v42);
  v43 = *((float *)this + 53);
  v44 = *((float *)this + 54);
  v32 = v32 * v43;
  v33 = v33 * v44;
  if ( !a4 )
    goto LABEL_49;
  v45 = v63 + (float)(0.0 - (float)(v43 * *(float *)a4));
  v46 = v65 + (float)(0.0 - (float)(*((float *)this + 55) * *((float *)a4 + 2)));
  v47 = v64 + (float)(0.0 - (float)(v44 * *((float *)a4 + 1)));
LABEL_44:
  v64 = v47;
  v63 = v45;
  v65 = v46;
LABEL_50:
  v49 = *((float *)this + 74);
  v50 = *((float *)this + 75);
  v51 = *((_QWORD *)this + 32);
  v52 = (unsigned int)(4 * *((_DWORD *)this + 66));
  *(float *)&Size.m128i_i32[1] = v47;
  *(float *)&Size.m128i_i32[2] = v46;
  v53 = 3 * v52;
  *(float *)(v51 + 8 * v53) = v45;
  *(float *)&v54 = (float)v30 * v50;
  *(float *)&v55 = (float)v29 * v49;
  *(_DWORD *)(v51 + 8 * v53 + 4) = Size.m128i_i32[1];
  *(_DWORD *)(v51 + 8 * v53 + 8) = Size.m128i_i32[2];
  *(_DWORD *)(v51 + 8 * v53 + 12) = a6;
  *(float *)&v56 = (float)v28 * v50;
  Blocka = (void *)__PAIR64__(v56, (float)v31 * v49);
  *(_QWORD *)(v51 + 8 * v53 + 16) = __PAIR64__(v54, (float)v31 * v49);
  *(float *)Size.m128i_i32 = v63;
  v57 = v65;
  *(float *)&v58 = v64 + v33;
  *(_DWORD *)(v51 + 8 * v53 + 36) = a6;
  *(float *)&Size.m128i_i32[2] = v57;
  Size.m128i_i32[1] = v58;
  *(_QWORD *)(v51 + 8 * v53 + 24) = Size.m128i_i64[0];
  *(_DWORD *)(v51 + 8 * v53 + 32) = Size.m128i_i32[2];
  *(_QWORD *)(v51 + 8 * v53 + 40) = Blocka;
  *(float *)&Size.m128i_i32[2] = v65;
  *(float *)Size.m128i_i32 = v63 + v32;
  v59 = v64;
  *(_DWORD *)(v51 + 8 * v53 + 60) = a6;
  *(float *)&Size.m128i_i32[1] = v59;
  *(_QWORD *)(v51 + 8 * v53 + 48) = Size.m128i_i64[0];
  *(_DWORD *)(v51 + 8 * v53 + 56) = Size.m128i_i32[2];
  *(_QWORD *)(v51 + 8 * v53 + 64) = __PAIR64__(v54, v55);
  *(float *)Size.m128i_i32 = v63 + v32;
  *(float *)&Size.m128i_i32[1] = v64 + v33;
  *(float *)&Size.m128i_i32[2] = v65;
  *(float *)(v51 + 8 * v53 + 72) = v63 + v32;
  LODWORD(v52) = Size.m128i_i32[1];
  *(_DWORD *)(v51 + 8 * v53 + 84) = a6;
  *(_DWORD *)(v51 + 8 * v53 + 76) = v52;
  *(_DWORD *)(v51 + 8 * v53 + 80) = Size.m128i_i32[2];
  *(_QWORD *)(v51 + 8 * v53 + 88) = __PAIR64__(v56, v55);
  ++*((_DWORD *)this + 66);
  return 0;
}
