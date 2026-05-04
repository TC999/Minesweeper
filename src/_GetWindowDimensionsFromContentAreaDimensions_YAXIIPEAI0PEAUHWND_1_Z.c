void __fastcall GetWindowDimensionsFromContentAreaDimensions(
        int xRight,
        int yBottom,
        unsigned int *a3,
        unsigned int *a4,
        HWND a5,
        HWND a6)
{
  int v8; // eax
  struct tagRECT v9; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-18h] BYREF

  SetRect(&rc, 0, 0, xRight, yBottom);
  GetWindowRectFromContentAreaRect((const __m128i *)&rc, &v9, a5, a6);
  v8 = v9.bottom - v9.top;
  *a3 = v9.right - v9.left;
  *a4 = v8;
}
