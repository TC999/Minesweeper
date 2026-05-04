// Hidden C++ exception states: #wind=1
char __fastcall GetDefaultWindowPosition(int *a1, int *a2, bool *a3)
{
  HDC DC; // rdi
  int DeviceCaps; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned int v9; // r11d
  int v10; // ecx
  __int64 v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // rsi
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r9
  bool v21; // zf
  unsigned int v22; // r9d
  int v23; // ecx
  __int64 v24; // r8
  HMONITOR v26; // rbx
  __int64 v27; // [rsp+28h] [rbp-90h]
  LPARAM dwData; // [rsp+30h] [rbp-88h] BYREF
  int v29; // [rsp+38h] [rbp-80h]
  void *Block; // [rsp+40h] [rbp-78h]
  struct tagRECT Rect; // [rsp+48h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+58h] [rbp-60h] BYREF
  struct tagMONITORINFO v33; // [rsp+80h] [rbp-38h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-10h]

  v34 = -2;
  DC = GetDC(0);
  DeviceCaps = GetDeviceCaps(DC, 90);
  ReleaseDC(0, DC);
  *a3 = DeviceCaps >= 192;
  dwData = 0;
  v29 = 16;
  Block = 0;
  EnumDisplayMonitors(0, 0, (MONITORENUMPROC)MonitorEnumProc, (LPARAM)&dwData);
  memset(&mi.rcMonitor, 0, 0x24u);
  mi.cbSize = 40;
  v6 = 0;
  v7 = dwData;
  if ( (_DWORD)dwData )
  {
    v8 = 0;
    do
    {
      if ( GetMonitorInfoW(*(HMONITOR *)((char *)Block + v8), &mi) )
      {
        if ( mi.rcMonitor.bottom - mi.rcMonitor.top < (*a3 ? 1200 : 600)
          || mi.rcMonitor.right - mi.rcMonitor.left < (*a3 ? 1600 : 800) )
        {
          v22 = v6;
          v23 = dwData;
          if ( v6 < (int)dwData - 1 )
          {
            v24 = v8;
            do
            {
              *(_QWORD *)((char *)Block + v24) = *(_QWORD *)((char *)Block + v24 + 8);
              ++v22;
              v24 += 8;
              v23 = dwData;
            }
            while ( v22 < (int)dwData - 1 );
          }
          v7 = v23 - 1;
          LODWORD(dwData) = v7;
          --v6;
          v8 -= 8;
          goto LABEL_32;
        }
        if ( (mi.dwFlags & 1) != 0 && v6 )
        {
          v12 = Block;
          v13 = *(_QWORD *)((char *)Block + v8);
          v14 = v6;
          v15 = dwData;
          if ( v6 < (int)dwData - 1 )
          {
            v16 = v8;
            while ( 1 )
            {
              *(_QWORD *)((char *)v12 + v16) = *(_QWORD *)((char *)v12 + v16 + 8);
              ++v14;
              v16 += 8;
              v15 = dwData;
              if ( v14 >= (int)dwData - 1 )
                break;
              v12 = Block;
            }
            v12 = Block;
          }
          v17 = HIDWORD(dwData);
          if ( v15 <= HIDWORD(dwData) )
            goto LABEL_21;
          HIDWORD(dwData) += v29;
          v18 = realloc(v12, 8LL * (unsigned int)(v29 + v17));
          v12 = v18;
          if ( v18 )
          {
            Block = v18;
            v15 = dwData;
LABEL_21:
            v19 = v15 - 1;
            if ( v15 != 1 )
            {
              v20 = (int)v19;
              while ( 1 )
              {
                v12[v20] = v12[v20 - 1];
                v21 = v19-- == 1;
                --v20;
                if ( v21 )
                  break;
                v12 = Block;
              }
              v12 = Block;
            }
            *v12 = v13;
            v7 = dwData;
            goto LABEL_32;
          }
          CheckAllocation(0);
          v7 = dwData;
        }
        else
        {
          v7 = dwData;
        }
      }
      else
      {
        LODWORD(v27) = v6;
        Log(
          0x800u,
          2465,
          "Window.cpp",
          L"Couldn't get monitor info for HMONITOR(%x), index %d",
          *(_QWORD *)((char *)Block + v8),
          v27);
        v9 = v6;
        v10 = dwData;
        if ( v6 < (int)dwData - 1 )
        {
          v11 = v8;
          do
          {
            *(_QWORD *)((char *)Block + v11) = *(_QWORD *)((char *)Block + v11 + 8);
            ++v9;
            v11 += 8;
            v10 = dwData;
          }
          while ( v9 < (int)dwData - 1 );
        }
        v7 = v10 - 1;
        LODWORD(dwData) = v7;
        --v6;
        v8 -= 8;
      }
LABEL_32:
      ++v6;
      v8 += 8;
    }
    while ( v6 < v7 );
  }
  if ( v7 )
  {
    v26 = *(HMONITOR *)Block;
    memset(&v33.rcMonitor, 0, 0x24u);
    v33.cbSize = 40;
    GetMonitorInfoW(v26, &v33);
    GetWindowRect(g_hWnd, &Rect);
    winPrefs::iX = (v33.rcWork.right - v33.rcWork.left) / 2 - (Rect.right - Rect.left) / 2;
    winPrefs::iY = (v33.rcWork.bottom - v33.rcWork.top) / 2 - (Rect.bottom - Rect.top) / 2;
    if ( Block )
      free(Block);
    return 1;
  }
  else
  {
    Log(0x800u, 2496, "Window.cpp", L"There is no monitor with a high enough desktop resolution");
    if ( Block )
      free(Block);
    return 0;
  }
}
