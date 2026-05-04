void __fastcall UserInterface::ScreenToLayout(UserInterface *this, int a2, int a3, int *a4, int *a5)
{
  int v9; // ecx
  int v10; // edx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-18h] BYREF

  GetWindowRect(g_hRenderWindow, &v12);
  GetClientRect(g_hRenderWindow, &Rect);
  v9 = a2 + Rect.left - *((_DWORD *)this + 71) - v12.left;
  v10 = a3 + Rect.top - *((_DWORD *)this + 72) - v12.top;
  if ( !g_CurrentBackStyle )
  {
    v9 = (int)(float)((float)((float)*((int *)this + 73) / (float)(Rect.right - Rect.left)) * (float)v9);
    v10 = (int)(float)((float)((float)*((int *)this + 74) / (float)(Rect.bottom - Rect.top)) * (float)v10);
  }
  *a4 = (int)(float)((float)((float)*((int *)this + 64) / (float)*((int *)this + 73)) * (float)v9);
  *a5 = (int)(float)((float)((float)*((int *)this + 65) / (float)*((int *)this + 74)) * (float)v10);
}
