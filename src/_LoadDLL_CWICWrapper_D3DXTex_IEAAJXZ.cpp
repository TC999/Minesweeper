__int64 __fastcall D3DXTex::CWICWrapper::LoadDLL(D3DXTex::CWICWrapper *this)
{
  char *v1; // rbx
  HMODULE LibraryA; // rax
  FARPROC WICCreateImagingFactory_Proxy; // rax

  v1 = (char *)this + 40;
  if ( *((_QWORD *)this + 5) )
    return 0;
  if ( !*((_BYTE *)this + 48) )
  {
    *((_BYTE *)this + 48) = 1;
    LibraryA = LoadLibraryA("WindowsCodecs.dll");
    if ( LibraryA )
    {
      WICCreateImagingFactory_Proxy = GetProcAddress(LibraryA, "WICCreateImagingFactory_Proxy");
      if ( WICCreateImagingFactory_Proxy )
        return ((__int64 (__fastcall *)(__int64, char *))WICCreateImagingFactory_Proxy)(566, v1);
    }
  }
  return 2147500037LL;
}
