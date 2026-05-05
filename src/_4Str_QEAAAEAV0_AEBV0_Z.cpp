__int64 __fastcall Str::operator=(__int64 a1, __int64 a2)
{
  _WORD *v2; // rdi
  __int64 v4; // rcx
  bool v6; // zf
  unsigned __int64 v7; // rdi
  size_t v8; // rax
  wchar_t *v9; // rcx
  rsize_t v10; // rdx

  v2 = *(_WORD **)(a2 + 16);
  v4 = -1;
  do
  {
    if ( !v4 )
      break;
    v6 = *v2++ == 0;
    --v4;
  }
  while ( !v6 );
  v7 = -v4 - 2;
  if ( *(_QWORD *)(a1 + 8) <= v7 )
  {
    operator delete(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 8) = v7 + 1;
    v8 = 2 * (v7 + 1);
    if ( !is_mul_ok(v7 + 1, 2u) )
      v8 = -1;
    *(_QWORD *)(a1 + 16) = operator new(v8);
  }
  v9 = *(wchar_t **)(a1 + 16);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
    wcscpy_s(v9, v10, *(const wchar_t **)(a2 + 16));
  }
  return a1;
}
