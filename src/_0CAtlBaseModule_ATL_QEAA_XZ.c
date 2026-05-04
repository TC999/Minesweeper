struct _RTL_CRITICAL_SECTION *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax
  char v3; // cl
  bool v4; // sf
  struct _RTL_CRITICAL_SECTION *result; // rax
  struct _OSVERSIONINFOA VersionInformation; // [rsp+20h] [rbp-B8h] BYREF

  memset(&this[1], 0, sizeof(struct _RTL_CRITICAL_SECTION));
  this[2].DebugInfo = 0;
  this[2].LockCount = 0;
  this[2].RecursionCount = 0;
  this->OwningThread = &_ImageBase;
  *(_QWORD *)&this->LockCount = &_ImageBase;
  LODWORD(this->DebugInfo) = 96;
  LOBYTE(this->LockSemaphore) = 0;
  memset(&VersionInformation, 0, sizeof(VersionInformation));
  VersionInformation.dwOSVersionInfoSize = 148;
  GetVersionExA(&VersionInformation);
  if ( VersionInformation.dwPlatformId == 2 )
  {
    if ( VersionInformation.dwMajorVersion < 5 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( VersionInformation.dwPlatformId == 1
    && (VersionInformation.dwMajorVersion > 4
     || VersionInformation.dwMajorVersion == 4 && VersionInformation.dwMinorVersion) )
  {
LABEL_8:
    LOBYTE(this->LockSemaphore) = 1;
  }
LABEL_9:
  HIDWORD(this->LockSemaphore) = 2048;
  this->SpinCount = (ULONG_PTR)&GUID_ATLVer70;
  v2 = ATL::CComCriticalSection::Init(this + 1);
  v3 = ATL::CAtlBaseModule::m_bInitFailed;
  v4 = v2 < 0;
  result = this;
  if ( v4 )
    v3 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v3;
  return result;
}
