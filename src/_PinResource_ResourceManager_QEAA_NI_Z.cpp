char __fastcall ResourceManager::PinResource(ResourceManager *this, unsigned int a2)
{
  struct ResourceBase *Resource; // rax
  struct ResourceBase *v4; // rbx

  Resource = ResourceManager::GetResource(g_pResourceManager, a2, 0);
  v4 = Resource;
  if ( Resource )
  {
    if ( *((_DWORD *)Resource + 6) == 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)Resource + 80LL))(Resource) )
      {
        ResourceTextureD3D::GetSplitTexture(v4, 0);
        ResourceTextureD3D::GetSplitTexture(v4, 1u);
        ResourceTextureD3D::GetSplitTexture(v4, 2u);
        ResourceTextureD3D::GetSplitTexture(v4, 3u);
      }
    }
    *((_BYTE *)v4 + 20) = 1;
    return 1;
  }
  else
  {
    Log(
      4u,
      183,
      "ResourceManager.cpp",
      L"Resource Id %d could not be found -- either failed to page in or invalid handle.",
      a2);
    return 0;
  }
}
