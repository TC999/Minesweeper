__int64 __fastcall EDifficultyToMineCount(int a1)
{
  int v1; // ecx
  int v2; // ecx
  Str *v3; // rax
  __int64 v4; // rdx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 - 1;
  if ( !v1 )
    return 10;
  v2 = v1 - 1;
  if ( !v2 )
    return 40;
  if ( v2 != 1 )
  {
    v3 = Str::Str((Str *)v6, L"Invalid difficulty");
    LOBYTE(v4) = 1;
    StrErr(v3, v4);
    return 10;
  }
  return 99;
}
