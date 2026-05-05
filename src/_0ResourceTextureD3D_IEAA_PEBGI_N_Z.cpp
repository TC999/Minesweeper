// Hidden C++ exception states: #wind=1
ResourceTextureD3D *__fastcall ResourceTextureD3D::ResourceTextureD3D(
        ResourceTextureD3D *this,
        const unsigned __int16 *a2,
        int a3,
        char a4)
{
  int v5; // ebx
  ResourceManager *v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r15d
  wchar_t *v12; // rax
  __int64 v13; // rbp
  const unsigned __int16 *v14; // rcx
  bool v15; // zf
  __int64 v16; // r14
  int v17; // eax
  int v18; // ebp
  unsigned __int64 v19; // r14
  wchar_t *v20; // rax
  __int64 v21; // rbx
  const unsigned __int16 *v22; // rcx
  __int64 v23; // rdi

  v5 = a3;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &ResourceTextureD3D::`vftable';
  if ( (int)SortedListW<TipManager::TipInfo *>::BinSearch(
              (_QWORD *)g_pResourceManager + 10,
              a2,
              0,
              *((_DWORD *)g_pResourceManager + 24)) < 0 )
  {
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    *((_BYTE *)this + 152) = 1;
    v8 = g_pResourceManager;
    v9 = SortedListW<TipManager::TipInfo *>::BinSearch(
           (_QWORD *)g_pResourceManager + 10,
           a2,
           0,
           *((_DWORD *)g_pResourceManager + 24));
    if ( v9 < 0 )
    {
      Log(4u, 379, "ResourceManager.cpp", L"Tried to get split resource size on a non split resource %s", a2);
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 37) = 0;
    }
    else
    {
      *((_QWORD *)this + 18) = *(_QWORD *)(*((_QWORD *)v8 + 11) + 8LL * v9);
    }
    v5 = a3;
  }
  if ( a4 && *((_BYTE *)this + 152) )
  {
    Log(4u, 71, "ResourceTexture.cpp", L"A split texture is marked depth sensitive -- disabling depth sens. on %s", a2);
    a4 = 0;
  }
  if ( g_bDoubleDPI )
  {
    if ( a4 && *(_DWORD *)(*((_QWORD *)g_pRenderManager + 8) + 16LL) == 16 )
      v10 = 2;
    else
      v10 = 0;
    v11 = v10 + v5 + 2;
    v12 = (wchar_t *)operator new[](saturated_mul(v11, 2u));
    *((_QWORD *)this + 8) = v12;
    v13 = (unsigned int)(a3 - 1);
    if ( a3 != 1 )
    {
      v14 = &a2[(int)v13];
      do
      {
        if ( *v14 == 46 )
          break;
        --v14;
        v15 = (_DWORD)v13 == 1;
        v13 = (unsigned int)(v13 - 1);
      }
      while ( !v15 );
    }
    if ( v12 )
    {
      v16 = (unsigned int)v13;
      wcsncpy_s(v12, v11, a2, (unsigned int)v13);
      if ( a4 && *(_DWORD *)(*((_QWORD *)g_pRenderManager + 8) + 16LL) == 16 )
      {
        wcscpy_s((wchar_t *)(*((_QWORD *)this + 8) + 2 * v13), v11 - (unsigned int)v13, L"16");
        v13 = (unsigned int)(v13 + 2);
      }
      wcscpy_s((wchar_t *)(*((_QWORD *)this + 8) + 2 * v13), v11 - (unsigned int)v13, L"x2");
      wcscpy_s((wchar_t *)(*((_QWORD *)this + 8) + 2 * v13 + 4), v11 - (unsigned int)v13 - 2, &a2[v16]);
    }
    *((_DWORD *)this + 18) = v11;
  }
  else
  {
    if ( a4 && *(_DWORD *)(*((_QWORD *)g_pRenderManager + 8) + 16LL) == 16 )
      v17 = 2;
    else
      v17 = 0;
    v18 = v17 + v5;
    v19 = (unsigned int)(v17 + v5);
    v20 = (wchar_t *)operator new[](saturated_mul(v19, 2u));
    *((_QWORD *)this + 8) = v20;
    v21 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v21 )
    {
      v22 = &a2[(int)v21];
      do
      {
        if ( *v22 == 46 )
          break;
        v21 = (unsigned int)(v21 - 1);
        --v22;
      }
      while ( (_DWORD)v21 );
    }
    if ( v20 )
    {
      v23 = (unsigned int)v21;
      wcsncpy_s(v20, v19, a2, (unsigned int)v21);
      if ( a4 && *(_DWORD *)(*((_QWORD *)g_pRenderManager + 8) + 16LL) == 16 )
      {
        wcscpy_s((wchar_t *)(*((_QWORD *)this + 8) + 2 * v21), (unsigned int)(v18 - v21), L"16");
        v21 = (unsigned int)(v21 + 2);
      }
      wcscpy_s((wchar_t *)(*((_QWORD *)this + 8) + 2 * v21), (unsigned int)(v18 - v21), &a2[v23]);
    }
    *((_DWORD *)this + 18) = v18;
  }
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  return this;
}
