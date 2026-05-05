unsigned __int64 Str::AppendF(Str *this, const unsigned __int16 *a2, ...)
{
  int v3; // eax
  __int64 v4; // rbp
  size_t v5; // rsi
  unsigned __int64 v6; // rcx
  wchar_t *v7; // rdi
  const wchar_t *v8; // r8
  rsize_t v9; // rdx
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  v3 = _vscwprintf(a2, va);
  v4 = *(_QWORD *)this;
  v5 = v3;
  v6 = v3 + *(_QWORD *)this;
  *(_QWORD *)this = v6;
  if ( *((_QWORD *)this + 1) > v6 )
  {
    vsnwprintf_s((wchar_t *const)(*((_QWORD *)this + 2) + 2 * v4), v3 + 1, v3, a2, va);
  }
  else
  {
    v7 = (wchar_t *)operator new(saturated_mul(v6 + 1, 2u));
    if ( v7 )
    {
      v8 = (const wchar_t *)*((_QWORD *)this + 2);
      v9 = *(_QWORD *)this + 1LL;
      *((_QWORD *)this + 1) = v9;
      if ( v8 )
        wcscpy_s(v7, v9, v8);
      else
        *v7 = 0;
      vsnwprintf_s(&v7[v4], (int)v5 + 1, v5, a2, va);
      operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = v7;
    }
  }
  return *(_QWORD *)this;
}
