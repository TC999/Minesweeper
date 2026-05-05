char __fastcall DialogHelper::SetStaticTextDate(
        HWND hDlg,
        HWND nIDDlgItem,
        unsigned __int16 *a3,
        const unsigned __int16 *a4,
        __int64 a5)
{
  int v5; // esi
  HWND DlgItem; // rdi
  WCHAR *v10; // rbx
  SYSTEMTIME Date; // [rsp+30h] [rbp-278h] BYREF
  __time64_t Time; // [rsp+40h] [rbp-268h] BYREF
  tm Tm; // [rsp+48h] [rbp-260h] BYREF
  WCHAR DateStr[256]; // [rsp+70h] [rbp-238h] BYREF

  v5 = (int)nIDDlgItem;
  Time = (__time64_t)a4;
  _localtime64_s(&Tm, &Time);
  memset(DateStr, 0, sizeof(DateStr));
  if ( Time )
  {
    Date.wDay = Tm.tm_mday;
    Date.wDayOfWeek = Tm.tm_wday;
    Date.wHour = Tm.tm_hour;
    Date.wMinute = Tm.tm_min;
    Date.wMilliseconds = 0;
    Date.wMonth = LOWORD(Tm.tm_mon) + 1;
    Date.wSecond = Tm.tm_sec;
    Date.wYear = LOWORD(Tm.tm_year) + 1900;
    GetDateFormatW(0x400u, 0x41u, &Date, 0, DateStr, 256);
  }
  DlgItem = GetDlgItem(hDlg, v5);
  if ( !DlgItem )
    return 0;
  if ( (_BYTE)a5 == 1 && a3 )
  {
    v10 = LocalizeMessage(a3, DateStr);
    if ( !v10 )
      return 0;
  }
  else
  {
    v10 = DateStr;
  }
  if ( !SetWindowTextW(DlgItem, v10) )
    return 0;
  if ( (_BYTE)a5 == 1 && v10 != DateStr )
    LocalFree(v10);
  return 1;
}
