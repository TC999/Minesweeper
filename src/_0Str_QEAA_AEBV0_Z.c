Str *__fastcall Str::Str(Str *this, const wchar_t **a2)
{
  const wchar_t *v2; // rax
  wchar_t *v5; // rax

  v2 = *a2;
  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = (char *)v2 + 1;
  v5 = (wchar_t *)operator new(saturated_mul((unsigned __int64)v2 + 1, 2u));
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
  {
    wcscpy_s(v5, *((_QWORD *)this + 1), a2[2]);
  }
  else
  {
    *((_QWORD *)this + 1) = 0;
    *(_QWORD *)this = 0;
  }
  return this;
}
