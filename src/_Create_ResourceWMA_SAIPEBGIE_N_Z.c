// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceWMA::Create(const unsigned __int16 *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v6; // edi
  struct ResourceBase *Resource; // rax
  struct ResourceBase *v8; // rbx
  ResourceWMA *v10; // rax
  ResourceBase *v11; // rbx
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  ResourceBase::VerifyCache(a2 + 4);
  wcscpy_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), a1);
  wcscat_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), L"_wma");
  if ( ResourceManager::CheckString(g_pResourceManager, ResourceBase::wszCache) )
  {
    v6 = ResourceManager::DereferenceString(g_pResourceManager, ResourceBase::wszCache);
    Resource = ResourceManager::GetResource(g_pResourceManager, v6, 1);
    v8 = Resource;
    if ( *((_BYTE *)Resource + 52) < a3 )
      Log(
        4u,
        404,
        "ResourceWMA.cpp",
        L"Sound recreated with more buffers than the initial! %d wanted, %d loaded previously.",
        a3,
        *((unsigned __int8 *)Resource + 52),
        -2);
    ++*((_DWORD *)v8 + 2);
    return v6;
  }
  else
  {
    v10 = (ResourceWMA *)operator new(0xA0u);
    if ( v10 )
      v11 = ResourceWMA::ResourceWMA(v10, a1, a2, a3, 0);
    else
      v11 = 0;
    ResourceBase::SetDescription(v11, ResourceBase::wszCache, ResourceBase::CacheCch[0]);
    v12 = 0;
    if ( ResourceManager::CreateResource(g_pResourceManager, v11, &v12) )
    {
      return v12;
    }
    else
    {
      if ( v11 )
        (*(void (__fastcall **)(ResourceBase *, __int64))(*(_QWORD *)v11 + 16LL))(v11, 1);
      return 0;
    }
  }
}
