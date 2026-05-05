Str *__fastcall Str::Str(Str *this, const unsigned __int16 *a2, int a3)
{
  unsigned __int64 v5; // rcx
  wchar_t *v6; // rax

  if ( a2 )
  {
    *(_QWORD *)this = a3;
    v5 = a3 + 1LL;
    *((_QWORD *)this + 1) = v5;
    v6 = (wchar_t *)operator new(saturated_mul(v5, 2u));
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
    {
      wcsncpy_s(v6, *((_QWORD *)this + 1), a2, *(_QWORD *)this);
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
