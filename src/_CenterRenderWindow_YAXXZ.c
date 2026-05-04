void CenterRenderWindow(void)
{
  char v0; // dl
  signed int v1; // ebx
  HMONITOR v2; // rax
  float v3; // xmm2_4
  LONG bottom; // r10d
  int v5; // r8d
  LONG right; // r9d
  int v7; // ecx
  LONG left; // r13d
  LONG top; // r14d
  int v10; // esi
  int cy; // ebp
  int v12; // r11d
  int v13; // ebx
  UserInterface *v14; // rax
  UserInterface *v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  signed int v18; // r8d
  signed int v19; // edx
  struct tagRECT Rect; // [rsp+40h] [rbp-68h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-58h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-38h] BYREF

  if ( IsIconic(g_hWnd) || !g_pRenderManager || !*((_DWORD *)g_pRenderManager + 53) || !g_pUserInterface )
    return;
  GetClientRect(g_hWnd, &Rect);
  if ( g_hWndStatus )
  {
    GetWindowRect(g_hWndStatus, &v22);
    Rect.bottom += v22.top - v22.bottom;
  }
  GetWindowRect(g_hRenderWindow, &v21);
  v0 = (char)g_bMediaCenter;
  v1 = g_uiMediaCenterCrop;
  if ( (_BYTE)g_bMediaCenter )
  {
    memset(&mi.rcMonitor, 0, 0x24u);
    mi.cbSize = 40;
    v2 = MonitorFromWindow(g_hWnd, 2u);
    if ( v2 && GetMonitorInfoW(v2, &mi) )
      v1 = g_uiMediaCenterCrop - (int)(float)((float)(70.0 / (float)(mi.rcMonitor.bottom - mi.rcMonitor.top)) * 100.0);
    v0 = (char)g_bMediaCenter;
  }
  v3 = (float)(int)g_uiLayoutX / (float)(int)g_uiLayoutY;
  if ( g_CurrentBackStyle == 1 && g_bSizing )
    v3 = (float)(v21.right - v21.left) / (float)(v21.bottom - v21.top);
  bottom = Rect.bottom;
  v21.top = 0;
  v5 = Rect.bottom;
  v21.bottom = Rect.bottom;
  if ( v0 )
  {
    v5 = (int)(float)((float)((float)v1 / 100.0) * (float)Rect.bottom);
    v21.bottom = v5;
  }
  v21.left = 0;
  right = Rect.right;
  v7 = (int)(float)((float)((float)v5 * v3) + 0.5);
  v21.right = v7;
  if ( v0 )
  {
    if ( v7 <= (int)(float)((float)((float)v1 / 100.0) * (float)Rect.right) )
      goto LABEL_24;
LABEL_21:
    v7 = Rect.right;
    v21.right = Rect.right;
    if ( v0 )
    {
      v7 = (int)(float)((float)((float)v1 / 100.0) * (float)Rect.right);
      v21.right = v7;
    }
    v5 = (int)(float)((float)((float)v7 / v3) + 0.5);
    v21.bottom = v5;
    goto LABEL_24;
  }
  if ( v7 > Rect.right )
    goto LABEL_21;
LABEL_24:
  left = Rect.left;
  top = Rect.top;
  v10 = Rect.right - Rect.left;
  cy = Rect.bottom - Rect.top;
  v12 = (Rect.right - Rect.left) / 2 - v7 / 2;
  v13 = (Rect.bottom - Rect.top) / 2 - v5 / 2;
  if ( g_CurrentBackStyle == 1 )
  {
    if ( g_bSizing )
    {
      if ( g_bLockWindowAspect )
        SetWindowPos(g_hRenderWindow, 0, 0, 0, v10, cy, 0xCu);
      else
        SetWindowPos(g_hRenderWindow, 0, v12, v13, v7, v5, 4u);
    }
    else
    {
      v14 = g_pUserInterface;
      if ( g_pUserInterface )
      {
        *((_DWORD *)g_pUserInterface + 71) = v12;
        *((_DWORD *)v14 + 72) = v13;
        *((_DWORD *)v14 + 73) = v7;
        *((_DWORD *)v14 + 74) = v5;
        bottom = Rect.bottom;
        right = Rect.right;
        top = Rect.top;
        left = Rect.left;
      }
      RenderManager::SetResolution(g_pRenderManager, right - left, bottom - top);
      SetWindowPos(
        g_hRenderWindow,
        0,
        0,
        0,
        Rect.right + g_iMinesweeperFudge - Rect.left,
        Rect.bottom + g_iMinesweeperFudge - Rect.top,
        0xCu);
    }
  }
  else if ( !g_CurrentBackStyle )
  {
    if ( g_bLockWindowAspect )
      SetWindowPos(g_hRenderWindow, 0, 0, 0, v10, cy, 0xCu);
    else
      SetWindowPos(g_hRenderWindow, 0, v12, v13, v7, v5, 4u);
    v15 = g_pUserInterface;
    if ( g_pUserInterface && !g_bSizing )
    {
      v16 = g_uiLayoutY;
      v17 = g_uiLayoutX;
      *((_DWORD *)g_pUserInterface + 71) = 0;
      *((_DWORD *)v15 + 72) = 0;
      *((_DWORD *)v15 + 73) = v17;
      *((_DWORD *)v15 + 74) = v16;
      *((_BYTE *)v15 + 275) = 1;
    }
    if ( g_pRenderManager )
    {
      v18 = g_uiLayoutY;
      v19 = g_uiLayoutX;
      if ( g_bDoubleDPI )
      {
        v18 = 2 * g_uiLayoutY;
        v19 = 2 * g_uiLayoutX;
      }
      RenderManager::SetResolution(g_pRenderManager, v19, v18);
    }
  }
}
