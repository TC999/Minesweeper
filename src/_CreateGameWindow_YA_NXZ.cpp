char CreateGameWindow(void)
{
  int XmlUInt; // esi
  XmlNode *Xml; // rax
  XmlNode *v2; // rdi
  XmlNode *v3; // rax
  WCHAR *pszFaceName; // rbp
  HMODULE ModuleHandleW; // rax
  HDC DC; // rdi
  int DeviceCaps; // eax
  int v8; // esi
  __int64 v9; // rdi
  HMODULE v10; // rax
  __int64 v11; // rdx
  HINSTANCE v12; // rcx
  HBRUSH StockObject; // rax
  char v14; // r11
  int v15; // edi
  int v16; // esi
  int v17; // ebp
  HMODULE v18; // rax
  DWORD v19; // r9d
  DWORD CurrentThreadId; // eax
  HMODULE v22; // rax
  ATOM v23; // ax
  ATOM v24; // si
  const WCHAR *v25; // rdi
  const WCHAR *v26; // rdi
  HMODULE v27; // rax
  HMENU MenuW; // rax
  HMENU SubMenu; // rax
  unsigned int v30; // ecx
  unsigned int v31; // edx
  unsigned __int64 v32; // rbx
  void *v33; // rsi
  HWND v34; // rdi
  HWND WindowW; // rax
  HMONITOR v36; // rax
  int cWeight[2]; // [rsp+20h] [rbp-138h]
  WINDOWPLACEMENT wndpl; // [rsp+70h] [rbp-E8h] BYREF
  WINDOWPLACEMENT v39; // [rsp+A0h] [rbp-B8h] BYREF
  WNDCLASSW WndClass; // [rsp+D0h] [rbp-88h] BYREF
  struct tagRECT Rect; // [rsp+120h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+160h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+168h] [rbp+10h] BYREF
  INITCOMMONCONTROLSEX picce; // [rsp+170h] [rbp+18h] BYREF

  (*(void (__fastcall **)(void *, unsigned int *, unsigned int *))(*(_QWORD *)g_pInterface + 24LL))(
    g_pInterface,
    &g_uiLayoutX,
    &g_uiLayoutY);
  XmlUInt = 14;
  Xml = XmlManager::GetXml(g_pXmlManager, L"engine.xml");
  v2 = Xml;
  if ( !Xml )
    goto LABEL_55;
  g_bAllowMaximize = (int)XmlNode::GetXmlInt(Xml, L"/AllowMaximize", g_bAllowMaximize) > 0;
  g_bLockWindowAspect = (int)XmlNode::GetXmlInt(v2, L"/LockWindowAspect", -1) > 0;
  XmlUInt = XmlNode::GetXmlUInt(v2, L"/EngineFontSize", 0xEu);
  v3 = XmlNode::XPathElementSearchSingle(v2, L"/EngineFontFace");
  pszFaceName = v3 ? XmlNode::GetNodeValue(v3) : 0LL;
  g_uiSnapDistance = XmlNode::GetXmlUInt(v2, L"/SnapDistance", 0xAu);
  g_uiMediaCenterCrop = XmlNode::GetXmlUInt(v2, L"/MediaCenterCrop", 0x55u);
  LOBYTE(g_bMediaCenter) = (unsigned int)XmlNode::GetXmlInt(v2, L"/AllowMediaCenter", 1) != 0
                         ? (unsigned __int8)g_bMediaCenter
                         : 0;
  g_uiMinWidth = XmlNode::GetXmlUInt(v2, L"/MinWidth", g_uiMinWidth);
  g_uiMinHeight = XmlNode::GetXmlUInt(v2, L"/MinHeight", g_uiMinHeight);
  g_bMinSizeIsNative = (unsigned int)XmlNode::GetXmlInt(v2, L"/MinSizeIsNative", g_bMinSizeIsNative) != 0;
  if ( !pszFaceName )
  {
LABEL_55:
    pszFaceName = (WCHAR *)operator new[](0x200u);
    if ( pszFaceName )
    {
      ModuleHandleW = GetModuleHandleW(0);
      LoadStringW(ModuleHandleW, 0x3E9u, pszFaceName, 256);
    }
  }
  DC = GetDC(0);
  DeviceCaps = GetDeviceCaps(DC, 90);
  v8 = -MulDiv(XmlUInt, DeviceCaps, 72);
  ReleaseDC(0, DC);
  g_hEngineFont = CreateFontW(v8, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, pszFaceName);
  operator delete(pszFaceName);
  WndClass.lpfnWndProc = (WNDPROC)GameWindowProc;
  LOBYTE(v42) = 0;
  WndClass.style = 3;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  WndClass.hInstance = GetModuleHandleW(0);
  if ( (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 56LL))(g_pInterface) )
  {
    v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 56LL))(g_pInterface);
    v10 = GetModuleHandleW(0);
    v11 = v9;
    v12 = v10;
  }
  else
  {
    v11 = 32512;
    v12 = 0;
  }
  WndClass.hIcon = LoadIconW(v12, (LPCWSTR)v11);
  WndClass.hCursor = LoadCursorW(0, (LPCWSTR)0x7F00);
  if ( (_BYTE)g_bMediaCenter )
    StockObject = (HBRUSH)GetStockObject(4);
  else
    StockObject = GetSysColorBrush(12);
  WndClass.hbrBackground = StockObject;
  if ( (_BYTE)g_bMediaCenter )
    WndClass.lpszMenuName = 0;
  else
    WndClass.lpszMenuName = (LPCWSTR)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 64LL))(g_pInterface);
  WndClass.lpszClassName = g_wszProjectName;
  RegisterClassW(&WndClass);
  v14 = (char)g_bMediaCenter;
  if ( (_BYTE)g_bMediaCenter )
  {
    g_bMouseHidden = 1;
    GetCursorPos(&g_LastCursorPos);
    ShowCursor(0);
    v14 = (char)g_bMediaCenter;
  }
  v15 = 0x80000000;
  v16 = 0;
  v17 = 0x80000000;
  if ( g_bMaximizeInitial && !v14 )
  {
    v15 = winPrefs::iMaxX;
    v17 = winPrefs::iMaxY;
    v16 = 0x1000000;
  }
  v18 = GetModuleHandleW(0);
  v19 = v16 | (!g_bAllowMaximize ? 0x10000 : 0) ^ 0xCF0000 | 0x2000000;
  if ( (_BYTE)g_bMediaCenter )
    v19 = 0x80000000;
  g_hWnd = CreateWindowExW(0, g_wszProjectName, g_wszProjectName, v19, v15, v17, g_uiLayoutX, g_uiLayoutY, 0, 0, v18, 0);
  if ( !g_hWnd )
  {
    cWeight[0] = GetLastError();
    Log(0x10u, 493, "Window.cpp", L"Unable to create game window. (WinError %d)", *(_QWORD *)cWeight);
    return 0;
  }
  if ( (_BYTE)g_bMediaCenter )
  {
    CurrentThreadId = GetCurrentThreadId();
    g_hMouseHook = SetWindowsHookExW(7, (HOOKPROC)MouseProc, 0, CurrentThreadId);
  }
  picce.dwICC = -1;
  picce.dwSize = 8;
  InitCommonControlsEx(&picce);
  v22 = GetModuleHandleW(0);
  g_hRenderWindow = CreateWindowExW(0, L"STATIC", 0, 0x4000000Bu, 0, 0, g_uiLayoutX, g_uiLayoutY, g_hWnd, 0, v22, 0);
  v23 = GlobalAddAtomW(L"MicrosoftTabletPenServiceProperty");
  v24 = v23;
  if ( v23 )
  {
    v25 = (const WCHAR *)v23;
    SetPropW(g_hWnd, (LPCWSTR)v23, (HANDLE)0x10000);
    SetPropW(g_hRenderWindow, v25, (HANDLE)0x10000);
    GlobalDeleteAtom(v24);
  }
  if ( !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 136LL))(g_pInterface) )
  {
LABEL_33:
    if ( !(_BYTE)g_bMediaCenter )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( !(_BYTE)g_bMediaCenter )
  {
    g_hWndStatus = (HWND)ATL::CWindowImpl<COberStatusbar,ATL::CWindow,ATL::CWinTraits<1442840576,0>>::Create(
                           (int)&g_theStatusbar,
                           (int)g_hWnd,
                           0,
                           0,
                           1342177280,
                           0x2000000,
                           (HMENU)0x3F2);
    RedrawWindow(g_hWnd, 0, 0, 0x103u);
    goto LABEL_33;
  }
LABEL_34:
  g_hMCEBrush = CreateSolidBrush(0xBF9450u);
LABEL_35:
  v26 = (const WCHAR *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 72LL))(g_pInterface);
  if ( v26 )
  {
    v27 = GetModuleHandleW(0);
    MenuW = LoadMenuW(v27, v26);
    SubMenu = GetSubMenu(MenuW, 0);
    g_hContextMenu = SubMenu;
    if ( (_BYTE)g_bMediaCenter )
      Engine_MakeMCEOwnerDrawn(SubMenu);
  }
  if ( winPrefs::bUseDefault || GetKeyState(16) < 0 )
  {
    GetDefaultWindowPosition(&winPrefs::iX, &winPrefs::iY, (bool *)&v42);
    if ( (_BYTE)v42 )
    {
      v30 = 2 * g_uiLayoutX;
      v31 = 2 * g_uiLayoutY;
    }
    else
    {
      v30 = g_uiLayoutX;
      v31 = g_uiLayoutY;
    }
    winPrefs::uiHeight = v31;
    winPrefs::uiWidth = v30;
  }
  else
  {
    v30 = winPrefs::uiWidth;
    v31 = winPrefs::uiHeight;
  }
  if ( (_BYTE)g_bMediaCenter )
  {
    memset(&wndpl.flags, 0, 0x24u);
    v34 = g_hWnd;
    wndpl.length = 40;
    WindowW = FindWindowW(L"eHome Render Window", 0);
    if ( WindowW )
      v34 = WindowW;
    v36 = MonitorFromWindow(v34, 2u);
    GetMonitorInfoW(v36, (LPMONITORINFO)&wndpl);
    memset(&v39, 0, sizeof(v39));
    GetWindowPlacement(g_hWnd, &v39);
    v39.rcNormalPosition = *(RECT *)&wndpl.flags;
    v39.showCmd = 0;
    SetWindowPlacement(g_hWnd, &v39);
  }
  else
  {
    GetWindowDimensionsFromContentAreaDimensions(v30, v31, &v42, &v43, g_hWnd, g_hWndStatus);
    memset(&wndpl, 0, sizeof(wndpl));
    GetWindowPlacement(g_hWnd, &wndpl);
    wndpl.rcNormalPosition.right = winPrefs::iX + v42;
    wndpl.rcNormalPosition.left = winPrefs::iX;
    wndpl.rcNormalPosition.top = winPrefs::iY;
    wndpl.showCmd = 0;
    wndpl.rcNormalPosition.bottom = v43 + winPrefs::iY;
    SetWindowPlacement(g_hWnd, &wndpl);
    if ( g_bMaximized )
    {
      if ( g_hWndStatus )
      {
        GetWindowRect(g_hWnd, &Rect);
        v32 = (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 136LL))(g_pInterface);
        v33 = operator new[](saturated_mul(v32, 4u));
        (*(void (__fastcall **)(void *, _QWORD, _QWORD, void *))(*(_QWORD *)g_pInterface + 40LL))(
          g_pInterface,
          (unsigned int)(Rect.right - Rect.left),
          (unsigned int)v32,
          v33);
        SendMessageW(g_hWndStatus, 0x404u, v32, (LPARAM)v33);
        SendMessageW(g_hWndStatus, 5u, 0, 0);
        RedrawWindow(g_hWndStatus, 0, 0, 0x103u);
        operator delete(v33);
      }
    }
  }
  SetDPIFromWindowSize();
  ShowWindow(g_hRenderWindow, 0);
  UpdateGameWindowTitle(1);
  Engine_SetLayout(g_uiLayoutX, g_uiLayoutY, 1);
  return 1;
}
