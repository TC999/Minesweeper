char __fastcall Audio::StartEffect(Audio *this, unsigned int a2, __int64 a3, unsigned int *a4)
{
  Audio *v4; // r12
  struct ResourceBase *Resource; // rax
  struct ResourceBase *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int EffectBufferVolume; // eax
  unsigned int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  Audio *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = this;
  v4 = g_pAudio;
  LOBYTE(v14) = 0;
  if ( !*((_QWORD *)g_pAudio + 2) )
    return 0;
  Resource = ResourceManager::GetResource(g_pResourceManager, a2, 0);
  v8 = Resource;
  if ( !Resource )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)Resource + 8LL))(Resource) )
    return 0;
  v9 = (*(__int64 (__fastcall **)(struct ResourceBase *, unsigned int *))(*(_QWORD *)v8 + 72LL))(v8, v13);
  if ( !v9 )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct ResourceBase *, __int64, Audio **))(*(_QWORD *)v8 + 88LL))(
          v8,
          v9,
          &v14) )
    return 0;
  v10 = *(_QWORD *)v9;
  v11 = (*(__int64 (__fastcall **)(struct ResourceBase *, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, 0);
  EffectBufferVolume = Audio::GetEffectBufferVolume(v4, v11);
  (*(void (__fastcall **)(__int64, _QWORD))(v10 + 120))(v9, EffectBufferVolume);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 104LL))(v9, 0);
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, 0, 0, 0) < 0 )
    return 0;
  if ( a4 )
    *a4 = v13[0];
  return 1;
}
