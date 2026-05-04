void __fastcall PaintBackground(HDC hDC)
{
  DWORD SysColor; // eax
  HBRUSH StockObject; // rax
  RECT rc; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+18h] BYREF

  SelectObject(hDC, g_hEngineFont);
  if ( (_BYTE)g_bMediaCenter == 1 )
    SysColor = 14737632;
  else
    SysColor = GetSysColor(8);
  SetTextColor(hDC, SysColor);
  SetBkColor(hDC, g_coMCEBackground);
  SetBkMode(hDC, 2);
  GetContentAreaDimensions(&v5, &v6, g_hWnd, g_hWndStatus);
  rc.left = 0;
  rc.top = 0;
  rc.right = v5;
  rc.bottom = v6;
  StockObject = (HBRUSH)GetStockObject(4);
  FillRect(hDC, &rc, StockObject);
}
