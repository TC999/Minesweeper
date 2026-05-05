bool __fastcall ResourceTextureD3D::CreateTextureFromSource(
        const unsigned __int16 *a1,
        struct IDirect3DTexture9 **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v6; // rdi
  bool result; // al
  __int64 v8; // rbx
  __int64 v9; // rcx
  int ImageWidth; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int ImageHeight; // eax
  unsigned int v14; // esi
  char *v15; // r14
  int v16; // eax
  unsigned int i; // eax
  unsigned int j; // eax
  signed int v19; // eax
  signed int v20; // ebp
  const unsigned __int16 *HResult; // rax
  int v22; // ecx
  int v23; // eax
  RenderManager *v24; // rbx
  RenderManager *v25; // rbx
  const unsigned __int16 *v26; // rax
  unsigned int k; // ebp
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-A8h]
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  struct IDirect3DTexture9 *v31; // [rsp+58h] [rbp-70h]
  _DWORD v32[4]; // [rsp+60h] [rbp-68h] BYREF
  int v33; // [rsp+70h] [rbp-58h] BYREF
  __int64 v34; // [rsp+78h] [rbp-50h]
  unsigned int v35; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+84h] [rbp-44h]
  int v37; // [rsp+88h] [rbp-40h]
  int v38; // [rsp+8Ch] [rbp-3Ch]
  char *v39; // [rsp+90h] [rbp-38h]

  v6 = operator new(0x20u);
  if ( v6 )
  {
    v6[6] = 1;
    *((_QWORD *)v6 + 1) = 0;
    v6[4] = 0;
    v6[5] = 0;
    *((_BYTE *)v6 + 28) = 1;
    *(_QWORD *)v6 = &FileMgrStream::`vftable';
  }
  else
  {
    v6 = 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, const unsigned __int16 *, _QWORD))(*(_QWORD *)v6 + 112LL))(
          v6,
          a1,
          0) )
  {
    Log(4u, 1181, "ResourceTexture.cpp", L"Source texture file does not exist: %s", a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0;
  }
  v8 = GdipAlloc(24);
  if ( v8 )
  {
    *(_QWORD *)v8 = &Gdiplus::Image::`vftable';
    v30 = 0;
    *(_DWORD *)(v8 + 16) = GdipCreateBitmapFromStream(v6, &v30);
    *(_QWORD *)(v8 + 8) = v30;
  }
  else
  {
    v8 = 0;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  v9 = *(_QWORD *)(v8 + 8);
  LODWORD(v30) = 0;
  ImageWidth = GdipGetImageWidth(v9, &v30);
  if ( ImageWidth )
    *(_DWORD *)(v8 + 16) = ImageWidth;
  v11 = v30;
  v12 = *(_QWORD *)(v8 + 8);
  LODWORD(v30) = 0;
  ImageHeight = GdipGetImageHeight(v12, &v30);
  if ( ImageHeight )
    *(_DWORD *)(v8 + 16) = ImageHeight;
  v14 = v30;
  v39 = (char *)operator new[](4 * v11 * (unsigned int)v30);
  v36 = v14;
  v15 = v39;
  v35 = v11;
  v38 = 2498570;
  v37 = 4 * v11;
  v32[0] = 0;
  v32[1] = 0;
  v32[2] = v11;
  v32[3] = v14;
  v16 = GdipBitmapLockBits(*(_QWORD *)(v8 + 8), v32, 5);
  if ( v16 )
    *(_DWORD *)(v8 + 16) = v16;
  if ( (v11 & -v11) != v11 )
  {
    for ( i = 1; i < v11; i *= 2 )
      ;
    v11 = i;
  }
  if ( (v14 & -v14) != v14 )
  {
    for ( j = 1; j < v14; j *= 2 )
      ;
    v14 = j;
  }
  Log(4u, 1222, "ResourceTexture.cpp", L"CreateTextureFromSource() for %s", a1);
  v31 = 0;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pRenderManager + 10) + 184LL))(
          *((_QWORD *)g_pRenderManager + 10),
          v11,
          v14);
  v20 = v19;
  if ( v19 < 0 )
  {
    HResult = GetHResult(v19);
    LODWORD(v29) = v22;
    Log(4u, 1240, "ResourceTexture.cpp", L"Error in CreateTexture: %x, %s, file: %s", v29, HResult, a1);
    v23 = GdipBitmapUnlockBits(*(_QWORD *)(v8 + 8), &v35);
    if ( v23 )
      *(_DWORD *)(v8 + 16) = v23;
    operator delete(v15);
    (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1);
    if ( v20 == -2005532292 )
    {
      v24 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x101u);
      *((_BYTE *)v24 + 209) = 1;
    }
    if ( v20 == -2005530520 )
    {
      v25 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x104u);
      *((_BYTE *)v25 + 209) = 1;
    }
    return 0;
  }
  v26 = GetHResult(v19);
  LODWORD(v29) = v20;
  Log(4u, 1261, "ResourceTexture.cpp", L"CreateTexture: %x", v29, v26);
  v33 = 0;
  v34 = 0;
  ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, int *, _QWORD, _DWORD))v31->lpVtbl->LockRect)(
    v31,
    0,
    &v33,
    0,
    0);
  for ( k = 0; k < v36; ++k )
    memcpy((void *)(v34 + v33 * k), &v15[v37 * k], v37);
  ((void (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v31->lpVtbl->UnlockRect)(v31, 0);
  v28 = GdipBitmapUnlockBits(*(_QWORD *)(v8 + 8), &v35);
  if ( v28 )
    *(_DWORD *)(v8 + 16) = v28;
  operator delete(v15);
  (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1);
  *a2 = v31;
  result = 1;
  *a3 = v11;
  *a4 = v14;
  return result;
}
