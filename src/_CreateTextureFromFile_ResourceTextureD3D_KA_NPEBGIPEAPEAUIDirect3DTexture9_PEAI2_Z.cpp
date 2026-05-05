bool __fastcall ResourceTextureD3D::CreateTextureFromFile(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct IDirect3DTexture9 **a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned __int16 v8; // r11
  void *v10; // rbx
  signed int TextureFromFileInMemory; // eax
  signed int v12; // edi
  const unsigned __int16 *HResult; // rax
  int v14; // ecx
  unsigned int *v15; // [rsp+20h] [rbp-28h]
  void *Block; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 < 4 )
    return ResourceTextureD3D::CreateTextureFromSource(a1, a3, a4, a5);
  v8 = a1[a2 - 2];
  if ( v8 == 116 && a1[a2 - 3] == 104 && a1[a2 - 4] == 115 )
    return ResourceTextureD3D::CreateTextureFromSheet(a1, a2, a3, a4, a5);
  if ( v8 == 97 && a1[a2 - 3] == 103 && a1[a2 - 4] == 116 )
    return ResourceTextureD3D::CreateTextureFromTga(a1, a3, a4, a5);
  if ( v8 != 115 || a1[a2 - 3] != 100 || a1[a2 - 4] != 100 )
    return ResourceTextureD3D::CreateTextureFromSource(a1, a3, a4, a5);
  if ( !Ober_ReadFile(a1, (unsigned __int8 **)&Block, &v17) )
  {
    Log(4u, 715, "ResourceTexture.cpp", L"Couldn't load %s from the vfs", a1);
    return 0;
  }
  v10 = Block;
  TextureFromFileInMemory = TextureLoader::CreateTextureFromFileInMemory(
                              *((struct IDirect3DDevice9 **)g_pRenderManager + 10),
                              Block,
                              v17,
                              a3,
                              a4,
                              a5);
  v12 = TextureFromFileInMemory;
  if ( TextureFromFileInMemory < 0 )
  {
    HResult = GetHResult(TextureFromFileInMemory);
    LODWORD(v15) = v14;
    Log(4u, 722, "ResourceTexture.cpp", L"Couldn't create DDS texture: %x (%s)", v15, HResult);
    operator delete(v10);
    if ( v12 == -2005532292 )
      Engine_ResourceLoadFail();
    return 0;
  }
  operator delete(v10);
  return 1;
}
