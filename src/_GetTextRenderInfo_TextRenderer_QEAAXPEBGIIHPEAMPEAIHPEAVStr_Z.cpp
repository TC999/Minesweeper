void __fastcall TextRenderer::GetTextRenderInfo(
        TextRenderer *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float *a6,
        unsigned int *a7,
        int a8,
        struct Str *a9)
{
  TextRenderer *v9; // rbp
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rdi
  bool v18; // zf

  v9 = g_pTextRenderer;
  v13 = ((a5 & 0x20) != 0 ? 0x24 : 0)
      | (2 * (((unsigned __int8)a5 | (unsigned __int8)(2 * a5)) & 0x10))
      | ((a5 & 4 | ((a5 & 0x80 | (a5 >> 3) & 8) >> 2)) >> 1);
  v14 = -((a5 & 1) != 0);
  a5 = 0;
  v15 = v14 & 0x28 | v13;
  GetProcessDefaultLayout(&a5);
  if ( (a5 & 1) != 0 )
    v15 |= 0x20000u;
  v16 = -1;
  v17 = a2;
  do
  {
    if ( !v16 )
      break;
    v18 = *v17++ == 0;
    --v16;
  }
  while ( !v18 );
  Font::GetTextRenderInfo(
    *(Font **)(*(_QWORD *)(*((_QWORD *)v9 + 3) + 8LL * *((unsigned int *)v9 + 8)) + 8LL),
    a2,
    -(int)v16 - 2,
    a3,
    a4,
    v15,
    a6,
    a7,
    a8,
    a9);
}
