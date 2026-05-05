char __fastcall GetCommandLineFilename(wchar_t *Destination, rsize_t SizeInWords)
{
  const WCHAR *CommandLineW; // rax
  LPWSTR *v5; // rax
  int v6; // r8d
  LPWSTR *v7; // rbx
  _WORD **i; // rdx
  int pNumArgs; // [rsp+40h] [rbp+18h] BYREF

  CommandLineW = GetCommandLineW();
  pNumArgs = 0;
  v5 = CommandLineToArgvW(CommandLineW, &pNumArgs);
  v6 = 1;
  v7 = v5;
  if ( pNumArgs <= 1 )
    return 0;
  for ( i = v5 + 1; **i == 47 || **i == 45; ++i )
  {
    if ( ++v6 >= pNumArgs )
      return 0;
  }
  if ( Destination )
    wcscpy_s(Destination, SizeInWords, v5[v6]);
  LocalFree(v7);
  return 1;
}
