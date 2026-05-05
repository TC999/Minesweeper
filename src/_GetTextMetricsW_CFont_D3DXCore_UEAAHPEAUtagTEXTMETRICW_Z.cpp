__int64 __fastcall D3DXCore::CFont::GetTextMetricsW(D3DXCore::CFont *this, struct tagTEXTMETRICW *a2)
{
  if ( !a2 )
    return 0;
  memcpy(a2, (char *)this + 96, sizeof(struct tagTEXTMETRICW));
  return 1;
}
