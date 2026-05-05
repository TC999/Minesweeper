bool __fastcall Stash::RemoveFile(Stash *this, const unsigned __int16 *a2, int a3)
{
  __int64 v3; // rcx
  const unsigned __int16 *v4; // rdi
  bool v5; // zf
  unsigned int v8; // edx
  __int64 v9; // rcx
  const unsigned __int16 *v10; // rax
  int v11; // r11d
  WCHAR Buffer[264]; // [rsp+30h] [rbp-438h] BYREF
  WCHAR PathName[264]; // [rsp+240h] [rbp-228h] BYREF

  v3 = -1;
  v4 = a2;
  do
  {
    if ( !v3 )
      break;
    v5 = *v4++ == 0;
    --v3;
  }
  while ( !v5 );
  v8 = 0;
  v9 = -v3 - 2;
  if ( (_DWORD)v9 )
  {
    v10 = a2;
    while ( *v10 != 58 )
    {
      ++v8;
      ++v10;
      if ( v8 >= (unsigned int)v9 )
        goto LABEL_8;
    }
    Log(0x80u, L"FileNames cannot have colons in them: %s", a2);
    goto LABEL_20;
  }
LABEL_8:
  if ( *a2 == 46 || *a2 == 47 || *a2 == 92 )
  {
    Log(0x80u, L"FileNames cannot start with a slash or a period: %s", a2);
    goto LABEL_20;
  }
  memset(PathName, 0, 0x104u);
  SHGetFolderPathW(0, a3, 0, 0, PathName);
  memset(Buffer, 0, 0x104u);
  GetCurrentDirectoryW(0x104u, Buffer);
  SetCurrentDirectoryW(PathName);
  if ( (a3 & 0x28) == 0x28 && !SetCurrentDirectoryW(L"Saved Games")
    || !SetCurrentDirectoryW(L"Microsoft Games")
    || !SetCurrentDirectoryW(g_wszProjectName)
    || !DeleteFileW(a2) )
  {
    SetCurrentDirectoryW(Buffer);
LABEL_20:
    v11 = 0;
    return v11 == 1;
  }
  SetCurrentDirectoryW(Buffer);
  v11 = 1;
  return v11 == 1;
}
