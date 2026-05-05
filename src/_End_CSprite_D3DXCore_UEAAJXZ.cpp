__int64 __fastcall D3DXCore::CSprite::End(D3DXCore::CSprite *this)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  if ( !*((_DWORD *)this + 56) )
    return 2289436780LL;
  if ( *((_DWORD *)this + 66) )
    v3 = (*(__int64 (__fastcall **)(D3DXCore::CSprite *))(*(_QWORD *)this + 80LL))(this);
  else
    v3 = 0;
  D3DXDebugMuteInt(1u);
  if ( (*((_BYTE *)this + 228) & 3) == 0 )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
  }
  v5 = *((_DWORD *)this + 57);
  if ( (v5 & 0x10) != 0 && (v5 & 1) == 0 )
  {
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  }
  v7 = *((_DWORD *)this + 57);
  if ( ((v7 & 4) == 0 || (v7 & 8) != 0) && (v7 & 1) == 0 )
  {
    v8 = *((_QWORD *)this + 12);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
  }
  D3DXDebugMuteInt(0);
  *((_DWORD *)this + 56) = 0;
  return v3;
}
