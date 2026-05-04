__int64 __fastcall RenderManager::CreateCachedBackBuffer(RenderManager *this)
{
  signed int v2; // eax
  unsigned int v3; // edi
  const unsigned __int16 *HResult; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rdx
  int v8; // ebp
  int i; // esi
  signed int v10; // eax
  const unsigned __int16 *v11; // rax
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-48h]

  Log(2u, 150, "RenderManager.cpp", L"CreateCachedBackBuffer()");
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned int, _DWORD, char *, _QWORD))(**((_QWORD **)this + 10) + 184LL))(
         *((_QWORD *)this + 10),
         *(unsigned int *)(*((_QWORD *)this + 8) + 8LL),
         *(unsigned int *)(*((_QWORD *)this + 8) + 12LL),
         1,
         1,
         23 - (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 8) + 16LL) != 16),
         0,
         (char *)this + 24,
         0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v13 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 8) = *(_DWORD *)(v13 + 8);
    *((_DWORD *)this + 9) = *(_DWORD *)(v13 + 12);
  }
  else
  {
    if ( v2 == -2005532292 )
    {
      Log(2u, 168, "RenderManager.cpp", L"Out of memory");
      return 2289435004LL;
    }
    HResult = GetHResult(v2);
    LODWORD(v18) = v3;
    LODWORD(v16) = *(_DWORD *)(v6 + 12);
    LODWORD(v14) = *(_DWORD *)(v6 + 8);
    Log(
      2u,
      172,
      "RenderManager.cpp",
      L"CreateTexture failed for cached backbuffer for resolution(%dx%d): %x (%s)",
      v14,
      v16,
      v18,
      HResult);
    Log(2u, 173, "RenderManager.cpp", L"Attempting CreateTexture with pow2 size");
    v7 = (_DWORD *)*((_QWORD *)this + 8);
    v8 = 1;
    for ( i = 1; v8 < v7[2]; v8 *= 2 )
      ;
    if ( (int)v7[3] > 1 )
    {
      do
        i *= 2;
      while ( i < v7[3] );
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned int, _DWORD, char *, _QWORD))(**((_QWORD **)this + 10) + 184LL))(
            *((_QWORD *)this + 10),
            (unsigned int)v8,
            (unsigned int)i,
            1,
            1,
            23 - (unsigned int)(v7[4] != 16),
            0,
            (char *)this + 24,
            0);
    v3 = v10;
    if ( v10 >= 0 )
    {
      Log(2u, 202, "RenderManager.cpp", L"CreateTexture Succeeded with pow2 size");
      *((_DWORD *)this + 8) = v8;
      *((_DWORD *)this + 9) = i;
    }
    else
    {
      v11 = GetHResult(v10);
      LODWORD(v19) = v12;
      LODWORD(v17) = i;
      LODWORD(v15) = v8;
      Log(
        2u,
        198,
        "RenderManager.cpp",
        L"CreateTexture failed for cached backbuffer for resolution(%dx%d): %x (%s)",
        v15,
        v17,
        v19,
        v11);
    }
  }
  return v3;
}
