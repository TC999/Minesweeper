void __fastcall ResourceManager::UnpinResource(ResourceManager *this, int a2)
{
  ResourceManager *v2; // rdi
  struct ResourceBase *Resource; // rax
  bool v5; // zf
  int v6; // [rsp+20h] [rbp-18h]

  v2 = g_pResourceManager;
  Resource = ResourceManager::GetResource(g_pResourceManager, a2, 1);
  if ( Resource )
  {
    v5 = *((_DWORD *)Resource + 2) == 0;
    *((_BYTE *)Resource + 20) = 0;
    if ( v5 )
      ResourceManager::DestroyResource(v2, a2);
  }
  else
  {
    v6 = a2;
    Log(4u, 619, "ResourceManager.cpp", L"No such resource id %d exists", v6);
  }
}
