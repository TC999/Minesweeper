int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HMODULE ModuleHandleW; // rax
  int v7; // eax
  char v8; // cl
  _QWORD *v9; // rbx
  const unsigned __int16 *(*v10)(unsigned int); // rax
  unsigned __int16 *v11; // [rsp+30h] [rbp-48h]
  bool v12; // [rsp+38h] [rbp-40h]
  DWORD pdwValue; // [rsp+40h] [rbp-38h] BYREF
  WCHAR Buffer; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+4Ah] [rbp-2Eh]
  __int64 v16; // [rsp+52h] [rbp-26h]
  __int64 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+62h] [rbp-16h]
  __int16 v19; // [rsp+66h] [rbp-12h]

  HeapSetInformation(0, HeapEnableTerminationOnCorruption, 0, 0);
  if ( GetSystemMetrics(67) )
  {
    LOBYTE(v11) = 1;
    DialogHelper::ShowMessageBox(0x385u, 0x374u, 1u, 0xFFFEu, 0, 0, v11, v12);
    return 1;
  }
  pdwValue = 1;
  SLGetWindowsInformationDWORD(L"Shell-InBoxGames-Minesweeper-EnableGame", &pdwValue);
  g_hInstance = hInstance;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  Buffer = 0;
  ModuleHandleW = GetModuleHandleW(0);
  if ( LoadStringW(ModuleHandleW, 0xFBCu, &Buffer, 16) )
  {
    v7 = lstrcmpW(&Buffer, L"0");
    v8 = g_Flowerbed;
    if ( !v7 )
      v8 = 1;
    g_Flowerbed = v8;
  }
  v9 = operator new(8u);
  if ( v9 )
    *v9 = &EngineHandler::`vftable';
  else
    v9 = 0;
  v10 = g_pLoggerNameResolver;
  if ( MsLog::MsLogResolver )
    v10 = (const unsigned __int16 *(*)(unsigned int))MsLog::MsLogResolver;
  g_pLoggerNameResolver = v10;
  if ( !InitializeEngine((struct IEngineInterface *)v9, 0) )
  {
    if ( v9 )
    {
      *v9 = &IEngineInterface::`vftable';
      operator delete(v9);
    }
    return 1;
  }
  if ( v9 )
  {
    *v9 = &IEngineInterface::`vftable';
    operator delete(v9);
  }
  return 0;
}
