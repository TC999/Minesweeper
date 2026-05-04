__int64 __fastcall Font::CreateNewText(
        Font *this,
        wchar_t *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct Str *a8)
{
  int v9; // ecx
  RenderManager *v12; // r10
  HDC CompatibleDC; // rax
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  char v19; // dl
  char i; // cl
  char v21; // dl
  char j; // cl
  __int64 v23; // r13
  __int64 *v24; // rcx
  __int64 v25; // rax
  signed int v26; // eax
  signed int v27; // edi
  const unsigned __int16 *HResult; // rax
  int v29; // ecx
  RenderManager *v30; // rbx
  signed int v31; // eax
  signed int v32; // edi
  const unsigned __int16 *v33; // rax
  int v34; // ecx
  RenderManager *v35; // rbx
  unsigned int v36; // r15d
  int v37; // r14d
  LONG v38; // r13d
  __int64 *v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  signed int v43; // eax
  signed int v44; // r13d
  const unsigned __int16 *v45; // rax
  int v46; // ecx
  RenderManager *v47; // rbx
  struct IDirect3DTexture9 *v48; // rcx
  signed int v49; // ecx
  const unsigned __int16 *v50; // rax
  int v51; // ecx
  signed int v52; // ecx
  const unsigned __int16 *v53; // rax
  int v54; // ecx
  unsigned int k; // r13d
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  unsigned int v58; // r8d
  int v59; // r13d
  unsigned int v60; // ecx
  int v61; // esi
  wchar_t *v62; // rax
  int v63; // ecx
  int yBottom[2]; // [rsp+20h] [rbp-148h]
  int yBottoma[2]; // [rsp+20h] [rbp-148h]
  int yBottomb[2]; // [rsp+20h] [rbp-148h]
  int yBottomc[2]; // [rsp+20h] [rbp-148h]
  int yBottomd[2]; // [rsp+20h] [rbp-148h]
  unsigned int *v69; // [rsp+28h] [rbp-140h]
  __int64 v70; // [rsp+30h] [rbp-138h]
  unsigned int v71; // [rsp+38h] [rbp-130h]
  unsigned int v72; // [rsp+50h] [rbp-118h]
  int v73; // [rsp+50h] [rbp-118h]
  unsigned int v74; // [rsp+54h] [rbp-114h]
  int v75; // [rsp+54h] [rbp-114h]
  int v76; // [rsp+58h] [rbp-110h]
  struct IDirect3DTexture9 *v77; // [rsp+60h] [rbp-108h] BYREF
  int v78; // [rsp+68h] [rbp-100h]
  struct IDirect3DTexture9 *v79; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v80; // [rsp+78h] [rbp-F0h] BYREF
  unsigned int v81; // [rsp+80h] [rbp-E8h] BYREF
  struct tagRECT rc; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v83; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-C0h]
  _QWORD Src[6]; // [rsp+B0h] [rbp-B8h] BYREF
  int v87; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-80h]
  _BYTE v89[8]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v90; // [rsp+F8h] [rbp-70h]
  _BYTE v91[104]; // [rsp+100h] [rbp-68h] BYREF
  char v92; // [rsp+170h] [rbp+8h]

  v9 = *((_DWORD *)this + 16);
  v78 = v9;
  if ( a3 > 0x3FFFFFFF )
    return 0xFFFFFFFFLL;
  v12 = g_pRenderManager;
  if ( (*((_DWORD *)g_pRenderManager + 53) & 0x1000) == 0 || !*((_QWORD *)this + 7) )
    return 0xFFFFFFFFLL;
  if ( !*((_QWORD *)this + 6) )
  {
    CompatibleDC = CreateCompatibleDC(0);
    v12 = g_pRenderManager;
    v9 = v78;
    *((_QWORD *)this + 6) = CompatibleDC;
  }
  v92 = 0;
  if ( (a4 & 1) != 0 )
  {
    v92 = 1;
    ++a4;
  }
  if ( !g_bDoubleDPI || g_bScaleToLowDPI )
  {
    v14 = a5;
    v74 = a5;
    if ( *((_BYTE *)this + 68) )
      v78 = v9 / 2;
  }
  else
  {
    a4 *= 2;
    v14 = 2 * a5;
    v74 = 2 * a5;
    if ( !*((_BYTE *)this + 68) )
      v78 = 2 * v9;
  }
  if ( !g_bDoubleDPI || (v15 = 2, g_bScaleToLowDPI) )
    v15 = 1;
  v16 = a4 / v15;
  v72 = a4 / v15;
  if ( !g_bDoubleDPI || (v17 = 2, g_bScaleToLowDPI) )
    v17 = 1;
  v18 = v14 / v17;
  v76 = v14 / v17;
  if ( !*((_BYTE *)g_pRenderCaps + 1) )
  {
    if ( v16 <= v14 / v17 )
    {
      v16 = v14 / v17;
      v72 = v14 / v17;
    }
    else
    {
      v18 = v16;
      v76 = v16;
    }
  }
  if ( (v16 & -v16) != v16 )
  {
    v19 = 0;
    for ( i = 0; i < 32; ++i )
    {
      if ( ((v16 >> i) & 1) != 0 )
        v19 = i;
    }
    v16 = 1 << (v19 + 1);
    v72 = v16;
  }
  if ( (v18 & -v18) != v18 )
  {
    v21 = 0;
    for ( j = 0; j < 32; ++j )
    {
      if ( ((v18 >> j) & 1) != 0 )
        v21 = j;
    }
    v18 = 1 << (v21 + 1);
    v76 = v18;
  }
  if ( g_bDoubleDPI && !g_bScaleToLowDPI )
  {
    v18 *= 2;
    v16 *= 2;
    v72 = v16;
    v76 = v18;
  }
  v23 = *((_QWORD *)v12 + 10);
  v80 = 0;
  v24 = (__int64 *)*((_QWORD *)v12 + 10);
  v25 = *v24;
  v85 = v23;
  v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD, __int64 *, _QWORD))(v25 + 224))(
          v24,
          v16,
          v18,
          21,
          0,
          0,
          0,
          &v80,
          0);
  v27 = v26;
  if ( v26 < 0 )
  {
    HResult = GetHResult(v26);
    yBottom[0] = v29;
    Log(2u, 339, "Font.cpp", L"Cannot create render target %08x (%s)", *(_QWORD *)yBottom, HResult);
    if ( v27 == -2005532292 )
    {
      v30 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x101u);
      *((_BYTE *)v30 + 209) = 1;
    }
    return 0xFFFFFFFFLL;
  }
  v77 = 0;
  v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, struct IDirect3DTexture9 **, _QWORD))(**((_QWORD **)g_pRenderManager + 10) + 184LL))(
          *((_QWORD *)g_pRenderManager + 10),
          v16,
          v18,
          1,
          0,
          21,
          2,
          &v77,
          0);
  v32 = v31;
  if ( v31 < 0 )
  {
    v33 = GetHResult(v31);
    yBottoma[0] = v34;
    Log(2u, 366, "Font.cpp", L"Cannot create texture %08x (%s)", *(_QWORD *)yBottoma, v33);
    if ( v32 == -2005532292 )
    {
      v35 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x101u);
      *((_BYTE *)v35 + 209) = 1;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    return 0xFFFFFFFFLL;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 304LL))(v23, 0, &v84);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 296LL))(v23, 0, v80);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v23 + 344LL))(
    v23,
    0,
    0,
    1,
    0,
    0,
    0);
  if ( a7 )
  {
    v36 = a6 | 0x128;
    if ( a7 > 0 )
    {
      v37 = v78;
      v38 = 0;
      v39 = (__int64 *)((char *)a8 + 16);
      v40 = (unsigned int)a7;
      do
      {
        v41 = *((_QWORD *)this + 7);
        rc.left = 0;
        v42 = *v39;
        rc.top = v38;
        rc.right = a4;
        v38 += v37;
        rc.bottom = v38;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, struct tagRECT *, unsigned int, int))(*(_QWORD *)v41 + 120LL))(
          v41,
          0,
          v42,
          0xFFFFFFFFLL,
          &rc,
          v36,
          -1);
        v39 += 3;
        --v40;
      }
      while ( v40 );
      v18 = v76;
      v16 = v72;
      v14 = v74;
      v23 = v85;
    }
  }
  else
  {
    SetRect(&rc, 0, 0, a4, v14);
    v36 = a6;
    (*(void (__fastcall **)(_QWORD, _QWORD, wchar_t *, __int64, struct tagRECT *, unsigned int, int))(**((_QWORD **)this + 7) + 120LL))(
      *((_QWORD *)this + 7),
      0,
      a2,
      0xFFFFFFFFLL,
      &rc,
      a6,
      -1);
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 296LL))(v23, 0, v84);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
  ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, __int64 *))v77->lpVtbl->GetSurfaceLevel)(v77, 0, &v83);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 256LL))(v23, v80, v83);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
  v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, struct IDirect3DTexture9 **, _QWORD))(**((_QWORD **)g_pRenderManager + 10) + 184LL))(
          *((_QWORD *)g_pRenderManager + 10),
          v16,
          v18,
          1,
          0,
          21,
          1,
          &v79,
          0);
  v44 = v43;
  if ( v43 < 0 )
  {
    v45 = GetHResult(v43);
    LODWORD(v70) = v46;
    LODWORD(v69) = v18;
    yBottomb[0] = v16;
    Log(
      2u,
      447,
      "Font.cpp",
      L"Unable to create texture for font: %d x %d, hr = %x(%s)",
      *(_QWORD *)yBottomb,
      v69,
      v70,
      v45);
    if ( v44 == -2005532292 )
    {
      v47 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x101u);
      *((_BYTE *)v47 + 209) = 1;
    }
    v48 = v77;
    goto LABEL_57;
  }
  v49 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, int *, _QWORD, _DWORD))v77->lpVtbl->LockRect)(
          v77,
          0,
          &v87,
          0,
          0);
  if ( v49 < 0 )
  {
    v50 = GetHResult(v49);
    yBottomc[0] = v51;
    Log(2u, 468, "Font.cpp", L"Unable to lock system texture: %08x (%s)", *(_QWORD *)yBottomc, v50);
LABEL_60:
    ((void (__fastcall *)(struct IDirect3DTexture9 *))v77->lpVtbl->Release)(v77);
    v48 = v79;
LABEL_57:
    ((void (__fastcall *)(struct IDirect3DTexture9 *))v48->lpVtbl->Release)(v48);
    return 0xFFFFFFFFLL;
  }
  v52 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, _BYTE *, _QWORD, _DWORD))v79->lpVtbl->LockRect)(
          v79,
          0,
          v89,
          0,
          0);
  if ( v52 < 0 )
  {
    v53 = GetHResult(v52);
    yBottomd[0] = v54;
    Log(2u, 477, "Font.cpp", L"Unable to lock texture: %08x (%s)", *(_QWORD *)yBottomd, v53);
    ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v77->lpVtbl->UnlockRect)(v77, 0);
    goto LABEL_60;
  }
  for ( k = 0; k < v14; ++k )
    memcpy((void *)(v90 + k * v87), (const void *)(v88 + v87 * (v14 - k - 1)), v87);
  ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v77->lpVtbl->UnlockRect)(v77, 0);
  ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v79->lpVtbl->UnlockRect)(v79, 0);
  ((void (__fastcall *)(struct IDirect3DTexture9 *))v77->lpVtbl->Release)(v77);
  if ( !g_bDoubleDPI || g_bScaleToLowDPI )
    v56 = 1;
  else
    v56 = 2;
  v73 = v16 / v56;
  if ( !g_bDoubleDPI || (v57 = 2, g_bScaleToLowDPI) )
    v57 = 1;
  v75 = v18 / v57;
  if ( !g_bDoubleDPI || (v58 = 2, g_bScaleToLowDPI) )
    v58 = 1;
  v59 = v14 / v58;
  if ( !g_bDoubleDPI || (v60 = 2, g_bScaleToLowDPI) )
    v60 = 1;
  v61 = a4 / v60;
  Src[2] = v79;
  LODWORD(Src[0]) = v36;
  v62 = (wchar_t *)operator new[](saturated_mul(a3 + 1, 2u));
  Src[1] = v62;
  if ( v62 )
    wcscpy_s(v62, a3 + 1, a2);
  HIDWORD(Src[0]) = GetTickCount();
  LODWORD(Src[3]) = ResourceTextureD3DDyn::Create(v79, v73, v75);
  v63 = v61;
  if ( v92 == 1 )
    v63 = v61 - 1;
  LODWORD(Src[5]) = v59;
  HIDWORD(Src[4]) = v63;
  v71 = *((_DWORD *)this + 2);
  *((float *)&Src[3] + 1) = (float)v63 / (float)v73;
  *(float *)&Src[4] = (float)v59 / (float)v75;
  Font::BinSearchFont(this, (char *)a2, v61, v59, v36, &v81, 0, v71);
  memcpy(v91, Src, 0x30u);
  Array<Font::CachedEntry>::Insert((char *)this + 8, v81, v91);
  return v81;
}
