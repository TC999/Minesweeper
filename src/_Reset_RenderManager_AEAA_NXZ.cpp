char __fastcall RenderManager::Reset(RenderManager *this)
{
  __int64 *v2; // r11
  bool v3; // zf
  __int64 v4; // rax
  int v5; // ecx
  signed int v6; // eax
  signed int v7; // edi
  const unsigned __int16 *HResult; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h]
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF

  Log(
    2u,
    2253,
    "RenderManager.cpp",
    L"Reset: %d x %d format %d",
    *(_DWORD *)(*((_QWORD *)this + 8) + 8LL),
    *(_DWORD *)(*((_QWORD *)this + 8) + 12LL),
    *((_DWORD *)this + 1));
  memset(v12, 0, 0x40u);
  v2 = (__int64 *)*((_QWORD *)this + 8);
  v3 = *((_BYTE *)v2 + 20) == 0;
  v12[5] = v3;
  v4 = *v2;
  LODWORD(v12[3]) = 1;
  v12[4] = v4;
  HIDWORD(v12[0]) = *((_DWORD *)v2 + 3);
  LODWORD(v4) = *((_DWORD *)v2 + 2);
  HIDWORD(v12[6]) = 0;
  LODWORD(v12[0]) = v4;
  LODWORD(v4) = *((_DWORD *)this + 1);
  HIDWORD(v12[7]) = 1;
  v12[1] = (unsigned int)v4 | 0x100000000LL;
  if ( v3 )
  {
    v5 = 16;
    LODWORD(v12[1]) = *((_DWORD *)this + 18);
    if ( LODWORD(v12[1]) == 22 )
      v5 = 32;
    *((_DWORD *)v2 + 4) = v5;
  }
  else
  {
    v12[7] = v3 & v12[7] | 0x8000000000000000uLL;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 10) + 128LL))(*((_QWORD *)this + 10), v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    HResult = GetHResult(v6);
    LODWORD(v11) = v7;
    Log(2u, 2315, "RenderManager.cpp", L"Error in Reset(): %x(%s)", v11, HResult);
    switch ( v7 )
    {
      case -2005532292:
        v10 = 257;
        break;
      case -2005530585:
        v10 = 272;
        break;
      case -2005530520:
        v10 = 260;
        break;
      default:
        v10 = 320;
        if ( v7 != -2005530512 )
          v10 = 288;
        break;
    }
    RenderManager::SetEngineState(this, v10);
    return 0;
  }
  else
  {
    *(_BYTE *)this = 0;
    return 1;
  }
}
