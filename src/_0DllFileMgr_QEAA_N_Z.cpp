// Hidden C++ exception states: #wind=5
DllFileMgr *__fastcall DllFileMgr::DllFileMgr(DllFileMgr *this)
{
  HMODULE LibraryW; // rax
  void *v3; // rdi
  BOOL (__cdecl *FDIDestroy)(HFDI); // rax

  Singleton<DllFileMgr>::s_Singleton = this;
  `eh vector constructor iterator'(
    this,
    0x28u,
    256,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::ResourceCacheEntry,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
  *((_DWORD *)this + 2568) = 0;
  *((_DWORD *)this + 2569) = 0;
  *((_DWORD *)this + 2570) = 16;
  *((_QWORD *)this + 1286) = 0;
  *((_QWORD *)this + 1287) = 0;
  *((_QWORD *)this + 1288) = 0;
  *((_QWORD *)this + 1289) = 0;
  *((_DWORD *)this + 2580) = 0;
  *((_DWORD *)this + 2581) = 0;
  *((_DWORD *)this + 2582) = 16;
  *((_QWORD *)this + 1292) = 0;
  *((_QWORD *)this + 1282) = CreateEventW(0, 1, 0, 0);
  *((_QWORD *)this + 1283) = CreateEventW(0, 1, 0, 0);
  CabLoader::StaticExit();
  LibraryW = LoadLibraryW(L"CABINET");
  hModule = LibraryW;
  if ( LibraryW )
  {
    pfnFDICreate = (void *(*)(void *(*)(unsigned int), void (*)(void *), __int64 (*)(char *, int, int), unsigned int (*)(__int64, void *, unsigned int), unsigned int (*)(__int64, void *, unsigned int), int (*)(__int64), int (*)(__int64, int, int), int, struct ERF *))GetProcAddress(LibraryW, "FDICreate");
    pfnFDICopy = (int (*)(void *, char *, char *, int, __int64 (*)(enum FDINOTIFICATIONTYPE, struct FDINOTIFICATION *), int (*)(struct FDIDECRYPT *), void *))GetProcAddress(hModule, "FDICopy");
    pfnFDIIsCabinet = (int (*)(void *, __int64, struct FDICABINETINFO *))GetProcAddress(hModule, "FDIIsCabinet");
    FDIDestroy = (BOOL (__cdecl *)(HFDI))GetProcAddress(hModule, "FDIDestroy");
    pfnFDIDestroy = (int (*)(void *))FDIDestroy;
    if ( pfnFDICreate && pfnFDICopy && pfnFDIIsCabinet && FDIDestroy )
    {
      v3 = pfnFDICreate(
             (void *(*)(unsigned int))CabLoader::CabAlloc,
             (void (*)(void *))operator delete,
             (__int64 (*)(char *, int, int))CabLoader::CabOpenFunc,
             (unsigned int (*)(__int64, void *, unsigned int))CabLoader::CabReadFunc,
             (unsigned int (*)(__int64, void *, unsigned int))CabLoader::CabWriteFunc,
             (int (*)(__int64))CabLoader::CabCloseFunc,
             (int (*)(__int64, int, int))CabLoader::CabSeekFunc,
             0,
             &CabLoader::sCabErf);
      if ( !v3 )
        FreeLibrary(hModule);
    }
    else
    {
      FreeLibrary(hModule);
      v3 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  CabLoader::sCabContext = v3;
  *((_DWORD *)this + 2560) = 0;
  *((_DWORD *)this + 2561) = 0;
  *((_BYTE *)this + 10248) = 0;
  return this;
}
