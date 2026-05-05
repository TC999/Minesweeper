// Hidden C++ exception states: #wind=1
void __fastcall DllFileMgr::UnloadResource(DllFileMgr *this, const void *a2)
{
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  const void *v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  const void **i; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx

  v4 = 0;
  if ( CabLoader::sCabStreams )
  {
    v5 = (char *)qword_1000A7BB0;
    while ( !*(_QWORD *)v5 || *(const void **)(*(_QWORD *)v5 + 24LL) != a2 || !*(_BYTE *)(*(_QWORD *)v5 + 40LL) )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 8;
      if ( (unsigned int)v4 >= CabLoader::sCabStreams )
        goto LABEL_9;
    }
    v6 = *((_QWORD *)qword_1000A7BB0 + v4);
  }
  else
  {
LABEL_9:
    v6 = 0;
  }
  if ( v6 )
  {
    v7 = 0;
    if ( CabLoader::sCabStreams )
    {
      v8 = qword_1000A7BB0;
      while ( *v8 != v6 )
      {
        v7 = (unsigned int)(v7 + 1);
        ++v8;
        if ( (unsigned int)v7 >= CabLoader::sCabStreams )
          goto LABEL_17;
      }
      *((_QWORD *)qword_1000A7BB0 + v7) = 0;
    }
LABEL_17:
    v9 = *(const void **)(v6 + 24);
    if ( v9 )
    {
      if ( *(_BYTE *)(v6 + 40) )
        operator delete(*(void **)(v6 + 24));
      else
        DllFileMgr::UnloadResource(Singleton<DllFileMgr>::s_Singleton, v9);
    }
    operator delete(*(void **)(v6 + 16));
    operator delete((void *)v6);
  }
  v10 = 0;
  v11 = *((_DWORD *)this + 2580);
  if ( v11 )
  {
    for ( i = (const void **)*((_QWORD *)this + 1292); *i != a2; i += 2 )
    {
      if ( ++v10 >= v11 )
        return;
    }
    v13 = *((_QWORD *)this + 1292) + 16LL * v10;
    operator delete(*(void **)v13);
    *(_QWORD *)v13 = 0;
    *(_DWORD *)(v13 + 8) = 0;
    if ( v10 < *((_DWORD *)this + 2580) - 1 )
    {
      v14 = 16LL * (int)v10;
      do
      {
        *(__m128i *)(v14 + *((_QWORD *)this + 1292)) = _mm_loadu_si128((const __m128i *)(v14
                                                                                       + *((_QWORD *)this + 1292)
                                                                                       + 16));
        ++v10;
        v14 += 16;
      }
      while ( v10 < *((_DWORD *)this + 2580) - 1 );
    }
    --*((_DWORD *)this + 2580);
  }
}
