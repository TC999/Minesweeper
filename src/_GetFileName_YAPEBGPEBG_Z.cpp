const unsigned __int16 *__fastcall GetFileName(wchar_t *String)
{
  wchar_t *v1; // rbx
  const wchar_t *v2; // rbx
  const wchar_t *v3; // rbx
  size_t v5; // rax
  wchar_t *v6; // rdi

  v1 = String;
  if ( !String )
    return 0;
  while ( *v1 == 92 && v1[1] == 92 )
  {
    v2 = &v1[wcscspn(v1 + 2, L"\\/") + 2];
    v3 = &v2[wcsspn(v2, L"\\/")];
    v1 = (wchar_t *)&v3[wcscspn(v3, L"\\/")];
    if ( !v1 )
      return 0;
  }
  while ( *v1 )
  {
    v5 = wcscspn(v1, L"\\/:");
    v6 = &v1[v5];
    if ( !*v6 )
      break;
    v1 = &v6[wcsspn(&v1[v5], L"\\/:")];
  }
  if ( *v1 != 46 || v1[1] && (v1[1] != 46 || v1[2]) )
    return (const unsigned __int16 *)((unsigned __int64)v1 & -(__int64)(*v1 != 0));
  else
    return 0;
}
