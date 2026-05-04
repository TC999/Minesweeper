BOOL __fastcall CloseSpecialFolderFile(void *a1, char a2, char a3)
{
  BOOL result; // eax
  unsigned int v7; // ebx
  BOOL v8; // esi
  void **v9; // rdx
  __int64 v10; // rdi
  WCHAR Buffer[264]; // [rsp+30h] [rbp-878h] BYREF
  WCHAR NewFileName[264]; // [rsp+240h] [rbp-668h] BYREF
  wchar_t Destination[264]; // [rsp+450h] [rbp-458h] BYREF
  WCHAR PathName[264]; // [rsp+660h] [rbp-248h] BYREF

  result = CloseHandle(a1);
  v7 = 0;
  v8 = result;
  if ( !g_OpenFileList )
    return result;
  v9 = (void **)qword_1000A7B80;
  do
  {
    if ( *v9 == a1 )
      break;
    ++v7;
    v9 += 67;
  }
  while ( v7 < g_OpenFileList );
  if ( v7 >= g_OpenFileList )
    return result;
  memset(PathName, 0, 0x104u);
  v10 = 536LL * v7;
  SHGetFolderPathW(0, *(_DWORD *)((char *)qword_1000A7B80 + v10 + 8), 0, 0, PathName);
  memset(Buffer, 0, 0x104u);
  GetCurrentDirectoryW(0x104u, Buffer);
  SetCurrentDirectoryW(PathName);
  if ( (a2 & 0x28) == 0x28 )
  {
    if ( (int)SHGetFolderPathEx(&FOLDERID_SavedGames, 0, 0, NewFileName, 260) < 0 )
    {
LABEL_15:
      SetCurrentDirectoryW(Buffer);
      goto LABEL_16;
    }
    SetCurrentDirectoryW(NewFileName);
  }
  if ( !SetCurrentDirectoryW(L"Microsoft Games") || !SetCurrentDirectoryW(g_wszProjectName) )
    goto LABEL_15;
  wcscpy_s(Destination, 0x104u, (const wchar_t *)((char *)qword_1000A7B80 + v10 + 12));
  wcscat_s(Destination, 0x104u, L".tmp");
  if ( a3 )
  {
    wcscpy_s(NewFileName, 0x104u, (const wchar_t *)((char *)qword_1000A7B80 + v10 + 12));
    wcscat_s(NewFileName, 0x104u, L".bak");
    if ( GetFileAttributesW((LPCWSTR)((char *)qword_1000A7B80 + v10 + 12)) != -1
      && !MoveFileExW((LPCWSTR)((char *)qword_1000A7B80 + v10 + 12), NewFileName, 1u) )
    {
      SetCurrentDirectoryW(Buffer);
      Log(
        0x80u,
        197,
        "SaveFS.cpp",
        L"Couldn't move old file %s to the backup file %s",
        (char *)qword_1000A7B80 + v10 + 12,
        NewFileName);
LABEL_16:
      Array<SaveFileCopy>::Remove(&g_OpenFileList, v7);
      return 0;
    }
  }
  if ( !MoveFileExW(Destination, (LPCWSTR)((char *)qword_1000A7B80 + v10 + 12), 1u) )
  {
    SetCurrentDirectoryW(Buffer);
    Log(
      0x80u,
      207,
      "SaveFS.cpp",
      L"Couldn't move backup file %s to actual file %s",
      Destination,
      (char *)qword_1000A7B80 + v10 + 12);
    v8 = 0;
  }
  Array<SaveFileCopy>::Remove(&g_OpenFileList, v7);
  SetCurrentDirectoryW(Buffer);
  return v8;
}
