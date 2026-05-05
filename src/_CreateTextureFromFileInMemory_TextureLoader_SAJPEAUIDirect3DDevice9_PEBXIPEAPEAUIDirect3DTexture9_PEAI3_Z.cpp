__int64 __fastcall TextureLoader::CreateTextureFromFileInMemory(
        struct IDirect3DDevice9 *a1,
        _DWORD *a2,
        int a3,
        struct IDirect3DTexture9 **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  char *v7; // r14
  char *v9; // r14
  unsigned int v10; // esi
  int v11; // edx
  int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // r13d
  struct IDirect3DDevice9Vtbl *lpVtbl; // rax
  int v16; // eax
  int v17; // ebx
  struct IDirect3DTexture9 *v18; // rcx
  unsigned int v19; // edi
  struct IDirect3DTexture9Vtbl *v20; // rax
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-118h]
  _DWORD v24[31]; // [rsp+50h] [rbp-E8h] BYREF
  char v25[8]; // [rsp+D0h] [rbp-68h] BYREF
  void *v26; // [rsp+D8h] [rbp-60h]
  char v27[24]; // [rsp+E0h] [rbp-58h] BYREF
  int v28; // [rsp+F8h] [rbp-40h]
  int v29; // [rsp+FCh] [rbp-3Ch]
  struct IDirect3DTexture9 *v30; // [rsp+140h] [rbp+8h] BYREF
  struct IDirect3DTexture9 **v31; // [rsp+158h] [rbp+20h]

  v31 = a4;
  if ( a1 && a2 && a3 && a4 )
  {
    v7 = (char *)(a2 + 1);
    if ( *a2 != 542327876 )
    {
      Log(4u, 0x5Du, "TextureLoader.cpp", L"Input is not a DDS file");
      return 2289437529LL;
    }
    memcpy(v24, a2 + 1, sizeof(v24));
    v9 = v7 + 124;
    if ( v24[0] != 124 )
    {
      Log(4u, 0x69u, "TextureLoader.cpp", L"Input header is not the correct size (%s found, expected %s)", v24[0], 124);
      return 2289437529LL;
    }
    if ( (v24[1] & 1) == 0 || (v24[1] & 0x1000) == 0 || (v24[1] & 4) == 0 || (v24[1] & 2) == 0 )
    {
      Log(4u, 0x71u, "TextureLoader.cpp", L"Invalid flags in DDS source");
      return 2289437529LL;
    }
    if ( (v24[1] & 0x800000) != 0 )
    {
      Log(4u, 0x7Cu, "TextureLoader.cpp", L"We don't support depth textures");
      return 2289437529LL;
    }
    if ( (v24[1] & 0x20000) != 0 )
    {
      v10 = v24[6];
    }
    else
    {
      Log(4u, 0x83u, "TextureLoader.cpp", L"Forced DDS mipmap count to 1");
      v10 = 1;
    }
    if ( v24[18] != 32
      || (v24[26] & 0x1000) == 0
      || v10 > 1 && ((v24[26] & 0x400000) == 0 || (v24[26] & 8) == 0)
      || (v24[27] & 0x200) != 0
      || (v24[27] & 0x400) != 0
      || (v24[27] & 0x800) != 0
      || (v24[27] & 0x1000) != 0
      || (v24[27] & 0x2000) != 0
      || (v24[27] & 0x4000) != 0
      || (v24[27] & 0x8000) != 0
      || (v24[27] & 0x200000) != 0 )
    {
      return 2289437529LL;
    }
    v11 = 0;
    v12 = 0;
    if ( (v24[19] & 0x40) != 0 )
    {
      if ( v24[21] != 32 || v24[22] != 16711680 || v24[23] != 65280 || v24[24] != 255 || v24[25] != -16777216 )
      {
        Log(4u, 0xBFu, "TextureLoader.cpp", L"DDS loader currently only supports the RGB format A8R8G8B8");
        return 2289437529LL;
      }
      v11 = 21;
      v12 = 32;
    }
    else if ( (v24[19] & 4) != 0 )
    {
      if ( v24[20] != 827611204 && v24[20] != 861165636 && v24[20] != 894720068 )
        Log(
          4u,
          0xD9u,
          "TextureLoader.cpp",
          L"DDS loader currently only supports the FOURCC formats DXT1, DXT3, and DXT5");
      return 2289437529LL;
    }
    v13 = v24[2];
    v14 = v24[3];
    lpVtbl = a1->lpVtbl;
    v30 = 0;
    v16 = ((__int64 (__fastcall *)(struct IDirect3DDevice9 *, _QWORD, _QWORD, _QWORD, _DWORD, int, int, struct IDirect3DTexture9 **, _QWORD))lpVtbl->CreateTexture)(
            a1,
            v24[3],
            v24[2],
            v10,
            0,
            v11,
            1,
            &v30,
            0);
    v17 = v16;
    if ( v16 < 0 )
    {
      LODWORD(v23) = v16;
      Log(4u, 0xE9u, "TextureLoader.cpp", L"CreateTexture failed: %x", v23);
      return (unsigned int)v17;
    }
    v18 = v30;
    if ( v30 )
    {
      v19 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v17 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, char *))v18->lpVtbl->GetLevelDesc)(
                  v18,
                  v19,
                  v27);
          v20 = v30->lpVtbl;
          if ( v17 < 0 )
            break;
          v21 = (unsigned int)(v12 * v28 * v29) >> 3;
          v17 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD, char *, _QWORD, _DWORD))v20->LockRect)(
                  v30,
                  v19,
                  v25,
                  0,
                  0);
          if ( v17 < 0 || !v26 )
          {
            v18 = v30;
LABEL_62:
            v20 = v18->lpVtbl;
            break;
          }
          memcpy(v26, v9, v21);
          v9 += v21;
          v22 = ((__int64 (__fastcall *)(struct IDirect3DTexture9 *, _QWORD))v30->lpVtbl->UnlockRect)(v30, v19);
          v18 = v30;
          v17 = v22;
          if ( v22 < 0 )
            goto LABEL_62;
          if ( ++v19 >= v10 )
            goto LABEL_56;
        }
        ((void (*)(void))v20->Release)();
        return (unsigned int)v17;
      }
LABEL_56:
      *v31 = v18;
      if ( a5 )
        *a5 = v14;
      if ( a6 )
        *a6 = v13;
      return 0;
    }
    else
    {
      return 2147500037LL;
    }
  }
  else
  {
    Log(4u, 0x52u, "TextureLoader.cpp", L"NULL in parameter list for CreateTextureFromFileInMemory()");
    return 2289436780LL;
  }
}
