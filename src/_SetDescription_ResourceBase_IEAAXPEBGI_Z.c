void __fastcall ResourceBase::SetDescription(void **this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rdi
  const wchar_t *v3; // rsi
  void *v5; // rax
  wchar_t *v6; // rcx

  v2 = LODWORD(ResourceBase::CacheCch[0]);
  v3 = ResourceBase::wszCache;
  if ( *((_DWORD *)this + 10) < LODWORD(ResourceBase::CacheCch[0]) )
  {
    operator delete(this[4]);
    v5 = operator new[](saturated_mul(v2, 2u));
    *((_DWORD *)this + 10) = v2;
    this[4] = v5;
  }
  v6 = (wchar_t *)this[4];
  if ( v6 )
    wcscpy_s(v6, *((unsigned int *)this + 10), v3);
}
