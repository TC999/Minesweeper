void __fastcall NodeLabel::SetText(NodeLabel *this, const unsigned __int16 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  const unsigned __int16 *v5; // rdi
  bool v6; // zf

  v2 = *(_QWORD *)this;
  v4 = -1;
  v5 = a2;
  do
  {
    if ( !v4 )
      break;
    v6 = *v5++ == 0;
    --v4;
  }
  while ( !v6 );
  (*(void (__fastcall **)(NodeLabel *, const unsigned __int16 *, _QWORD))(v2 + 120))(
    this,
    a2,
    (unsigned int)~(_DWORD)v4);
}
