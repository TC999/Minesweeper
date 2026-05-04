__int64 __fastcall MaterialAlpha::OnDeviceLost(MaterialAlpha *this)
{
  signed int v1; // eax
  unsigned int v2; // ebx
  const unsigned __int16 *HResult; // rax
  int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-28h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, char *, _QWORD))(**((_QWORD **)g_pRenderManager
                                                                                              + 10)
                                                                                           + 208LL))(
         *((_QWORD *)g_pRenderManager + 10),
         (unsigned int)(112 * *((_DWORD *)this + 14)),
         520,
         324,
         0,
         (char *)this + 40,
         0);
  v2 = v1;
  if ( v1 < 0 )
  {
    HResult = GetHResult(v1);
    LODWORD(v6) = v4;
    Log(2u, 123, "MaterialAlpha.cpp", L"Unable to recreate the vertex buffer: %x(%s)", v6, HResult);
  }
  return v2;
}
