// Hidden C++ exception states: #wind=1
Str *__fastcall EDifficultyToLocalizedStr(Str *a1, int a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  Str *v7; // rax
  __int64 v8; // rdx
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // rbx
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rbx
  _BYTE v14[32]; // [rsp+28h] [rbp-20h] BYREF

  Str::Str(a1, &String);
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v9 = LocalizeMessage(L"|55644|UI_DIFFICULTY|Custom//Custom difficulty");
          Str::operator=(a1, v9);
          LocalFree(v9);
        }
        else
        {
          v7 = Str::Str((Str *)v14, L"Invalid difficulty");
          LOBYTE(v8) = 1;
          StrErr(v7, v8);
        }
      }
      else
      {
        v10 = LocalizeMessage(L"|57645|UI_DIFFICULTY|Advanced//Advanced difficulty");
        Str::operator=(a1, v10);
        LocalFree(v10);
      }
    }
    else
    {
      v11 = LocalizeMessage(L"|56413|UI_DIFFICULTY|Intermediate//Intermediate difficulty");
      Str::operator=(a1, v11);
      LocalFree(v11);
    }
  }
  else
  {
    v12 = LocalizeMessage(L"|42480|UI_DIFFICULTY|Beginner//beginner difficulty");
    Str::operator=(a1, v12);
    LocalFree(v12);
  }
  return a1;
}
