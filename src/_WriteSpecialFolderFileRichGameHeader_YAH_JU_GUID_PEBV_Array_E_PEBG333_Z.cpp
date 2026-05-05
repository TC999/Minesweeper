__int64 __fastcall WriteSpecialFolderFileRichGameHeader(
        HANDLE hFile,
        const __m128i *a2,
        __int64 a3,
        const wchar_t *a4,
        wchar_t *Source)
{
  _DWORD *v9; // rdi
  __m128i v10; // xmm0
  unsigned int v11; // ebx
  DWORD v13; // r8d
  const void *v14; // rdx
  DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-48h] BYREF

  v9 = operator new(0x2028u);
  memset(v9, 0, 0x2028u);
  *v9 = 1213024082;
  v9[1] = 1;
  v9[2] = 8232;
  v10 = _mm_loadu_si128(a2);
  v11 = 0;
  *(__m128i *)(v9 + 6) = v10;
  if ( a3 )
  {
    *(_QWORD *)(v9 + 3) = 0;
    v9[5] = *(_DWORD *)a3;
  }
  if ( a4 )
    wcscpy_s((wchar_t *)v9 + 20, 0x3FFu, a4);
  if ( Source )
    wcscpy_s((wchar_t *)v9 + 1044, 0x3FFu, Source);
  NumberOfBytesWritten = 0;
  if ( WriteFile(hFile, v9, 0x2028u, &NumberOfBytesWritten, 0) )
  {
    if ( !a3
      || (v13 = *(_DWORD *)a3,
          v14 = *(const void **)(a3 + 16),
          NumberOfBytesWritten = 0,
          WriteFile(hFile, v14, v13, &NumberOfBytesWritten, 0)) )
    {
      v11 = 1;
    }
    operator delete(v9);
    return v11;
  }
  else
  {
    operator delete(v9);
    return 0;
  }
}
