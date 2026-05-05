Str *__fastcall GetPathOnly(Str *a1, wchar_t *a2)
{
  const unsigned __int16 *FileName; // rax
  __int64 v5; // rcx
  wchar_t *v6; // rdi
  bool v7; // zf

  FileName = GetFileName(a2);
  if ( !FileName )
  {
    v5 = -1;
    v6 = a2;
    do
    {
      if ( !v5 )
        break;
      v7 = *v6++ == 0;
      --v5;
    }
    while ( !v7 );
    FileName = &a2[~v5 - 1];
  }
  Str::Str(a1, a2, FileName - a2);
  return a1;
}
