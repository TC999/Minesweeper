void __fastcall PrintSystem(HANDLE hFile, unsigned int a2, char a3)
{
  wchar_t *v6; // rbx
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  bool v9; // zf
  int v10; // ecx
  DWORD v11; // edi
  HANDLE v12; // rax
  void *v13; // rsi
  DWORD NumberOfCharsWritten; // [rsp+40h] [rbp-68h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-60h] BYREF
  wchar_t Buffer[16]; // [rsp+60h] [rbp-48h] BYREF

  v6 = Buffer;
  if ( a2 > 0x40 )
  {
    switch ( a2 )
    {
      case 0x80u:
        v6 = L"SaveFS: ";
        goto LABEL_30;
      case 0x100u:
        v6 = L"Nodes: ";
        goto LABEL_30;
      case 0x200u:
        v6 = L"Animation: ";
        goto LABEL_30;
      case 0x400u:
        v6 = L"Xml: ";
        goto LABEL_30;
      case 0x800u:
        v6 = L"UI: ";
        goto LABEL_30;
    }
    goto LABEL_21;
  }
  switch ( a2 )
  {
    case 0x40u:
      v6 = L"Event: ";
      goto LABEL_30;
    case 1u:
      v6 = L"ERROR: ";
      goto LABEL_30;
    case 2u:
      v6 = L"Rendering: ";
      goto LABEL_30;
    case 4u:
      v6 = L"Resources: ";
      goto LABEL_30;
    case 8u:
      v6 = L"Timekeeping: ";
      goto LABEL_30;
    case 0x10u:
      v6 = L"Core: ";
      goto LABEL_30;
  }
  if ( a2 != 32 )
  {
LABEL_21:
    if ( g_pLoggerNameResolver )
    {
      v6 = (wchar_t *)g_pLoggerNameResolver(a2);
      if ( v6 )
        goto LABEL_30;
      v6 = Buffer;
    }
    snwprintf_s(Buffer, 0x10u, 0xFFFFFFFFFFFFFFFFuLL, L"0x%08x: ", a2);
    goto LABEL_30;
  }
  v6 = L"PackedResource: ";
LABEL_30:
  v7 = -1;
  v8 = v6;
  do
  {
    if ( !v7 )
      break;
    v9 = *v8++ == 0;
    --v7;
  }
  while ( !v9 );
  v10 = ~(_DWORD)v7;
  v11 = v10 - 1;
  if ( a3 )
  {
    if ( GetFileType(hFile) == 2 )
    {
      WriteConsoleW(hFile, v6, v11, &NumberOfCharsWritten, 0);
    }
    else
    {
      SecurityAttributes.lpSecurityDescriptor = 0;
      SecurityAttributes.nLength = 24;
      SecurityAttributes.bInheritHandle = 1;
      v12 = CreateFileW(L"CONOUT$", 0xC0000000, 2u, &SecurityAttributes, 3u, 0x80u, 0);
      v13 = v12;
      if ( v12 )
      {
        WriteConsoleW(v12, v6, v11, &NumberOfCharsWritten, 0);
        CloseHandle(v13);
      }
    }
  }
  else
  {
    WriteFile(hFile, v6, 2 * v10 - 2, &NumberOfCharsWritten, 0);
  }
}
