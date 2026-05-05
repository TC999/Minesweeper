void __fastcall GetContentAreaDimensionsTheoretical(
        int xRight,
        int yBottom,
        unsigned int *a3,
        unsigned int *a4,
        HWND a5,
        HWND a6)
{
  int v8; // eax
  struct tagRECT v9; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+60h] [rbp-18h] BYREF

  SetRect(&rc, 0, 0, xRight, yBottom);
  v10.left = 0;
  v9.left = 0;
  v10.top = 0;
  v10.right = 0;
  v10.bottom = 0;
  v9.top = 0;
  v9.right = 0;
  v9.bottom = 0;
  GetWindowRectFromContentAreaRect(&v10, &v9, a5, a6);
  SetRect(&v12, 0, 0, v9.left + rc.right - rc.left - v9.right, v9.top + rc.bottom - rc.top - v9.bottom);
  v8 = v12.bottom - v12.top;
  *a3 = v12.right - v12.left;
  *a4 = v8;
}
