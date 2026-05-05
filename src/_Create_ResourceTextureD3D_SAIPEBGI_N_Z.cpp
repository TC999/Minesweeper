// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceTextureD3D::Create(const unsigned __int16 *a1, int a2, char a3)
{
  unsigned int v6; // ebx
  struct ResourceBase *Resource; // rax
  ResourceTextureD3D *v9; // rax
  void **v10; // rbx
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  ResourceTextureD3D *v12; // [rsp+68h] [rbp+20h]

  ResourceBase::VerifyCache(a2 + 6);
  wcscpy_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), a1);
  wcscat_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), L"_dximg");
  if ( ResourceManager::CheckString(g_pResourceManager, ResourceBase::wszCache) )
  {
    v6 = ResourceManager::DereferenceString(g_pResourceManager, ResourceBase::wszCache);
    Resource = ResourceManager::GetResource(g_pResourceManager, v6, 1);
    ++*((_DWORD *)Resource + 2);
    return v6;
  }
  else
  {
    v9 = (ResourceTextureD3D *)operator new(0xA0u);
    v12 = v9;
    if ( v9 )
      v10 = (void **)ResourceTextureD3D::ResourceTextureD3D(v9, a1, a2, a3);
    else
      v10 = 0;
    ResourceBase::SetDescription(v10, ResourceBase::wszCache);
    v11 = 0;
    if ( ResourceManager::CreateResource(g_pResourceManager, (struct ResourceBase *)v10, &v11) )
    {
      return v11;
    }
    else
    {
      Log(4u, 270, "ResourceTexture.cpp", L"CreateResource failed on texture: %s", a1);
      if ( v10 )
        (*((void (__fastcall **)(void **, __int64))*v10 + 2))(v10, 1);
      return 0;
    }
  }
}
