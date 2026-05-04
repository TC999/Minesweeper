void __fastcall DialogHelper::OnDrawItemMCE(DialogHelper *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbp
  HWND v6; // rcx
  HWND Parent; // rax
  __int64 v8; // rdx
  struct Image *v9; // rdi
  int ImageWidth; // eax
  __int64 v11; // rdx
  struct Image *v12; // rsi
  struct Image *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  struct Image *v16; // rdi
  int v17; // r15d
  __int64 v18; // rcx
  int v19; // eax
  struct Image *v20; // rdi
  int v21; // r13d
  __int64 v22; // rcx
  int v23; // eax
  struct Image *v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  struct Image *v27; // r12
  struct Image *v28; // rsi
  struct Image *v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  struct Image *v32; // rdi
  __int64 v33; // rcx
  int v34; // eax
  struct Image *v35; // rdi
  __int64 v36; // rcx
  int v37; // eax
  struct Image *v38; // rdi
  __int64 v39; // rcx
  int ImageHeight; // eax
  int v41; // r14d
  unsigned __int32 v42; // eax
  unsigned __int32 v43; // ecx
  __int64 v44; // r8
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // eax
  int v53; // ecx
  int v54; // r9d
  int v55; // r8d
  int v56; // eax
  struct tagPOINT v57; // rsi
  __m128i v58; // xmm0
  __m128i v59; // xmm5
  __m128i v60; // xmm1
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  __int64 v70; // rcx
  WCHAR *v71; // rdi
  bool v72; // zf
  __int64 v73; // rcx
  struct tagPOINT v74; // rdi
  int v75; // [rsp+70h] [rbp-298h] BYREF
  int v76; // [rsp+74h] [rbp-294h] BYREF
  struct tagPOINT Points; // [rsp+78h] [rbp-290h] BYREF
  int v78; // [rsp+80h] [rbp-288h]
  __int64 v79; // [rsp+88h] [rbp-280h] BYREF
  int v80; // [rsp+90h] [rbp-278h]
  __int64 v81; // [rsp+98h] [rbp-270h] BYREF
  unsigned __int32 v82; // [rsp+A0h] [rbp-268h]
  float v83; // [rsp+A4h] [rbp-264h]
  int v84; // [rsp+A8h] [rbp-260h]
  unsigned int v85[4]; // [rsp+B0h] [rbp-258h] BYREF
  int v86; // [rsp+C0h] [rbp-248h]
  __int64 v87; // [rsp+C8h] [rbp-240h] BYREF
  WCHAR String[256]; // [rsp+D0h] [rbp-238h] BYREF

  v1 = *((unsigned int *)this + 13);
  v3 = *((unsigned int *)this + 12);
  *(_QWORD *)v85 = 0;
  GdipCreateBitmapFromScan0(v3, v1, 0, 2498570, 0, v85);
  v4 = *(_QWORD *)v85;
  v79 = *(_QWORD *)v85;
  v87 = 0;
  GdipGetImageGraphicsContext(*(_QWORD *)v85, &v87);
  v5 = v87;
  if ( DialogHelper::m_Background )
  {
    v6 = (HWND)*((_QWORD *)this + 3);
    Points = (struct tagPOINT)*((_QWORD *)this + 5);
    Parent = GetParent(v6);
    MapWindowPoints(*((HWND *)this + 3), Parent, &Points, 1u);
    if ( DialogHelper::m_bRTL )
    {
      v9 = DialogHelper::m_Background;
      v75 = 0;
      ImageWidth = GdipGetImageWidth(*((_QWORD *)DialogHelper::m_Background + 1), &v75);
      if ( ImageWidth )
        *((_DWORD *)v9 + 4) = ImageWidth;
      if ( DialogHelper::m_Background )
        v11 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v11 = 0;
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, LONG, _DWORD, _DWORD, int))GdipDrawImagePointRectI)(
        v5,
        v11,
        0,
        0,
        v75 - *((_DWORD *)this + 12) - Points.x,
        Points.y,
        *((_DWORD *)this + 12),
        *((_DWORD *)this + 13),
        2);
    }
    else
    {
      if ( DialogHelper::m_Background )
        v8 = *((_QWORD *)DialogHelper::m_Background + 1);
      else
        v8 = 0;
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, LONG, LONG, _DWORD, _DWORD, int))GdipDrawImagePointRectI)(
        v5,
        v8,
        0,
        0,
        Points.x,
        Points.y,
        *((_DWORD *)this + 12),
        *((_DWORD *)this + 13),
        2);
    }
  }
  v12 = DialogHelper::m_artButLeft;
  if ( DialogHelper::m_artButLeft )
  {
    if ( DialogHelper::m_artButRight )
    {
      if ( DialogHelper::m_artButCenter )
      {
        if ( DialogHelper::m_artButNFRight )
        {
          if ( DialogHelper::m_artButNFCenter )
          {
            v13 = DialogHelper::m_artButNFLeft;
            if ( DialogHelper::m_artButNFLeft )
            {
              if ( (*((_BYTE *)this + 16) & 0x40) != 0 || DialogHelper::m_hHotCtl == *((HWND *)this + 3) )
              {
                v30 = *((_QWORD *)DialogHelper::m_artButLeft + 1);
                v76 = 0;
                v31 = GdipGetImageWidth(v30, &v76);
                if ( v31 )
                  *((_DWORD *)v12 + 4) = v31;
                v32 = DialogHelper::m_artButRight;
                v17 = v76;
                v33 = *((_QWORD *)DialogHelper::m_artButRight + 1);
                v75 = 0;
                v34 = GdipGetImageWidth(v33, &v75);
                if ( v34 )
                  *((_DWORD *)v32 + 4) = v34;
                v35 = DialogHelper::m_artButCenter;
                v21 = v75;
                v36 = *((_QWORD *)DialogHelper::m_artButCenter + 1);
                v76 = 0;
                v37 = GdipGetImageWidth(v36, &v76);
                if ( v37 )
                  *((_DWORD *)v35 + 4) = v37;
                v38 = DialogHelper::m_artButCenter;
                v39 = *((_QWORD *)DialogHelper::m_artButCenter + 1);
                v84 = v76;
                v75 = 0;
                ImageHeight = GdipGetImageHeight(v39, &v75);
                if ( ImageHeight )
                  *((_DWORD *)v38 + 4) = ImageHeight;
                v27 = DialogHelper::m_artButLeft;
                v28 = DialogHelper::m_artButRight;
                v29 = DialogHelper::m_artButCenter;
              }
              else
              {
                v14 = *((_QWORD *)DialogHelper::m_artButNFLeft + 1);
                v76 = 0;
                v15 = GdipGetImageWidth(v14, &v76);
                if ( v15 )
                  *((_DWORD *)v13 + 4) = v15;
                v16 = DialogHelper::m_artButNFRight;
                v17 = v76;
                v18 = *((_QWORD *)DialogHelper::m_artButNFRight + 1);
                v75 = 0;
                v19 = GdipGetImageWidth(v18, &v75);
                if ( v19 )
                  *((_DWORD *)v16 + 4) = v19;
                v20 = DialogHelper::m_artButNFCenter;
                v21 = v75;
                v22 = *((_QWORD *)DialogHelper::m_artButNFCenter + 1);
                v76 = 0;
                v23 = GdipGetImageWidth(v22, &v76);
                if ( v23 )
                  *((_DWORD *)v20 + 4) = v23;
                v24 = DialogHelper::m_artButNFCenter;
                v25 = *((_QWORD *)DialogHelper::m_artButNFCenter + 1);
                v84 = v76;
                v75 = 0;
                v26 = GdipGetImageHeight(v25, &v75);
                if ( v26 )
                  *((_DWORD *)v24 + 4) = v26;
                v27 = DialogHelper::m_artButNFLeft;
                v28 = DialogHelper::m_artButNFRight;
                v29 = DialogHelper::m_artButNFCenter;
              }
              v41 = v75;
              v81 = 0;
              v82 = ((__int64 (__fastcall *)(__int64 *))GdipCreateImageAttributes)(&v81);
              v42 = ((__int64 (__fastcall *)(__int64, __int64, __int64))GdipSetImageAttributesWrapMode)(
                      v81,
                      3,
                      4278190080LL);
              v43 = v82;
              v44 = *((unsigned int *)this + 10);
              if ( v42 )
                v43 = v42;
              Points.x = v44 + v17;
              v45 = *((_DWORD *)this + 12);
              v82 = v43;
              v46 = *((_DWORD *)this + 11);
              v85[0] = v46;
              v86 = v45 - v21 - v17;
              v47 = *((_DWORD *)this + 13);
              v76 = v47;
              if ( v27 )
                v48 = *((_QWORD *)v27 + 1);
              else
                v48 = 0;
              GdipDrawImageRectI(v5, v48, v44, v46, v17, v47);
              if ( v29 )
                v49 = *((_QWORD *)v29 + 1);
              else
                v49 = 0;
              ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int, int, _DWORD, _DWORD, int, int, int, __int64, _QWORD, _QWORD))GdipDrawImageRectRectI)(
                v5,
                v49,
                (unsigned int)Points.x,
                v85[0],
                v86,
                v76,
                0,
                0,
                v84,
                v41,
                2,
                v81,
                0,
                0);
              if ( v28 )
                v50 = *((_QWORD *)v28 + 1);
              else
                v50 = 0;
              GdipDrawImageRectI(
                v5,
                v50,
                (unsigned int)(*((_DWORD *)this + 12) - v21),
                *((unsigned int *)this + 11),
                v21,
                *((_DWORD *)this + 13));
              if ( (*((_BYTE *)this + 16) & 0x11) != 0 )
              {
                Points = 0;
                v78 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, struct tagPOINT *))GdipCreatePen1)(
                        3238002687LL,
                        v51,
                        0,
                        &Points);
                v52 = ((__int64 (__fastcall *)(_QWORD, _QWORD))GdipSetPenDashStyle)(Points, 1);
                v53 = v78;
                v54 = *((_DWORD *)this + 11);
                v55 = *((_DWORD *)this + 10);
                if ( v52 )
                  v53 = v52;
                v56 = *((_DWORD *)this + 12);
                v78 = v53;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))GdipDrawRectangleI)(
                  v5,
                  Points,
                  (unsigned int)(v55 + 5),
                  (unsigned int)(v54 + 5),
                  v56 - 10,
                  *((_DWORD *)this + 13) - 10);
                ((void (__fastcall *)(_QWORD))GdipDeletePen)(Points);
              }
              ((void (__fastcall *)(__int64))GdipDisposeImageAttributes)(v81);
              v4 = v79;
            }
          }
        }
      }
    }
  }
  memset(String, 0, sizeof(String));
  if ( GetWindowTextW(*((HWND *)this + 3), String, 256) )
  {
    ((void (__fastcall *)(__int64, __int64))GdipSetTextRenderingHint)(v5, 3);
    Points = 0;
    GdipCreateSolidFill(0xFFFFFFFFLL, &Points);
    v57 = Points;
    Gdiplus::Font::Font((Gdiplus::Font *)v85, *((HDC *)this + 4), (HFONT)DialogHelper::m_hFont);
    v58 = _mm_cvtsi32_si128(*((_DWORD *)this + 11));
    v59 = _mm_cvtsi32_si128(*((_DWORD *)this + 10));
    v60 = _mm_cvtsi32_si128(*((_DWORD *)this + 12));
    v79 = 0;
    HIDWORD(v81) = _mm_cvtepi32_ps(v58).m128_u32[0];
    LODWORD(v81) = _mm_cvtepi32_ps(v59).m128_u32[0];
    v82 = _mm_cvtepi32_ps(v60).m128_u32[0];
    v83 = (float)*((int *)this + 13);
    v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))GdipCreateStringFormat)(0, 0, &v79);
    v61 = ((__int64 (__fastcall *)(__int64, __int64))GdipSetStringFormatLineAlign)(v79, 1);
    v62 = v80;
    if ( v61 )
      v62 = v61;
    v80 = v62;
    v63 = ((__int64 (__fastcall *)(__int64, __int64))GdipSetStringFormatHotkeyPrefix)(v79, 1);
    v64 = v80;
    if ( v63 )
      v64 = v63;
    v80 = v64;
    v65 = ((__int64 (__fastcall *)(__int64, __int64))GdipSetStringFormatAlign)(v79, 1);
    v66 = v80;
    if ( v65 )
      v66 = v65;
    v80 = v66;
    if ( DialogHelper::m_bRTL )
    {
      v67 = ((__int64 (__fastcall *)(__int64, __int64))GdipSetStringFormatFlags)(v79, 4097);
      if ( v67 )
        v80 = v67;
    }
    else
    {
      v68 = ((__int64 (__fastcall *)(__int64, __int64))GdipSetStringFormatFlags)(v79, 4096);
      v69 = v80;
      if ( v68 )
        v69 = v68;
      v80 = v69;
    }
    v70 = -1;
    v71 = String;
    do
    {
      if ( !v70 )
        break;
      v72 = *v71++ == 0;
      --v70;
    }
    while ( !v72 );
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))GdipDrawString)(
      v5,
      String,
      (unsigned int)(-(int)v70 - 2),
      *(_QWORD *)v85,
      &v81,
      v79,
      v57);
    ((void (__fastcall *)(__int64))GdipDeleteStringFormat)(v79);
    ((void (__fastcall *)(_QWORD))GdipDeleteFont)(*(_QWORD *)v85);
    ((void (__fastcall *)(_QWORD))GdipDeleteBrush)(v57);
  }
  v73 = *((_QWORD *)this + 4);
  Points = 0;
  GdipCreateFromHDC(v73, &Points);
  v74 = Points;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))GdipDrawImageRectI)(
    Points,
    v4,
    0,
    0,
    *((_DWORD *)this + 12),
    *((_DWORD *)this + 13));
  ((void (__fastcall *)(_QWORD))GdipDeleteGraphics)(v74);
  GdipDeleteGraphics(v5);
  GdipDisposeImage(v4);
}
