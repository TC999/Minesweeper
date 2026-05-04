void __fastcall D3DXCore::CFile::~CFile(D3DXCore::CFile *this)
{
  const void *v2; // rcx
  void *v3; // rcx

  if ( *(_QWORD *)this != -1 )
  {
    v2 = (const void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      UnmapViewOfFile(v2);
      *((_QWORD *)this + 2) = 0;
      *((_DWORD *)this + 6) = 0;
    }
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 != (void *)-1LL )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 1) = -1;
    }
    if ( *(_QWORD *)this != -1 )
    {
      CloseHandle(*(HANDLE *)this);
      *(_QWORD *)this = -1;
    }
  }
}
