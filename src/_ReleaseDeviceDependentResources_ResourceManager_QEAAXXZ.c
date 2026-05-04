void __fastcall ResourceManager::ReleaseDeviceDependentResources(ResourceManager *this)
{
  ResourceManager *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi

  v1 = g_pResourceManager;
  v2 = 0;
  if ( *((_DWORD *)g_pResourceManager + 6) )
  {
    v3 = 0;
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + *((_QWORD *)v1 + 2)) + 56LL))(*(_QWORD *)(v3 + *((_QWORD *)v1 + 2))) )
      {
        Log(4u, 596, "ResourceManager.cpp", L"Released %s", *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 2) + v3) + 32LL));
        Array<IEventListener *>::Add((__int64)v1 + 32, *(_QWORD *)(*((_QWORD *)v1 + 2) + v3));
      }
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)v1 + 6) );
  }
}
