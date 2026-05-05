void __fastcall UserInterface::LayoutToScreen(UserInterface *this, int a2, int a3, int *a4, int *a5)
{
  int *v5; // rsi
  int v9; // r11d
  float v10; // xmm4_4
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int *)g_pUserInterface;
  GetWindowRect(g_hRenderWindow, &v16);
  GetClientRect(g_hRenderWindow, &Rect);
  v9 = v5[73];
  v10 = (float)v5[74];
  v11 = (int)(float)((float)((float)a2 * (float)v9) / (float)v5[64]);
  v12 = (int)(float)((float)(v10 / (float)v5[65]) * (float)a3);
  if ( !g_CurrentBackStyle )
  {
    v11 = (int)(float)((float)((float)(Rect.right - Rect.left) / (float)v9) * (float)v11);
    v12 = (int)(float)((float)((float)(Rect.bottom - Rect.top) / v10) * (float)v12);
  }
  v13 = v11 + v16.left + v5[71] - Rect.left;
  v14 = v5[72] - Rect.top;
  *a4 = v13;
  *a5 = v12 + v16.top + v14;
}
