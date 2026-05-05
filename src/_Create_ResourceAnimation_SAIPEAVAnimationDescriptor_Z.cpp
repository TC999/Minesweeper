__int64 __fastcall ResourceAnimation::Create(struct AnimationDescriptor *a1)
{
  ResourceBase *v2; // rax
  ResourceBase *v3; // rbx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  ResourceBase::VerifyCache(0x19u);
  swprintf_s(ResourceBase::wszCache, 0x19u, L"dynanim_%d", ResourceAnimation::m_uiDynamicCount);
  ++ResourceAnimation::m_uiDynamicCount;
  v2 = (ResourceBase *)operator new(0x48u);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 4) = 0;
    *((_DWORD *)v2 + 3) = 0;
    *((_DWORD *)v2 + 10) = 0;
    *((_QWORD *)v2 + 4) = 0;
    *((_QWORD *)v2 + 7) = 0;
    *((_DWORD *)v2 + 16) = 0;
    *((_DWORD *)v2 + 2) = 1;
    *((_BYTE *)v2 + 20) = 0;
    *((_DWORD *)v2 + 6) = 4;
    *((_QWORD *)v2 + 6) = a1;
    *(_QWORD *)v2 = &ResourceAnimation::`vftable';
  }
  else
  {
    v3 = 0;
  }
  ResourceBase::SetDescription(v3, ResourceBase::wszCache, ResourceBase::CacheCch[0]);
  if ( ResourceManager::CreateResource(g_pResourceManager, v3, &v5) )
    return v5;
  if ( v3 )
    (*(void (__fastcall **)(ResourceBase *, __int64))(*(_QWORD *)v3 + 16LL))(v3, 1);
  return 0;
}
