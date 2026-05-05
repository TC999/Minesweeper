void __fastcall DialogHelper::PaintTrackbar(HWND hWnd, HWND a2)
{
  HDC v3; // r12
  LONG v4; // ebp
  __int64 v5; // r13
  HWND Parent; // rax
  __int64 v7; // rdx
  struct Image *v8; // rbx
  int ImageWidth; // eax
  __int64 v10; // rdx
  struct tagPOINT v11; // rbx
  __int64 v12; // rdx
  int v13; // r15d
  int v14; // ebx
  unsigned int v15; // r14d
  int v16; // r12d
  unsigned int v17; // esi
  unsigned int v18; // r15d
  LONG v19; // edx
  __int64 v20; // rsi
  HRGN RoundRectRgn; // rax
  HRGN v22; // rbx
  struct tagPOINT v23; // rbp
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  HDC v27; // rbx
  struct tagPOINT Points; // [rsp+50h] [rbp-E8h] BYREF
  struct tagRECT Rect; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-D0h] BYREF
  HDC v31; // [rsp+70h] [rbp-C8h] BYREF
  int v32; // [rsp+78h] [rbp-C0h]
  struct tagRECT lParam; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+98h] [rbp-A0h] BYREF
  int v36; // [rsp+A0h] [rbp-98h]
  __int64 v37; // [rsp+A8h] [rbp-90h] BYREF
  PAINTSTRUCT Paint; // [rsp+B0h] [rbp-88h] BYREF

  v3 = BeginPaint(hWnd, &Paint);
  v31 = v3;
  GetClientRect(hWnd, &Rect);
  v4 = 0;
  v34 = 0;
  GdipCreateBitmapFromScan0((unsigned int)Rect.right, (unsigned int)Rect.bottom, 0, 2498570, 0, &v34);
  v37 = 0;
  GdipGetImageGraphicsContext(v34, &v37);
  v5 = v37;
  if ( DialogHelper::m_Background )
  {
    Points.x = Rect.left;
    Points.y = Rect.top;
    Parent = GetParent(hWnd);
    MapWindowPoints(hWnd, Parent, &Points, 1u);
    if ( DialogHelper::m_bRTL )
    {
      v8 = DialogHelper::m_Background;
      LODWORD(v30) = 0;
      ImageWidth = GdipGetImageWidth(*((_QWORD *)DialogHelper::m_Background + 1), &v30);
      if ( ImageWidth )
        *((_DWORD *)v8 + 4) = ImageWidth;
      if ( DialogHelper::m_Background )
        v10 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v10 = 0;
      GdipDrawImagePointRectI(v5, v10, 0, 0, v30 - Points.x - Rect.right, Points.y, Rect.right, Rect.bottom, 2);
    }
    else
    {
      if ( DialogHelper::m_Background )
        v7 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v7 = 0;
      GdipDrawImagePointRectI(v5, v7, 0, 0, Points.x, Points.y, Rect.right, Rect.bottom, 2);
    }
  }
  SendMessageW(hWnd, 0x41Au, 0, (LPARAM)&lParam);
  Points = 0;
  ((void (__fastcall *)(__int64, struct tagPOINT *))GdipGetDC)(v5, &Points);
  v11 = Points;
  DrawEdge(*(HDC *)&Points, &lParam, 0xAu, 0x200Fu);
  ((void (__fastcall *)(_QWORD, _QWORD))GdipReleaseDC)(v5, v11);
  v13 = SendMessageW(hWnd, 0x410u, 0, 0);
  if ( v13 > 2 )
  {
    v14 = 0;
    v15 = lParam.bottom + 16;
    v16 = 0;
    v17 = 0;
    v35 = 0;
    v36 = GdipCreatePen1(2164260863LL, v12, 0, &v35);
    Points.x = v13 - 2;
    if ( v13 - 2 > 0 )
    {
      LODWORD(v30) = v13 - 3;
      do
      {
        v18 = SendMessageW(hWnd, 0x40Fu, v4, 0);
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int))GdipDrawLineI)(
          v5,
          v35,
          v18,
          v15,
          v18,
          v15 + 8);
        if ( !v4 )
          v14 = v18;
        if ( v4 == 1 )
        {
          v17 = v18 - v14;
          v14 -= v18 - v14;
        }
        if ( v4 == (_DWORD)v30 )
          v16 = v18 + v17;
        ++v4;
      }
      while ( v4 < Points.x );
      if ( v14 > 0 && v16 > 0 )
      {
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, unsigned int))GdipDrawLineI)(
          v5,
          v35,
          (unsigned int)v14,
          v15,
          v14,
          v15 + 8);
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, unsigned int))GdipDrawLineI)(
          v5,
          v35,
          (unsigned int)v16,
          v15,
          v16,
          v15 + 8);
      }
    }
    GdipDeletePen(v35);
    v3 = v31;
  }
  SendMessageW(hWnd, 0x419u, 0, (LPARAM)&lParam);
  if ( DialogHelper::m_bRTL )
  {
    v19 = Rect.right - lParam.right;
    lParam.right = Rect.right - lParam.left;
    lParam.left = v19;
  }
  if ( DialogHelper::m_hHotCtl == hWnd )
    Points.x = -1;
  else
    Points.x = -2130706433;
  v30 = 0;
  GdipCreateSolidFill((unsigned int)Points.x, &v30);
  v20 = v30;
  RoundRectRgn = CreateRoundRectRgn(lParam.left, lParam.top, lParam.right, lParam.bottom, 2, 2);
  Points = 0;
  v22 = RoundRectRgn;
  GdipCreateRegionHrgn(RoundRectRgn, &Points);
  v23 = Points;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))GdipFillRegion)(v5, v20, Points);
  DeleteObject(v22);
  if ( GetFocus() == hWnd )
  {
    v31 = 0;
    v32 = GdipCreatePen1(3238002687LL, v24, 0, &v31);
    v25 = GdipSetPenDashStyle(v31, 1);
    v26 = v32;
    if ( v25 )
      v26 = v25;
    v32 = v26;
    GdipDrawRectangleI(v5, v31, (unsigned int)Rect.left, (unsigned int)Rect.top, Rect.right - 1, Rect.bottom - 1);
    GdipDeletePen(v31);
  }
  v31 = 0;
  GdipCreateFromHDC(v3, &v31);
  v27 = v31;
  GdipDrawImageRectI(v31, v34, 0, 0, Rect.right, Rect.bottom);
  EndPaint(hWnd, &Paint);
  GdipDeleteGraphics(v27);
  ((void (__fastcall *)(_QWORD))GdipDeleteRegion)(v23);
  GdipDeleteBrush(v20);
  GdipDeleteGraphics(v5);
  GdipDisposeImage(v34);
}
