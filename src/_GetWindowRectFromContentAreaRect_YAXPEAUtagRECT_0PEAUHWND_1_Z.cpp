void __fastcall GetWindowRectFromContentAreaRect(const __m128i *a1, struct tagRECT *a2, HWND a3, HWND a4)
{
  BOOL v7; // ebx
  LONG WindowLongW; // eax
  struct tagRECT Rect; // [rsp+30h] [rbp-18h] BYREF

  Rect = (struct tagRECT)_mm_loadu_si128(a1);
  v7 = GetMenu(a3) != 0;
  WindowLongW = GetWindowLongW(a3, -16);
  AdjustWindowRect(&Rect, WindowLongW, v7);
  SetRect(a2, 0, 0, Rect.right - Rect.left, Rect.bottom - Rect.top);
  if ( a4 )
  {
    GetWindowRect(a4, &Rect);
    a2->bottom += Rect.bottom - Rect.top;
  }
}
