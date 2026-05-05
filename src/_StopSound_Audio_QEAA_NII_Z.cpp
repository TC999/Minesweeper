char __fastcall Audio::StopSound(Audio *this, unsigned int a2)
{
  struct ResourceBase *Resource; // rax
  struct ResourceBase *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx

  Resource = ResourceManager::GetResource(g_pResourceManager, a2, 1);
  v3 = Resource;
  if ( !Resource )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)Resource + 8LL))(Resource) )
    return 0;
  v5 = (*(__int64 (__fastcall **)(struct ResourceBase *, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, 0);
  v6 = v5;
  if ( !v5 )
    return 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 144LL))(v5);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, 0);
  return 1;
}
