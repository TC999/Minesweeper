char __fastcall RenderManager::RecreateDefaultResources(RenderManager *this)
{
  unsigned int v2; // esi
  _QWORD *v3; // rdi
  int CachedBackBuffer; // eax
  signed int v5; // eax
  signed int v6; // edi
  const unsigned __int16 *HResult; // rax
  const unsigned __int16 *v8; // r9
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rdx
  signed int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]

  Log(2u, 1465, "RenderManager.cpp", L"RecreateDefaultResources()");
  TextRenderer::OnDeviceLost(g_pTextRenderer);
  v2 = 0;
  v3 = (_QWORD *)((char *)this + 96);
  do
  {
    if ( *v3 )
    {
      CachedBackBuffer = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      if ( CachedBackBuffer < 0 )
        goto LABEL_8;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD, int, char *, _QWORD))(**((_QWORD **)this + 10) + 224LL))(
         *((_QWORD *)this + 10),
         4,
         4,
         *((unsigned int *)this + 1),
         0,
         0,
         1,
         (char *)this + 184,
         0);
  v6 = v5;
  if ( v5 < 0 )
  {
    HResult = GetHResult(v5);
    v8 = L"Cannot create render target, format: %d, hr %x(%s)";
    v9 = 1497;
LABEL_7:
    LODWORD(v15) = v6;
    LODWORD(v14) = *((_DWORD *)this + 1);
    Log(2u, v9, "RenderManager.cpp", v8, v14, v15, HResult);
    v10 = v6 == -2005532292;
    goto LABEL_9;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD, int, char *, _QWORD))(**((_QWORD **)this + 10) + 224LL))(
          *((_QWORD *)this + 10),
          4,
          4,
          *((unsigned int *)this + 1),
          0,
          0,
          1,
          (char *)this + 192,
          0);
  v6 = v13;
  if ( v13 < 0 )
  {
    HResult = GetHResult(v13);
    v8 = L"Cannot creata render target 2, format: %d, hr %x(%s)";
    v9 = 1518;
    goto LABEL_7;
  }
  CachedBackBuffer = RenderManager::CreateCachedBackBuffer(this);
  if ( CachedBackBuffer >= 0 )
    return 1;
LABEL_8:
  v10 = CachedBackBuffer == -2005532292;
LABEL_9:
  v11 = 257;
  if ( !v10 )
    v11 = 272;
  RenderManager::SetEngineState(this, v11);
  return 0;
}
