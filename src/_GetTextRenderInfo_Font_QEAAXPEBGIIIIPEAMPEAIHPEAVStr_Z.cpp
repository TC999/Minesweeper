void __fastcall Font::GetTextRenderInfo(
        Font *this,
        wchar_t *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        float *a7,
        unsigned int *a8,
        int a9,
        struct Str *a10)
{
  DWORD TickCount; // r13d
  unsigned int i; // esi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned int v22; // esi
  unsigned int v23; // ebx
  unsigned int NewText; // eax
  float *v25; // r8
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // [rsp+70h] [rbp+8h] BYREF

  TickCount = GetTickCount();
  for ( i = 0; i < 2; ++i )
  {
    v16 = *((_DWORD *)this + 2);
    if ( !v16 )
      break;
    if ( *((_DWORD *)this + 8) >= v16 )
      *((_DWORD *)this + 8) = 0;
    v17 = *((unsigned int *)this + 8);
    v18 = *((_QWORD *)this + 3);
    if ( TickCount - *(_DWORD *)(v18 + 48 * v17 + 4) <= 0x1388 )
    {
      *((_DWORD *)this + 8) = v17 + 1;
    }
    else
    {
      ResourceManager::DestroyResource(g_pResourceManager, *(_DWORD *)(v18 + 48 * v17 + 24));
      Font::CachedEntry::Cleanup((Font::CachedEntry *)(*((_QWORD *)this + 3) + 48LL * *((unsigned int *)this + 8)));
      v19 = *((int *)this + 8);
      if ( (unsigned int)v19 < *((_DWORD *)this + 2) - 1 )
      {
        v20 = 48 * v19;
        do
        {
          v21 = v20 + 48;
          memcpy((void *)(*((_QWORD *)this + 3) + v20), (const void *)(v20 + 48 + *((_QWORD *)this + 3)), 0x30u);
          LODWORD(v19) = v19 + 1;
          v20 = v21;
        }
        while ( (unsigned int)v19 < *((_DWORD *)this + 2) - 1 );
      }
      --*((_DWORD *)this + 2);
    }
  }
  v22 = a5;
  v23 = a6;
  if ( !Font::BinSearchFont(this, (char *)a2, a4, a5, a6, &v28, 0, *((_DWORD *)this + 2)) )
  {
    NewText = Font::CreateNewText(this, a2, a3, a4, v22, v23, a9, a10);
    v28 = NewText;
    if ( NewText >= *((_DWORD *)this + 2) )
    {
      Log(2u, 607, "Font.cpp", L"Couldn't create text: %s", a2);
      *a8 = 0;
      return;
    }
    *(_DWORD *)(*((_QWORD *)this + 3) + 48LL * NewText + 4) = TickCount;
  }
  v25 = a7;
  v26 = v28;
  *a7 = 0.0;
  v25[1] = *(float *)(*((_QWORD *)this + 3) + 48 * v26 + 32);
  v27 = *(_DWORD *)(*((_QWORD *)this + 3) + 48 * v26 + 28);
  v25[3] = 0.0;
  *((_DWORD *)v25 + 2) = v27;
  *a8 = *(_DWORD *)(*((_QWORD *)this + 3) + 48 * v26 + 24);
}
