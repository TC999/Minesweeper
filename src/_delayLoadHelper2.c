FARPROC __fastcall _delayLoadHelper2(unsigned int *a1, FARPROC *a2)
{
  volatile signed __int64 *v2; // rbp
  HMODULE v3; // rbx
  const CHAR *v5; // r12
  int v6; // edi
  __int64 v7; // rdx
  const CHAR *v8; // rsi
  HMODULE Library; // rax
  signed __int64 v10; // rbp
  DWORD LastError; // eax
  FARPROC ProcAddress; // rbx
  DWORD v13; // eax
  DelayLoadInfo pdli; // [rsp+20h] [rbp-68h] BYREF

  v2 = (volatile signed __int64 *)((char *)&_ImageBase.unused + a1[2]);
  v3 = (HMODULE)*v2;
  v5 = (char *)&_ImageBase + a1[1];
  v6 = 0;
  v7 = a1[4] + 8LL * (unsigned int)(((char *)a2 - a1[3] - (char *)&_ImageBase) >> 3);
  if ( *(__int64 *)((char *)&_ImageBase.unused + v7) < 0 )
    v8 = (const CHAR *)*(unsigned __int16 *)((char *)&_ImageBase.unused + v7);
  else
    v8 = (char *)&_ImageBase.unused + *(unsigned int *)((char *)&_ImageBase.unused + v7) + 2;
  if ( !v3 )
  {
    Library = LoadLibraryExA(v5, 0, 0);
    v3 = Library;
    if ( Library )
    {
      v10 = _InterlockedCompareExchange64(v2, (signed __int64)Library, 0);
      if ( v10 )
      {
        FreeLibrary(Library);
        v3 = (HMODULE)v10;
      }
      else
      {
        memset(&pdli.pidd, 0, 0x40u);
        pdli.cb = 72;
        pdli.szDll = v5;
        pdli.hmodCur = v3;
        if ( _pfnDliNotifyHook2 )
          _pfnDliNotifyHook2(5u, &pdli);
      }
    }
    else
    {
      LastError = GetLastError();
      if ( LastError != 126 && LastError != 193 )
        goto LABEL_21;
      v3 = (HMODULE)_InterlockedCompareExchange64(v2, -1, 0);
      if ( !v3 )
      {
LABEL_14:
        v6 = 1;
LABEL_21:
        ProcAddress = (FARPROC)((__int64 (__fastcall *)(const CHAR *, const CHAR *))DelayLoadFailureHook)(v5, v8);
        goto LABEL_22;
      }
    }
  }
  if ( v3 == (HMODULE)-1LL )
    goto LABEL_14;
  if ( !v3 )
    goto LABEL_21;
  ProcAddress = GetProcAddress(v3, v8);
  if ( ProcAddress || (v13 = GetLastError(), v13 == 127) || v13 == 182 )
    v6 = 1;
  if ( !ProcAddress )
    goto LABEL_21;
LABEL_22:
  if ( v6 )
    *a2 = ProcAddress;
  return ProcAddress;
}
