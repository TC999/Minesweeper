// Hidden C++ exception states: #wind=1
void CabLoader::StaticExit(void)
{
  unsigned int v0; // esi
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbx
  const void *v4; // rdx

  v0 = 0;
  v1 = CabLoader::sCabStreams;
  if ( CabLoader::sCabStreams )
  {
    v2 = 0;
    do
    {
      if ( *(_QWORD *)((char *)qword_1000A7BB0 + v2) )
      {
        v3 = *(_QWORD *)((char *)qword_1000A7BB0 + v2);
        if ( v3 )
        {
          v4 = *(const void **)(v3 + 24);
          if ( v4 )
          {
            if ( *(_BYTE *)(v3 + 40) )
              operator delete(*(void **)(v3 + 24));
            else
              DllFileMgr::UnloadResource(Singleton<DllFileMgr>::s_Singleton, v4);
          }
          operator delete(*(void **)(v3 + 16));
          operator delete((void *)v3);
          v1 = CabLoader::sCabStreams;
        }
      }
      ++v0;
      v2 += 8;
    }
    while ( v0 < v1 );
  }
  CabLoader::sCabStreams = 0;
  if ( CabLoader::sCabContext )
  {
    if ( pfnFDIDestroy )
    {
      if ( pfnFDIDestroy(CabLoader::sCabContext) == 1 )
        FreeLibrary(hModule);
    }
    CabLoader::sCabContext = 0;
  }
}
