void Log(unsigned int a1, unsigned int a2, const char *a3, const unsigned __int16 *a4, ...)
{
  int v7; // eax
  int v8; // ebx
  wchar_t *v9; // rcx
  size_t v10; // rdx
  int v11; // eax
  signed __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  wchar_t *v15; // rdi
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  DWORD ModuleFileNameW; // eax
  __int64 v20; // rcx
  WCHAR *v21; // rdx
  HANDLE FileW; // rbx
  wchar_t *v23; // rdi
  __int64 v24; // rcx
  HANDLE StdHandle; // rax
  void *v26; // rbx
  HANDLE v27; // rbx
  wchar_t *v28; // rdi
  __int64 v29; // rcx
  wchar_t *v30; // rdi
  __int64 v31; // rcx
  DWORD NumberOfBytesWritten; // [rsp+40h] [rbp-E78h] BYREF
  _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-E70h] BYREF
  wchar_t Buffer[1022]; // [rsp+60h] [rbp-E58h] BYREF
  wchar_t v35[266]; // [rsp+85Ch] [rbp-65Ch] BYREF
  WCHAR Filename[512]; // [rsp+A70h] [rbp-448h] BYREF
  va_list va; // [rsp+EE0h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( (a1 & g_uiFileMask) == 0 && (a1 & g_uiConsoleMask) == 0 )
    return;
  ++g_iCurrentLog;
  v7 = swprintf_s(Buffer, 0x400u, L"(%d) ");
  v8 = v7;
  if ( a3 )
  {
    v9 = &Buffer[v7];
    v10 = (unsigned int)(1024 - v7);
    if ( a2 )
      v11 = swprintf_s(v9, v10, L"(%S:%d) ", a3, a2);
    else
      v11 = swprintf_s(v9, v10, L"(%S) ", a3);
    goto LABEL_9;
  }
  if ( a2 )
  {
    v11 = swprintf_s(&Buffer[v7], (unsigned int)(1024 - v7), L"(%d) ", a2);
LABEL_9:
    v8 += v11;
    if ( a3 )
    {
      v12 = &g_szBreakFile - (_UNKNOWN *)a3;
      do
      {
        v13 = (unsigned __int8)a3[v12];
        v14 = *(unsigned __int8 *)a3 - v13;
        if ( v14 )
          break;
        ++a3;
      }
      while ( v13 );
      if ( !v14 && a2 == -1 )
        DebugBreak();
    }
  }
  if ( g_iCurrentLog == -1 )
    DebugBreak();
  vsnwprintf_s(&Buffer[v8], (unsigned int)(1024 - v8), 0xFFFFFFFFFFFFFFFFuLL, a4, va);
  v15 = Buffer;
  v16 = -1;
  do
  {
    if ( !v16 )
      break;
    v17 = *v15++ == 0;
    --v16;
  }
  while ( !v17 );
  v18 = -v16 - 2;
  if ( Buffer[(unsigned int)(v18 - 1)] != 10 )
  {
    if ( (unsigned int)v18 >= 0x3FF )
    {
      wcscpy(v35, L"\n");
    }
    else
    {
      Buffer[(unsigned int)v18] = 10;
      Buffer[(unsigned int)(v18 + 1)] = 0;
    }
  }
  if ( (a1 & g_uiFileMask) != 0 )
  {
    ModuleFileNameW = GetModuleFileNameW(0, Filename, 0x200u);
    if ( ModuleFileNameW >= 0x200 )
      ModuleFileNameW = 512;
    v20 = ModuleFileNameW - 1;
    if ( ModuleFileNameW )
    {
      v21 = &Filename[(int)v20];
      while ( *v21 != 47 && *v21 != 92 )
      {
        v20 = (unsigned int)(v20 - 1);
        --v21;
        if ( (unsigned int)v20 > ModuleFileNameW )
          goto LABEL_35;
      }
      Filename[v20] = 0;
    }
LABEL_35:
    GetCurrentDirectoryW(0x104u, &v35[2]);
    SetCurrentDirectoryW(Filename);
    FileW = CreateFileW(L"Log.txt", 0x40000000u, 0, 0, 4u, 0x80u, 0);
    SetCurrentDirectoryW(&v35[2]);
    if ( FileW != (HANDLE)-1LL )
    {
      SetFilePointer(FileW, 0, 0, 2u);
      PrintSystem(FileW, a1, 0);
      v23 = Buffer;
      v24 = -1;
      do
      {
        if ( !v24 )
          break;
        v17 = *v23++ == 0;
        --v24;
      }
      while ( !v17 );
      WriteFile(FileW, Buffer, 2 * ~(_DWORD)v24 - 2, &NumberOfBytesWritten, 0);
      CloseHandle(FileW);
    }
  }
  if ( (a1 & g_uiConsoleMask) != 0 )
  {
    StdHandle = GetStdHandle(0xFFFFFFF5);
    v26 = StdHandle;
    if ( StdHandle )
    {
      PrintSystem(StdHandle, a1, 1);
      if ( GetFileType(v26) == 2 )
      {
        v30 = Buffer;
        v31 = -1;
        do
        {
          if ( !v31 )
            break;
          v17 = *v30++ == 0;
          --v31;
        }
        while ( !v17 );
        WriteConsoleW(v26, Buffer, -(int)v31 - 2, &NumberOfBytesWritten, 0);
      }
      else
      {
        SecurityAttributes.nLength = 24;
        SecurityAttributes.lpSecurityDescriptor = 0;
        SecurityAttributes.bInheritHandle = 1;
        v27 = CreateFileW(L"CONOUT$", 0xC0000000, 2u, &SecurityAttributes, 3u, 0x80u, 0);
        if ( v27 )
        {
          v28 = Buffer;
          v29 = -1;
          do
          {
            if ( !v29 )
              break;
            v17 = *v28++ == 0;
            --v29;
          }
          while ( !v17 );
          WriteConsoleW(v27, Buffer, -(int)v29 - 2, &NumberOfBytesWritten, 0);
          CloseHandle(v27);
        }
      }
    }
  }
}
