void __fastcall ResourceManager::PrintResources(ResourceManager *this)
{
  ResourceManager *v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // rdi
  const wchar_t *v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rbp

  v1 = g_pResourceManager;
  Log(4u, L"--------------------- PRINTING LOADED RESOURCES -------------");
  v2 = 0;
  if ( *((_DWORD *)v1 + 6) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)v1 + 2) + v3);
      if ( (*(_DWORD *)(v4 + 24) == 1 || *(_DWORD *)(v4 + 24) == 3)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4)
        && (*(_DWORD *)(v4 + 24) != 1 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4)) )
      {
        v5 = &String;
        if ( *(_BYTE *)(v4 + 20) )
          v5 = L"[Pinned]";
        Log(4u, L"%s %s", v5, *(_QWORD *)(v4 + 32));
      }
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)v1 + 6) );
  }
  Log(4u, L"--------------------- PRINTING UNLOADED RESOURCES -----------");
  v6 = 0;
  if ( *((_DWORD *)v1 + 6) )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(v7 + *((_QWORD *)v1 + 2));
      if ( (*(_DWORD *)(v8 + 24) == 1 || *(_DWORD *)(v8 + 24) == 3)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) )
      {
        Log(4u, L"%s", *(_QWORD *)(v8 + 32));
      }
      ++v6;
      v7 += 8;
    }
    while ( v6 < *((_DWORD *)v1 + 6) );
  }
  Log(4u, L"--------------------- END PRINT -----------------------------");
}
