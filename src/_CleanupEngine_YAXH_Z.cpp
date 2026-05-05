// Hidden C++ exception states: #wind=7
void __fastcall __noreturn CleanupEngine(UINT uExitCode)
{
  RenderManager *v2; // rbx
  Timer *v3; // rbx
  Audio *v4; // rbx
  __int64 v5; // rcx
  void *v6; // rcx
  XmlManager *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // r12
  void *v12; // rcx
  DllFileMgr *v13; // rbx
  void *v14; // rcx
  void *v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  signed int v20; // eax
  unsigned int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // r9
  void **v24; // rsi
  unsigned int v25; // edi
  __int64 v26; // rbx
  void *v27; // rcx
  void **v28; // rsi
  unsigned int v29; // edi
  __int64 v30; // rbx
  void *v31; // rcx

  Log(0x10u, L"CleanupEngine(%d)", uExitCode);
  if ( (_BYTE)g_bMediaCenter && g_hMouseHook )
    UnhookWindowsHookEx(g_hMouseHook);
  if ( g_hWnd )
  {
    WTSUnRegisterSessionNotification(g_hWnd);
    DestroyWindow(g_hWnd);
  }
  ShowCursor(1);
  operator delete(g_pSecondTimerCallback);
  g_pSecondTimerCallback = 0;
  if ( g_GdiPlusToken )
    ((void (*)(void))GdiplusShutdown)();
  if ( Timekeeping::g_CurrentTimeMethod == 1 )
    timeEndPeriod(0x21u);
  if ( g_pCommonController )
  {
    Thread::End(g_pCommonController);
    if ( g_pCommonController )
      (**(void (__fastcall ***)(Thread *, __int64))g_pCommonController)(g_pCommonController, 1);
  }
  g_pCommonController = 0;
  v2 = g_pRenderManager;
  if ( g_pRenderManager )
  {
    RenderManager::~RenderManager(g_pRenderManager);
    operator delete(v2);
  }
  g_pRenderManager = 0;
  v3 = g_pTimer;
  if ( g_pTimer )
  {
    SortedListI<Timer::TimerEvent>::~SortedListI<Timer::TimerEvent>((__int64)g_pTimer + 48);
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 11) = 0;
    free(*((void **)v3 + 3));
    free(*((void **)v3 + 4));
    *((_QWORD *)v3 + 3) = 0;
    *((_QWORD *)v3 + 4) = 0;
    SortedListI<Timer::TimerEvent>::~SortedListI<Timer::TimerEvent>((__int64)v3);
    operator delete(v3);
  }
  g_pTimer = 0;
  if ( g_pResourceManager )
    ResourceManager::`scalar deleting destructor'(g_pResourceManager, 1u);
  g_pResourceManager = 0;
  v4 = g_pAudio;
  if ( g_pAudio )
  {
    v5 = *((_QWORD *)g_pAudio + 2);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)v4 + 2) = 0;
    }
    v6 = (void *)*((_QWORD *)v4 + 6);
    if ( v6 )
      free(v6);
    operator delete(v4);
  }
  g_pAudio = 0;
  v7 = g_pXmlManager;
  if ( g_pXmlManager )
  {
    v8 = 0;
    if ( *(_DWORD *)g_pXmlManager )
    {
      v9 = 0;
      do
      {
        v10 = *(_QWORD *)(v9 + *((_QWORD *)v7 + 2));
        if ( v10 )
        {
          v11 = *(void **)(v10 + 8);
          if ( v11 )
          {
            XmlNode::~XmlNode(*(XmlNode **)(v10 + 8));
            operator delete(v11);
          }
          operator delete(*(void **)v10);
          operator delete((void *)v10);
        }
        ++v8;
        v9 += 8;
      }
      while ( v8 < *(_DWORD *)v7 );
    }
    v12 = (void *)*((_QWORD *)v7 + 2);
    if ( v12 )
      free(v12);
    operator delete(v7);
  }
  g_pXmlManager = 0;
  v13 = qword_1000AAC98;
  if ( qword_1000AAC98 )
  {
    CloseHandle(*((HANDLE *)qword_1000AAC98 + 1282));
    CabLoader::StaticExit();
    DllFileMgr::Close(v13);
    v14 = (void *)*((_QWORD *)v13 + 1292);
    if ( v14 )
      free(v14);
    operator delete(*((void **)v13 + 1289));
    v15 = (void *)*((_QWORD *)v13 + 1286);
    if ( v15 )
      free(v15);
    `eh vector destructor iterator'(
      v13,
      0x28u,
      256,
      (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
    Singleton<DllFileMgr>::s_Singleton = 0;
    operator delete(v13);
  }
  qword_1000AAC98 = 0;
  v16 = 0;
  if ( dword_1000AB640 )
  {
    v17 = 0;
    v18 = dword_1000AB658;
    do
    {
      v19 = *(unsigned int *)(*(_QWORD *)((char *)qword_1000AB638 + v17) + 16LL);
      if ( (_DWORD)v19 )
      {
        v20 = SortedListI<Event::RegisteredType>::BinSearch(&g_FileHandleMapping, v19, 0, v18);
        v21 = v20;
        if ( v20 < v18 - 1 )
        {
          v22 = 8LL * v20;
          v23 = 4LL * v20;
          do
          {
            *(_DWORD *)((char *)g_FileHandleMapping + v23) = *(_DWORD *)((char *)g_FileHandleMapping + v23 + 4);
            *(_QWORD *)((char *)qword_1000AB650 + v22) = *(_QWORD *)((char *)qword_1000AB650 + v22 + 8);
            ++v21;
            v23 += 4;
            v22 += 8;
            v18 = dword_1000AB658;
          }
          while ( v21 < dword_1000AB658 - 1 );
        }
        dword_1000AB658 = --v18;
      }
      v24 = *(void ***)((char *)qword_1000AB638 + v17);
      if ( v24 )
      {
        operator delete(v24[1]);
        operator delete(v24);
        v18 = dword_1000AB658;
      }
      ++v16;
      v17 += 8;
    }
    while ( v16 < dword_1000AB640 );
  }
  SortedListW<CachedFile *>::RemoveAll(&g_CachedFiles, 0);
  v25 = 0;
  if ( dword_1000AB658 )
  {
    v26 = 0;
    do
    {
      v27 = *(void **)(*(_QWORD *)((char *)qword_1000AB650 + v26) + 544LL);
      if ( v27 != (void *)-1LL )
        CloseHandle(v27);
      v28 = *(void ***)((char *)qword_1000AB650 + v26);
      if ( v28 )
      {
        operator delete(v28[1]);
        operator delete(v28);
      }
      ++v25;
      v26 += 8;
    }
    while ( v25 < dword_1000AB658 );
  }
  dword_1000AB658 = 0;
  v29 = 0;
  if ( LoadedFonts )
  {
    v30 = 0;
    do
    {
      RemoveFontResourceW(*(LPCWSTR *)((char *)qword_1000A6D50 + v30));
      operator delete(*(void **)((char *)qword_1000A6D50 + v30));
      ++v29;
      v30 += 8;
    }
    while ( v29 < LoadedFonts );
  }
  LoadedFonts = 0;
  LocalFree((HLOCAL)g_wszProjectName);
  CoUninitialize();
  LaunchMediaCenter((bool)g_bMediaCenter);
  v31 = g_pInterface;
  if ( g_pInterface )
  {
    *(_QWORD *)g_pInterface = &IEngineInterface::`vftable';
    operator delete(v31);
  }
  g_pInterface = 0;
  ExitProcess(uExitCode);
}
