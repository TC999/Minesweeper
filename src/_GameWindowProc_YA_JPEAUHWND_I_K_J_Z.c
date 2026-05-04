LONG_PTR __fastcall GameWindowProc(HWND hWnd, UINT Msg, WPARAM a3, __int64 a4)
{
  unsigned int v4; // ebp
  WPARAM v6; // r13
  LONG_PTR result; // rax
  char v10; // cl
  HDC DC; // rsi
  bool v12; // dl
  int MCEFontSize; // ebx
  int DeviceCaps; // eax
  UserInterface *v15; // rdi
  __int64 GameEvent; // rsi
  struct NodeBase *CurrentFocus; // rax
  __int64 v18; // r13
  unsigned int v19; // ebx
  UINT *v20; // rcx
  __int64 v21; // r8
  HDC v22; // rdi
  LONG top; // eax
  LONG bottom; // edx
  void *StockObject; // rax
  HGDIOBJ v26; // rax
  LONG v27; // r8d
  LONG v28; // r9d
  void *v29; // rsi
  unsigned int v30; // ebx
  int v31; // ebx
  unsigned int v32; // ebx
  int v33; // ebx
  unsigned __int64 v34; // rbx
  void *v35; // rsi
  WPARAM v36; // r13
  HGDIOBJ v37; // rax
  UINT v38; // edx
  DWORD SysColor; // eax
  COLORREF v40; // eax
  int v41; // ecx
  COLORREF v42; // r13d
  DWORD v43; // edx
  COLORREF v44; // eax
  DWORD v45; // eax
  COLORREF v46; // r15d
  DWORD v47; // eax
  int v48; // ebx
  int v49; // edi
  int SystemMetrics; // eax
  HDC v51; // rcx
  HDC CompatibleDC; // rdi
  HBITMAP Bitmap; // rax
  HGDIOBJ v54; // rbx
  _DWORD *v55; // rax
  _DWORD *v56; // rbx
  UINT RawInputData; // eax
  RenderManager *v58; // rbx
  HMONITOR v59; // rax
  RenderManager *v60; // rcx
  HMONITOR v61; // rbx
  BOOL v62; // eax
  char v63; // si
  UserInterface *v64; // rbx
  IUnknown *v65; // rsi
  LONG_PTR v66; // rbx
  UserInterface *v67; // rsi
  unsigned int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // rbx
  HDC v71; // rdi
  HGDIOBJ v72; // rbx
  UINT v73; // edx
  LONG y; // r11d
  int v75; // r14d
  unsigned int v76; // eax
  __int64 v77; // rax
  int v78; // ebx
  unsigned int v79; // eax
  bool v80; // zf
  HCURSOR CursorW; // rax
  HMONITOR v82; // rax
  HMONITOR v83; // rbx
  unsigned int v84; // esi
  UserInterface *v85; // rbx
  char v86; // al
  char v87; // al
  int v88; // ecx
  int h[2]; // [rsp+20h] [rbp-548h]
  int ha[2]; // [rsp+20h] [rbp-548h]
  int hb[2]; // [rsp+20h] [rbp-548h]
  int hc[2]; // [rsp+20h] [rbp-548h]
  char v93[8]; // [rsp+50h] [rbp-518h] BYREF
  struct tagPOINT Point; // [rsp+58h] [rbp-510h] BYREF
  int cy; // [rsp+60h] [rbp-508h] BYREF
  struct tagRECT v96; // [rsp+68h] [rbp-500h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-4F0h] BYREF
  struct tagTRACKMOUSEEVENT Rect; // [rsp+88h] [rbp-4E0h] BYREF
  struct tagRECT v99; // [rsp+A0h] [rbp-4C8h] BYREF
  struct tagMENUITEMINFOW Paint; // [rsp+B0h] [rbp-4B8h] BYREF
  int pvParam[56]; // [rsp+100h] [rbp-468h] BYREF
  LOGFONTW lf; // [rsp+1E0h] [rbp-388h] BYREF
  WCHAR String; // [rsp+300h] [rbp-268h] BYREF
  _BYTE v104[518]; // [rsp+302h] [rbp-266h] BYREF

  v4 = 0;
  v6 = a3;
  v93[0] = 0;
  if ( Msg == g_uiMCEGameMenu )
  {
    if ( g_bContextMenuVisible || a3 == 1 )
      PostEscapeKey();
    else
      PostAppKey();
    return 0;
  }
  v10 = (char)g_bMediaCenter;
  if ( Msg == 1 && (_BYTE)g_bMediaCenter == 1 )
  {
    pvParam[0] = 504;
    DC = GetDC(hWnd);
    if ( SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0) )
    {
      MCEFontSize = DialogHelper::GetMCEFontSize(0, v12);
      DeviceCaps = GetDeviceCaps(DC, 90);
      lf.lfHeight = -MulDiv(MCEFontSize, DeviceCaps, 72);
      ::h = CreateFontIndirectW(&lf);
    }
    ReleaseDC(hWnd, DC);
    v10 = (char)g_bMediaCenter;
  }
  if ( Msg == g_uiControllerDblClick )
  {
    v15 = g_pUserInterface;
    if ( g_pUserInterface )
    {
      GameEvent = Event::CreateGameEvent(35);
      CurrentFocus = UserInterface::GetCurrentFocus(v15);
      *(_WORD *)(GameEvent + 24) = v6;
      *(_QWORD *)(GameEvent + 8) = CurrentFocus;
      if ( *((_DWORD *)v15 + 24) )
      {
        v18 = 0;
        do
        {
          (***(void (__fastcall ****)(_QWORD, __int64))(v18 + *((_QWORD *)v15 + 14)))(
            *(_QWORD *)(v18 + *((_QWORD *)v15 + 14)),
            GameEvent);
          ++v4;
          v18 += 8;
        }
        while ( v4 < *((_DWORD *)v15 + 24) );
      }
      (**(void (__fastcall ***)(__int64, __int64))GameEvent)(GameEvent, 1);
    }
    return 0;
  }
  v19 = 256;
  if ( Msg > 0x100 )
  {
    if ( Msg > 0x208 )
    {
      if ( Msg == 529 )
      {
        g_bContextMenuVisible = 1;
        if ( g_pCommonController )
          *((_BYTE *)g_pCommonController + 132) = 1;
        if ( g_pUserInterface && UserInterface::GetCurrentFocus(g_pUserInterface) )
          v88 = *((_DWORD *)UserInterface::GetCurrentFocus(g_pUserInterface) + 56);
        else
          v88 = -1;
        dword_1000A7E38 = v88;
        Engine_LostFocus();
        goto LABEL_300;
      }
      if ( Msg == 530 )
      {
        g_bContextMenuVisible = 0;
        if ( g_pCommonController )
          *((_BYTE *)g_pCommonController + 132) = 0;
        Engine_GotFocus();
        v84 = dword_1000A7E38;
        if ( dword_1000A7E38 != -1 )
        {
          v85 = g_pUserInterface;
          if ( g_pUserInterface )
          {
            Point = 0;
            v86 = SortedListI<NodeBase *>::TryGet((__int64)g_pUserInterface, (unsigned int)dword_1000A7E38, &Point);
            if ( (*(_QWORD *)&Point & -(__int64)(v86 != 0)) != 0 )
            {
              Point = 0;
              v87 = SortedListI<NodeBase *>::TryGet((__int64)v85, v84, &Point);
              UserInterface::SetFocus(v85, (struct NodeBase *)(*(_QWORD *)&Point & -(__int64)(v87 != 0)));
              byte_1000ABAB9 = 1;
            }
          }
        }
        goto LABEL_300;
      }
      if ( Msg == 532 )
      {
        g_iSizeGrip = v6;
        return 0;
      }
      if ( Msg == 561 )
      {
        g_bSizing = 1;
        Engine_LostFocus();
        v21 = 561;
      }
      else
      {
        if ( Msg != 562 )
        {
          if ( Msg == 675 )
          {
            KillTimer(g_hWnd, 0x41Au);
            if ( (_BYTE)g_bMediaCenter )
            {
              CursorW = LoadCursorW(0, (LPCWSTR)0x7F00);
              SetCursor(CursorW);
            }
            g_bTrackingMouse = 0;
            if ( byte_1000ABAB9 )
            {
              byte_1000ABAB9 = 0;
            }
            else if ( g_bWindowActive && g_pUserInterface )
            {
              UserInterface::ClearFocus(g_pUserInterface);
            }
            return 0;
          }
          if ( Msg == 689 )
          {
            if ( v6 == 7 || v6 == 2 )
            {
              Log(0x800u, 993, "Window.cpp", L"Pausing due to locked system");
              g_bPauseForLock = 1;
            }
            else if ( v6 == 8 || v6 == 1 )
            {
              Log(0x800u, 999, "Window.cpp", L"Unlock detected");
              g_bPauseForLock = 0;
              InvalidateRect(g_hWnd, 0, 0);
            }
          }
          else if ( Msg == 793 && (((unsigned __int64)a4 >> 16) & 0xFFF) == 1 && g_bContextMenuVisible )
          {
            PostEscapeKey();
            return 1;
          }
          goto LABEL_300;
        }
        g_iSizeGrip = -1;
        v82 = MonitorFromWindow(g_hWnd, 2u);
        if ( g_pRenderManager )
        {
          v83 = (HMONITOR)*((_QWORD *)g_pRenderManager + 6);
          if ( v82 != v83 )
          {
            memset(&Paint.fMask, 0, 0x24u);
            Paint.cbSize = 40;
            GetMonitorInfoW(v83, (LPMONITORINFO)&Paint);
            GetWindowRect(g_hWnd, (LPRECT)&Rect);
            IntersectRect(&rcDst, (const RECT *)&Rect, (const RECT *)&Paint.fMask);
            if ( IsRectEmpty(&rcDst) )
              RenderManager::SetEngineState((__int64)g_pRenderManager, 0x102u);
          }
        }
        Engine_GotFocus();
        g_bSizing = 0;
        SetDPIFromWindowSize();
        CenterRenderWindow();
        v21 = 562;
      }
      goto LABEL_242;
    }
    if ( Msg != 520 )
    {
      v19 = 257;
      switch ( Msg )
      {
        case 0x101u:
          if ( !g_pRenderManager || !*((_DWORD *)g_pRenderManager + 53) )
            return 0;
          if ( g_pUserInterface )
            UserInterface::ProcessKeyUp(g_pUserInterface, v6);
          goto LABEL_241;
        case 0x102u:
          if ( !g_pRenderManager || !*((_DWORD *)g_pRenderManager + 53) )
            return 0;
          v21 = 258;
          goto LABEL_242;
        case 0x113u:
          if ( v10 )
          {
            if ( !g_bMouseHidden )
            {
              GetCursorPos(&g_LastCursorPos);
              ShowCursor(0);
              g_bMouseHidden = 1;
            }
            KillTimer(g_hWnd, 0x41Au);
          }
          goto LABEL_300;
        case 0x200u:
          if ( !g_bTrackingMouse )
          {
            memset(&Rect.dwFlags, 0, 0x14u);
            Rect.cbSize = 24;
            Rect.dwFlags = 2;
            Rect.hwndTrack = hWnd;
            TrackMouseEvent(&Rect);
            v10 = (char)g_bMediaCenter;
            g_bTrackingMouse = 1;
          }
          if ( v10 )
            MCE_MouseMove();
          if ( g_bWindowActive && g_pUserInterface )
            UserInterface::ProcessMouseMove(g_pUserInterface, 0);
          return 0;
        case 0x201u:
LABEL_212:
          if ( Msg == 516 )
          {
            v75 = 1;
          }
          else
          {
            v75 = 0;
            if ( Msg == 519 )
              v75 = 2;
          }
          v76 = g_uiCaptureCount;
          if ( !g_uiCaptureCount )
          {
            SetCapture(g_hWnd);
            v76 = g_uiCaptureCount;
          }
          g_uiCaptureCount = v76 + 1;
          if ( !v75 && (v6 & 8) != 0 )
          {
            v75 = 1;
            LOBYTE(v6) = v6 ^ 8;
            byte_1000ABAB8 = 1;
          }
          if ( g_pUserInterface )
            UserInterface::ProcessMouseDown(g_pUserInterface, v75, v6);
          return 0;
      }
      if ( Msg != 514 )
      {
        if ( Msg == 516 )
          goto LABEL_212;
        if ( Msg != 517 )
        {
          if ( Msg != 519 )
            goto LABEL_300;
          goto LABEL_212;
        }
      }
    }
    if ( Msg == 517 )
    {
      v78 = 1;
    }
    else
    {
      v78 = 0;
      if ( Msg == 520 )
        v78 = 2;
    }
    v79 = g_uiCaptureCount;
    v80 = g_uiCaptureCount == 0;
    if ( g_uiCaptureCount )
    {
      --g_uiCaptureCount;
      v80 = v79 == 1;
    }
    if ( v80 )
      ReleaseCapture();
    if ( byte_1000ABAB8 && !v78 )
    {
      byte_1000ABAB8 = 0;
      v78 = 1;
      LOBYTE(v6) = v6 & 0xF7;
    }
    if ( g_pUserInterface )
      UserInterface::ProcessMouseUp(g_pUserInterface, v78, v6);
    return 0;
  }
  if ( Msg == 256 )
  {
    if ( !g_pRenderManager || !*((_DWORD *)g_pRenderManager + 53) )
      return 0;
    if ( v6 == 93 )
    {
      GetWindowRect(g_hWnd, (LPRECT)&Rect);
      TrackPopupMenu(
        g_hContextMenu,
        0x1416u,
        (signed int)(LODWORD(Rect.hwndTrack) + Rect.cbSize) / 2,
        (signed int)(HIDWORD(Rect.hwndTrack) + Rect.dwFlags) / 2,
        0,
        g_hWnd,
        0);
      return 0;
    }
    if ( g_bDebugEnabled )
    {
      switch ( v6 )
      {
        case '$':
          g_bDbgUseFramePause = 1;
          g_bDbgFramePauseOn = 1;
LABEL_241:
          v21 = v19;
          goto LABEL_242;
        case '#':
          g_bDbgUseFramePause = 0;
          g_bDbgFramePauseOn = 0;
          Engine_ResetTimer();
          goto LABEL_241;
        case '-':
          g_bDbgFramePauseOn = !g_bDbgFramePauseOn;
          goto LABEL_241;
        case 'z':
          ResourceManager::PrintResources(g_pResourceManager);
          break;
      }
    }
    if ( g_pUserInterface )
      UserInterface::ProcessKeyDown(g_pUserInterface, v6);
    goto LABEL_241;
  }
  if ( Msg <= 0x2B )
  {
    if ( Msg != 43 )
    {
      switch ( Msg )
      {
        case 2u:
          DeleteObject(::h);
          ::h = 0;
          PostQuitMessage(0);
          return 0;
        case 5u:
          CenterRenderWindow();
          GetWindowRect(g_hWnd, (LPRECT)&Rect);
          if ( g_hWndStatus )
          {
            v34 = (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 136LL))(g_pInterface);
            v35 = operator new[](saturated_mul(v34, 4u));
            (*(void (__fastcall **)(void *, _QWORD, _QWORD, void *))(*(_QWORD *)g_pInterface + 40LL))(
              g_pInterface,
              LODWORD(Rect.hwndTrack) - Rect.cbSize,
              (unsigned int)v34,
              v35);
            SendMessageW(g_hWndStatus, 0x404u, v34, (LPARAM)v35);
            SendMessageW(g_hWndStatus, 5u, 0, 0);
            RedrawWindow(g_hWndStatus, 0, 0, 0x103u);
            operator delete(v35);
          }
          if ( v6 )
          {
            v36 = v6 - 1;
            if ( v36 )
            {
              if ( v36 == 1 )
              {
                g_bMaximized = 1;
                SetDPIFromWindowSize();
              }
            }
            else if ( g_pInterface )
            {
              (*(void (__fastcall **)(void *, HWND, __int64, __int64, __int64, char *))(*(_QWORD *)g_pInterface + 88LL))(
                g_pInterface,
                hWnd,
                5,
                1,
                a4,
                v93);
            }
          }
          else
          {
            if ( g_bMaximized )
              SetDPIFromWindowSize();
            g_bMaximized = 0;
          }
          return 0;
        case 6u:
          if ( !v6 )
          {
            ReleaseCapture();
            g_uiCaptureCount = 0;
            if ( g_pUserInterface )
              UserInterface::LostFocusInternal(g_pUserInterface);
          }
          goto LABEL_300;
        case 0xFu:
          memset(&Paint, 0, 72);
          v22 = BeginPaint(g_hWnd, (LPPAINTSTRUCT)&Paint);
          if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) && IsWindowVisible(g_hRenderWindow) )
          {
            GetWindowRect(g_hRenderWindow, &v99);
            GetClientRect(g_hWnd, &v96);
            top = 0;
            rcDst.left = 0;
            rcDst.top = 0;
            rcDst.right = 0;
            bottom = 0;
            rcDst.bottom = 0;
            if ( g_hWndStatus )
            {
              GetWindowRect(g_hWndStatus, &rcDst);
              bottom = rcDst.bottom;
              top = rcDst.top;
            }
            v96.bottom += top - bottom;
            if ( (_BYTE)g_bMediaCenter == 1 )
              StockObject = GetStockObject(4);
            else
              StockObject = GetSysColorBrush(5);
            v26 = SelectObject(v22, StockObject);
            v27 = v96.bottom;
            v28 = v96.top;
            v29 = v26;
            if ( v96.bottom - v96.top > v99.bottom - v99.top )
            {
              v30 = v96.bottom + v99.top - v99.bottom - v96.top;
              if ( (v30 & 1) != 0 )
                ++v30;
              v31 = v30 >> 1;
              if ( !PatBlt(v22, 0, 0, v96.right - v96.left, v31, 0xF00021u) )
              {
                h[0] = GetLastError();
                Log(0x800u, 1928, "Window.cpp", L"Background blit failed: %d", *(_QWORD *)h);
              }
              if ( !PatBlt(v22, 0, v96.bottom - v31, v96.right - v96.left, v31, 0xF00021u) )
              {
                ha[0] = GetLastError();
                Log(0x800u, 1934, "Window.cpp", L"Background blit failed: %d", *(_QWORD *)ha);
              }
              v28 = v96.top;
              v27 = v96.bottom;
            }
            if ( v96.right - v96.left > v99.right - v99.left )
            {
              v32 = v96.right + v99.left - v99.right - v96.left;
              if ( (v32 & 1) != 0 )
                ++v32;
              v33 = v32 >> 1;
              if ( !PatBlt(v22, 0, 0, v33, v27 - v28, 0xF00021u) )
              {
                hb[0] = GetLastError();
                Log(0x800u, 1953, "Window.cpp", L"Background blit failed: %d", *(_QWORD *)hb);
              }
              if ( !PatBlt(v22, v96.right - v33, 0, v33, v96.bottom - v96.top, 0xF00021u) )
              {
                hc[0] = GetLastError();
                Log(0x800u, 1959, "Window.cpp", L"Background blit failed: %d", *(_QWORD *)hc);
              }
            }
            SelectObject(v22, v29);
            if ( g_pRenderManager )
              RenderManager::PresentBuffer(g_pRenderManager);
            if ( g_hWndStatus )
              RedrawWindow(g_hWndStatus, 0, 0, 0x100u);
            EndPaint(g_hWnd, (const PAINTSTRUCT *)&Paint);
            UpdateGameWindowTitle(0);
          }
          else
          {
            if ( g_bInitializing )
              PaintBackground(v22);
            if ( g_hWndStatus )
              RedrawWindow(g_hWndStatus, 0, 0, 0x100u);
            EndPaint(g_hWnd, (const PAINTSTRUCT *)&Paint);
          }
          return 0;
      }
      if ( Msg != 16 )
      {
        if ( Msg != 20 )
        {
          if ( Msg != 28 )
          {
            if ( Msg == 33 )
            {
              GetCursorPos(&Point);
              ScreenToClient(g_hWnd, &Point);
              GetClientRect(g_hRenderWindow, (LPRECT)&Rect);
              if ( PtInRect((const RECT *)&Rect, Point) )
                return 2;
            }
            else if ( Msg == 36 )
            {
              v20 = (UINT *)g_pRenderManager;
              *(_DWORD *)(a4 + 24) = 100;
              *(_DWORD *)(a4 + 28) = 100;
              *(_DWORD *)(a4 + 32) = 0x7FFFFFFF;
              *(_DWORD *)(a4 + 36) = 0x7FFFFFFF;
              if ( v20 && v20[53] )
              {
                *(_DWORD *)(a4 + 32) = v20[3];
                *(_DWORD *)(a4 + 36) = v20[4];
              }
              return 0;
            }
            goto LABEL_300;
          }
          if ( !v6 )
          {
            if ( !v10 )
              goto LABEL_41;
            ShowWindow(g_hWnd, 6);
          }
          if ( v6 == 1 )
          {
            g_bWindowActive = 1;
            SetDPIFromWindowSize();
            Engine_GotFocus();
            return 0;
          }
LABEL_41:
          ReleaseCapture();
          g_uiCaptureCount = 0;
          Engine_LostFocus();
          g_bWindowActive = 0;
          return 0;
        }
        if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) && IsWindowVisible(g_hRenderWindow) )
        {
          RenderManager::PresentBuffer(g_pRenderManager);
          return 1;
        }
        if ( !g_bInitializing )
          return 0;
        goto LABEL_300;
      }
      if ( !g_pInterface )
        return 0;
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 104LL))(g_pInterface) == 1 )
      {
        SaveWindowPosition();
        DestroyWindow(hWnd);
      }
      v21 = 16;
