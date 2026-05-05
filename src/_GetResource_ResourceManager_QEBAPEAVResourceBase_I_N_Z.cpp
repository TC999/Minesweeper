struct ResourceBase *__fastcall ResourceManager::GetResource(ResourceManager *this, int a2, char a3)
{
  char *v3; // rbx
  int v5; // eax
  _DWORD *v6; // rbx

  v3 = (char *)this + 8;
  v5 = SortedListI<Event::RegisteredType>::BinSearch((__int64 *)this + 1, a2, 0, *((_DWORD *)this + 6));
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD **)(*((_QWORD *)v3 + 1) + 8LL * v5);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 32LL))(v6)
      && !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6) )
    {
      if ( a3 )
        return (struct ResourceBase *)v6;
      Log(
        4u,
        327,
        "ResourceManager.cpp",
        L"Paging in resource %s on count %d",
        *((_QWORD *)v6 + 4),
        *((_DWORD *)g_pRenderManager + 44));
      if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 48LL))(v6) )
        Log(4u, 330, "ResourceManager.cpp", L"Failed to page in resource");
      Engine_ResetTimer();
    }
    if ( !a3 )
      v6[4] = *((_DWORD *)g_pRenderManager + 44);
    return (struct ResourceBase *)v6;
  }
  return 0;
}
