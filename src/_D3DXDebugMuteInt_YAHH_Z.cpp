__int64 __fastcall D3DXDebugMuteInt(unsigned int a1)
{
  unsigned int v1; // esi
  HMODULE LibraryA; // rax
  HMODULE v4; // rax
  int v5; // eax
  LSTATUS v6; // ebx
  int v7; // eax
  DWORD cbData; // [rsp+50h] [rbp+8h] BYREF
  DWORD Type; // [rsp+58h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1000AB13C;
  dword_1000AB13C = a1;
  if ( !DebugSetMute && !DebugSetMute_0 )
  {
    if ( GetModuleHandleA("d3d9.dll") )
    {
      LibraryA = LoadLibraryA("d3d9.dll");
      if ( LibraryA )
        DebugSetMute = (__int64 (__fastcall *)(_QWORD))GetProcAddress(LibraryA, "DebugSetMute");
    }
    if ( GetModuleHandleA("d3d9d.dll") )
    {
      v4 = LoadLibraryA("d3d9d.dll");
      if ( v4 )
        DebugSetMute_0 = (__int64 (__fastcall *)(_QWORD))GetProcAddress(v4, "DebugSetMute");
    }
  }
  v5 = *(_DWORD *)&Data;
  if ( *(_DWORD *)&Data != -1 )
  {
LABEL_17:
    if ( v5 )
      return v1;
    goto LABEL_18;
  }
  hKey = 0;
  cbData = 4;
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Direct3D", 0, 0x2000000u, &hKey)
    || (v6 = RegQueryValueExA(hKey, "D3DXDoNotMute", 0, &Type, &Data, &cbData), RegCloseKey(hKey), v6)
    || Type != 4 )
  {
    v7 = 0;
    *(_DWORD *)&Data = 0;
  }
  else
  {
    v7 = *(_DWORD *)&Data;
  }
  if ( v7 )
  {
    v5 = 1;
    *(_DWORD *)&Data = 1;
    goto LABEL_17;
  }
LABEL_18:
  if ( DebugSetMute )
    DebugSetMute(a1);
  if ( DebugSetMute_0 )
    DebugSetMute_0(a1);
  return v1;
}
