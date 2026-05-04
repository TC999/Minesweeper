const unsigned __int16 *__fastcall GetHResult(unsigned int a1)
{
  if ( a1 <= 0x8876081A )
  {
    switch ( a1 )
    {
      case 0x8876081A:
        return L"D3DERR_UNSUPPORTEDCOLORARG";
      case 0u:
        return L"S_OK";
      case 1u:
        return L"S_FALSE";
      case 0x80004001:
        return L"E_NOTIMPL";
      case 0x80004005:
        return L"E_FAIL";
      case 0x80020009:
        return L"DISP_E_EXCEPTION";
      case 0x8007000E:
        return L"E_OUTOFMEMORY";
      case 0x80070057:
        return L"E_INVALIDARG";
      case 0x8876017C:
        return L"D3DERR_OUTOFVIDEOMEMORY";
      case 0x88760818:
        return L"D3DERR_WRONGTEXTUREFORMAT";
    }
    return L"Unknown HR";
  }
  switch ( a1 )
  {
    case 0x88760827:
      return L"D3DERR_DRIVERINTERNALERROR";
    case 0x88760866:
      return L"D3DERR_NOTFOUND";
    case 0x88760868:
      return L"D3DERR_DEVICELOST";
    case 0x88760869:
      return L"D3DERR_DEVICENOTRESET";
    case 0x8876086A:
      return L"D3DERR_NOTAVAILABLE";
    case 0x8876086C:
      return L"D3DERR_INVALIDCALL";
    case 0x88760870:
      return L"D3DERR_DEVICEREMOVED";
  }
  if ( a1 != -2005529767 )
    return L"Unknown HR";
  return L"D3DXERR_INVALIDDATA";
}