LABEL_242:
      v77 = (*(__int64 (__fastcall **)(void *, HWND, __int64, WPARAM, __int64, char *))(*(_QWORD *)g_pInterface + 88LL))(
              g_pInterface,
              hWnd,
              v21,
              v6,
              a4,
              v93);
      return v77 & -(__int64)(v93[0] != 0);
    }
    if ( v6 || v10 != 1 )
      goto LABEL_300;
    v37 = SelectObject(*(HDC *)(a4 + 32), ::h);
    String = 0;
    *(_QWORD *)&v96.left = v37;
    memset(v104, 0, sizeof(v104));
    memset(&Paint.fMask, 0, 0x4Cu);
    v38 = *(_DWORD *)(a4 + 8);
    *(_QWORD *)&Paint.cbSize = 0x4400000050LL;
    Paint.cch = 260;
    Paint.dwTypeData = &String;
    Paint.hSubMenu = 0;
    GetMenuItemInfoW(g_hContextMenu, v38, 0, &Paint);
    if ( (*(_BYTE *)(a4 + 16) & 1) != 0 )
    {
      if ( !(_BYTE)g_bMediaCenter )
      {
        SysColor = GetSysColor(14);
        v40 = SetTextColor(*(HDC *)(a4 + 32), SysColor);
        v41 = 13;
LABEL_105:
        v42 = v40;
        v43 = GetSysColor(v41);
LABEL_111:
        v46 = SetBkColor(*(HDC *)(a4 + 32), v43);
        if ( (*(_BYTE *)(a4 + 16) & 4) != 0 )
        {
          v47 = GetSysColor(17);
          SetTextColor(*(HDC *)(a4 + 32), v47);
        }
        v48 = *(_DWORD *)(a4 + 44);
        v49 = *(_DWORD *)(a4 + 40);
        SystemMetrics = GetSystemMetrics(71);
        ExtTextOutW(*(HDC *)(a4 + 32), SystemMetrics + v49, v48, 2u, (const RECT *)(a4 + 40), &String, Paint.cch, 0);
        if ( Paint.hSubMenu )
        {
          v51 = *(HDC *)(a4 + 32);
          rcDst = (struct tagRECT)_mm_loadu_si128((const __m128i *)(a4 + 40));
          CompatibleDC = CreateCompatibleDC(v51);
          if ( CompatibleDC )
          {
            cy = rcDst.bottom - rcDst.top;
            Point.x = 30;
            Bitmap = CreateBitmap(30, rcDst.bottom - rcDst.top, 1u, 1u, 0);
            *(_QWORD *)&v99.left = Bitmap;
            if ( Bitmap )
            {
              Rect.hwndTrack = (HWND)__PAIR64__(cy, Point.x);
              v54 = SelectObject(CompatibleDC, Bitmap);
              Rect.cbSize = 0;
              Rect.dwFlags = 0;
              DrawFrameControl(CompatibleDC, (LPRECT)&Rect, 2u, 0);
              BitBlt(*(HDC *)(a4 + 32), rcDst.right - 30, rcDst.top, rcDst.right, cy, CompatibleDC, 0, 0, 0xCC0020u);
              SelectObject(CompatibleDC, v54);
              DeleteObject(*(HGDIOBJ *)&v99.left);
              ExcludeClipRect(*(HDC *)(a4 + 32), rcDst.right - 30, rcDst.top, rcDst.right, rcDst.bottom);
            }
            DeleteObject(CompatibleDC);
          }
        }
        SetTextColor(*(HDC *)(a4 + 32), v42);
        SetBkColor(*(HDC *)(a4 + 32), v46);
        SelectObject(*(HDC *)(a4 + 32), *(HGDIOBJ *)&v96.left);
        return 1;
      }
      v44 = SetTextColor(*(HDC *)(a4 + 32), 0xBF9450u);
      v43 = 0xFFFFFF;
    }
    else
    {
      if ( !(_BYTE)g_bMediaCenter )
      {
        v45 = GetSysColor(7);
        v40 = SetTextColor(*(HDC *)(a4 + 32), v45);
        v41 = 4;
        goto LABEL_105;
      }
      v44 = SetTextColor(*(HDC *)(a4 + 32), 0xFFFFFFu);
      v43 = 12555344;
    }
    v42 = v44;
    goto LABEL_111;
  }
  switch ( Msg )
  {
    case 0x2Cu:
      if ( !v6 && v10 == 1 )
      {
        v71 = GetDC(hWnd);
        v72 = SelectObject(v71, ::h);
        Point.x = 0;
        String = 0;
        Point.y = 0;
        memset(v104, 0, sizeof(v104));
        memset(&Paint.fMask, 0, 0x4Cu);
        v73 = *(_DWORD *)(a4 + 8);
        *(_QWORD *)&Paint.cbSize = 0x4000000050LL;
        Paint.cch = 260;
        Paint.dwTypeData = &String;
        GetMenuItemInfoW(g_hContextMenu, v73, 0, &Paint);
        GetTextExtentPoint32W(v71, &String, Paint.cch, (LPSIZE)&Point);
        y = Point.y;
        *(_DWORD *)(a4 + 12) = Point.x + 30;
        *(_DWORD *)(a4 + 16) = y;
        SelectObject(v71, v72);
        ReleaseDC(hWnd, v71);
        return 1;
      }
      break;
    case 0x3Du:
      if ( (_DWORD)a4 == -4 )
      {
        v64 = g_pUserInterface;
        if ( !g_pUserInterface || !*((_DWORD *)g_pUserInterface + 8) )
          break;
        (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)g_pUserInterface + 6) + 8LL))(**((_QWORD **)g_pUserInterface + 6));
        v65 = (IUnknown *)**((_QWORD **)v64 + 6);
      }
      else
      {
        if ( a4 <= 0 )
          break;
        v67 = g_pUserInterface;
        if ( !g_pUserInterface )
          break;
        v68 = 0;
        if ( *((_DWORD *)g_pUserInterface + 8) )
        {
          v69 = *((_QWORD *)g_pUserInterface + 6);
          while ( *(_DWORD *)(*(_QWORD *)v69 + 12LL) != (_DWORD)a4 )
          {
            ++v68;
            v69 += 8;
            if ( v68 >= *((_DWORD *)g_pUserInterface + 8) )
              goto LABEL_180;
          }
          v70 = v68;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)g_pUserInterface + 6) + 8LL * v68) + 8LL))(*(_QWORD *)(*((_QWORD *)g_pUserInterface + 6) + 8LL * v68));
          v65 = *(IUnknown **)(*((_QWORD *)v67 + 6) + 8 * v70);
        }
        else
        {
LABEL_180:
          v65 = 0;
        }
      }
      if ( v65 )
      {
        v66 = LresultFromObject(&IID_IAccessible, v6, v65);
        ((void (__fastcall *)(IUnknown *))v65->lpVtbl->Release)(v65);
        return v66;
      }
      break;
    case 0x46u:
      if ( HandleWM_WINDOWPOSCHANGING(
             (struct tagWINDOWPOS *)a4,
             g_hWndStatus,
             g_iSizeGrip,
             v10,
             g_uiSnapDistance,
             g_uiMinWidth,
             g_uiMinHeight,
             g_bMinSizeIsNative,
             g_uiLayoutX,
             g_uiLayoutY) )
      {
        return 0;
      }
      break;
    case 0x47u:
      if ( IsZoomed(g_hWnd) )
      {
        g_iMaximizedX = *(_DWORD *)(a4 + 16);
        g_iMaximizedY = *(_DWORD *)(a4 + 20);
      }
      break;
    case 0x4Eu:
      if ( GetForegroundWindow() == g_hWnd
        && *(HWND *)a4 == g_hWndStatus
        && (*(_DWORD *)(a4 + 16) == -5 || *(_DWORD *)(a4 + 16) == -2) )
      {
        Point.x = *(_DWORD *)(a4 + 16) == -5;
        v63 = 0;
        if ( GetKeyState(17) < 0 )
          v63 = 8;
        if ( GetKeyState(16) < 0 )
          v63 |= 4u;
        if ( g_pUserInterface )
          UserInterface::ProcessMouseStatusBarClick(g_pUserInterface, Point.x, v63);
      }
      break;
    case 0x53u:
      Engine_ShowHelp();
      return 1;
    case 0x7Eu:
      if ( v10 )
      {
        memset(&Paint.fMask, 0, 0x28u);
        Paint.cbSize = 44;
        GetWindowPlacement(g_hWnd, (WINDOWPLACEMENT *)&Paint);
        HIDWORD(Paint.hSubMenu) = 0;
        HIDWORD(Paint.hbmpChecked) = (unsigned __int16)a4;
        LODWORD(Paint.hbmpChecked) = 0;
        LODWORD(Paint.hbmpUnchecked) = WORD1(a4);
        SetWindowPlacement(g_hWnd, (const WINDOWPLACEMENT *)&Paint);
      }
      v58 = g_pRenderManager;
      if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
      {
        LOBYTE(v4) = v6 == 16;
        if ( (*(_DWORD *)(*((_QWORD *)g_pRenderManager + 8) + 16LL) == 16) != v4 )
        {
          Log(2u, 731, "RenderManager.cpp", L"Forcing a device recreate on next render");
          *((_BYTE *)v58 + 167) = 1;
        }
        v59 = MonitorFromWindow(g_hWnd, 2u);
        v60 = g_pRenderManager;
        v61 = (HMONITOR)*((_QWORD *)g_pRenderManager + 6);
        if ( v59 != v61 )
        {
          memset(&Paint.fMask, 0, 0x24u);
          Paint.cbSize = 40;
          GetMonitorInfoW(v61, (LPMONITORINFO)&Paint);
          GetWindowRect(g_hWnd, (LPRECT)&Rect);
          IntersectRect(&rcDst, (const RECT *)&Rect, (const RECT *)&Paint.fMask);
          v62 = IsRectEmpty(&rcDst);
          v60 = g_pRenderManager;
          if ( v62 )
          {
            RenderManager::SetEngineState((__int64)g_pRenderManager, 0x102u);
            v60 = g_pRenderManager;
          }
        }
        if ( (*((_DWORD *)v60 + 53) & 0x100) != 0 )
          RenderManager::Render(v60, 1);
        Log(0x800u, 1217, "Window.cpp", L"Display changed...");
        return 0;
      }
      break;
    case 0xFFu:
      if ( v10 )
      {
        if ( !(_BYTE)v6 )
        {
          cy = 0;
          GetRawInputData((HRAWINPUT)a4, 0x10000003u, 0, (PUINT)&cy, 0x18u);
          v55 = operator new[]((unsigned int)cy);
          v56 = v55;
          if ( v55 )
          {
            RawInputData = GetRawInputData((HRAWINPUT)a4, 0x10000003u, v55, (PUINT)&cy, 0x18u);
            if ( RawInputData == cy )
            {
              if ( *v56 == 2
                && v56[6] == 3
                && *((_BYTE *)v56 + 32) == 2
                && *((_BYTE *)v56 + 33) == 9
                && *((_BYTE *)v56 + 34) == 2 )
              {
                if ( g_bContextMenuVisible )
                  PostEscapeKey();
                else
                  PostAppKey();
              }
            }
            else
            {
              Log(0x800u, 1076, "Window.cpp", L"Unable to get raw input");
            }
            operator delete(v56);
          }
        }
      }
      break;
  }
LABEL_300:
  if ( !g_pInterface )
    return DefWindowProcW(hWnd, Msg, v6, a4);
  result = (*(__int64 (__fastcall **)(void *, HWND, _QWORD, WPARAM, __int64, char *))(*(_QWORD *)g_pInterface + 88LL))(
             g_pInterface,
             hWnd,
             Msg,
             v6,
             a4,
             v93);
  if ( !v93[0] )
    return DefWindowProcW(hWnd, Msg, v6, a4);
  return result;
}
