// Hidden C++ exception states: #wind=5
CHAR *__fastcall DllFileMgr::LoadResource(DllFileMgr *this, const struct Str *a2, CHAR *a3)
{
  CHAR *lpDefaultChar; // r14
  unsigned int v8; // esi
  char *v9; // rdi
  const wchar_t *v10; // rdx
  char *v12; // rax
  CHAR *v13; // r12
  WCHAR *v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rsi
  HMODULE v17; // r13
  HRSRC ResourceW; // rax
  DWORD v19; // eax
  __int64 v20; // rdi
  HGLOBAL Resource; // rax
  CHAR *v22; // rax
  CHAR *v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // rax
  unsigned int v26; // esi
  CHAR *v27; // rdi
  unsigned int v28; // ebx
  unsigned int v29; // eax
  CHAR *v30; // rdi
  CHAR *v31; // rbx
  HANDLE FileW; // rax
  void *v33; // r13
  signed int FileSize; // eax
  DWORD v35; // edi
  void *v36; // rsi
  unsigned int v37; // ecx
  __int128 v38; // xmm6
  unsigned int v39; // ecx
  void *v40; // rax
  DWORD LastError; // eax
  DWORD NumberOfBytesRead; // [rsp+44h] [rbp-1E4h] BYREF
  _BYTE v43[16]; // [rsp+48h] [rbp-1E0h] BYREF
  LPCWSTR lpName; // [rsp+58h] [rbp-1D0h]
  __int128 v45; // [rsp+60h] [rbp-1C8h]
  _BYTE v46[16]; // [rsp+70h] [rbp-1B8h] BYREF
  wchar_t *String1; // [rsp+80h] [rbp-1A8h]
  _BYTE v48[16]; // [rsp+88h] [rbp-1A0h] BYREF
  LPCWSTR lpFileName; // [rsp+98h] [rbp-190h]
  __int64 v50; // [rsp+A0h] [rbp-188h]
  char v51[16]; // [rsp+A8h] [rbp-180h] BYREF
  void *Block; // [rsp+B8h] [rbp-170h]
  CHAR MultiByteStr[272]; // [rsp+C0h] [rbp-168h] BYREF

  v50 = -2;
  lpDefaultChar = 0;
  if ( !*((_DWORD *)this + 2568) && !*((_QWORD *)this + 1287) )
  {
    Log(1u, L"DllFileMgr: Uninitialized yet tried to load '%s'!", *((_QWORD *)a2 + 2));
    return 0;
  }
  if ( *((_BYTE *)this + 10248) )
  {
    v8 = 0;
    v9 = (char *)this + 16;
    while ( 1 )
    {
      if ( !*((_QWORD *)v9 + 1) )
        goto LABEL_19;
      v10 = (const wchar_t *)*((_QWORD *)a2 + 2);
      if ( v10 && *(_QWORD *)v9 && _wcsicmp(*(const wchar_t **)v9, v10) == 0 )
        break;
      ++v8;
      v9 += 40;
      if ( v8 >= 0x100 )
      {
        v12 = 0;
LABEL_15:
        if ( !v12 )
          goto LABEL_19;
        if ( a3 )
          *(_DWORD *)a3 = *((_DWORD *)v12 + 8);
        return (CHAR *)*((_QWORD *)v12 + 3);
      }
    }
    v12 = (char *)this + 40 * (int)v8;
    goto LABEL_15;
  }
LABEL_19:
  v13 = 0;
  if ( *((_DWORD *)this + 2568) )
  {
    Str::Str((Str *)v43, (const wchar_t **)a2);
    v14 = (WCHAR *)lpName;
    if ( *lpName )
    {
      do
      {
        if ( *v14 == 47 )
          *v14 = 92;
        ++v14;
      }
      while ( *v14 );
      v14 = (WCHAR *)lpName;
    }
    v15 = 0;
    if ( !*((_DWORD *)this + 2568) )
      goto LABEL_39;
    v16 = 0;
    while ( 1 )
    {
      v17 = *(HMODULE *)(v16 + *((_QWORD *)this + 1286));
      ResourceW = FindResourceW(v17, v14, L"DATA");
      lpDefaultChar = (CHAR *)ResourceW;
      if ( ResourceW )
        break;
      ++v15;
      v16 += 8;
      if ( v15 >= *((_DWORD *)this + 2568) )
        goto LABEL_38;
      v14 = (WCHAR *)lpName;
    }
    v19 = SizeofResource(v17, ResourceW);
    v20 = v19;
    if ( v19 )
    {
      if ( a3 )
        *(_DWORD *)a3 = v19;
      Resource = LoadResource(v17, (HRSRC)lpDefaultChar);
      if ( Resource )
      {
        v22 = (CHAR *)LockResource(Resource);
        v13 = v22;
        if ( v22 )
        {
          if ( (int)v20 >= 1 )
          {
            v23 = v22;
            v24 = v20;
            do
            {
              ++v23;
              --v24;
            }
            while ( v24 );
          }
        }
      }
    }
LABEL_38:
    if ( lpDefaultChar )
    {
      lpDefaultChar = 0;
    }
    else
    {
LABEL_39:
      v25 = (__int64 *)Str::Str((Str *)v51, L".cab");
      Str::operator+=((__int64)v43, v25);
      operator delete(Block);
      v26 = (unsigned int)lpDefaultChar;
      if ( *((_DWORD *)this + 2568) > (unsigned int)lpDefaultChar )
      {
        v27 = lpDefaultChar;
        while ( FindResourceW(*(HMODULE *)&v27[*((_QWORD *)this + 1286)], lpName, L"DATA") == (HRSRC)lpDefaultChar )
        {
          ++v26;
          v27 += 8;
          if ( v26 >= *((_DWORD *)this + 2568) )
            goto LABEL_62;
        }
        WideCharToMultiByte(0, 0, lpName, -1, MultiByteStr, 260, lpDefaultChar, (LPBOOL)lpDefaultChar);
        MultiByteStr[259] = (char)lpDefaultChar;
        Str::Str((Str *)v46, &String);
        if ( (char *)pfnFDICopy == lpDefaultChar
          || pfnFDICopy(
               CabLoader::sCabContext,
               MultiByteStr,
               (char *)&qword_1000211C0,
               0,
               (__int64 (*)(enum FDINOTIFICATIONTYPE, struct FDINOTIFICATION *))CabLoader::ExtractCab_::_2_::LocalScope::CabNotify,
               (int (*)(struct FDIDECRYPT *))lpDefaultChar,
               v46) == (_DWORD)lpDefaultChar )
        {
          operator delete(String1);
        }
        else
        {
          v28 = (unsigned int)lpDefaultChar;
          v29 = CabLoader::sCabStreams;
          if ( CabLoader::sCabStreams > (unsigned int)lpDefaultChar )
          {
            v30 = lpDefaultChar;
            do
            {
              if ( *(CHAR **)((char *)qword_1000A7BB0 + (_QWORD)v30) != lpDefaultChar )
              {
                if ( _wcsicmp(String1, *(const wchar_t **)(*(_QWORD *)((char *)qword_1000A7BB0 + (_QWORD)v30) + 16LL)) == (_DWORD)lpDefaultChar )
                {
                  v31 = (CHAR *)*((_QWORD *)qword_1000A7BB0 + v28);
                  goto LABEL_55;
                }
                v29 = CabLoader::sCabStreams;
              }
              ++v28;
              v30 += 8;
            }
            while ( v28 < v29 );
          }
          v31 = lpDefaultChar;
LABEL_55:
          operator delete(String1);
          if ( v31 == lpDefaultChar )
            v31 = lpDefaultChar;
          if ( v31 != lpDefaultChar )
          {
            v13 = (CHAR *)*((_QWORD *)v31 + 3);
            if ( a3 != lpDefaultChar )
              *(_DWORD *)a3 = *((_DWORD *)v31 + 8);
          }
        }
      }
    }
LABEL_62:
    operator delete((void *)lpName);
    goto LABEL_78;
  }
  Str::Str((Str *)v48, (const wchar_t **)this + 1287);
  Str::operator+=((__int64)v48, (__int64 *)a2);
  FileW = CreateFileW(lpFileName, 0x80000000, 1u, 0, 3u, 0, 0);
  v33 = FileW;
  if ( FileW != (HANDLE)-1LL )
  {
    FileSize = GetFileSize(FileW, 0);
    v35 = FileSize;
    if ( FileSize == -1 )
    {
LABEL_76:
      CloseHandle(v33);
      goto LABEL_77;
    }
    if ( a3 )
      *(_DWORD *)a3 = FileSize;
    v36 = operator new(FileSize);
    *(_QWORD *)&v45 = v36;
    DWORD2(v45) = v35;
    NumberOfBytesRead = 0;
    if ( !ReadFile(v33, v36, v35, &NumberOfBytesRead, 0) || NumberOfBytesRead != v35 )
    {
LABEL_75:
      operator delete(v36);
      goto LABEL_76;
    }
    ++*((_DWORD *)this + 2580);
    v37 = *((_DWORD *)this + 2581);
    v38 = v45;
    if ( *((_DWORD *)this + 2580) > v37 )
    {
      v39 = *((_DWORD *)this + 2582) + v37;
      *((_DWORD *)this + 2581) = v39;
      v40 = realloc(*((void **)this + 1292), 16LL * v39);
      if ( !v40 )
      {
        CheckAllocation(0);
LABEL_74:
        v45 = v38;
        v36 = 0;
        v13 = (CHAR *)v38;
        goto LABEL_75;
      }
      *((_QWORD *)this + 1292) = v40;
    }
    *(_OWORD *)(*((_QWORD *)this + 1292) + 16LL * (unsigned int)(*((_DWORD *)this + 2580) - 1)) = v38;
    goto LABEL_74;
  }
LABEL_77:
  operator delete((void *)lpFileName);
LABEL_78:
  if ( v13 == lpDefaultChar )
  {
    LastError = GetLastError();
    Log(1u, L"DllFileMgr: Failed to load '%s' (0x%08X)!", *((_QWORD *)a2 + 2), LastError);
  }
  return v13;
}
