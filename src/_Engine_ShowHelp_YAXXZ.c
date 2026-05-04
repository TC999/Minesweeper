// Hidden C++ exception states: #wind=1
void Engine_ShowHelp(void)
{
  const OLECHAR *v0; // rbx
  BSTR v1; // rax
  OLECHAR *v2; // rbx
  signed int v3; // eax
  const unsigned __int16 *HResult; // rax
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v0 = (const OLECHAR *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 8LL))(g_pInterface);
  if ( v0 )
  {
    ppv = 0;
    if ( CoCreateInstance(
           &GUID_8cec58e7_07a1_11d9_b15e_000d56bfe6ee,
           0,
           0x17u,
           &GUID_8cec5884_07a1_11d9_b15e_000d56bfe6ee,
           &ppv) >= 0 )
    {
      v1 = SysAllocString(v0);
      v2 = v1;
      if ( v1 )
      {
        v3 = (*(__int64 (__fastcall **)(LPVOID, BSTR))(*(_QWORD *)ppv + 24LL))(ppv, v1);
        if ( v3 < 0 )
        {
          HResult = GetHResult(v3);
          Log(0x10u, 644, "Engine.cpp", L"Couldn't create help pane: hr %x (%s)", HResult);
        }
      }
      else
      {
        Log(0x10u, 648, "Engine.cpp", L"Couldn't allocate string for help pane");
      }
      SysFreeString(v2);
    }
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
