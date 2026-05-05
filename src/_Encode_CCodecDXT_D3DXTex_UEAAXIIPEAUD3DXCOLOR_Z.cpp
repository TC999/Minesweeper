void __fastcall D3DXTex::CCodecDXT::Encode(D3DXTex::CCodecDXT *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  int v4; // r13d
  unsigned int v5; // r14d
  unsigned __int64 v8; // rcx
  size_t v9; // rax
  void *v10; // rax
  __int64 v11; // rdi
  size_t v12; // rax
  void *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned __int64 v20; // rbp
  unsigned int i; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r10d
  int v24; // r8d
  __int64 v25; // r9
  __m128i v26; // xmm0
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // ebp
  __int64 v30; // rcx
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  unsigned int v33; // r14d
  unsigned int v34; // r9d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  __int64 v37; // r10
  __int64 v38; // rsi
  __int64 v39; // rbp
  unsigned int *v40; // r11
  __int64 v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // r8
  __int64 v44; // r9
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  _DWORD v55[14]; // [rsp+20h] [rbp-38h] BYREF
  int v56; // [rsp+70h] [rbp+18h]
  unsigned int v57; // [rsp+70h] [rbp+18h]

  v4 = *((_DWORD *)this + 24) + a3;
  v5 = *((_DWORD *)this + 21) + a2;
  v56 = v4;
  if ( !*((_QWORD *)this + 38) )
  {
    v8 = (unsigned int)(*((_DWORD *)this + 68) * *((_DWORD *)this + 67));
    v9 = 16 * v8;
    if ( !is_mul_ok(v8, 0x10u) )
      v9 = -1;
    v10 = operator new(v9, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    *((_QWORD *)this + 38) = v10;
    if ( !v10 )
      return;
    memset(v10, 0, 16LL * (unsigned int)(*((_DWORD *)this + 68) * *((_DWORD *)this + 67)));
  }
  v11 = *((_QWORD *)this + 38)
      + 16LL * (((v5 - *((_DWORD *)this + 61)) >> 2) + *((_DWORD *)this + 67) * (v4 - *((_DWORD *)this + 64)));
  if ( *(_QWORD *)(v11 + 8) )
  {
LABEL_11:
    if ( !*(_DWORD *)v11 )
    {
      v14 = *((_DWORD *)this + 21);
      v15 = v5 & 0xFFFFFFFC;
      if ( ((v5 & 0xFFFFFFFC) >= v14 || v14 <= *((_DWORD *)this + 49))
        && ((v16 = *((_DWORD *)this + 23), (v5 & 0xFFFFFFFC) + 4 <= v16) || v16 >= *((_DWORD *)this + 51)) )
      {
        v51 = *((_DWORD *)this + 60);
        v52 = *((_DWORD *)this + 20);
        if ( v51 < v52 && v52 > *((_DWORD *)this + 48) )
          (*((void (__fastcall **)(_QWORD, unsigned __int64))this + 22))(
            *(_QWORD *)(v11 + 8),
            *((_QWORD *)this + 5)
          + (unsigned int)(v4 * *((_DWORD *)this + 33))
          + (v5 >> 2) * *((_DWORD *)this + 32)
          + (unsigned __int64)(*((_DWORD *)this + 42) * (v51 >> 2)));
        v53 = *((_DWORD *)this + 62);
        v54 = *((_DWORD *)this + 22);
        if ( v53 > v54 && v54 < *((_DWORD *)this + 50) )
          (*((void (__fastcall **)(_QWORD, unsigned __int64))this + 22))(
            *(_QWORD *)(v11 + 8),
            *((_QWORD *)this + 5)
          + (unsigned int)(v4 * *((_DWORD *)this + 33))
          + (v5 >> 2) * *((_DWORD *)this + 32)
          + (unsigned __int64)(*((_DWORD *)this + 42) * ((v53 - 4) >> 2)));
      }
      else
      {
        v17 = *((_DWORD *)this + 60);
        v18 = (unsigned int)(v4 * *((_DWORD *)this + 33));
        v19 = *(_QWORD *)(v11 + 8);
        v20 = *((_QWORD *)this + 5)
            + v18
            + *((_DWORD *)this + 42) * (v17 >> 2)
            + (unsigned __int64)((v5 >> 2) * *((_DWORD *)this + 32));
        while ( v17 < *((_DWORD *)this + 62) )
        {
          (*((void (__fastcall **)(__int64, unsigned __int64))this + 22))(v19, v20);
          v19 += 256;
          v20 += *((unsigned int *)this + 42);
          v17 += 4;
        }
        v4 = v56;
      }
      for ( i = 0; i < 4; ++i )
      {
        if ( i + v15 < *((_DWORD *)this + 21) || i + v15 >= *((_DWORD *)this + 23) )
          *(_DWORD *)v11 |= 1 << i;
      }
    }
    if ( *((_DWORD *)this + 26) )
      a4 = D3DXTex::CCodec::Convert(this, a4);
    if ( *((_DWORD *)this + 5) )
      a4 = D3DXTex::CCodec::EncodeGamma22(this, a4);
    v22 = *((_DWORD *)this + 20) - *((_DWORD *)this + 60);
    v23 = v22 + *((_DWORD *)this + 34);
    v24 = (v5 - *((_DWORD *)this + 61)) & 3;
    if ( v22 < v23 )
    {
      v25 = v22;
      do
      {
        v26 = _mm_loadu_si128((const __m128i *)a4);
        v27 = v22 & 0xFFFFFFFC;
        v28 = v25 & 3;
        ++v22;
        a4 = (struct D3DXCOLOR *)((char *)a4 + 16);
        ++v25;
        *(__m128i *)(*(_QWORD *)(v11 + 8) + 16 * (v28 | (4 * (v24 | v27)))) = v26;
      }
      while ( v22 < v23 );
    }
    *(_DWORD *)v11 |= 1 << (v5 & 3);
    if ( *(_DWORD *)v11 == 15 )
    {
      v57 = *((_DWORD *)this + 60);
      v29 = v57;
      v30 = (unsigned int)(v4 * *((_DWORD *)this + 33));
      v31 = *(_QWORD *)(v11 + 8);
      v32 = *((_QWORD *)this + 5)
          + v30
          + *((_DWORD *)this + 42) * (v57 >> 2)
          + (unsigned __int64)((v5 >> 2) * *((_DWORD *)this + 32));
      if ( v57 < *((_DWORD *)this + 62) )
      {
        v55[0] = 0;
        v55[1] = 0;
        v55[2] = 0;
        v55[3] = 1;
        v33 = v5 & 0xFFFFFFFC;
        do
        {
          v34 = *((_DWORD *)this + 50) - v29;
          v35 = *((_DWORD *)this + 51) - v33;
          if ( v34 < 4 )
          {
            v36 = 0;
            if ( v35 )
            {
              do
              {
                if ( v36 >= 4 )
                  break;
                v37 = v34;
                v38 = 4 * v36;
                v39 = 4 - v34;
                v40 = &v55[v34];
                do
                {
                  v41 = v37++;
                  v42 = v38 | *v40++;
                  --v39;
                  *(__m128i *)(v31 + 16 * (v38 | v41)) = _mm_loadu_si128((const __m128i *)(v31 + 16 * v42));
                }
                while ( v39 );
                ++v36;
              }
              while ( v36 < v35 );
              v29 = v57;
            }
          }
          if ( v35 < 4 )
          {
            v43 = &v55[v35];
            do
            {
              v44 = 0;
              v45 = (unsigned int)(4 * *v43);
              v46 = 4;
              do
              {
                v47 = v44 | v45;
                v48 = v44++ | (4 * v35);
                --v46;
                *(__m128i *)(v31 + 16 * v48) = _mm_loadu_si128((const __m128i *)(v31 + 16 * v47));
              }
              while ( v46 );
              ++v35;
              ++v43;
            }
            while ( v35 < 4 );
          }
          if ( *((_DWORD *)this + 78) || (v49 = 0, *((_QWORD *)this + 15)) )
            v49 = 1;
          (*((void (__fastcall **)(unsigned __int64, __int64, __int64))this + 23))(v32, v31, v49);
          v29 += 4;
          v31 += 256;
          v32 += *((unsigned int *)this + 42);
          v57 = v29;
        }
        while ( v29 < *((_DWORD *)this + 62) );
      }
      if ( v11 + 16 >= *((_QWORD *)this + 38)
                     + 16 * (unsigned __int64)(unsigned int)(*((_DWORD *)this + 67) * *((_DWORD *)this + 68))
        || *(_DWORD *)(v11 + 16)
        || *(_QWORD *)(v11 + 24) )
      {
        operator delete(*(void **)(v11 + 8));
        --*((_DWORD *)this + 74);
      }
      else
      {
        v50 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v11 + 8) = 0;
        *(_QWORD *)(v11 + 24) = v50;
      }
      *(_QWORD *)(v11 + 8) = 0;
    }
    return;
  }
  v12 = 16LL * (unsigned int)(16 * *((_DWORD *)this + 66));
  if ( !is_mul_ok((unsigned int)(16 * *((_DWORD *)this + 66)), 0x10u) )
    v12 = -1;
  v13 = operator new(v12, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  *(_QWORD *)(v11 + 8) = v13;
  if ( v13 )
  {
    *(_DWORD *)v11 = 0;
    ++*((_DWORD *)this + 74);
    goto LABEL_11;
  }
}
