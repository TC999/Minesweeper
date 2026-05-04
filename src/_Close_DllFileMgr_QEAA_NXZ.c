char __fastcall DllFileMgr::Close(DllFileMgr *this)
{
  char v2; // r12
  unsigned int v3; // ebx
  __int64 v4; // rsi
  BOOL v5; // eax
  void *v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rbx
  void *v10; // rcx

  v2 = 1;
  if ( *((_DWORD *)this + 2568) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = FreeLibrary(*(HMODULE *)(v4 + *((_QWORD *)this + 1286)));
      ++v3;
      v4 += 8;
      v2 = v5 ? v2 : 0;
    }
    while ( v3 < *((_DWORD *)this + 2568) );
    v6 = (void *)*((_QWORD *)this + 1286);
    *((_DWORD *)this + 2568) = 0;
    *((_DWORD *)this + 2569) = 0;
    free(v6);
    *((_QWORD *)this + 1286) = 0;
  }
  operator delete(*((void **)this + 1289));
  *((_QWORD *)this + 1287) = 0;
  *((_QWORD *)this + 1288) = 0;
  *((_QWORD *)this + 1289) = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 2580) )
  {
    v8 = 0;
    do
    {
      v9 = *((_QWORD *)this + 1292);
      operator delete(*(void **)(v8 + v9));
      *(_QWORD *)(v8 + v9) = 0;
      *(_DWORD *)(v8 + v9 + 8) = 0;
      ++v7;
      v8 += 16;
    }
    while ( v7 < *((_DWORD *)this + 2580) );
  }
  v10 = (void *)*((_QWORD *)this + 1292);
  *((_DWORD *)this + 2580) = 0;
  *((_DWORD *)this + 2581) = 0;
  free(v10);
  *((_QWORD *)this + 1292) = 0;
  return v2;
}
