__int64 __fastcall D3DXTex::CLockSurface::Lock(
        struct IDirect3DSurface9 **this,
        struct D3DX_BLT *a2,
        struct IDirect3DSurface9 *a3,
        const struct tagPALETTEENTRY *a4,
        const struct tagRECT *a5,
        unsigned int a6,
        unsigned int a7)
{
  __m128i v9; // xmm6
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  BOOL v12; // esi
  unsigned int v13; // r8d
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // r8d
  _QWORD *v17; // rbx
  _QWORD *v18; // rsi
  struct IDirect3DSurface9 *v19; // r8
  struct IDirect3DSurface9 *v20; // rcx
  struct IDirect3DSurface9 *v21; // rcx
  __int64 v22; // rcx
  struct IDirect3DSurface9 *v23; // r8
  struct IDirect3DSurface9 *v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  unsigned __int32 v28; // eax
  unsigned int v29; // r8d
  int v30; // ebx
  __int64 v31; // rax
  unsigned int v32; // [rsp+50h] [rbp-B8h]
  unsigned int v33; // [rsp+50h] [rbp-B8h]
  unsigned int v34; // [rsp+54h] [rbp-B4h]
  int v35; // [rsp+54h] [rbp-B4h]
  __m128i v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+70h] [rbp-98h]
  D3DXTex *v38; // [rsp+78h] [rbp-90h] BYREF
  BOOL v39; // [rsp+80h] [rbp-88h]
  unsigned int v40; // [rsp+84h] [rbp-84h]
  BOOL v41; // [rsp+88h] [rbp-80h]
  __m128i v42; // [rsp+90h] [rbp-78h] BYREF
  int v43; // [rsp+A0h] [rbp-68h]
  unsigned int v44; // [rsp+A8h] [rbp-60h] BYREF
  signed __int32 v45[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h] BYREF
  int v48; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-30h]

  D3DXTex::CLockSurface::Unlock((D3DXTex::CLockSurface *)this);
  ((void (__fastcall *)(struct IDirect3DSurface9 *, unsigned int *))a3->lpVtbl->GetDesc)(a3, &v44);
  if ( a5 )
  {
    v9 = _mm_loadu_si128((const __m128i *)a5);
    v36 = v9;
    if ( v9.m128i_i32[0] < 0 )
      return 2289436780LL;
    v10 = v46;
    v34 = v46;
    if ( v9.m128i_i32[2] > (unsigned int)v46 )
      return 2289436780LL;
    if ( v9.m128i_i32[0] > v9.m128i_i32[2] )
      return 2289436780LL;
    if ( v9.m128i_i32[1] < 0 )
      return 2289436780LL;
    v11 = HIDWORD(v46);
    v40 = HIDWORD(v46);
    if ( v9.m128i_i32[3] > HIDWORD(v46) || v9.m128i_i32[1] > v9.m128i_i32[3] )
      return 2289436780LL;
    v12 = v9.m128i_i32[0] || v9.m128i_i32[2] != (_DWORD)v46 || v9.m128i_i32[1] || v9.m128i_i32[3] != HIDWORD(v46);
    v13 = a7;
    v41 = v12;
    v39 = (a7 & 1) == 0 && !v12;
  }
  else
  {
    v10 = v46;
    v11 = HIDWORD(v46);
    v36.m128i_i64[0] = 0;
    v13 = a7;
    v12 = 0;
    v36.m128i_i64[1] = v46;
    v34 = v46;
    v9 = v36;
    v40 = HIDWORD(v46);
    v41 = 0;
    v39 = (a7 & 1) == 0;
  }
  v15 = v13 & 0x10000;
  v43 = v13 & 0x10000;
  if ( (v13 & 0x10000) != 0 )
  {
    v16 = 0;
    v32 = 0;
    if ( (v44 == 827611204 || v44 == 844388420 || v44 == 861165636 || v44 == 877942852 || v44 == 894720068)
      && (((unsigned __int8)v10 | (unsigned __int8)v11) & 3) != 0 )
    {
      do
        ++v16;
      while ( (((v10 | v11) << v16) & 3) != 0 );
      v32 = v16;
    }
    v17 = this + 4;
    ((void (__fastcall *)(struct IDirect3DSurface9 *, struct IDirect3DSurface9 **))a3->lpVtbl->GetDevice)(a3, this + 4);
    v18 = this + 3;
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, unsigned int, unsigned int, char *, _QWORD))(*(_QWORD *)*v17 + 184LL))(
            *v17,
            v10 << v32,
            v40 << v32,
            v32 + 1,
            0,
            v44,
            3 - (unsigned int)(v45[1] != 3),
            (char *)this + 24,
            0);
    if ( v37 < 0
      || (v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v18 + 144LL))(
                  *v18,
                  v32,
                  (char *)this + 16),
          v37 < 0) )
    {
      v20 = this[2];
      if ( v20 )
      {
LABEL_55:
        ((void (__fastcall *)(struct IDirect3DSurface9 *))v20->lpVtbl->Release)(v20);
        this[2] = 0;
      }
LABEL_56:
      if ( *v18 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
        *v18 = 0;
      }
      if ( *v17 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
        *v17 = 0;
      }
      return (unsigned int)v37;
    }
    if ( !v39 )
    {
      v38 = 0;
      D3DXDebugMuteInt(1u);
      v37 = D3DXTex::InternalCopy((D3DXTex *)a3, this[2], v19);
      D3DXDebugMuteInt(0);
      if ( v37 < 0 )
      {
        if ( v32 )
        {
          v20 = this[2];
          if ( v20 )
            goto LABEL_55;
          goto LABEL_56;
        }
        v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, D3DXTex **, _QWORD))(*(_QWORD *)*v17 + 224LL))(
                *v17,
                v34,
                v40,
                v44,
                0,
                0,
                1,
                &v38,
                0);
        if ( v35 < 0 )
        {
LABEL_37:
          v21 = this[2];
          if ( v21 )
          {
            ((void (__fastcall *)(struct IDirect3DSurface9 *))v21->lpVtbl->Release)(v21);
            this[2] = 0;
          }
          if ( *v18 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
            *v18 = 0;
          }
          v22 = *v17;
          if ( !*v17 )
            return (unsigned int)v35;
          goto LABEL_42;
        }
        v35 = (*(__int64 (__fastcall **)(_QWORD, struct IDirect3DSurface9 *, _QWORD, D3DXTex *, _QWORD, _DWORD))(*(_QWORD *)*v17 + 272LL))(
                *v17,
                a3,
                0,
                v38,
                0,
                0);
        if ( v35 < 0 )
        {
          (*(void (__fastcall **)(D3DXTex *))(*(_QWORD *)v38 + 16LL))(v38);
          goto LABEL_37;
        }
        v35 = D3DXTex::InternalCopy(v38, this[2], v23);
        (*(void (__fastcall **)(D3DXTex *))(*(_QWORD *)v38 + 16LL))(v38);
        if ( v35 < 0 )
        {
          v24 = this[2];
          if ( v24 )
          {
            ((void (__fastcall *)(struct IDirect3DSurface9 *))v24->lpVtbl->Release)(v24);
            this[2] = 0;
          }
          if ( *v18 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
            *v18 = 0;
          }
          v22 = *v17;
          if ( !*v17 )
            return (unsigned int)v35;
LABEL_42:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          *v17 = 0;
          return (unsigned int)v35;
        }
      }
    }
    v11 = HIDWORD(v46);
    v12 = v41;
    v10 = v46;
    v13 = a7;
    v38 = (D3DXTex *)this[2];
    v15 = v43;
  }
  else
  {
    v38 = (D3DXTex *)a3;
  }
  v25 = 16 * (v13 & 1 | 0x80);
  v33 = v25;
  if ( v39 && !v15 && _bittest(v45, 9u) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v12 = 0;
      v33 = v25 | 0x2000;
      goto LABEL_98;
    }
    D3DXDebugMuteInt(1u);
    if ( ((int (__fastcall *)(struct IDirect3DSurface9 *, GUID *, __int64 *))a3->lpVtbl->GetContainer)(
           a3,
           &IID_IDirect3DTexture9,
           &v47) >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v47 + 104LL))(v47) == 1 )
      {
        v12 = 0;
        v33 |= 0x2000u;
      }
      if ( v47 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
        v47 = 0;
      }
    }
    D3DXDebugMuteInt(0);
    v11 = HIDWORD(v46);
    v10 = v46;
    v25 = v33;
  }
  if ( v12 )
  {
    if ( v44 != 827611204 && v44 != 844388420 )
    {
      if ( v44 == 844715353 )
      {
LABEL_84:
        v26 = v36.m128i_u32[1];
        v27 = v36.m128i_u32[3];
        v28 = v36.m128i_i32[0] & 0xFFFFFFFE;
        v29 = (v36.m128i_i32[2] + 1) & 0xFFFFFFFE;
        if ( v29 > v10 )
          v29 = v10;
LABEL_91:
        v42.m128i_i64[1] = __PAIR64__(v27, v29);
        v42.m128i_i64[0] = __PAIR64__(v26, v28);
        v12 = v28 || v29 != v10 || v26 || v27 != v11;
        goto LABEL_97;
      }
      if ( v44 != 861165636 && v44 != 877942852 && v44 != 894720068 )
      {
        if ( v44 != 1111970375 && v44 != 1195525970 && v44 != 1498831189 )
        {
          v42 = v9;
          goto LABEL_97;
        }
        goto LABEL_84;
      }
    }
    v29 = (v36.m128i_i32[2] + 3) & 0xFFFFFFFC;
    v27 = (v36.m128i_i32[3] + 3) & 0xFFFFFFFC;
    v28 = v36.m128i_i32[0] & 0xFFFFFFFC;
    v26 = v36.m128i_i32[1] & 0xFFFFFFFC;
    if ( v29 > v10 )
      v29 = v10;
    if ( v27 > v11 )
      v27 = v11;
    goto LABEL_91;
  }
