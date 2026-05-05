void __fastcall Engine_SetLayout(int a1, int a2, char a3)
{
  signed int v6; // r8d
  signed int v7; // edx
  float v8; // xmm6_4
  UserInterface *v9; // rax
  float v10; // xmm7_4
  unsigned int v11; // ebx
  unsigned int v12; // edi
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  int v16; // edx
  int v17; // esi
  int i; // ebp
  HMONITOR v19; // rax
  float v20; // xmm6_4
  unsigned int v21; // r11d
  unsigned int v22; // eax
  LONG right; // edx
  int left; // ecx
  LONG top; // edx
  int bottom; // ecx
  UINT showCmd; // r11d
  HWND v28; // [rsp+20h] [rbp-B8h]
  HWND v29; // [rsp+28h] [rbp-B0h]
  struct tagRECT rcDst; // [rsp+30h] [rbp-A8h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-98h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+F8h] [rbp+20h] BYREF

  Log(0x10u, 2043, "Engine.cpp", L"Setting Layout Resolution To: %d x %d", a1, a2);
  if ( g_uiLayoutX == a1 && g_uiLayoutY == a2 && !a3 )
  {
    LODWORD(v29) = a2;
    LODWORD(v28) = a1;
    Log(0x10u, 2048, "Engine.cpp", L"already have dimensions: %d x %d", v28, v29);
  }
  else
  {
    if ( g_pRenderManager && !g_CurrentBackStyle )
    {
      if ( g_bDoubleDPI )
      {
        v6 = 2 * a2;
        v7 = 2 * a1;
      }
      else
      {
        v6 = a2;
        v7 = a1;
      }
      RenderManager::SetResolution(g_pRenderManager, v7, v6);
    }
    v8 = (float)a1 / (float)(int)g_uiLayoutX;
    v9 = g_pUserInterface;
    v10 = (float)a2 / (float)(int)g_uiLayoutY;
    if ( g_pUserInterface )
    {
      *((_DWORD *)g_pUserInterface + 64) = a1;
      *((_DWORD *)v9 + 65) = a2;
    }
    g_uiLayoutX = a1;
    g_uiLayoutY = a2;
    GetContentAreaDimensions(&v33, &v34, g_hWnd, g_hWndStatus);
    v11 = (int)(float)((float)(int)v33 * v8);
    v12 = (int)(float)((float)(int)v34 * v10);
    if ( g_bLockWindowAspect )
    {
      v13 = (int)(float)((float)(int)v34 * v10);
      v14 = (int)(float)((float)(int)v33 * v8);
      if ( v11 )
      {
        do
        {
          v15 = v13;
          v16 = v13 >> 31;
          v13 = v14;
          v14 = __SPAIR64__(v16, v15) % v14;
        }
        while ( v14 );
      }
      if ( v13 > 0 )
      {
        v17 = v11 / v13;
        for ( i = v12 / v13; ; v12 += i )
        {
          GetWindowDimensionsFromContentAreaDimensions(v11, v12, &v33, &v34, g_hWnd, g_hWndStatus);
          if ( v33 >= g_uiMinWidth && v34 >= g_uiMinHeight )
            break;
          v11 += v17;
        }
      }
    }
    memset(&mi.rcMonitor, 0, 0x24u);
    mi.cbSize = 40;
    v19 = MonitorFromWindow(g_hWnd, 2u);
    GetMonitorInfoW(v19, &mi);
    v20 = (float)(int)g_uiLayoutX / (float)(int)g_uiLayoutY;
    GetWindowDimensionsFromContentAreaDimensions(0, 0, &v33, &v34, g_hWnd, g_hWndStatus);
    v21 = mi.rcWork.right - mi.rcWork.left - v33;
    if ( v21 < v11 )
    {
      v11 = mi.rcWork.right - mi.rcWork.left - v33;
      v12 = (int)(float)((float)(int)v21 / v20);
    }
    v22 = mi.rcWork.bottom - mi.rcWork.top - v34;
    if ( v22 < v12 )
    {
      v12 = mi.rcWork.bottom - mi.rcWork.top - v34;
      v11 = (int)(float)((float)(int)v22 * v20);
    }
    SetWindowSizeFromClientSize(v11, v12);
    memset(&wndpl, 0, sizeof(wndpl));
    GetWindowPlacement(g_hWnd, &wndpl);
    rcDst.left = 0;
    rcDst.top = 0;
    rcDst.right = 0;
    rcDst.bottom = 0;
    UnionRect(&rcDst, &mi.rcWork, &wndpl.rcNormalPosition);
    if ( !EqualRect(&rcDst, &mi.rcWork) && !(_BYTE)g_bMediaCenter )
    {
      right = wndpl.rcNormalPosition.right;
      left = wndpl.rcNormalPosition.left;
      if ( wndpl.rcNormalPosition.right > mi.rcWork.right )
      {
        right = mi.rcWork.right;
        left = wndpl.rcNormalPosition.left - (wndpl.rcNormalPosition.right - mi.rcWork.right);
        wndpl.rcNormalPosition.left = left;
        wndpl.rcNormalPosition.right = mi.rcWork.right;
      }
      if ( left < mi.rcWork.left )
      {
        wndpl.rcNormalPosition.right = mi.rcWork.left - left + right;
        wndpl.rcNormalPosition.left = mi.rcWork.left;
      }
      top = wndpl.rcNormalPosition.top;
      bottom = wndpl.rcNormalPosition.bottom;
      if ( wndpl.rcNormalPosition.top < mi.rcWork.top )
      {
        top = mi.rcWork.top;
        bottom = mi.rcWork.top - wndpl.rcNormalPosition.top + wndpl.rcNormalPosition.bottom;
        wndpl.rcNormalPosition.bottom = bottom;
        wndpl.rcNormalPosition.top = mi.rcWork.top;
      }
      if ( bottom > mi.rcWork.bottom )
      {
        wndpl.rcNormalPosition.top = top - (bottom - mi.rcWork.bottom);
        wndpl.rcNormalPosition.bottom = mi.rcWork.bottom;
      }
      OffsetRect(&wndpl.rcNormalPosition, mi.rcMonitor.left - mi.rcWork.left, mi.rcMonitor.top - mi.rcWork.top);
      showCmd = wndpl.showCmd;
      if ( g_bInitializing )
        showCmd = 0;
      wndpl.showCmd = showCmd;
      SetWindowPlacement(g_hWnd, &wndpl);
    }
    CenterRenderWindow();
  }
}
