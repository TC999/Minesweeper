void __fastcall RenderManager::ReleaseDefaultResources(RenderManager *this)
{
  TextRenderer *v1; // rbp
  unsigned int v2; // esi
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v1 = g_pTextRenderer;
  v2 = 0;
  if ( *((_DWORD *)g_pTextRenderer + 2) )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 3) + v4) + 8LL);
      Log(2u, 691, "Font.cpp", L"Invalidating a font cache");
      v6 = 0;
      if ( *(_DWORD *)(v5 + 8) )
      {
        v7 = 0;
        do
        {
          ResourceManager::DestroyResource(g_pResourceManager, *(_DWORD *)(v7 + *(_QWORD *)(v5 + 24) + 24));
          Font::CachedEntry::Cleanup((Font::CachedEntry *)(*(_QWORD *)(v5 + 24) + 48 * v6));
          v6 = (unsigned int)(v6 + 1);
          v7 += 48;
        }
        while ( (unsigned int)v6 < *(_DWORD *)(v5 + 8) );
      }
      *(_DWORD *)(v5 + 8) = 0;
      DeleteDC(*(HDC *)(v5 + 48));
      v8 = *(_QWORD *)(v5 + 56);
      *(_QWORD *)(v5 + 48) = 0;
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        *(_QWORD *)(v5 + 56) = 0;
      }
      ++v2;
      v4 += 8;
    }
    while ( v2 < *((_DWORD *)v1 + 2) );
  }
  v9 = (_QWORD *)((char *)this + 96);
  v10 = 3;
  do
  {
    if ( *v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 24LL))(*v9);
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 23) = 0;
  }
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 24) = 0;
  }
  v13 = *((_QWORD *)this + 3);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 3) = 0;
  }
}
