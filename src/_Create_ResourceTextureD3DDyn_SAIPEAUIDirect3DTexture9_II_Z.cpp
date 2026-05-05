__int64 __fastcall ResourceTextureD3DDyn::Create(struct IDirect3DTexture9 *a1, int a2, int a3)
{
  unsigned int v6; // eax
  void **v7; // rax
  void **v8; // rbx
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  ResourceBase::VerifyCache(0x19u);
  v6 = ResourceTextureD3DDyn::DynTexId++;
  snwprintf_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), 0xFFFFFFFFFFFFFFFFuLL, L"dyn_%d_dxtex", v6);
  v7 = (void **)operator new(0x40u);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 4) = 0;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 10) = 0;
    v7[4] = 0;
    *((_DWORD *)v7 + 2) = 1;
    *((_BYTE *)v7 + 20) = 0;
    v7[6] = a1;
    *((_DWORD *)v7 + 14) = a2;
    *((_DWORD *)v7 + 15) = a3;
    *((_DWORD *)v7 + 6) = 2;
    *v7 = &ResourceTextureD3DDyn::`vftable';
  }
  else
  {
    v8 = 0;
  }
  ResourceBase::SetDescription(v8, ResourceBase::wszCache);
  v10 = 0;
  if ( ResourceManager::CreateResource(g_pResourceManager, (struct ResourceBase *)v8, &v10) )
    return v10;
  Log(4u, 85, "ResourceTexture.cpp", L"CreateResource failed on dynamic texture.");
  if ( v8 )
    (*((void (__fastcall **)(void **, __int64))*v8 + 2))(v8, 1);
  return 0;
}
