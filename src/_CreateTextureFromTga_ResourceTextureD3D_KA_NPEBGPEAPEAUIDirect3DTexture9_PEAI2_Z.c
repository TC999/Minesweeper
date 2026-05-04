bool __fastcall ResourceTextureD3D::CreateTextureFromTga(
        const unsigned __int16 *a1,
        struct IDirect3DTexture9 **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  _DWORD *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r12d
  unsigned int v10; // ebp
  signed int v11; // eax
  signed int v12; // ebx
  const unsigned __int16 *HResult; // rax
  int v14; // ecx
  RenderManager *v15; // rbx
  signed int v16; // ecx
  const unsigned __int16 *v17; // rax
  int v18; // ecx
  const unsigned __int16 *v19; // r9
  int v20; // edx
  bool v21; // r13
  signed int v22; // ecx
  bool result; // al
  unsigned int *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-C8h]
  __int64 v26; // [rsp+20h] [rbp-C8h]
  int v27; // [rsp+50h] [rbp-98h] BYREF
  struct IDirect3DTexture9 *v28; // [rsp+58h] [rbp-90h] BYREF
  unsigned int *v29; // [rsp+60h] [rbp-88h]
  int v30; // [rsp+68h] [rbp-80h] BYREF
  __int64 v31; // [rsp+70h] [rbp-78h]
  _BYTE v32[12]; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int16 v33; // [rsp+84h] [rbp-64h]
  unsigned __int16 v34; // [rsp+86h] [rbp-62h]
  char v35; // [rsp+88h] [rbp-60h]

  v29 = a4;
  v7 = operator new(0x20u);
  if ( v7 )
  {
    v7[6] = 1;
    *((_QWORD *)v7 + 1) = 0;
    v7[4] = 0;
    v7[5] = 0;
    *((_BYTE *)v7 + 28) = 1;
    *(_QWORD *)v7 = &FileMgrStream::`vftable';
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v8) = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, const unsigned __int16 *, __int64))(*(_QWORD *)v7 + 112LL))(
          v7,
          a1,
          v8) )
  {
    Log(4u, 1017, "ResourceTexture.cpp", L"Couldn't load TGA file %s", a1);
LABEL_29:
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    return 0;
  }
  v27 = 0;
  (*(void (__fastcall **)(_DWORD *, _BYTE *, __int64, int *))(*(_QWORD *)v7 + 24LL))(v7, v32, 18, &v27);
  if ( v27 != 18 )
  {
    Log(4u, 1044, "ResourceTexture.cpp", L"Error reading tga header from %s", a1);
    goto LABEL_29;
  }
  v9 = v33;
  v10 = v34;
  if ( (v33 & -v33) != v33 || (v34 & -v34) != v34 )
  {
    Log(4u, 1057, "ResourceTexture.cpp", L"TGA sources must be pow2 (%s)", a1);
    goto LABEL_29;
  }
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, v32[0] + 18LL, 0, 0);
  if ( v9 > 0x1000 || v10 > 0x1000 )
  {
    Log(4u, 1071, "ResourceTexture.cpp", L"Source TGA too big, %s", a1);
    goto LABEL_29;
  }
  if ( v35 != 32 )
  {
    Log(4u, 1079, "ResourceTexture.cpp", L"TGA was not 32 bit: %s", a1);
    goto LABEL_29;
  }
  Log(4u, 1084, "ResourceTexture.cpp", L"CreateTextureFromTga() for %s", a1);
  v28 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, struct IDirect3DTexture9 **, _QWORD))(**((_QWORD **)g_pRenderManager + 10) + 184LL))(
          *((_QWORD *)g_pRenderManager + 10),
          v9,
          v10,
          1,
          0,
          21,
          1,
          &v28,
          0);
  v12 = v11;
  if ( v11 < 0 )
  {
    HResult = GetHResult(v11);
    LODWORD(v25) = v14;
    Log(4u, 1102, "ResourceTexture.cpp", L"Error in CreateTexture: %x, %s, file: %s", v25, HResult, a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v12 == -2005532292 )
      Engine_ResourceLoadFail();
    if ( v12 == -2005530520 )
    {
      v15 = g_pRenderManager;
      RenderManager::SetEngineState((__int64)g_pRenderManager, 0x104u);
      *((_BYTE *)v15 + 209) = 1;
    }
    return 0;
  }
  v30 = 0;
  v31 = 0;
  v16 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, int *, _QWORD, _DWORD))v28->lpVtbl->LockRect)(
          v28,
          0,
          &v30,
          0,
          0);
  if ( v16 < 0 )
  {
    v17 = GetHResult(v16);
    v19 = L"Couldn't lock texture for upload: %x, %s, file: %s";
    v20 = 1126;
LABEL_21:
    LODWORD(v26) = v18;
    Log(4u, v20, "ResourceTexture.cpp", v19, v26, v17, a1);
    goto LABEL_29;
  }
  v27 = 0;
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, int *))(*(_QWORD *)v7 + 24LL))(v7, v31, 4 * v9 * v10, &v27);
  v21 = v27 != 4 * v9 * v10;
  v22 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v28->lpVtbl->UnlockRect)(v28, 0);
  if ( v22 < 0 )
  {
    v17 = GetHResult(v22);
    v19 = L"Couldn't unlock texture for upload: %x, %s, file: %s";
    v20 = 1143;
    goto LABEL_21;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( !v21 )
  {
    result = 1;
    *a2 = v28;
    v24 = v29;
    *a3 = v9;
    *v24 = v10;
    return result;
  }
  Log(4u, 1152, "ResourceTexture.cpp", L"Error reading the tga from the file %s. File not big enough.", a1);
  ((void (__fastcall *)(struct IDirect3DTexture9 *))v28->lpVtbl->Release)(v28);
  return 0;
}
