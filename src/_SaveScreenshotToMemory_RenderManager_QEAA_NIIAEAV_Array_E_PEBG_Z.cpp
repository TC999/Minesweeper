char __fastcall RenderManager::SaveScreenshotToMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RenderManager *v4; // r13
  char v6; // bl
  signed int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // r14d
  signed int v11; // eax
  signed int v12; // ebp
  const unsigned __int16 *v13; // rax
  int v14; // ecx
  unsigned int i; // r15d
  signed int v16; // eax
  const unsigned __int16 *v17; // rax
  int v18; // ecx
  const unsigned __int16 *v19; // rax
  signed int v20; // ecx
  const unsigned __int16 *v21; // rax
  int v22; // ecx
  signed int v23; // ecx
  const unsigned __int16 *v24; // rax
  unsigned int v25; // ecx
  void *v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  size_t v29; // rsi
  void *v30; // rcx
  void *v31; // rbp
  __int64 v32; // rcx
  void *v33; // rdi
  const void *v34; // rax
  const unsigned __int16 *HResult; // rax
  int v37; // ecx
  int yBottom[2]; // [rsp+20h] [rbp-88h]
  int yBottoma[2]; // [rsp+20h] [rbp-88h]
  int yBottomb[2]; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h] BYREF
  __int64 v47; // [rsp+60h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-40h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+8h] BYREF

  v49 = a1;
  v4 = g_pRenderManager;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)g_pRenderManager + 10)
                                                                            + 144LL))(
         *((_QWORD *)g_pRenderManager + 10),
         0,
         0,
         0,
         &v45);
  if ( v7 < 0 )
  {
    HResult = GetHResult(v7);
    yBottom[0] = v37;
    Log(
      2u,
      1099,
      "RenderManager.cpp",
      L"Couldn't get the backbuffer for SaveScreenshotToMemory: %x(%s)",
      *(_QWORD *)yBottom,
      HResult);
    return 0;
  }
  v8 = *((_QWORD *)v4 + 8);
  v9 = *((_QWORD *)v4 + 10);
  v49 = 0;
  v10 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int, _DWORD, __int64 *, _QWORD))(*(_QWORD *)v9 + 184LL))(
          v9,
          256,
          192,
          1,
          1,
          23 - (unsigned int)(*(_DWORD *)(v8 + 16) != 16),
          0,
          &v49,
          0);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = GetHResult(v11);
    LODWORD(v43) = v14;
    LODWORD(v41) = 192;
    yBottoma[0] = 256;
    Log(
      2u,
      988,
      "RenderManager.cpp",
      L"CreateTexture failed for screenshot backbuffer for resolution(%dx%d): %x (%s)",
      *(_QWORD *)yBottoma,
      v41,
      v43,
      v13);
    if ( v12 == -2005532292 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      RenderManager::SetEngineState(v4, 257);
      return 0;
    }
    Log(2u, 1000, "RenderManager.cpp", L"Attempting CreateTexture with pow2 size");
    for ( i = 1; i < 0x100; i *= 2 )
      ;
    do
      v10 *= 2;
    while ( v10 < 0xC0 );
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v4 + 10) + 184LL))(
            *((_QWORD *)v4 + 10),
            i,
            v10);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = GetHResult(v16);
      LODWORD(v44) = v18;
      LODWORD(v42) = v10;
      yBottoma[0] = i;
      Log(
        2u,
        1025,
        "RenderManager.cpp",
        L"CreateTexture failed for screenshot backbuffer for resolution(%dx%d): %x (%s)",
        *(_QWORD *)yBottoma,
        v42,
        v44,
        v17);
      if ( v12 == -2005532292 )
        RenderManager::SetEngineState(v4, 257);
      goto LABEL_11;
    }
    Log(2u, 1036, "RenderManager.cpp", L"CreateTexture Succeeded with pow2 size");
  }
  v46 = 0;
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v49 + 144LL))(v49, 0, &v46);
  if ( v12 < 0 )
  {
    v19 = GetHResult(v12);
    yBottoma[0] = v12;
    Log(
      2u,
      1044,
      "RenderManager.cpp",
      L"GetSurfaceLevel failed for screenshot backbuffer: %x (%s)",
      *(_QWORD *)yBottoma,
      v19);
LABEL_15:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
LABEL_11:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    return 0;
  }
  SetRect(&rc, 0, 0, *(_DWORD *)(*((_QWORD *)v4 + 8) + 8LL), *(_DWORD *)(*((_QWORD *)v4 + 8) + 12LL));
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagRECT *, __int64, _QWORD, int))(**((_QWORD **)v4 + 10)
                                                                                           + 272LL))(
          *((_QWORD *)v4 + 10),
          v45,
          &rc,
          v46,
          0,
          2);
  if ( v20 < 0 )
  {
    v21 = GetHResult(v20);
    yBottomb[0] = v22;
    Log(
      2u,
      1058,
      "RenderManager.cpp",
      L"Couldn't StretchRect in SaveScreenshotToMemory: %x(%s)",
      *(_QWORD *)yBottomb,
      v21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    goto LABEL_15;
  }
  v47 = 0;
  v23 = SaveSurfaceToFile(&v47, 3, v46);
  if ( v23 >= 0 )
  {
    v26 = *(void **)(a4 + 16);
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 4) = 0;
    free(v26);
    v27 = v47;
    *(_QWORD *)(a4 + 16) = 0;
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
    v29 = v28;
    if ( v28 )
    {
      if ( v28 > *(_DWORD *)(a4 + 4) )
      {
        v30 = *(void **)(a4 + 16);
        *(_DWORD *)(a4 + 4) = v28;
        v31 = realloc(v30, v28);
        if ( !v31 )
          CheckAllocation(0);
        *(_QWORD *)(a4 + 16) = v31;
      }
      v32 = v47;
      *(_DWORD *)a4 = v29;
      v33 = *(void **)(a4 + 16);
      v34 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32);
      memcpy(v33, v34, v29);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    v6 = 1;
  }
  else
  {
    v24 = GetHResult(v23);
    Log(
      2u,
      1075,
      "RenderManager.cpp",
      L"D3DXSaveSurfaceToFileInMemory failed in SaveScreenshotToMemory: %x(%s)",
      v25,
      v24);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  return v6;
}
