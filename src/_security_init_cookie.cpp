void __cdecl _security_init_cookie()
{
  _FILETIME v0; // rbx
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  LONGLONG v4; // r11
  _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  SystemTimeAsFileTime = 0;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v0 = SystemTimeAsFileTime;
    v1 = GetCurrentProcessId() ^ *(unsigned __int64 *)&v0;
    v2 = GetCurrentThreadId() ^ v1;
    v3 = GetTickCount() ^ v2;
    QueryPerformanceCounter(&PerformanceCount);
    v4 = (v3 ^ PerformanceCount.QuadPart) & 0xFFFFFFFFFFFFLL;
    if ( v4 == 0x2B992DDFA232LL )
      v4 = 0x2B992DDFA233LL;
    _security_cookie = v4;
    _security_cookie_complement = ~v4;
  }
  else
  {
    _security_cookie_complement = ~_security_cookie;
  }
}
