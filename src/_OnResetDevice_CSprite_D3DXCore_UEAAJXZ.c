__int64 __fastcall D3DXCore::CSprite::OnResetDevice(D3DXCore::CSprite *this)
{
  _BYTE v3[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v4; // [rsp+4Ch] [rbp-2Ch]
  _DWORD v5[10]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v6; // [rsp+80h] [rbp+8h] BYREF

  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 36) = 1;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 3) + 304LL))(
         *((_QWORD *)this + 3),
         0,
         &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 96LL))(v6, v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3), 0, v3);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, _DWORD))(**((_QWORD **)this + 2) + 80LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 29),
           *((unsigned int *)this + 28),
           v4,
           524289,
           1,
           v5[0]) < 0 )
      *((_DWORD *)this + 36) = 0;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0;
}
