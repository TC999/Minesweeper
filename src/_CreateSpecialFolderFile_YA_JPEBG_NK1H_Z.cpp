__int64 __fastcall CreateSpecialFolderFile(wchar_t *Source, char a2, int a3, char a4, int idsRes)
{
  __int64 v6; // rcx
  wchar_t *v7; // rdi
  bool v9; // zf
  unsigned int v11; // edx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  wchar_t *v15; // rax
  signed int LastError; // eax
  DWORD v17; // edi
  const unsigned __int16 *v18; // r9
  int v19; // edx
  HRESULT v20; // edi
  const WCHAR *v21; // rsi
  const WCHAR *CommandLineW; // rax
  LPWSTR *v23; // rax
  LPWSTR *v24; // rdi
  HRESULT v25; // r12d
  DWORD v26; // edi
  DWORD v27; // edi
  unsigned int v28; // esi
  unsigned int v29; // edi
  const wchar_t *v30; // r14
  wchar_t *v31; // r12
  DWORD FileAttributesW; // eax
  DWORD v33; // edi
  __int64 v34; // rdi
  HANDLE FileW; // rdi
  wchar_t *v36; // rcx
  DWORD v38; // edi
  int v39; // ecx
  unsigned int v40; // eax
  char *v41; // rax
  char *v42; // rdx
  LPWSTR pszPath; // [rsp+20h] [rbp-CF8h]
  int pNumArgs[3]; // [rsp+44h] [rbp-CD4h] BYREF
  _BYTE Src[536]; // [rsp+50h] [rbp-CC8h] BYREF
  WCHAR pszDest[272]; // [rsp+270h] [rbp-AA8h] BYREF
  WCHAR Buffer[264]; // [rsp+490h] [rbp-888h] BYREF
  wchar_t Destination[264]; // [rsp+6A0h] [rbp-678h] BYREF
  wchar_t FileName[264]; // [rsp+8B0h] [rbp-468h] BYREF
  WCHAR PathName[264]; // [rsp+AC0h] [rbp-258h] BYREF

  v6 = -1;
  v7 = Source;
  do
  {
    if ( !v6 )
      break;
    v9 = *v7++ == 0;
    --v6;
  }
  while ( !v9 );
  v11 = 0;
  v13 = -v6 - 2;
  v14 = v13;
  if ( (_DWORD)v13 )
  {
    v15 = Source;
    while ( *v15 != 58 )
    {
      ++v11;
      ++v15;
      if ( v11 >= (unsigned int)v13 )
        goto LABEL_8;
    }
    Log(0x80u, L"FileNames cannot have colons in them: %s", Source);
    return -1;
  }
LABEL_8:
  if ( *Source == 46 || *Source == 47 || *Source == 92 )
  {
    Log(0x80u, L"FileNames cannot start with a slash or a period: %s", Source);
    return -1;
  }
  memset(PathName, 0, 0x104u);
  SHGetFolderPathW(0, a3, 0, 0, PathName);
  memset(Buffer, 0, 0x104u);
  GetCurrentDirectoryW(0x104u, Buffer);
  SetCurrentDirectoryW(PathName);
  if ( (a3 & 0x28) == 0x28 )
  {
    LastError = SHGetFolderPathEx(&FOLDERID_SavedGames, 0, 0, pszDest, 260);
    if ( LastError < 0 )
    {
      v18 = L"Couldn't set into the Saved Games directory. (WinError: %d)";
      v19 = 342;
LABEL_22:
      LODWORD(pszPath) = LastError;
      Log(0x80u, v19, "SaveFS.cpp", v18, pszPath);
LABEL_23:
      SetCurrentDirectoryW(Buffer);
      return -1;
    }
    SetCurrentDirectoryW(pszDest);
  }
  if ( !SetCurrentDirectoryW(L"Microsoft Games") )
  {
    if ( GetLastError() != 2 )
    {
      LastError = GetLastError();
      v18 = L"Couldn't set into the Microsoft Games directory. (WinError: %d)";
      v19 = 450;
      goto LABEL_22;
    }
    Log(0x80u, 395, "SaveFS.cpp", L"Microsoft Games directory not found - creating");
    if ( !CreateDirectoryW(L"Microsoft Games", 0) )
    {
      LastError = GetLastError();
      v18 = L"Unable to create Microsoft Games folder (WinError: %d)";
      v19 = 431;
      goto LABEL_22;
    }
    if ( a4 )
    {
      if ( !GetCurrentDirectoryW(0x104u, pszDest) )
      {
LABEL_19:
        v17 = GetLastError();
        SetCurrentDirectoryW(Buffer);
        Log(0x80u, L"Unable to get current directory: Error %d", v17);
        return -1;
      }
      if ( !PathCombineW(pszDest, pszDest, L"Microsoft Games") )
      {
LABEL_25:
        SetCurrentDirectoryW(Buffer);
        Log(0x80u, L"Unable to combine path.");
        return -1;
      }
      v20 = SHSetLocalizedName(pszDest, L"%SystemRoot%\\System32\\gameux.dll", 10046);
      if ( v20 < 0 )
      {
        SetCurrentDirectoryW(Buffer);
        Log(0x80u, L"Unable to localize Microsoft Games: Error %d", (unsigned int)v20);
        return -1;
      }
    }
    if ( !SetCurrentDirectoryW(L"Microsoft Games") )
    {
      LastError = GetLastError();
      v18 = L"After creating the Microsoft Games folder, unable to go into it. (WinError: %d)";
      v19 = 440;
      goto LABEL_22;
    }
  }
  v21 = g_wszProjectName;
  if ( !SetCurrentDirectoryW(g_wszProjectName) )
  {
    if ( GetLastError() != 2 )
      goto LABEL_46;
    if ( a2 )
      goto LABEL_23;
    if ( !CreateDirectoryW(v21, 0) )
    {
      v27 = GetLastError();
      SetCurrentDirectoryW(Buffer);
      Log(0x80u, L"Unable to create subdirectory %s in special folder: Error %d", v21, v27);
      return -1;
    }
    if ( a4 )
    {
      if ( !GetCurrentDirectoryW(0x104u, pszDest) )
        goto LABEL_19;
      if ( !PathCombineW(pszDest, pszDest, v21) )
        goto LABEL_25;
      CommandLineW = GetCommandLineW();
      if ( CommandLineW )
      {
        v23 = CommandLineToArgvW(CommandLineW, pNumArgs);
        v24 = v23;
        if ( v23 )
        {
          if ( pNumArgs[0] > 0 )
          {
            v25 = SHSetLocalizedName(pszDest, *v23, idsRes);
            if ( v25 < 0 )
            {
              SetCurrentDirectoryW(Buffer);
              Log(
                0x80u,
                L"Unable to localize name of subdirectory %s in special folder: Error %d",
                v21,
                (unsigned int)v25);
              LocalFree(v24);
              return -1;
            }
          }
          LocalFree(v24);
        }
      }
    }
    if ( !SetCurrentDirectoryW(v21) )
    {
LABEL_46:
      v26 = GetLastError();
      SetCurrentDirectoryW(Buffer);
      Log(0x80u, L"Unable to set current directory to special path: %s (Error %d)", v21, v26);
      return -1;
    }
  }
  v28 = 0;
  v29 = 0;
  v30 = Source;
  if ( v14 )
  {
    v31 = Source;
    do
    {
      if ( *v31 == 92 || *v31 == 47 )
      {
        wcsncpy_s(Destination, 0x104u, v30, v29 - (v30 - Source));
        FileAttributesW = GetFileAttributesW(Destination);
        if ( FileAttributesW == -1 )
        {
          if ( a2 )
          {
            v36 = Destination;
            goto LABEL_70;
          }
          if ( GetLastError() == 2 && !CreateDirectoryW(Destination, 0) )
          {
            v33 = GetLastError();
            SetCurrentDirectoryW(Buffer);
            Log(0x80u, L"Unable to create subdirectory: %s (Error %d)", Destination, v33);
            return -1;
          }
        }
        else if ( (FileAttributesW & 0x10) == 0 )
        {
          SetCurrentDirectoryW(Buffer);
          Log(0x80u, L"Subdirectory in special folder is a file, not a directory: %s, %s", Source, Destination);
          return -1;
        }
        ++v28;
        SetCurrentDirectoryW(Destination);
        v30 += v29 + 1;
      }
      ++v29;
      ++v31;
    }
    while ( v29 < v14 );
  }
  if ( v28 )
  {
    v34 = v28;
    do
    {
      SetCurrentDirectoryW(L"..\\");
      --v34;
    }
    while ( v34 );
  }
  wcscpy_s(FileName, 0x104u, Source);
  if ( !a2 )
    wcscat_s(FileName, 0x104u, L".tmp");
  FileW = CreateFileW(FileName, (a2 == 0 ? 0x40000000 : 0) | 0x80000000, 0, 0, (unsigned int)(a2 != 0) + 2, 0x80u, 0);
  if ( FileW != (HANDLE)-1LL )
  {
    SetCurrentDirectoryW(Buffer);
    if ( !a2 )
    {
      wcscpy_s(&pszDest[6], 0x104u, Source);
      *(_DWORD *)&pszDest[4] = a3;
      *(_QWORD *)pszDest = FileW;
      memcpy(Src, pszDest, sizeof(Src));
      v39 = dword_1000A7B74;
      v40 = g_OpenFileList + 1;
      g_OpenFileList = v40;
      if ( v40 <= dword_1000A7B74 )
      {
        v42 = (char *)qword_1000A7B80;
      }
      else
      {
        dword_1000A7B74 += dword_1000A7B78;
        v41 = (char *)realloc(qword_1000A7B80, 536LL * (unsigned int)(dword_1000A7B78 + v39));
        v42 = v41;
        if ( !v41 )
        {
          CheckAllocation(0);
          return (__int64)FileW;
        }
        qword_1000A7B80 = v41;
        v40 = g_OpenFileList;
      }
      memcpy(&v42[536 * v40 - 536], Src, 0x218u);
    }
    return (__int64)FileW;
  }
  if ( a2 && GetLastError() == 2 )
  {
    v36 = Buffer;
LABEL_70:
    SetCurrentDirectoryW(v36);
  }
  else
  {
    v38 = GetLastError();
    SetCurrentDirectoryW(Buffer);
    Log(0x80u, L"Unable to create file: %s (Error %d)", Source, v38);
  }
  return -1;
}
