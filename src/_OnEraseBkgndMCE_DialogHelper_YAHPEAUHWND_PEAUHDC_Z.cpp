__int64 __fastcall DialogHelper::OnEraseBkgndMCE(DialogHelper *this, HWND a2, HDC a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 bottom; // rdx
  __int64 right; // rcx
  __int64 v9; // rsi
  HRGN RoundRectRgn; // rbx
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  struct Image *v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  __int64 v21; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-5Ch]
  int v25; // [rsp+60h] [rbp-58h]
  int v26; // [rsp+64h] [rbp-54h]
  unsigned int v27; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-4Ch]
  int v29; // [rsp+70h] [rbp-48h]
  int v30; // [rsp+74h] [rbp-44h]
  __int64 v31; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+20h] BYREF

  GetClientRect((HWND)this, &Rect);
  v4 = 0;
  if ( !DialogHelper::m_Background )
  {
    v5 = GdipAlloc(24);
    v6 = v5;
    if ( v5 )
    {
      bottom = (unsigned int)Rect.bottom;
      right = (unsigned int)Rect.right;
      *(_QWORD *)v5 = &Gdiplus::Image::`vftable';
      v31 = 0;
      *(_DWORD *)(v5 + 16) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD, __int64 *))GdipCreateBitmapFromScan0)(
                               right,
                               bottom,
                               0,
                               137224,
                               0,
                               &v31);
      *(_QWORD *)(v6 + 8) = v31;
    }
    else
    {
      v6 = 0;
    }
    DialogHelper::m_Background = (struct Image *)v6;
    v9 = 0;
    v31 = 0;
    if ( v6 )
    {
      ((void (__fastcall *)(_QWORD, __int64 *))GdipGetImageGraphicsContext)(*(_QWORD *)(v6 + 8), &v31);
      v9 = v31;
    }
    RoundRectRgn = CreateRoundRectRgn(4, 4, Rect.right - 3, Rect.bottom - 3, 10, 10);
    v32 = 0;
    ((void (__fastcall *)(HRGN, __int64 *))GdipCreateRegionHrgn)(RoundRectRgn, &v32);
    v11 = v32;
    DeleteObject(RoundRectRgn);
    ((void (__fastcall *)(__int64, __int64, __int64))GdipSetClipRegion)(v9, v11, 4);
    v19 = 0;
    ((void (__fastcall *)(__int64, __int64 *))GdipCreateSolidFill)(4291348735LL, &v19);
    v12 = v19;
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, LONG, LONG))GdipFillRectangleI)(
      v9,
      v19,
      (unsigned int)Rect.left,
      (unsigned int)Rect.top,
      Rect.right,
      Rect.bottom);
    LODWORD(RoundRectRgn) = Rect.right / 3;
    ((void (__fastcall *)(__int64, __int64, _QWORD))GdipSetClipRegion)(v9, v11, 0);
    v25 = Rect.right - (_DWORD)RoundRectRgn - 4;
    v23 = (unsigned int)RoundRectRgn;
    v24 = 4;
    v20 = 0;
    v26 = Rect.bottom - 8;
    ((void (__fastcall *)(unsigned int *, __int64, __int64, _QWORD, _DWORD, __int64 *))GdipCreateLineBrushFromRectI)(
      &v23,
      4284195013LL,
      4281497006LL,
      0,
      0,
      &v20);
    v13 = v20;
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, int))GdipFillRectangleI)(v9, v20, v23, v24, v25, v26);
    v29 = (int)RoundRectRgn;
    v27 = 4;
    v28 = 4;
    v30 = Rect.bottom - 8;
    v21 = 0;
    ((void (__fastcall *)(unsigned int *, __int64, __int64, _QWORD, _DWORD, __int64 *))GdipCreateLineBrushFromRectI)(
      &v27,
      4283471039LL,
      4284195013LL,
      0,
      0,
      &v21);
    v14 = v21;
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, int))GdipFillRectangleI)(v9, v21, v27, v28, v29, v30);
    if ( DialogHelper::m_bRTL )
    {
      v15 = DialogHelper::m_Background;
      v16 = ((__int64 (__fastcall *)(_QWORD, __int64))GdipImageRotateFlip)(
              *((_QWORD *)DialogHelper::m_Background + 1),
              4);
      if ( v16 )
        *((_DWORD *)v15 + 4) = v16;
    }
    ((void (__fastcall *)(__int64))GdipDeleteBrush)(v14);
    ((void (__fastcall *)(__int64))GdipDeleteBrush)(v13);
    ((void (__fastcall *)(__int64))GdipDeleteBrush)(v12);
    ((void (__fastcall *)(__int64))GdipDeleteRegion)(v11);
    ((void (__fastcall *)(__int64))GdipDeleteGraphics)(v9);
  }
  v31 = 0;
  ((void (__fastcall *)(HWND, __int64 *))GdipCreateFromHDC)(a2, &v31);
  v17 = v31;
  if ( DialogHelper::m_Background )
    v4 = *((_QWORD *)DialogHelper::m_Background + 1);
  ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, LONG, LONG))GdipDrawImageRectI)(
    v31,
    v4,
    (unsigned int)Rect.left,
    (unsigned int)Rect.top,
    Rect.right,
    Rect.bottom);
  ((void (__fastcall *)(__int64))GdipDeleteGraphics)(v17);
  return 1;
}
