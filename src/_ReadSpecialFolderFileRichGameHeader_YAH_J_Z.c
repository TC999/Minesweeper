__int64 __fastcall ReadSpecialFolderFileRichGameHeader(HANDLE hFile)
{
  HANDLE v1; // r12
  _DWORD *v2; // rbx
  LONG v4; // edx
  __int64 NumberOfBytesRead; // [rsp+58h] [rbp+10h] BYREF

  v1 = hFile;
  try
  {
    v2 = operator new(0x2028u);
  }
  catch ( std::bad_alloc )
  {
    NumberOfBytesRead = 0;
    v1 = hFile;
    v2 = 0;
  }
  if ( !v2 )
    return 0;
  LODWORD(NumberOfBytesRead) = 0;
  if ( ReadFile(v1, v2, 0x2028u, (LPDWORD)&NumberOfBytesRead, 0)
    && (_DWORD)NumberOfBytesRead == 8232
    && *v2 == 1213024082
    && (v2[1] == 1 && v2[2] == 8232
     || v2[2] == 8240
     && (memmove(v2 + 3, v2 + 4, 0x2018u), v2[2] = 8232, *((_WORD *)v2 + 4114) = 0, SetFilePointer(v1, 8, 0, 1u) != -1))
    && ((v4 = v2[5]) == 0 || SetFilePointer(v1, v4, 0, 1u) != -1) )
  {
    operator delete(v2);
    return 1;
  }
  else
  {
    operator delete(v2);
    return 0;
  }
}
