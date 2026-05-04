INT_PTR __fastcall DialogHelper::DialogBoxMCE(
        LPCWSTR lpTemplateName,
        HWND hWnd,
        __int64 (*lpDialogFunc)(struct HWND__ *, unsigned int, unsigned __int64, __int64),
        __int64 (*a4)(HWND, unsigned int, unsigned __int64, __int64),
        int a5,
        int a6)
{
  INT_PTR (__stdcall *v6)(HWND, UINT, WPARAM, LPARAM); // rsi
  HWND v7; // rbp
  INT_PTR v9; // rdi
  INT_PTR result; // rax
  HRSRC ResourceW; // rax
  HWND DialogIndirectParamW; // rbx
  HGLOBAL Resource; // rax
  void *v14; // r13
  const struct DLGTEMPLATE *v15; // rax
  const struct DLGTEMPLATE *v16; // r12
  signed int TemplateSize; // eax
  int v18; // ecx
  size_t v19; // rbp
  struct DLGTEMPLATE *v20; // rax
  struct DLGTEMPLATE *v21; // rdi
  DWORD style; // eax
  unsigned __int8 *FontSizeField; // rax
  int v24; // ecx
  __int16 v25; // r9
  DialogHelper *v26; // rcx
  bool v27; // dl
  unsigned __int16 MCEFontSize; // bx
  HDC DC; // rdi
  double v30; // xmm6_8
  UINT v31; // r12d
  int MessageW; // eax
  WPARAM wParam; // rax
  HWND v34; // rcx
  LONG_PTR v35; // rax
  HWND NextDlgGroupItem; // rdi
  LONG_PTR v37; // rax
  HWND v38; // rax
  HWND v39; // rdi
  HWND v40; // rsi
  HWND NextDlgTabItem; // rax
  HWND v42; // rdi
  HWND v43; // rdi
  HWND Focus; // rdi
  HWND v45; // rax
  HWND v46; // rbp
  int ClassNameW; // eax
  bool v48; // zf
  WCHAR *v49; // rsi
  const wchar_t *v50; // rdi
  __int64 v51; // rcx
  __int16 v52; // dx
  HWND v53; // rcx
  _DWORD *v54; // rax
  _DWORD *v55; // rdi
  UINT RawInputData; // eax
  unsigned int pcbSize; // [rsp+38h] [rbp-360h] BYREF
  struct tagMSG Msg; // [rsp+40h] [rbp-358h] BYREF
  RAWINPUTDEVICE pRawInputDevices; // [rsp+70h] [rbp-328h] BYREF
  struct tagRECT v61; // [rsp+80h] [rbp-318h] BYREF
  struct tagRECT v62; // [rsp+90h] [rbp-308h] BYREF
  struct tagRECT v63; // [rsp+A0h] [rbp-2F8h] BYREF
  struct tagRECT v64; // [rsp+B0h] [rbp-2E8h] BYREF
  struct tagRECT v65; // [rsp+C0h] [rbp-2D8h] BYREF
  struct tagRECT Rect; // [rsp+D0h] [rbp-2C8h] BYREF
  struct tagRECT v67; // [rsp+E0h] [rbp-2B8h] BYREF
  struct tagRECT v68; // [rsp+F0h] [rbp-2A8h] BYREF
  wchar_t Destination[32]; // [rsp+100h] [rbp-298h] BYREF
  WCHAR ClassName[256]; // [rsp+140h] [rbp-258h] BYREF

  v6 = lpDialogFunc;
  v7 = hWnd;
  if ( !DialogHelper::m_bIsMediaCenter )
  {
    ShowCursor(1);
    v9 = DialogBoxParamW(DialogHelper::m_hInstance, lpTemplateName, v7, v6, 0);
    ShowCursor(0);
    return v9;
  }
  LODWORD(DialogHelper::m_uiTitle) = a6;
  if ( (char *)lpDialogFunc == (char *)DialogProc )
  {
    DialogHelper::baseDialogProc = 0;
  }
  else
  {
    DialogHelper::baseDialogProc = lpDialogFunc;
    v6 = (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DialogProc;
  }
  ResourceW = FindResourceW(DialogHelper::m_hInstance, lpTemplateName, (LPCWSTR)5);
  DialogIndirectParamW = 0;
  if ( !ResourceW )
    goto LABEL_27;
  Resource = LoadResource(DialogHelper::m_hInstance, ResourceW);
  v14 = Resource;
  if ( !Resource )
    goto LABEL_27;
  v15 = (const struct DLGTEMPLATE *)LockResource(Resource);
  v16 = v15;
  if ( v15 )
  {
    TemplateSize = GetTemplateSize(v15);
    v18 = DialogHelper::m_DlgTemplateAlloc;
    v19 = TemplateSize;
    if ( TemplateSize < DialogHelper::m_DlgTemplateAlloc )
    {
      v21 = (struct DLGTEMPLATE *)DialogHelper::m_hWritableTemplate;
    }
    else
    {
      if ( DialogHelper::m_hWritableTemplate )
        GlobalFree(DialogHelper::m_hWritableTemplate);
      DialogHelper::m_DlgTemplateAlloc = v19 + 1000;
      v20 = (struct DLGTEMPLATE *)GlobalAlloc(0x40u, (int)v19 + 1000);
      v18 = DialogHelper::m_DlgTemplateAlloc;
      v21 = v20;
      DialogHelper::m_hWritableTemplate = v20;
    }
    if ( v21 && (int)v19 < v18 )
    {
      memcpy(v21, v16, v19);
      memset(Destination, 0, sizeof(Destination));
      if ( HIWORD(v21->style) == 0xFFFF )
        style = *(_DWORD *)&v21->y;
      else
        style = v21->style;
      if ( (style & 0x40) != 0 )
      {
        FontSizeField = GetFontSizeField(v21);
        v24 = 1;
        if ( HIWORD(v21->style) == v25 )
          v24 = 3;
        wcsncpy_s(Destination, 0x20u, (const wchar_t *)&FontSizeField[2 * v24], 0xFFFFFFFFFFFFFFFFuLL);
        LOBYTE(v26) = 1;
        MCEFontSize = DialogHelper::GetMCEFontSize(v26, v27);
        DC = GetDC(DialogHelper::m_hWnd);
        v30 = 96.0 / (double)GetDeviceCaps(DC, 88);
        ReleaseDC(DialogHelper::m_hWnd, DC);
        v21 = (struct DLGTEMPLATE *)DialogHelper::m_hWritableTemplate;
        if ( DialogHelper::m_hWritableTemplate )
        {
          SetFontSize(
            (struct DLGTEMPLATE *)DialogHelper::m_hWritableTemplate,
            Destination,
            (int)((double)MCEFontSize * v30));
          v21 = (struct DLGTEMPLATE *)DialogHelper::m_hWritableTemplate;
        }
      }
      v7 = hWnd;
      DialogIndirectParamW = CreateDialogIndirectParamW(DialogHelper::m_hInstance, v21, hWnd, v6, 0);
    }
    else
    {
      v7 = hWnd;
    }
  }
  FreeResource(v14);
  if ( !DialogIndirectParamW )
LABEL_27:
    DialogIndirectParamW = CreateDialogParamW(DialogHelper::m_hInstance, lpTemplateName, v7, v6, 0);
  pRawInputDevices.usUsage = 1;
  pRawInputDevices.dwFlags = 0;
  pRawInputDevices.usUsagePage = 12;
  pRawInputDevices.hwndTarget = DialogIndirectParamW;
  RegisterRawInputDevices(&pRawInputDevices, 1u, 0x10u);
  EnableWindow(v7, 0);
  ShowWindow(DialogIndirectParamW, 5);
  v31 = RegisterWindowMessageW(L"MCEDialogDismiss");
  MessageW = GetMessageW(&Msg, 0, 0, 0);
  if ( MessageW )
  {
    while ( 1 )
    {
      if ( MessageW == -1 || Msg.message == v31 )
      {
LABEL_102:
        v7 = hWnd;
        break;
      }
      if ( Msg.message != 256 )
      {
        if ( Msg.message == 255 )
        {
          if ( LOBYTE(Msg.wParam) )
            goto LABEL_102;
          pcbSize = 0;
          GetRawInputData((HRAWINPUT)Msg.lParam, 0x10000003u, 0, &pcbSize, 0x18u);
          v54 = operator new(pcbSize);
          v55 = v54;
          if ( !v54 )
            goto LABEL_102;
          RawInputData = GetRawInputData((HRAWINPUT)Msg.lParam, 0x10000003u, v54, &pcbSize, 0x18u);
          if ( RawInputData != pcbSize || *v55 != 2 )
          {
            operator delete(v55);
            goto LABEL_102;
          }
          if ( v55[6] == 3 && *((_BYTE *)v55 + 32) == 2 && *((_BYTE *)v55 + 33) == 9 && *((_BYTE *)v55 + 34) == 2 )
          {
            byte_1000ABABA = 1;
            FakeKeyPress(DialogIndirectParamW, 13, 0, 0, 0, 0);
          }
          operator delete(v55);
        }
        goto LABEL_97;
      }
      wParam = Msg.wParam;
      switch ( Msg.wParam )
      {
        case '(':
          if ( !GetDlgCtrlID(Msg.hwnd) )
            goto LABEL_34;
          v35 = GetWindowLongPtrW(Msg.hwnd, -16) & 0xF;
          if ( v35 == 9 || v35 == 4 )
          {
            NextDlgGroupItem = GetNextDlgGroupItem(DialogIndirectParamW, Msg.hwnd, 0);
            GetWindowRect(Msg.hwnd, &Rect);
            GetWindowRect(NextDlgGroupItem, &v67);
            if ( Rect.top < v67.top )
            {
              v34 = NextDlgGroupItem;
              goto LABEL_55;
            }
          }
          break;
        case '&':
          if ( !GetDlgCtrlID(Msg.hwnd) )
            goto LABEL_34;
          v37 = GetWindowLongPtrW(Msg.hwnd, -16) & 0xF;
          if ( v37 == 9 || v37 == 4 )
          {
            v38 = GetNextDlgGroupItem(DialogIndirectParamW, Msg.hwnd, 1);
            v39 = Msg.hwnd;
            v40 = v38;
            GetWindowRect(v38, &v61);
            GetWindowRect(v39, &v63);
            if ( v61.top < v63.top )
              goto LABEL_54;
          }
          break;
        case '%':
        case '\'':
          if ( GetDlgCtrlID(Msg.hwnd) )
          {
            if ( !(unsigned __int8)DialogHelper::DialogBoxMCE_::_2_::LocalScope::IsPushButton(Msg.hwnd) )
              goto LABEL_56;
            NextDlgTabItem = GetNextDlgTabItem(DialogIndirectParamW, Msg.hwnd, !DialogHelper::m_bRTL);
            v40 = NextDlgTabItem;
            if ( Msg.wParam != 37
              || (v42 = Msg.hwnd, GetWindowRect(NextDlgTabItem, &v68), GetWindowRect(v42, &v65), v68.left >= v65.left) )
            {
              v40 = GetNextDlgTabItem(DialogIndirectParamW, Msg.hwnd, DialogHelper::m_bRTL);
              wParam = Msg.wParam;
              if ( Msg.wParam != 39 )
                goto LABEL_57;
              v43 = Msg.hwnd;
              GetWindowRect(v40, &v64);
              GetWindowRect(v43, &v62);
              if ( v64.left <= v62.left )
              {
LABEL_56:
                wParam = Msg.wParam;
LABEL_57:
                if ( wParam == 37 || wParam == 39 )
                {
                  Focus = GetFocus();
                  if ( !(unsigned __int8)DialogHelper::DialogBoxMCE_::_2_::LocalScope::IsRadioButton(Focus)
                    && !(unsigned __int8)DialogHelper::DialogBoxMCE_::_2_::LocalScope::IsCheckBox(Focus) )
                  {
                    wParam = Msg.wParam;
                    goto LABEL_62;
                  }
                  v53 = DialogIndirectParamW;
                  if ( Msg.wParam == 37 )
                    v52 = 38;
                  else
                    v52 = 40;
                }
                else
                {
LABEL_62:
                  if ( wParam == 37 || wParam == 39 )
                  {
                    v45 = GetFocus();
                    v46 = v45;
                    if ( !v45 )
                      goto LABEL_99;
                    ClassNameW = GetClassNameW(v45, ClassName, 256);
                    v48 = ClassNameW == 0;
                    if ( ClassNameW <= 0 )
                      goto LABEL_99;
                    v49 = ClassName;
                    v50 = L"msctls_trackbar32";
                    v51 = 18;
                    do
                    {
                      if ( !v51 )
                        break;
                      v48 = *v49++ == *v50++;
                      --v51;
                    }
                    while ( v48 );
                    if ( !v48 )
                      goto LABEL_99;
                    if ( DialogHelper::m_bRTL )
                      InvalidateRect(v46, 0, 0);
                    wParam = Msg.wParam;
                  }
                  if ( wParam == 166 )
                  {
                    if ( !GetDlgCtrlID(Msg.hwnd) )
                      SetFocus(DialogIndirectParamW);
                    v52 = 27;
                  }
                  else
                  {
                    if ( wParam != 13 )
                      goto LABEL_97;
                    if ( byte_1000ABABA )
                    {
                      byte_1000ABABA = 0;
LABEL_97:
                      if ( !IsDialogMessageW(DialogIndirectParamW, &Msg) )
                      {
                        TranslateMessage(&Msg);
                        DispatchMessageW(&Msg);
                      }
                      goto LABEL_99;
                    }
                    v52 = 32;
                  }
                  v53 = DialogIndirectParamW;
                }
                FakeKeyPress(v53, v52, 0, 0, 0, 0);
                goto LABEL_99;
              }
            }
LABEL_54:
            v34 = v40;
          }
          else
          {
LABEL_34:
            v34 = DialogIndirectParamW;
          }
LABEL_55:
          SetFocus(v34);
          goto LABEL_99;
        default:
          goto LABEL_57;
      }
      DialogHelper::DialogBoxMCE_::_2_::LocalScope::FakeTab(DialogIndirectParamW);
LABEL_99:
      MessageW = GetMessageW(&Msg, 0, 0, 0);
      if ( !MessageW )
        goto LABEL_102;
    }
  }
  EnableWindow(v7, 1);
  DestroyWindow(DialogIndirectParamW);
  pRawInputDevices.hwndTarget = v7;
  RegisterRawInputDevices(&pRawInputDevices, 1u, 0x10u);
  if ( DialogHelper::m_Background )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_Background)(DialogHelper::m_Background, 1);
  result = LOWORD(Msg.wParam);
  DialogHelper::m_Background = 0;
  return result;
}
