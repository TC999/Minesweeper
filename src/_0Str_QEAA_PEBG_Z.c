Str *__fastcall Str::Str(Str *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  wchar_t *v8; // rax

  if ( a2 )
  {
    v4 = a2;
    v5 = -1;
    do
    {
      if ( !v5 )
        break;
      v6 = *v4++ == 0;
      --v5;
    }
    while ( !v6 );
    v7 = -v5 - 2;
    *(_QWORD *)this = v7++;
    *((_QWORD *)this + 1) = v7;
    v8 = (wchar_t *)operator new(saturated_mul(v7, 2u));
    *((_QWORD *)this + 2) = v8;
    if ( v8 )
    {
      wcscpy_s(v8, *((_QWORD *)this + 1), a2);
    }
    else
    {
      *((_QWORD *)this + 1) = 0;
      *(_QWORD *)this = 0;
    }
  }
  else
  {
    *(_QWORD *)this = 0;
    *((_QWORD *)this + 1) = 0;
    *((_QWORD *)this + 2) = 0;
  }
  return this;
}
