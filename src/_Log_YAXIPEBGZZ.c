void Log(unsigned int a1, const unsigned __int16 *a2, ...)
{
  __int64 v3; // r9
  int v4; // eax
  wchar_t *v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx
  DWORD ModuleFileNameW; // eax
  __int64 v10; // rcx
  WCHAR *v11; // rdx
  HANDLE FileW; // rsi
  wchar_t *v13; // rdi
  __int64 v14; // rcx
  HANDLE StdHandle; // rax
  void *v16; // rsi
  HANDLE v17; // rbx
  wchar_t *v18; // rdi
  __int64 v19; // rcx
  wchar_t *v20; // rdi
  __int64 v21; // rcx
  DWORD NumberOfBytesWritten; // [rsp+40h] [rbp-E68h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-E60h] BYREF
  wchar_t Buffer[1022]; // [rsp+60h] [rbp-E48h] BYREF
  wchar_t v25[266]; // [rsp+85Ch] [rbp-64Ch] BYREF
  WCHAR Filename[512]; // [rsp+A70h] [rbp-438h] BYREF
  va_list va; // [rsp+EC0h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( (a1 & g_uiFileMask) != 0 || (a1 & g_uiConsoleMask) != 0 )
  {
    v3 = (unsigned int)(g_iCurrentLog + 1);
    g_iCurrentLog = v3;
    if ( (_DWORD)v3 == -1 )
    {
      DebugBreak();
      v3 = (unsigned int)g_iCurrentLog;
    }
    v4 = swprintf_s(Buffer, 0x400u, L"(%d) ", v3);
    vsnwprintf_s(&Buffer[v4], (unsigned int)(1024 - v4), 0xFFFFFFFFFFFFFFFFuLL, a2, va);
    v5 = Buffer;
    v6 = -1;
    do
    {
      if ( !v6 )
        break;
      v7 = *v5++ == 0;
      --v6;
    }
    while ( !v7 );
    v8 = -v6 - 2;
    if ( Buffer[(unsigned int)(v8 - 1)] != 10 )
    {
      if ( (unsigned int)v8 >= 0x3FF )
      {
        wcscpy(v25, L"\n");
      }
      else
      {
        Buffer[(unsigned int)v8] = 10;
        Buffer[(unsigned int)(v8 + 1)] = 0;
      }
    }
    if ( (a1 & g_uiFileMask) != 0 )
    {
      ModuleFileNameW = GetModuleFileNameW(0, Filename, 0x200u);
      if ( ModuleFileNameW >= 0x200 )
        ModuleFileNameW = 512;
      v10 = ModuleFileNameW - 1;
      if ( ModuleFileNameW )
      {
        v11 = &Filename[(int)v10];
        while ( *v11 != 47 && *v11 != 92 )
        {
          v10 = (unsigned int)(v10 - 1);
          --v11;
          if ( (unsigned int)v10 > ModuleFileNameW )
            goto LABEL_22;
        }
        Filename[v10] = 0;
      }
LABEL_22:
      GetCurrentDirectoryW(0x104u, &v25[2]);
      SetCurrentDirectoryW(Filename);
      FileW = CreateFileW(L"Log.txt", 0x40000000u, 0, 0, 4u, 0x80u, 0);
      SetCurrentDirectoryW(&v25[2]);
      if ( FileW != (HANDLE)-1LL )
      {
        SetFilePointer(FileW, 0, 0, 2u);
        PrintSystem(FileW, a1, 0);
        v13 = Buffer;
        v14 = -1;
        do
        {
          if ( !v14 )
            break;
          v7 = *v13++ == 0;
          --v14;
        }
        while ( !v7 );
        WriteFile(FileW, Buffer, 2 * ~(_DWORD)v14 - 2, &NumberOfBytesWritten, 0);
        CloseHandle(FileW);
      }
    }
    if ( (a1 & g_uiConsoleMask) != 0 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF5);
      v16 = StdHandle;
      if ( StdHandle )
      {
        PrintSystem(StdHandle, a1, 1);
        if ( GetFileType(v16) == 2 )
        {
          v20 = Buffer;
          v21 = -1;
          do
          {
            if ( !v21 )
              break;
            v7 = *v20++ == 0;
            --v21;
          }
          while ( !v7 );
          WriteConsoleW(v16, Buffer, -(int)v21 - 2, &NumberOfBytesWritten, 0);
        }
        else
        {
          SecurityAttributes.nLength = 24;
          SecurityAttributes.lpSecurityDescriptor = 0;
          SecurityAttributes.bInheritHandle = 1;
          v17 = CreateFileW(L"CONOUT$", 0xC0000000, 2u, &SecurityAttributes, 3u, 0x80u, 0);
          if ( v17 )
          {
            v18 = Buffer;
            v19 = -1;
            do
            {
              if ( !v19 )
                break;
              v7 = *v18++ == 0;
              --v19;
            }
            while ( !v7 );
            WriteConsoleW(v17, Buffer, -(int)v19 - 2, &NumberOfBytesWritten, 0);
            CloseHandle(v17);
          }
        }
      }
    }
  }
}
