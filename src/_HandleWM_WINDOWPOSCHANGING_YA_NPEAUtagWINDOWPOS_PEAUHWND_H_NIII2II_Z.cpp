bool __fastcall HandleWM_WINDOWPOSCHANGING(struct tagWINDOWPOS *a1, HWND a2, __int64 a3, char a4)
{
  signed int v4; // r15d
  bool v5; // bp
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  int v8; // ebx
  HWND v9; // r14
  HWND hwnd; // rcx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  float v15; // xmm6_4
  char v16; // r12
  char v17; // r13
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // r11d
  unsigned int v21; // ecx
  HWND v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // ebp
  __int64 v25; // rcx
  unsigned int v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-44h] BYREF
  unsigned int xRight; // [rsp+38h] [rbp-40h]
  unsigned int v30; // [rsp+3Ch] [rbp-3Ch]

  v4 = g_uiLayoutY;
  v5 = g_bMinSizeIsNative;
  v6 = g_uiMinHeight;
  v7 = g_uiMinWidth;
  v8 = g_iSizeGrip;
  v9 = g_hWndStatus;
  xRight = g_uiLayoutX;
  hwnd = a1->hwnd;
  v30 = g_uiSnapDistance;
  if ( IsIconic(hwnd) || IsZoomed(a1->hwnd) || a4 || (a1->flags & 1) != 0 )
    return 0;
  if ( v8 == -1 )
    v8 = 8;
  GetContentAreaDimensionsTheoretical(v7, v6, &v27, &v28, a1->hwnd, v9);
  if ( v5 )
  {
    v13 = v4;
    v14 = xRight;
  }
  else
  {
    v13 = v28;
    v14 = v27;
  }
  v15 = (float)v4 / (float)(int)xRight;
  GetContentAreaDimensionsTheoretical(a1->cx, a1->cy, &v27, &v28, a1->hwnd, v9);
  v16 = 0;
  v17 = 0;
  if ( v8 <= 0 )
    goto LABEL_16;
  if ( v8 <= 2 )
    goto LABEL_41;
  if ( v8 != 3 )
  {
    if ( v8 <= 5 )
    {
      v16 = 1;
      v17 = 1;
LABEL_41:
      v18 = v27;
      v19 = (int)(float)((float)(int)v27 * v15);
      goto LABEL_17;
    }
    if ( v8 != 6 )
    {
      if ( v8 > 8 )
      {
LABEL_16:
        v18 = v27;
        v19 = v28;
        goto LABEL_17;
      }
      goto LABEL_41;
    }
  }
  v19 = v28;
  v18 = (int)(float)((float)(int)v28 / v15);
LABEL_17:
  if ( v19 < v13 || v18 < v14 )
  {
    if ( v8 == 5 || v8 == 2 || v8 == 8 )
      v16 = 0;
    if ( v8 == 7 || v8 == 1 || v8 == 4 )
      v16 = 1;
    if ( v8 == 5 || v8 == 3 || v8 == 4 )
      v17 = 1;
    v19 = v13;
    v18 = v14;
  }
  GetWindowDimensionsFromContentAreaDimensions(v18, v19, &v28, &v27, a1->hwnd, v9);
  v20 = v28;
  if ( v16 )
    a1->x += a1->cx - v28;
  v21 = v27;
  if ( v17 )
    a1->y += a1->cy - v27;
  v22 = a1->hwnd;
  v23 = xRight;
  a1->cy = v21;
  a1->cx = v20;
  GetWindowDimensionsFromContentAreaDimensions(v23, v4, &v27, &v28, v22, v9);
  v24 = v30;
  if ( !(unsigned __int8)HandleWM_WINDOWPOSCHANGING_::_14_::LocalScope::SnapWindowPos((_DWORD)a1, v8, v30, v27, v28) )
  {
    GetWindowDimensionsFromContentAreaDimensions(2 * v23, 2 * v4, &v27, &v28, a1->hwnd, v9);
    HandleWM_WINDOWPOSCHANGING_::_14_::LocalScope::SnapWindowPos((_DWORD)a1, v8, v24, v27, v28);
  }
  HandleWM_WINDOWPOSCHANGING_::_14_::LocalScope::ValidateOnMonitor(v25, (unsigned int)v8);
  return 0;
}
