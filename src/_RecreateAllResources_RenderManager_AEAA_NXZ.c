bool __fastcall RenderManager::RecreateAllResources(RenderManager *this)
{
  __int64 v2; // rax
  char v3; // r14
  struct IDirect3D9 *v4; // rdi
  HMODULE LibraryW; // rbx
  FARPROC D3D9GetSWInfo; // rdx
  const unsigned __int16 *v7; // r9
  int v8; // edx
  UINT AdapterOrdinal; // r12d
  D3DDEVTYPE DeviceType; // r13d
  bool v11; // bp
  const wchar_t *v12; // rax
  char v13; // r15
  __int64 *v14; // r11
  bool v15; // zf
  __int64 v16; // rax
  int v17; // eax
  int v18; // r12d
  signed int v19; // ebp
  void *v20; // rax
  void *v21; // rdi
  const unsigned __int16 *HResult; // rax
  DWORD MaxTextureHeight; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rbp
  unsigned int v26; // edi
  signed int v27; // eax
  signed int v28; // edi
  const unsigned __int16 *v29; // rax
  int v30; // ecx
  UINT v31; // edx
  LPCWSTR lpCaption; // [rsp+20h] [rbp-2F8h]
  LPCWSTR lpCaptiona; // [rsp+20h] [rbp-2F8h]
  LPCWSTR lpCaptionb; // [rsp+20h] [rbp-2F8h]
  LPCWSTR lpCaptionc; // [rsp+20h] [rbp-2F8h]
  unsigned __int16 *v37; // [rsp+28h] [rbp-2F0h]
  unsigned __int16 *v38; // [rsp+30h] [rbp-2E8h]
  unsigned __int16 *v39; // [rsp+30h] [rbp-2E8h]
  unsigned __int16 *v40; // [rsp+30h] [rbp-2E8h]
  bool v41; // [rsp+38h] [rbp-2E0h]
  unsigned __int16 v42[32]; // [rsp+40h] [rbp-2D8h] BYREF
  _BYTE v43[12]; // [rsp+80h] [rbp-298h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-28Ch]
  _D3DCAPS9 v45; // [rsp+90h] [rbp-288h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+1C0h] [rbp-158h] BYREF

  Log(2u, 1117, "RenderManager.cpp", L"Initializing the rendering system.");
  v2 = *((_QWORD *)this + 8);
  if ( *(_DWORD *)(v2 + 16) != 16 && *(_DWORD *)(v2 + 16) != 32 )
  {
    Log(2u, 1122, "RenderManager.cpp", L"Invalid bit depth in parameters");
    return 0;
  }
  Log(2u, 1126, "RenderManager.cpp", L"Creating the D3D9 Object");
  v3 = 0;
  v4 = Direct3DCreate9(0x20u);
  if ( !v4 )
  {
    Log(2u, 1131, "RenderManager.cpp", L"Direct3DCreate9 failed");
    return 0;
  }
  Log(2u, 1135, "RenderManager.cpp", L"Adding the RGB Rasterizer");
  LibraryW = LoadLibraryW(L"rgb9rast.dll");
  if ( LibraryW )
  {
    Log(2u, 1140, "RenderManager.cpp", L"Found rgbrast, calling GetProcAddress");
    D3D9GetSWInfo = GetProcAddress(LibraryW, "D3D9GetSWInfo");
    if ( D3D9GetSWInfo )
    {
      ((void (__fastcall *)(struct IDirect3D9 *, FARPROC))v4->lpVtbl->RegisterSoftwareDevice)(v4, D3D9GetSWInfo);
      v7 = L"RGBRast Registered";
      v8 = 1150;
    }
    else
    {
      v7 = L"Couldn't find D3D9GetSWInfo";
      v8 = 1145;
    }
  }
  else
  {
    v7 = L"No RGBRast found";
    v8 = 1157;
  }
  Log(2u, v8, "RenderManager.cpp", v7);
  Log(2u, 1161, "RenderManager.cpp", L"Finding an adapter");
  while ( !RenderManager::FindAdapter(this, v4, &v45) )
  {
    if ( !(_BYTE)g_bMediaCenter || *((_DWORD *)this + 53) )
    {
      ((void (__fastcall *)(struct IDirect3D9 *))v4->lpVtbl->Release)(v4);
      Log(2u, 1181, "RenderManager.cpp", L"Couldn't find a sufficient display to render to.");
      LOBYTE(v38) = 1;
      DialogHelper::ShowMessageBox(0x385u, 0x386u, 1u, 0xFFFEu, 0, 0, v38, v41);
      CleanupEngine(0);
    }
    Sleep(0x64u);
    Engine_PumpMessages();
  }
  AdapterOrdinal = v45.AdapterOrdinal;
  Log(2u, 1186, "RenderManager.cpp", L"Using adapter, ordinal %d", v45.AdapterOrdinal);
  DeviceType = v45.DeviceType;
  v11 = 0;
  if ( _bittest((const signed __int32 *)&v45.DevCaps, 0x10u) )
    v11 = v45.DeviceType == D3DDEVTYPE_HAL;
  v12 = L"No";
  if ( v11 )
    v12 = L"Yes";
  Log(2u, 1198, "RenderManager.cpp", L"Using Hardware TNL? %s", v12);
  switch ( DeviceType )
  {
    case D3DDEVTYPE_HAL:
      Log(2u, 1204, "RenderManager.cpp", L"Using HAL");
      break;
    case D3DDEVTYPE_REF:
      Log(2u, 1214, "RenderManager.cpp", L"Using REF");
      break;
    case D3DDEVTYPE_SW:
      Log(2u, 1209, "RenderManager.cpp", L"Using SW");
      break;
  }
  ((void (__fastcall *)(struct IDirect3D9 *, _QWORD, _BYTE *))v4->lpVtbl->GetAdapterDisplayMode)(
    v4,
    AdapterOrdinal,
    v43);
  *((_DWORD *)this + 18) = v44;
  if ( ((int (__fastcall *)(struct IDirect3D9 *, _QWORD, _QWORD))v4->lpVtbl->CheckDeviceFormat)(
         v4,
         AdapterOrdinal,
         (unsigned int)DeviceType) < 0
    || *(_DWORD *)(*((_QWORD *)this + 8) + 16LL) == 16 )
  {
    if ( ((int (__fastcall *)(struct IDirect3D9 *, _QWORD, _QWORD, _QWORD, _DWORD, int, int))v4->lpVtbl->CheckDeviceFormat)(
           v4,
           AdapterOrdinal,
           (unsigned int)DeviceType,
           v44,
           0,
           3,
           23) < 0 )
    {
      ((void (__fastcall *)(struct IDirect3D9 *))v4->lpVtbl->Release)(v4);
      Log(2u, 1236, "RenderManager.cpp", L"Display is using less then 16-bit color");
      LOBYTE(v38) = 1;
      DialogHelper::ShowMessageBox(0x385u, 0x389u, 1u, 0xFFFEu, 0, 0, v38, v41);
      CleanupEngine(0);
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  LODWORD(lpCaption) = v13 != 0 ? 16 : 32;
  Log(2u, 1246, "RenderManager.cpp", L"Using bitcount: %d", lpCaption);
  memset(v42, 0, sizeof(v42));
  v14 = (__int64 *)*((_QWORD *)this + 8);
  v15 = *((_BYTE *)v14 + 20) == 0;
  *(_DWORD *)&v42[6] = 1;
  *(_DWORD *)&v42[22] = 0;
  *(_DWORD *)&v42[20] = v15;
  v16 = *v14;
  *(_DWORD *)&v42[12] = 1;
  *(_QWORD *)&v42[16] = v16;
  *(_DWORD *)&v42[2] = *((_DWORD *)v14 + 3);
  LODWORD(v16) = *((_DWORD *)v14 + 2);
  *(_DWORD *)&v42[26] = 0;
  *(_DWORD *)&v42[30] = 1;
  *(_DWORD *)v42 = v16;
  if ( v15 )
  {
    v17 = v44;
  }
  else
  {
    *(_DWORD *)&v42[28] = 0;
    *(_DWORD *)&v42[30] = 0;
    v17 = (v13 != 0) + 22;
  }
  *(_DWORD *)&v42[4] = v17;
  *((_DWORD *)this + 1) = v17;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110u);
  VersionInformation.dwOSVersionInfoSize = 276;
  GetVersionExW(&VersionInformation);
  LODWORD(v38) = VersionInformation.dwBuildNumber;
  LODWORD(v37) = VersionInformation.dwMinorVersion;
  LODWORD(lpCaptiona) = VersionInformation.dwMajorVersion;
  Log(2u, 1299, "RenderManager.cpp", L"Creating The Device on OS: %d.%d.%d", lpCaptiona, v37, v38);
  v18 = v11 ? 64 : 32;
  if ( VersionInformation.dwMajorVersion >= 6 )
  {
    Log(2u, 1308, "RenderManager.cpp", L"Adding 9.L flag");
    v18 |= 0x1000u;
    v3 = 1;
  }
  while ( 1 )
  {
    v19 = ((__int64 (__fastcall *)(struct IDirect3D9 *, _QWORD, _QWORD, _QWORD, int, unsigned __int16 *, char *))v4->lpVtbl->CreateDevice)(
            v4,
            v45.AdapterOrdinal,
            (unsigned int)DeviceType,
            **((_QWORD **)this + 8),
            v18,
            v42,
            (char *)this + 80);
    if ( v19 >= 0 )
      break;
    if ( v19 == -2005530516 && v3 )
    {
      Log(2u, 1330, "RenderManager.cpp", L"Falling back from 9.L");
      v3 = 0;
      v18 &= ~0x1000u;
    }
    else
    {
      if ( !(_BYTE)g_bMediaCenter || *((_DWORD *)this + 53) )
      {
        ((void (__fastcall *)(struct IDirect3D9 *))v4->lpVtbl->Release)(v4);
        if ( v19 == -2005532292 )
        {
          Log(2u, 1357, "RenderManager.cpp", L"OOM in device creating -- bailing");
          LOBYTE(v39) = 1;
          DialogHelper::ShowMessageBox(0x385u, 0x37Du, 1u, 0xFFFEu, 0, 0, v39, v41);
          CleanupEngine(0);
        }
        HResult = GetHResult(v19);
        LODWORD(lpCaptionb) = v19;
        Log(2u, 1365, "RenderManager.cpp", L"CreateDevice Failed: %x(%s)", lpCaptionb, HResult);
        LOBYTE(v39) = 1;
        DialogHelper::ShowMessageBox(0x385u, 0x388u, 1u, 0xFFFEu, 0, 0, v39, v41);
        CleanupEngine(0);
      }
      Sleep(0x64u);
      Engine_PumpMessages();
    }
  }
  *((_QWORD *)this + 6) = ((__int64 (__fastcall *)(struct IDirect3D9 *, _QWORD))v4->lpVtbl->GetAdapterMonitor)(
                            v4,
                            v45.AdapterOrdinal);
  ((void (__fastcall *)(struct IDirect3D9 *))v4->lpVtbl->Release)(v4);
  Log(2u, 1376, "RenderManager.cpp", L"Device Created, parsing caps");
  operator delete(g_pRenderCaps);
  v20 = operator new(0x14u);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, 0x14u);
    g_pRenderCaps = v21;
  }
  else
  {
    v21 = 0;
    g_pRenderCaps = 0;
  }
  RenderCaps::ParseRenderCaps((RenderCaps *)v21, *((struct IDirect3DDevice9 **)this + 10));
  MaxTextureHeight = v45.MaxTextureHeight;
  v24 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 3) = v45.MaxTextureWidth;
  *((_DWORD *)this + 4) = MaxTextureHeight;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 456LL))(v24, 22, 1);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 10) + 456LL))(*((_QWORD *)this + 10), 137, 0);
  if ( v13 )
    *(_DWORD *)(*((_QWORD *)this + 8) + 16LL) = 16;
  Log(2u, 1400, "RenderManager.cpp", L"Creating and initializing materials");
  RenderManager::CreateCorrectMaterials(this);
  v25 = (_QWORD *)((char *)this + 96);
  v26 = 0;
  *((_QWORD *)this + 7) = (char *)this + 96;
  do
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD))*v25)(*v25) )
    {
      LODWORD(lpCaptionb) = v26;
      Log(2u, 1416, "RenderManager.cpp", L"Material %d failed to create", lpCaptionb);
      return 0;
    }
    ++v26;
    ++v25;
  }
  while ( v26 < 3 );
  v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, char *, _QWORD))(**((_QWORD **)this + 10)
                                                                                         + 288LL))(
          *((_QWORD *)this + 10),
          4,
          4,
          *((unsigned int *)this + 1),
          2,
          (char *)this + 200,
          0);
  v28 = v27;
  if ( v27 < 0 )
  {
    v29 = GetHResult(v27);
    LODWORD(lpCaptionc) = v30;
    Log(2u, 1430, "RenderManager.cpp", L"CreateOffscreenPlainSurface Failed: %x(%s)", lpCaptionc, v29);
    LOBYTE(v40) = 1;
    v31 = 893;
    if ( v28 != -2005532292 )
      v31 = 904;
    DialogHelper::ShowMessageBox(0x385u, v31, 1u, 0xFFFEu, 0, 0, v40, v41);
    CleanupEngine(0);
  }
  Log(2u, 1444, "RenderManager.cpp", L"Creating render target for the cached back buffer.");
  ResourceManager::RecreateDeviceDependentResources(g_pResourceManager);
  Engine_ResetTimer();
  return RenderManager::RecreateDefaultResources(this);
}
