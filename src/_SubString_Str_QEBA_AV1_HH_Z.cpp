Str *__fastcall Str::SubString(__int64 a1, Str *a2, __int64 a3, int a4)
{
  int v5; // r8d

  if ( a4 < 0 || (v5 = a4, *(_QWORD *)a1 < (unsigned __int64)(unsigned int)a4) )
    v5 = *(_DWORD *)a1;
  Str::Str(a2, *(const unsigned __int16 **)(a1 + 16), v5);
  return a2;
}
