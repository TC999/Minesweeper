void *Str::Format(void **this, const unsigned __int16 *a2, ...)
{
  int v3; // eax
  unsigned __int64 v4; // r11
  size_t v5; // rax
  wchar_t *v6; // rcx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v3 = _vscwprintf(a2, va);
  *this = (void *)v3;
  if ( (unsigned __int64)this[1] <= v3 )
  {
    operator delete(this[2]);
    v4 = (unsigned __int64)*this + 1;
    this[1] = (void *)v4;
    v5 = 2 * v4;
    if ( !is_mul_ok(v4, 2u) )
      v5 = -1;
    this[2] = operator new(v5);
  }
  v6 = (wchar_t *)this[2];
  if ( v6 )
  {
    vsnwprintf_s(v6, (size_t)*this + 1, (const size_t)*this, a2, va);
  }
  else
  {
    this[1] = 0;
    *this = 0;
  }
  return *this;
}
