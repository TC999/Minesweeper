void __fastcall TextRenderer::GetTextSize(
        TextRenderer *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  TextRenderer *v5; // rsi
  __int64 v8; // rdi
  HDC DC; // rbp
  __int64 v10; // rcx
  const unsigned __int16 *v11; // rdi
  bool v12; // zf
  int cx; // eax
  HWND v14; // rcx
  tagSIZE psizl; // [rsp+50h] [rbp+8h] BYREF

  psizl = (tagSIZE)this;
  v5 = g_pTextRenderer;
  v8 = a2;
  if ( a2 < *((_DWORD *)g_pTextRenderer + 2) )
  {
    DC = GetDC(g_hWnd);
    SelectObject(DC, **(HGDIOBJ **)(*((_QWORD *)v5 + 3) + 8 * v8));
    psizl.cx = 0;
    v10 = -1;
    v11 = a3;
    do
    {
      if ( !v10 )
        break;
      v12 = *v11++ == 0;
      --v10;
    }
    while ( !v12 );
    psizl.cy = 0;
    GetTextExtentPoint32W(DC, a3, -(int)v10 - 2, &psizl);
    if ( g_bDoubleDPI )
    {
      *a5 = psizl.cy / 2;
      cx = psizl.cx / 2;
    }
    else
    {
      *a5 = psizl.cy;
      cx = psizl.cx;
    }
    v14 = g_hWnd;
    *a4 = cx;
    ReleaseDC(v14, DC);
  }
  else
  {
    Log(0x800u, 572, "TextRenderer.cpp", L"Invalid font ID passed to GetTextSize (%d)", a2);
  }
}
