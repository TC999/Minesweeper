char __fastcall ResourceManager::CreateResource(ResourceManager *this, struct ResourceBase *a2, unsigned int *a3)
{
  ResourceManager *v3; // rsi
  char result; // al
  struct ResourceBase *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = g_pResourceManager;
  if ( (*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)a2 + 32LL))(a2)
    || (result = (*(__int64 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)a2 + 48LL))(a2)) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct ResourceBase *))(*(_QWORD *)a2 + 32LL))(a2) )
      Array<IEventListener *>::Add((__int64)v3 + 56, (__int64)a2);
    *a3 = (*(_DWORD *)v3)++;
    *((_DWORD *)a2 + 3) = *a3;
    SortedListI<ResourceBase *>::Add((char *)v3 + 8, *a3, &v7);
    SortedListW<unsigned int>::Add((char *)v3 + 104, *((_QWORD *)a2 + 4), *a3);
    return 1;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