LABEL_97:
  if ( v43 )
  {
    result = (*(__int64 (__fastcall **)(D3DXTex *, int *, unsigned __int64, _QWORD))(*(_QWORD *)v38 + 104LL))(
               v38,
               &v48,
               (unsigned __int64)&v42 & -(__int64)v12,
               v25);
    if ( (int)result < 0 )
      return result;
    goto LABEL_101;
  }
LABEL_98:
  D3DXDebugMuteInt(1u);
  v30 = (*(__int64 (__fastcall **)(D3DXTex *, int *, unsigned __int64, _QWORD))(*(_QWORD *)v38 + 104LL))(
          v38,
          &v48,
          (unsigned __int64)&v42 & -(__int64)v12,
          v33);
  D3DXDebugMuteInt(0);
  if ( v30 < 0 )
    return D3DXTex::CLockSurface::Lock((D3DXTex::CLockSurface *)this, a2, a3, a4, a5, a6, a7 | 0x10000);
LABEL_101:
  if ( v12 )
  {
    v36.m128i_i32[0] -= v42.m128i_i32[0];
    v36.m128i_i32[2] -= v42.m128i_i32[0];
    v36.m128i_i32[1] -= v42.m128i_i32[1];
    v36.m128i_i32[3] -= v42.m128i_i32[1];
    v9 = v36;
  }
  v31 = v49;
  *((_DWORD *)a2 + 4) = 0;
  *(__m128i *)((char *)a2 + 44) = v9;
  *(_QWORD *)a2 = v31;
  LODWORD(v31) = v44;
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 2) = v31;
  LODWORD(v31) = v48;
  *((_DWORD *)a2 + 6) = 0;
  *((_DWORD *)a2 + 3) = v31;
  LODWORD(v31) = v46;
  *((_DWORD *)a2 + 9) = 0;
  *((_DWORD *)a2 + 7) = v31;
  LODWORD(v31) = HIDWORD(v46);
  *((_DWORD *)a2 + 15) = 0;
  *((_DWORD *)a2 + 8) = v31;
  *((_DWORD *)a2 + 18) = 0;
  *((_DWORD *)a2 + 20) = a6;
  *((_DWORD *)a2 + 19) = 0;
  *((_QWORD *)a2 + 11) = a4;
  *((_DWORD *)a2 + 10) = 1;
  *((_DWORD *)a2 + 16) = 1;
  *((_DWORD *)a2 + 17) = 1;
  *(_DWORD *)this = a7;
  this[1] = a3;
  ((void (__fastcall *)(struct IDirect3DSurface9 *))a3->lpVtbl->AddRef)(a3);
  return 0;
}
