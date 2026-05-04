char __fastcall Stash::LoadFile(Stash *this, wchar_t *a2, unsigned int a3)
{
  HANDLE FileW; // rax
  void *v7; // rbx
  void *SpecialFolderFile; // rax
  void *v9; // rcx
  unsigned int v11; // r14d
  LPVOID *v12; // rax
  LPVOID *v13; // r12
  void *v14; // rax
  DWORD v15; // r15d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  void *v18; // rax
  bool v19; // zf
  unsigned int Buffer; // [rsp+80h] [rbp+8h] BYREF
  DWORD NumberOfBytesRead; // [rsp+90h] [rbp+18h] BYREF

  (*(void (__fastcall **)(Stash *))(*(_QWORD *)this + 8LL))(this);
  NumberOfBytesRead = 0;
  if ( a3 )
  {
    SpecialFolderFile = (void *)CreateSpecialFolderFile(a2, 1, a3, 1, 102);
    v7 = SpecialFolderFile;
    if ( SpecialFolderFile == (void *)-1LL )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to open %s", a2);
      return 0;
    }
    if ( !(unsigned int)ReadSpecialFolderFileRichGameHeader(SpecialFolderFile) )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to read Rich Game Media header from %s", a2);
LABEL_10:
      v9 = v7;
      goto LABEL_11;
    }
  }
  else
  {
    FileW = CreateFileW(a2, 0x80000000, 0, 0, 3u, 0x80u, 0);
    v7 = FileW;
    if ( FileW == (HANDLE)-1LL )
    {
      Log(0x80u, L"Stash::LoadXMLFile(): Unable to open %s", a2);
      return 0;
    }
    if ( !(unsigned int)ReadSpecialFolderFileRichGameHeader(FileW) )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to read Rich Game Media header from %s", a2);
LABEL_41:
      v9 = v7;
      goto LABEL_42;
    }
  }
  Buffer = 0;
  NumberOfBytesRead = 0;
  if ( !ReadFile(v7, &Buffer, 4u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 4 )
  {
    Log(0x80u, L"Stash::LoadFile(): Unable to read buffer count from %s", a2);
    if ( !a3 )
      goto LABEL_41;
    goto LABEL_10;
  }
  v11 = 0;
  if ( !Buffer )
  {
LABEL_32:
    CloseSpecialFolderFile((__int64)v7, a3, 1);
    return 1;
  }
  while ( 1 )
  {
    v12 = (LPVOID *)operator new(0x10u);
    v13 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = 0;
      v12[1] = 0;
    }
    else
    {
      v13 = 0;
    }
    if ( !v13 )
      break;
    NumberOfBytesRead = 0;
    if ( !ReadFile(v7, v13, 4u, &NumberOfBytesRead, 0) || NumberOfBytesRead != 4 )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to read size of buffer[%d] from %s", v11, a2);
      goto LABEL_37;
    }
    v14 = operator new[](*(unsigned int *)v13);
    v13[1] = v14;
    if ( !v14 )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to allocate buffer[%d] for %s", v11, a2);
      goto LABEL_37;
    }
    NumberOfBytesRead = 0;
    v15 = *(_DWORD *)v13;
    if ( !ReadFile(v7, v13[1], *(_DWORD *)v13, &NumberOfBytesRead, 0)
      || NumberOfBytesRead != v15
      || NumberOfBytesRead != *(_DWORD *)v13 )
    {
      Log(0x80u, L"Stash::LoadFile(): Unable to read buffer[%d] from %s", v11, a2);
      (*(void (__fastcall **)(Stash *))(*(_QWORD *)this + 8LL))(this);
      v19 = a3 == 0;
      goto LABEL_34;
    }
    v16 = *((_DWORD *)this + 3);
    if ( ++*((_DWORD *)this + 2) <= v16 )
      goto LABEL_30;
    v17 = *((_DWORD *)this + 4) + v16;
    *((_DWORD *)this + 3) = v17;
    v18 = realloc(*((void **)this + 3), 8 * v17);
    if ( v18 )
    {
      *((_QWORD *)this + 3) = v18;
LABEL_30:
      *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 2) - 1)) = v13;
      goto LABEL_31;
    }
    CheckAllocation(0);
LABEL_31:
    if ( ++v11 >= Buffer )
      goto LABEL_32;
  }
  Log(0x80u, L"Stash::LoadFile(): Unable to allocate buffer object[%d] for %s", v11, a2);
LABEL_37:
  (*(void (__fastcall **)(Stash *))(*(_QWORD *)this + 8LL))(this);
  v19 = a3 == 0;
LABEL_34:
  v9 = v7;
  if ( !v19 )
  {
LABEL_11:
    CloseSpecialFolderFile((__int64)v9, a3, 1);
    return 0;
  }
LABEL_42:
  CloseHandle(v9);
  return 0;
}
