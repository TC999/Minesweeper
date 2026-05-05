// Hidden C++ exception states: #wind=2
__int64 __fastcall ResourceAnimation::Create(wchar_t *Source, rsize_t SizeInWords)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  struct ResourceBase *Resource; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rbx
  wchar_t *v9; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h]

  v2 = (unsigned int)SizeInWords;
  ResourceBase::VerifyCache(SizeInWords + 5);
  wcscpy_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), Source);
  wcscat_s(ResourceBase::wszCache, LODWORD(ResourceBase::CacheCch[0]), L"_anim");
  if ( ResourceManager::CheckString(g_pResourceManager, ResourceBase::wszCache) )
  {
    v4 = ResourceManager::DereferenceString(g_pResourceManager, ResourceBase::wszCache);
    Resource = ResourceManager::GetResource(g_pResourceManager, v4, 0);
    ++*((_DWORD *)Resource + 2);
    return v4;
  }
  else
  {
    v7 = operator new(0x48u);
    v8 = v7;
    v11 = v7;
    if ( v7 )
    {
      v7[6] = 0;
      v7[4] = 0;
      v7[2] = 1;
      v7[3] = 0;
      v7[10] = 0;
      *((_QWORD *)v7 + 4) = 0;
      *((_BYTE *)v7 + 20) = 0;
      *(_QWORD *)v7 = &ResourceAnimation::`vftable';
      v9 = (wchar_t *)operator new[](saturated_mul(v2, 2u));
      v8[7] = v9;
      if ( v9 )
        wcscpy_s(v9, v2, Source);
      *((_DWORD *)v8 + 16) = v2;
      v8[6] = 0;
    }
    else
    {
      v8 = 0;
    }
    ResourceBase::SetDescription((ResourceBase *)v8, ResourceBase::wszCache, ResourceBase::CacheCch[0]);
    v10 = 0;
    if ( ResourceManager::CreateResource(g_pResourceManager, (struct ResourceBase *)v8, &v10) )
    {
      return v10;
    }
    else
    {
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 16LL))(v8, 1);
      return 0;
    }
  }
}
