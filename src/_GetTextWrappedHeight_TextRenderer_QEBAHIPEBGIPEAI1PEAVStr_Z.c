int __fastcall TextRenderer::GetTextWrappedHeight(
        TextRenderer *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        struct Str *a7)
{
  if ( a2 < *((_DWORD *)g_pTextRenderer + 2) )
    return Font::GetTextWrappedHeight(
             *(Font **)(*(_QWORD *)(*((_QWORD *)g_pTextRenderer + 3) + 8LL * a2) + 8LL),
             a3,
             a4,
             a5,
             a6,
             a7);
  Log(0x800u, 620, "TextRenderer.cpp", L"Invalid font ID passed to GetTextSize (%d)", a2);
  return 0;
}
