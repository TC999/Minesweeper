// Hidden C++ exception states: #wind=1
ResourceWav *__fastcall ResourceWav::Create(const unsigned __int16 *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v6; // esi
  ResourceWav *result; // rax
  ResourceWav *v8; // rbx
  ResourceWav *v9; // rax
  ResourceWav *v10; // rbx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  ResourceWav *v12; // [rsp+58h] [rbp+20h]

  ResourceBase::VerifyCache(a2 + 4);
  wcscpy_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), a1);
  wcscat_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), L"_wav");
  if ( ResourceManager::CheckString(g_pResourceManager, ResourceBase::wszCache) )
  {
    v6 = ResourceManager::DereferenceString(g_pResourceManager, ResourceBase::wszCache);
    result = ResourceManager::GetResource(g_pResourceManager, v6, 0);
    v8 = result;
    if ( result )
    {
      ResourceWav::VerifyBufferCount(result, a3);
      if ( *((_BYTE *)v8 + 52) >= a3 )
      {
        ++*((_DWORD *)v8 + 2);
        return (ResourceWav *)v6;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    v9 = (ResourceWav *)operator new(0x70u);
    v12 = v9;
    if ( v9 )
      v10 = ResourceWav::ResourceWav(v9, a1, a2, a3);
    else
      v10 = 0;
    CheckAllocation(v10);
    ResourceBase::SetDescription(v10, ResourceBase::wszCache, ResourceBase::CacheCch[0]);
    v11 = 0;
    if ( ResourceManager::CreateResource(g_pResourceManager, v10, &v11) )
    {
      return (ResourceWav *)v11;
    }
    else
    {
      if ( v10 )
        (*(void (__fastcall **)(ResourceWav *, __int64))(*(_QWORD *)v10 + 16LL))(v10, 1);
      return 0;
    }
  }
  return result;
}
