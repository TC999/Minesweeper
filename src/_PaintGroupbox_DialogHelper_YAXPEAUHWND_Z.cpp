void __fastcall DialogHelper::PaintGroupbox(HWND hWnd, HWND a2)
{
  HDC v3; // rdi
  __int64 v4; // r13
  WCHAR *v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  float v8; // xmm0_4
  __int16 WindowLongPtrW; // bx
  char v10; // r15
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  HRGN RoundRectRgn; // rbx
  HRGN v15; // rax
  HRGN v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  WCHAR *v19; // rdi
  __int64 v20; // rcx
  WCHAR *v21; // rdi
  __int64 v22; // rdi
  struct tagRECT Rect; // [rsp+50h] [rbp-328h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-318h] BYREF
  float v25; // [rsp+68h] [rbp-310h]
  float v26; // [rsp+6Ch] [rbp-30Ch]
  __int64 v27; // [rsp+70h] [rbp-308h]
  __int64 v28; // [rsp+78h] [rbp-300h] BYREF
  __int64 v29; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v30; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v31; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v32; // [rsp+98h] [rbp-2E0h]
  __int64 v33; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v34[4]; // [rsp+A8h] [rbp-2D0h] BYREF
  float v35[4]; // [rsp+B8h] [rbp-2C0h] BYREF
  _QWORD v36[3]; // [rsp+C8h] [rbp-2B0h] BYREF
  struct tagPAINTSTRUCT Paint; // [rsp+E0h] [rbp-298h] BYREF
  WCHAR String[256]; // [rsp+130h] [rbp-248h] BYREF

  v3 = BeginPaint(hWnd, &Paint);
  v30 = 0;
  GdipCreateFromHDC(v3, &v30);
  v4 = v30;
  GetClientRect(hWnd, &Rect);
  memset(String, 0, sizeof(String));
  GetWindowTextW(hWnd, String, 256);
  GdipSetTextRenderingHint(v4, 3);
  Gdiplus::Font::Font((Gdiplus::Font *)v36, v3, (HFONT)DialogHelper::m_hFont);
  v5 = String;
  v6 = -1;
  v34[0] = 0;
  v34[1] = 0;
  do
  {
    if ( !v6 )
      break;
    v7 = *v5++ == 0;
    --v6;
  }
  while ( !v7 );
  *(float *)&v34[2] = (float)Rect.right;
  *(float *)&v34[3] = (float)Rect.bottom;
  v24[0] = 0;
  v8 = 0.0;
  v24[1] = 0;
  v25 = 0.0;
  v26 = 0.0;
  if ( ~v6 != 1 )
  {
    GdipMeasureString(v4, String, 0xFFFFFFFFLL, v36[0], v34, 0, v24, 0, 0);
    v8 = v26;
  }
  WindowLongPtrW = GetWindowLongPtrW(hWnd, -16);
  v10 = GetWindowLongPtrW(hWnd, -20);
  v11 = Rect.top + (int)(float)(v8 * 0.5);
  v12 = WindowLongPtrW & 0x300;
  if ( v12 == 768 )
  {
    v13 = (Rect.right - (int)v25 - Rect.left) / 2;
  }
  else if ( v12 == 512 || DialogHelper::m_bRTL )
  {
    v13 = Rect.right - (int)v25 - 10;
  }
  else
  {
    v13 = Rect.left + 10;
  }
  RoundRectRgn = CreateRoundRectRgn(0, v11, Rect.right, Rect.bottom, 5, 5);
  v15 = CreateRoundRectRgn(2, v11 + 2, Rect.right - 2, Rect.bottom - 2, 5, 5);
  v31 = 0;
  v16 = v15;
  GdipCreateRegionHrgn(RoundRectRgn, &v31);
  v28 = 0;
  v27 = v31;
  GdipCreateRegionHrgn(v16, &v28);
  v32 = v28;
  DeleteObject(RoundRectRgn);
  DeleteObject(v16);
  LODWORD(RoundRectRgn) = (int)v25;
  LODWORD(v16) = (int)v26;
  GdipSetClipRegion(v4, v27, 0);
  GdipSetClipRegion(v4, v32, 4);
  ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int))GdipSetClipRectI)(
    v4,
    (unsigned int)(v13 - 2),
    0,
    (unsigned int)((_DWORD)RoundRectRgn + 2),
    (_DWORD)v16,
    4);
  v29 = 0;
  GdipCreateSolidFill(2164260863LL, &v29);
  v17 = v29;
  GdipFillRectangleI(v4, v29, (unsigned int)Rect.left, (unsigned int)Rect.top, Rect.right, Rect.bottom);
  v18 = -1;
  v19 = String;
  do
  {
    if ( !v18 )
      break;
    v7 = *v19++ == 0;
    --v18;
  }
  while ( !v7 );
  if ( ~v18 != 1 && (v10 & 0xC0) == 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, LONG, _DWORD))GdipSetClipRectI)(
      v4,
      (unsigned int)Rect.left,
      (unsigned int)Rect.top,
      (unsigned int)Rect.right,
      Rect.bottom,
      0);
    v33 = 0;
    GdipCreateSolidFill(0xFFFFFFFFLL, &v33);
    v20 = -1;
    v35[1] = 0.0;
    v35[2] = 0.0;
    v35[3] = 0.0;
    v21 = String;
    v35[0] = (float)v13;
    do
    {
      if ( !v20 )
        break;
      v7 = *v21++ == 0;
      --v20;
    }
    while ( !v7 );
    v22 = v33;
    GdipDrawString(v4, String, (unsigned int)(-(int)v20 - 2), v36[0], v35, 0, v33);
    GdipDeleteBrush(v22);
  }
  EndPaint(hWnd, &Paint);
  GdipDeleteBrush(v17);
  GdipDeleteRegion(v32);
  GdipDeleteRegion(v27);
  GdipDeleteFont(v36[0]);
  GdipDeleteGraphics(v4);
}
