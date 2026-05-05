void __fastcall DialogHelper::PaintRadioOrCheck(HWND hWnd, HWND a2)
{
  struct Image *v2; // r13
  struct Image *v3; // rbx
  struct Image *v4; // r14
  struct Image *v5; // r15
  int v7; // eax
  __int64 v8; // rsi
  LONG bottom; // ebp
  LRESULT v10; // rdi
  bool v11; // al
  int v12; // edi
  HWND Parent; // rax
  __int64 v14; // rdx
  struct Image *v15; // rdi
  int ImageWidth; // eax
  __int64 v17; // rdx
  struct tagPOINT v18; // r14
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r13
  const wchar_t *v24; // rdi
  __int64 v25; // rcx
  bool v26; // zf
  float v27; // xmm5_4
  __m128 v28; // xmm0
  unsigned int v29; // r15d
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  WCHAR *v33; // rdi
  __int64 v34; // rcx
  WCHAR *v35; // rdi
  __int64 v36; // rdx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r8
  struct tagPOINT v41; // rdi
  bool v42; // [rsp+50h] [rbp-338h]
  bool v43; // [rsp+51h] [rbp-337h]
  unsigned int v44; // [rsp+54h] [rbp-334h] BYREF
  struct tagRECT Rect; // [rsp+58h] [rbp-330h] BYREF
  struct tagPOINT Points; // [rsp+68h] [rbp-320h] BYREF
  int v47; // [rsp+70h] [rbp-318h]
  LRESULT v48; // [rsp+78h] [rbp-310h] BYREF
  int v49; // [rsp+80h] [rbp-308h]
  float left; // [rsp+88h] [rbp-300h] BYREF
  float v51; // [rsp+8Ch] [rbp-2FCh]
  float right; // [rsp+90h] [rbp-2F8h]
  float v53; // [rsp+94h] [rbp-2F4h]
  float v54; // [rsp+98h] [rbp-2F0h] BYREF
  float v55; // [rsp+9Ch] [rbp-2ECh]
  float v56; // [rsp+A0h] [rbp-2E8h]
  float v57; // [rsp+A4h] [rbp-2E4h]
  LRESULT v58; // [rsp+A8h] [rbp-2E0h] BYREF
  int v59; // [rsp+B0h] [rbp-2D8h]
  int v60; // [rsp+B4h] [rbp-2D4h]
  __int64 v61; // [rsp+B8h] [rbp-2D0h] BYREF
  LONG top; // [rsp+C0h] [rbp-2C8h]
  HDC v63; // [rsp+C8h] [rbp-2C0h]
  __int64 v64; // [rsp+D0h] [rbp-2B8h] BYREF
  HWND hWnda; // [rsp+D8h] [rbp-2B0h]
  __int64 v66; // [rsp+E0h] [rbp-2A8h] BYREF
  struct tagPAINTSTRUCT Paint; // [rsp+F0h] [rbp-298h] BYREF
  WCHAR String[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = DialogHelper::m_artChkBoxNF;
  v3 = DialogHelper::m_artChkBoxNFChecked;
  v4 = DialogHelper::m_artChkBox;
  v5 = DialogHelper::m_artChkBoxChecked;
  hWnda = hWnd;
  v7 = GetWindowLongW(hWnd, -16) & 0xF;
  if ( v7 == 4 || v7 == 9 )
  {
    v2 = DialogHelper::m_artRadioNF;
    v3 = DialogHelper::m_artRadioNFChecked;
    v4 = DialogHelper::m_artRadio;
    v5 = DialogHelper::m_artRadioChecked;
  }
  v63 = BeginPaint(hWnd, &Paint);
  GetClientRect(hWnd, &Rect);
  v61 = 0;
  GdipCreateBitmapFromScan0((unsigned int)Rect.right, (unsigned int)Rect.bottom, 0, 2498570, 0, &v61);
  v64 = 0;
  GdipGetImageGraphicsContext(v61, &v64);
  v8 = v64;
  bottom = Rect.bottom;
  top = Rect.top;
  v48 = SendMessageW(hWnd, 0xF0u, 0, 0);
  v10 = SendMessageW(hWnd, 0xF2u, 0, 0);
  v43 = IsWindowEnabled(hWnd);
  LOBYTE(v10) = (v10 & 8) != 0;
  v11 = DialogHelper::m_hHotCtl == hWnd;
  v58 = v10;
  v12 = 0;
  v42 = DialogHelper::m_hHotCtl == hWnd;
  if ( DialogHelper::m_Background )
  {
    Points.x = Rect.left;
    Points.y = Rect.top;
    Parent = GetParent(hWnd);
    MapWindowPoints(hWnd, Parent, &Points, 1u);
    if ( DialogHelper::m_bRTL )
    {
      v15 = DialogHelper::m_Background;
      v44 = 0;
      ImageWidth = GdipGetImageWidth(*((_QWORD *)DialogHelper::m_Background + 1), &v44);
      if ( ImageWidth )
        *((_DWORD *)v15 + 4) = ImageWidth;
      if ( DialogHelper::m_Background )
        v17 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v17 = 0;
      GdipDrawImagePointRectI(v8, v17, 0, 0, v44 - Points.x - Rect.right, Points.y, Rect.right, Rect.bottom, 2);
      v12 = 0;
    }
    else
    {
      if ( DialogHelper::m_Background )
        v14 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v14 = 0;
      GdipDrawImagePointRectI(v8, v14, 0, 0, Points.x, Points.y, Rect.right, Rect.bottom, 2);
    }
    v11 = v42;
  }
  if ( (v48 & 1) != 0 )
  {
    if ( v11 )
      v3 = v5;
  }
  else
  {
    v3 = v2;
    if ( v11 )
      v3 = v4;
  }
  memset(String, 0, sizeof(String));
  if ( GetWindowTextW(hWnd, String, 256) )
  {
    GdipSetTextRenderingHint(v8, 3);
    if ( v43 )
      v44 = -1;
    else
      v44 = -2130706433;
    Points = 0;
    GdipCreateSolidFill(v44, &Points);
    v18 = Points;
    Gdiplus::Font::Font((Gdiplus::Font *)&v66, v63, (HFONT)DialogHelper::m_hFont);
    v48 = 0;
    v49 = GdipCreateStringFormat(0, 0, &v48);
    v19 = GdipSetStringFormatLineAlign(v48, 1);
    v20 = v49;
    if ( v19 )
      v20 = v19;
    v49 = v20;
    v21 = GdipSetStringFormatHotkeyPrefix(v48, 1);
    v22 = v49;
    v23 = v66;
    left = 0.0;
    v51 = 0.0;
    v57 = 0.0;
    v56 = 0.0;
    if ( v21 )
      v22 = v21;
    v24 = L"H";
    v49 = v22;
    v25 = -1;
    right = (float)Rect.right;
    v53 = (float)Rect.bottom;
    v55 = 0.0;
    do
    {
      if ( !v25 )
        break;
      v26 = *v24++ == 0;
      --v25;
    }
    while ( !v26 );
    v54 = 0.0;
    ((void (__fastcall *)(__int64, const wchar_t *, _QWORD, __int64, float *, LRESULT, float *, _QWORD, _QWORD))GdipMeasureString)(
      v8,
      L"H",
      (unsigned int)(-(int)v25 - 2),
      v66,
      &left,
      v48,
      &v54,
      0,
      0);
    v27 = v57;
    if ( (int)(float)(v57 + 2.0) <= Rect.bottom )
    {
      v27 = v57 + 2.0;
      v57 = v57 + 2.0;
      v54 = v54 + (float)(0.0 - 1.0);
      v55 = v55 + (float)(0.0 - 1.0);
      v56 = v56 + 2.0;
    }
    bottom = (int)v27;
    v53 = (float)Rect.bottom;
    v28 = (__m128)COERCE_UNSIGNED_INT((float)Rect.bottom);
    v28.m128_f32[0] = v28.m128_f32[0] - v27;
    v29 = (int)(_mm_unpacklo_ps(v28, v28).m128_f32[0] * 0.5);
    v51 = (float)Rect.top;
    if ( DialogHelper::m_bRTL )
    {
      left = (float)Rect.left;
      right = (float)(Rect.right - bottom - 3);
      v30 = GdipSetStringFormatFlags(v48, 1);
      v31 = v49;
      if ( v30 )
        v31 = v30;
      v49 = v31;
    }
    else
    {
      left = (float)(Rect.left + bottom + 3);
      right = (float)(Rect.right - bottom - 3);
    }
    v32 = -1;
    v33 = String;
    do
    {
      if ( !v32 )
        break;
      v26 = *v33++ == 0;
      --v32;
    }
    while ( !v26 );
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))GdipDrawString)(
      v8,
      String,
      (unsigned int)(-(int)v32 - 2),
      v23,
      &left,
      v48,
      v18);
    v12 = 0;
    if ( (_BYTE)v58 )
    {
      v34 = -1;
      v35 = String;
      do
      {
        if ( !v34 )
          break;
        v26 = *v35++ == 0;
        --v34;
      }
      while ( !v26 );
      v12 = 0;
      v60 = 0;
      v59 = 0;
      v58 = 0;
      ((void (__fastcall *)(__int64, WCHAR *, _QWORD, __int64, float *, LRESULT, LRESULT *, _QWORD, _QWORD))GdipMeasureString)(
        v8,
        String,
        (unsigned int)(-(int)v34 - 2),
        v23,
        &left,
        v48,
        &v58,
        0,
        0);
      Points = 0;
      v47 = GdipCreatePen1(3238002687LL, v36, 0, &Points);
      v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD))GdipSetPenDashStyle)(Points, 1);
      v38 = v47;
      if ( v37 )
        v38 = v37;
      v47 = v38;
      ((void (__fastcall *)(_QWORD, _QWORD))GdipDrawRectangle)(v8, Points);
      ((void (__fastcall *)(_QWORD))GdipDeletePen)(Points);
    }
    GdipDeleteStringFormat(v48);
    GdipDeleteFont(v23);
    ((void (__fastcall *)(_QWORD))GdipDeleteBrush)(v18);
  }
  else
  {
    v29 = top;
  }
  while ( 1 )
  {
    if ( !v43 || (v39 = 4, v42) )
      v39 = 1;
    if ( v12 >= v39 )
      break;
    if ( v3 )
    {
      if ( DialogHelper::m_bRTL )
        v40 = (unsigned int)(Rect.right - bottom - 1);
      else
        v40 = (unsigned int)Rect.left;
      GdipDrawImageRectI(v8, *((_QWORD *)v3 + 1), v40, v29, bottom, bottom);
    }
    ++v12;
  }
  Points = 0;
  GdipCreateFromHDC(v63, &Points);
  v41 = Points;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))GdipDrawImageRectI)(
    Points,
    v61,
    0,
    0,
    Rect.right,
    Rect.bottom);
  EndPaint(hWnda, &Paint);
  ((void (__fastcall *)(_QWORD))GdipDeleteGraphics)(v41);
  GdipDeleteGraphics(v8);
  GdipDisposeImage(v61);
}
