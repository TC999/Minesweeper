// Hidden C++ exception states: #wind=8
void __fastcall RenderManager::~RenderManager(RenderManager *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  TextRenderer *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  UserInterface *v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rbp
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 3) = 0;
  }
  v3 = (_QWORD *)((char *)this + 96);
  v4 = 3;
  do
  {
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 8LL))(*v3, 1);
    *v3++ = 0;
    --v4;
  }
  while ( v4 );
  operator delete(*((void **)this + 8));
  *((_QWORD *)this + 8) = 0;
  v5 = g_pTextRenderer;
  if ( g_pTextRenderer )
  {
    *(_QWORD *)g_pTextRenderer = &TextRenderer::`vftable';
    TextRenderer::Cleanup(v5);
    v6 = (void *)*((_QWORD *)v5 + 3);
    if ( v6 )
      free(v6);
    operator delete(v5);
  }
  g_pTextRenderer = 0;
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0;
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 24) = 0;
  }
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 25) = 0;
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 10) = 0;
  }
  operator delete(g_pRenderCaps);
  g_pRenderCaps = 0;
  v11 = *((_QWORD *)this + 15);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 104LL))(v11, 1);
  *((_QWORD *)this + 15) = 0;
  v12 = g_pUserInterface;
  if ( g_pUserInterface )
  {
    v13 = 0;
    if ( *((_DWORD *)g_pUserInterface + 58) )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(*((_QWORD *)v12 + 31) + v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 104LL))(v15, 1);
        ++v13;
        v14 += 8;
      }
      while ( v13 < *((_DWORD *)v12 + 58) );
    }
    *((_DWORD *)v12 + 58) = 0;
    v16 = 0;
    if ( *((_DWORD *)v12 + 8) )
    {
      v17 = 0;
      do
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v12 + 6) + v17) + 16LL))(*(_QWORD *)(*((_QWORD *)v12 + 6) + v17));
        ++v16;
        v17 += 8;
      }
      while ( v16 < *((_DWORD *)v12 + 8) );
    }
    v18 = (void *)*((_QWORD *)v12 + 31);
    if ( v18 )
      free(v18);
    v19 = (void *)*((_QWORD *)v12 + 20);
    if ( v19 )
      free(v19);
    v20 = (void *)*((_QWORD *)v12 + 17);
    if ( v20 )
      free(v20);
    v21 = (void *)*((_QWORD *)v12 + 14);
    if ( v21 )
      free(v21);
    v22 = (void *)*((_QWORD *)v12 + 6);
    if ( v22 )
      free(v22);
    *((_DWORD *)v12 + 4) = 0;
    *((_DWORD *)v12 + 5) = 0;
    free(*(void **)v12);
    free(*((void **)v12 + 1));
    *(_QWORD *)v12 = 0;
    *((_QWORD *)v12 + 1) = 0;
    operator delete(v12);
  }
  g_pUserInterface = 0;
  v23 = (void *)*((_QWORD *)this + 18);
  if ( v23 )
    free(v23);
}
