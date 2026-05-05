__int64 __fastcall EDifficultyToHeight(int a1)
{
  int v1; // ecx
  Str *v2; // rax
  __int64 v3; // rdx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 - 1;
  if ( !v1 )
    return 9;
  if ( (unsigned int)(v1 - 1) >= 2 )
  {
    v2 = Str::Str((Str *)v5, L"Invalid difficulty");
    LOBYTE(v3) = 1;
    StrErr(v2, v3);
    return 9;
  }
  return 16;
}
