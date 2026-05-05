char __fastcall TextRenderer::CreateDXFont(
        TextRenderer *this,
        unsigned int *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rbx
  unsigned int *v12; // rbp
  unsigned int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // rax
  _BYTE *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v20; // edi
  HFONT FontW; // rbp
  signed int v22; // ebx
  const unsigned __int16 *HResult; // rax
  int v24; // ebx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  HDC v27; // rax
  HFONT *v28; // rax
  HFONT *v29; // rbx
  __int64 v30; // rcx
  const unsigned __int16 *v31; // rdi
  bool v32; // zf
  HFONT v33; // rax
  __int64 v34; // rcx
  const unsigned __int16 *v35; // rdi
  __int64 v36; // rcx
  const unsigned __int16 *v37; // rdi
  __int64 v38; // rcx
  const unsigned __int16 *v39; // rdi
  unsigned __int64 v40; // rcx
  size_t v41; // rax
  __int64 v42; // rcx
  const unsigned __int16 *v43; // rdi
  __int64 v44; // rcx
  const unsigned __int16 *v45; // rdi
  __int64 cWeight; // [rsp+20h] [rbp-D8h]
  HDC hDC; // [rsp+78h] [rbp-80h] BYREF
  __int64 i; // [rsp+80h] [rbp-78h]
  _DWORD v49[18]; // [rsp+88h] [rbp-70h] BYREF
  char v50; // [rsp+108h] [rbp+10h]

  v7 = 0;
  if ( !a2 || !a4 || a3 < 4 )
    return 0;
  v12 = (unsigned int *)((char *)this + 8);
  v13 = 0;
  v14 = -1;
  for ( i = (__int64)this + 8; v13 < *v12; v7 += 8 )
  {
    v15 = *(_QWORD *)(v7 + *((_QWORD *)this + 3));
    if ( *(_QWORD *)(v15 + 8) )
    {
      if ( *(_DWORD *)(v15 + 24) == a3 && !_wcsicmp(*(const wchar_t **)(v15 + 16), a4) )
      {
        v16 = *(_BYTE **)(v7 + *((_QWORD *)this + 3));
        if ( v16[28] == a5 && v16[29] == a6 && v16[30] == a7 )
        {
          v18 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v13);
          ++*(_DWORD *)(v18 + 32);
          *a2 = v13;
          return 1;
        }
      }
    }
    else if ( v14 == -1 )
    {
      v14 = v13;
    }
    ++v13;
  }
  hDC = GetDC(g_hWnd);
  if ( !g_bDoubleDPI || g_bScaleToLowDPI )
  {
    v17 = MulDiv(a3, 96, 72);
    v50 = 0;
  }
  else
  {
    v17 = MulDiv(a3, 192, 72);
    v50 = 1;
  }
  v20 = -v17;
  FontW = CreateFontW(-v17, 0, 0, 0, a5 ? 700 : 400, a6, a7, 0, 1u, 0, 0, 5u, 0, a4);
  ReleaseDC(g_hWnd, hDC);
  if ( !FontW )
    return 0;
  hDC = 0;
  v22 = D3DXCreateFontW(
          *((struct IDirect3DDevice9 **)g_pRenderManager + 10),
          1,
          a6,
          1,
          0,
          5,
          0,
          (__int64)a4,
          (__int64)&hDC);
  if ( v22 < 0 )
  {
    DeleteObject(FontW);
    HResult = GetHResult(v22);
    LODWORD(cWeight) = v22;
    Log(2u, 249, "TextRenderer.cpp", L"Couldn't create d3dx font for rendering: %08x (%s)", cWeight, HResult);
    return 0;
  }
  v24 = abs32(v20);
  if ( (*(unsigned int (__fastcall **)(HDC, _DWORD *))(*(_QWORD *)hDC + 56LL))(hDC, v49) == 1 )
    v24 = v49[0] + v49[4];
  v25 = operator new(0x48u);
  v26 = v25;
  if ( v25 )
  {
    *v25 = &Font::`vftable';
    v27 = hDC;
    *((_DWORD *)v26 + 2) = 0;
    *((_DWORD *)v26 + 3) = 0;
    *((_DWORD *)v26 + 4) = 16;
    v26[3] = 0;
    v26[7] = v27;
    v26[5] = FontW;
    v26[6] = 0;
    *((_DWORD *)v26 + 8) = 0;
    *((_DWORD *)v26 + 16) = v24;
    *((_BYTE *)v26 + 68) = v50;
  }
  else
  {
    v26 = 0;
  }
  CheckAllocation(v26);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v26 + 8LL))(v26) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v26)(v26, 1);
    DeleteObject(FontW);
    return 0;
  }
  if ( v14 == -1 )
  {
    v28 = (HFONT *)operator new(0x28u);
    v29 = v28;
    if ( v28 )
    {
      *((_DWORD *)v28 + 8) = 1;
      *v28 = 0;
      v28[1] = 0;
      v28[2] = 0;
    }
    else
    {
      v29 = 0;
    }
    CheckAllocation(v29);
    *v29 = FontW;
    *((_BYTE *)v29 + 28) = a5;
    *((_BYTE *)v29 + 29) = a6;
    v29[1] = (HFONT)v26;
    *((_BYTE *)v29 + 30) = a7;
    *((_DWORD *)v29 + 6) = a3;
    v30 = -1;
    v31 = a4;
    do
    {
      if ( !v30 )
        break;
      v32 = *v31++ == 0;
      --v30;
    }
    while ( !v32 );
    v33 = (HFONT)operator new[](saturated_mul(~v30, 2u));
    v29[2] = v33;
    CheckAllocation(v33);
    if ( v29[2] )
    {
      v34 = -1;
      v35 = a4;
      do
      {
        if ( !v34 )
          break;
        v32 = *v35++ == 0;
        --v34;
      }
      while ( !v32 );
      wcscpy_s((wchar_t *)v29[2], ~v34, a4);
      v36 = -1;
      v37 = a4;
      do
      {
        if ( !v36 )
          break;
        v32 = *v37++ == 0;
        --v36;
      }
      while ( !v32 );
      *((_WORD *)v29[2] + ~v36 - 1) = 0;
    }
    *a2 = Array<IEventListener *>::Add(i, (__int64)v29);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 28LL) = a5;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 29LL) = a6;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 30LL) = a7;
    **(_QWORD **)(*((_QWORD *)this + 3) + 8LL * v14) = FontW;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 8LL) = v26;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 32LL) = 1;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 24LL) = a3;
    operator delete(*(void **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 16LL));
    v38 = -1;
    v39 = a4;
    do
    {
      if ( !v38 )
        break;
      v32 = *v39++ == 0;
      --v38;
    }
    while ( !v32 );
    v40 = ~v38;
    v41 = 2 * v40;
    if ( !is_mul_ok(v40, 2u) )
      v41 = -1;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 16LL) = operator new[](v41);
    CheckAllocation(*(const void **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 16LL));
    v42 = -1;
    v43 = a4;
    do
    {
      if ( !v42 )
        break;
      v32 = *v43++ == 0;
      --v42;
    }
    while ( !v32 );
    wcscpy_s(*(wchar_t **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 16LL), ~v42, a4);
    v44 = -1;
    v45 = a4;
    do
    {
      if ( !v44 )
        break;
      v32 = *v45++ == 0;
      --v44;
    }
    while ( !v32 );
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v14) + 16LL) + 2 * ~v44 - 2) = 0;
    *a2 = v14;
  }
  return 1;
}
