__int64 __fastcall D3DXTex::CDataCollector::Flush(D3DXTex::CDataCollector *this)
{
  int v1; // eax
  int v3; // eax
  DWORD v4; // r8d
  DWORD NumberOfBytesWritten; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 8);
  if ( v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return 2147500037LL;
    }
    else
    {
      v4 = *((_DWORD *)this + 14);
      if ( v4 )
      {
        if ( !WriteFile(*(HANDLE *)this, *((LPCVOID *)this + 6), v4, &NumberOfBytesWritten, 0) )
          return 2147500037LL;
        *((_DWORD *)this + 15) += *((_DWORD *)this + 14);
        *((_DWORD *)this + 14) = 0;
      }
    }
  }
  return 0;
}
