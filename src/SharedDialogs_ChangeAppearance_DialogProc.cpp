__int64 __fastcall SharedDialogs::ChangeAppearance::DialogProc(HWND hWnd, int a2, unsigned __int16 a3, __int64 a4)
{
  int v4; // edx
  int v7; // edx
  HWND v8; // rdx
  unsigned int v10; // eax
  HWND DlgItem; // rax
  WPARAM v12; // rbx
  __int64 *v13; // r12
  HWND v14; // rcx
  HWND v15; // rcx
  WPARAM v16; // rsi
  DWORD SysColor; // eax
  HPEN Pen; // rbx
  HGDIOBJ StockObject; // rax
  COLORREF TextColor; // edi
  DWORD v21; // eax
  DWORD v22; // eax
  HWND v23; // rcx
  HWND v24; // rcx
  HBRUSH SysColorBrush; // rax
  HGDIOBJ v26; // rax
  LONG v27; // r8d
  int v28; // r8d
  struct tagRECT bottom; // [rsp+30h] [rbp-188h] BYREF
  LPARAM lParam[12]; // [rsp+40h] [rbp-178h] BYREF
  LPARAM v31; // [rsp+A0h] [rbp-118h] BYREF
  int v32; // [rsp+A8h] [rbp-110h]
  WCHAR *v33; // [rsp+B8h] [rbp-100h]
  int v34; // [rsp+C0h] [rbp-F8h]
  WCHAR chText[64]; // [rsp+100h] [rbp-B8h] BYREF

  v4 = a2 - 16;
  if ( !v4 )
  {
    byte_1000A85B4 = 0;
    SharedDialogs::ChangeAppearance::ExitCleanup();
    DialogHelper::DismissDialog(hWnd, 0, v28);
    return 0;
  }
  v7 = v4 - 62;
  if ( v7 )
  {
    v8 = (HWND)(unsigned int)(v7 - 194);
    if ( !(_DWORD)v8 )
    {
      SharedDialogs::ChangeAppearance::OnWmInitDialog(hWnd, v8);
      return 1;
    }
    if ( (_DWORD)v8 == 1 )
    {
      SharedDialogs::ChangeAppearance::OnWmCommand(hWnd, a3);
      return 1;
    }
  }
  else
  {
    if ( *(_QWORD *)(a4 + 8) != 5000 && *(_QWORD *)(a4 + 8) != 5001 )
      return 0;
    v10 = *(_DWORD *)(a4 + 16);
    if ( v10 < 0xFFFFFF9B )
      return 0;
    if ( v10 <= 0xFFFFFF9C )
      goto LABEL_15;
    switch ( v10 )
    {
      case 0xFFFFFFF4:
        switch ( *(_DWORD *)(a4 + 24) )
        {
          case 1:
            v27 = 32;
            break;
          case 0x10001:
            v27 = 16;
            break;
          case 0x10002:
            v12 = *(int *)(a4 + 56);
            v13 = &qword_1000A8600[4 * (*(_QWORD *)(a4 + 8) != 5000)];
            memset(lParam, 0, 0x58u);
            v14 = (HWND)*v13;
            LODWORD(lParam[0]) = 10;
            HIDWORD(lParam[0]) = v12;
            LODWORD(lParam[2]) = 2;
            SendMessageW(v14, 0x104Bu, 0, (LPARAM)lParam);
            if ( (lParam[1] & 0x200000000LL) != 0 )
            {
              v15 = (HWND)*v13;
              bottom.left = 1;
              v16 = v12;
              SendMessageW(v15, 0x100Eu, v12, (LPARAM)&bottom);
              SysColor = GetSysColor(13);
              Pen = CreatePen(0, 3, SysColor);
              SelectObject(*(HDC *)(a4 + 32), Pen);
              StockObject = GetStockObject(5);
              SelectObject(*(HDC *)(a4 + 32), StockObject);
              Rectangle(*(HDC *)(a4 + 32), bottom.left + 3, bottom.top, bottom.right - 3, bottom.bottom);
              DeleteObject(Pen);
              LODWORD(Pen) = GetBkColor(*(HDC *)(a4 + 32));
              TextColor = GetTextColor(*(HDC *)(a4 + 32));
              v21 = GetSysColor(13);
              SetBkColor(*(HDC *)(a4 + 32), v21);
              v22 = GetSysColor(14);
              SetTextColor(*(HDC *)(a4 + 32), v22);
              memset(chText, 0, 120);
              v23 = (HWND)*v13;
              bottom.left = 2;
              SendMessageW(v23, 0x100Eu, v16, (LPARAM)&bottom);
              v24 = (HWND)*v13;
              v33 = chText;
              v32 = 0;
              v34 = 60;
              SendMessageW(v24, 0x1073u, v16, (LPARAM)&v31);
              SysColorBrush = GetSysColorBrush(13);
              SelectObject(*(HDC *)(a4 + 32), SysColorBrush);
              Rectangle(*(HDC *)(a4 + 32), bottom.left, bottom.top + 1, bottom.right, bottom.bottom - 1);
              v26 = GetStockObject(5);
              SelectObject(*(HDC *)(a4 + 32), v26);
              DrawTextW(*(HDC *)(a4 + 32), chText, -1, &bottom, 0x8011u);
              SetBkColor(*(HDC *)(a4 + 32), (COLORREF)Pen);
              SetTextColor(*(HDC *)(a4 + 32), TextColor);
            }
            return 1;
          default:
            return 0;
        }
        SetWindowLongW(hWnd, 0, v27);
        return 1;
      case 0xFFFFFFFD:
        GetDlgItem(hWnd, 1);
        SharedDialogs::ChangeAppearance::OnWmCommand(hWnd, 1);
        return 0;
      case 0xFFFFFFFE:
LABEL_15:
        DlgItem = GetDlgItem(hWnd, 5004);
        SendMessageW(DlgItem, 0xF1u, 0, 0);
        break;
    }
  }
  return 0;
}
