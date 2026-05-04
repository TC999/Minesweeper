char __fastcall ResourceManager::RecreateDeviceDependentResources(ResourceManager *this)
{
  ResourceManager *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi

  v1 = g_pResourceManager;
  v2 = 0;
  if ( *((_DWORD *)g_pResourceManager + 8) )
  {
    v3 = 0;
    while ( 1 )
    {
      Log(4u, 562, "ResourceManager.cpp", L"Recreating %s", *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 6) + v3) + 32LL));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + *((_QWORD *)v1 + 6)) + 8LL))(*(_QWORD *)(v3 + *((_QWORD *)v1 + 6))) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + *((_QWORD *)v1 + 6)) + 48LL))(*(_QWORD *)(v3 + *((_QWORD *)v1 + 6))) )
          break;
      }
      ++v2;
      v3 += 8;
      if ( v2 >= *((_DWORD *)v1 + 8) )
        goto LABEL_6;
    }
    Log(4u, 570, "ResourceManager.cpp", L"Failed to recreate last resource");
    *((_DWORD *)v1 + 8) = 0;
    return 0;
  }
  else
  {
LABEL_6:
    *((_DWORD *)v1 + 8) = 0;
    return 1;
  }
}
