const struct DLGTEMPLATE *__fastcall GetFontSizeField(const struct DLGTEMPLATE *a1)
{
  const struct DLGTEMPLATE *v1; // rdx
  __int16 style; // ax
  __int16 v3; // cx
  __int16 v4; // cx

  v1 = (const struct DLGTEMPLATE *)((char *)a1 + 26);
  if ( HIWORD(a1->style) != 0xFFFF )
    v1 = a1 + 1;
  if ( LOWORD(v1->style) == 0xFFFF )
  {
    v1 = (const struct DLGTEMPLATE *)((char *)v1 + 4);
  }
  else
  {
    do
    {
      style = v1->style;
      v1 = (const struct DLGTEMPLATE *)((char *)v1 + 2);
    }
    while ( style );
  }
  if ( LOWORD(v1->style) == 0xFFFF )
  {
    v1 = (const struct DLGTEMPLATE *)((char *)v1 + 4);
  }
  else
  {
    do
    {
      v3 = v1->style;
      v1 = (const struct DLGTEMPLATE *)((char *)v1 + 2);
    }
    while ( v3 );
  }
  do
  {
    v4 = v1->style;
    v1 = (const struct DLGTEMPLATE *)((char *)v1 + 2);
  }
  while ( v4 );
  return v1;
}
