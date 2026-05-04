__int64 __fastcall DialogHelper::GetMCEFontSize(DialogHelper *this)
{
  char v1; // di
  HDC DC; // rbx
  int v3; // ebp
  int DeviceCaps; // esi
  float v5; // xmm6_4
  int v6; // r11d

  v1 = (char)this;
  DC = GetDC(DialogHelper::m_hWnd);
  v3 = 10;
  DeviceCaps = GetDeviceCaps(DC, 8);
  v5 = (float)DeviceCaps / (float)GetDeviceCaps(DC, 10);
  ReleaseDC(DialogHelper::m_hWnd, DC);
  v6 = 0;
  if ( v1 && v5 > 1.4 )
    v6 = -2;
  if ( DeviceCaps >= 800 )
  {
    if ( DeviceCaps >= 1024 )
    {
      if ( DeviceCaps >= 1280 )
      {
        if ( DeviceCaps >= 1600 )
        {
          if ( DeviceCaps >= 1819 )
            v3 = 2 * ((DeviceCaps - 1600) / 220) + 20;
          else
            v3 = 20;
        }
        else
        {
          v3 = 16;
        }
      }
      else
      {
        v3 = 14;
      }
    }
    else
    {
      v3 = 12;
    }
  }
  return (unsigned int)(v6 + v3);
}
