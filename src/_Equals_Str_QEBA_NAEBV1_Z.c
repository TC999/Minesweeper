bool __fastcall Str::Equals(Str *this, const struct Str *a2)
{
  unsigned __int16 *v2; // r8
  bool result; // al
  __int64 v4; // r9
  int v5; // edx
  int v6; // ecx

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 2);
  result = 0;
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 2) - (_QWORD)v2;
    do
    {
      v5 = *(unsigned __int16 *)((char *)v2 + v4);
      v6 = *v2 - v5;
      if ( v6 )
        break;
      ++v2;
    }
    while ( v5 );
    return v6 == 0;
  }
  return result;
}
