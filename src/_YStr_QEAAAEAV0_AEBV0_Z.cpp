__int64 __fastcall Str::operator+=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  rsize_t v4; // rdx
  wchar_t *v6; // rdi
  const wchar_t *v7; // r8
  rsize_t v8; // rdx

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 += v2;
  if ( v4 > *(_QWORD *)a1 )
  {
    wcscat_s(*(wchar_t **)(a1 + 16), v4, (const wchar_t *)a2[2]);
  }
  else
  {
    v6 = (wchar_t *)operator new(saturated_mul(*(_QWORD *)a1 + 1LL, 2u));
    if ( v6 )
    {
      v7 = *(const wchar_t **)(a1 + 16);
      v8 = *(_QWORD *)a1 + 1LL;
      *(_QWORD *)(a1 + 8) = v8;
      if ( v7 )
        wcscpy_s(v6, v8, v7);
      else
        *v6 = 0;
      wcscat_s(v6, *(_QWORD *)(a1 + 8), (const wchar_t *)a2[2]);
      operator delete(*(void **)(a1 + 16));
      *(_QWORD *)(a1 + 16) = v6;
    }
  }
  return a1;
}
