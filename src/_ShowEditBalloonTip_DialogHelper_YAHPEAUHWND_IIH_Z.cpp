LRESULT __fastcall DialogHelper::ShowEditBalloonTip(HWND hWnd, HWND a2, UINT a3)
{
  LPARAM lParam[3]; // [rsp+20h] [rbp-638h] BYREF
  int v7; // [rsp+38h] [rbp-620h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-618h] BYREF
  WCHAR v9[512]; // [rsp+240h] [rbp-418h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  memset(v9, 0, sizeof(v9));
  if ( DialogHelper::m_bIsMediaCenter
    || !LoadStringW(DialogHelper::m_hInstance, 0x6Du, Buffer, 256)
    || !LoadStringW(DialogHelper::m_hInstance, a3, v9, 512) )
  {
    return 0;
  }
  lParam[2] = (LPARAM)v9;
  LODWORD(lParam[0]) = 32;
  v7 = 1;
  lParam[1] = (LPARAM)Buffer;
  return SendMessageW(hWnd, 0x1503u, 0, (LPARAM)lParam);
}
