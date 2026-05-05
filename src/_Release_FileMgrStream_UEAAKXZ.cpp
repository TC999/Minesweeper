__int64 __fastcall FileMgrStream::Release(FileMgrStream *this)
{
  __int64 v1; // r8

  v1 = (unsigned int)(*((_DWORD *)this + 6) - 1);
  if ( _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) )
    return (unsigned int)v1;
  (*(void (__fastcall **)(FileMgrStream *, __int64, __int64))(*(_QWORD *)this + 120LL))(this, 1, v1);
  return 0;
}
