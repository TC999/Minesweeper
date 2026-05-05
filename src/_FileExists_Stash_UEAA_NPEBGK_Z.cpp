char __fastcall Stash::FileExists(Stash *this, wchar_t *a2, unsigned int a3)
{
  HANDLE FileW; // rax
  __int64 SpecialFolderFile; // rax

  if ( a3 )
  {
    SpecialFolderFile = CreateSpecialFolderFile(a2, 1, a3, 1, 102);
    if ( SpecialFolderFile == -1 )
      return 0;
    CloseSpecialFolderFile(SpecialFolderFile, a3, 1);
  }
  else
  {
    FileW = CreateFileW(a2, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if ( FileW == (HANDLE)-1LL )
      return 0;
    CloseHandle(FileW);
  }
  return 1;
}
