__int64 __fastcall D3DXTex::FindClosestDeviceFormat(D3DXTex *this, struct IDirect3DDevice9 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  const struct tagPALETTEENTRY *v8; // rsi
  __int64 *v9; // rbx
  int v10; // eax
  unsigned int v11; // eax
  _BYTE v13[12]; // [rsp+40h] [rbp-158h] BYREF
  unsigned int v14; // [rsp+4Ch] [rbp-14Ch]
  _DWORD v15[76]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v16; // [rsp+1A0h] [rbp+8h] BYREF

  v16 = 0;
  D3DXDebugMuteInt(1);
  if ( this )
  {
    (*(void (__fastcall **)(D3DXTex *, __int64 *))(*(_QWORD *)this + 48LL))(this, &v16);
    (*(void (__fastcall **)(D3DXTex *, _DWORD *))(*(_QWORD *)this + 56LL))(this, v15);
    (*(void (__fastcall **)(D3DXTex *, _QWORD, _BYTE *))(*(_QWORD *)this + 64LL))(this, 0, v13);
  }
  v6 = v16;
  v7 = -1;
  v8 = &stru_100010478;
  v9 = qword_100013C50;
  while ( 1 )
  {
    if ( *(_DWORD *)v9 )
    {
      if ( !v6 )
        break;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int, _DWORD))(*(_QWORD *)v6 + 80LL))(
              v6,
              v15[1],
              v15[0],
              v14,
              0,
              3,
              *(_DWORD *)v9);
      v6 = v16;
      if ( v10 >= 0 )
        break;
    }
LABEL_14:
    v9 = (__int64 *)((char *)v9 + 36);
    if ( v9 >= (__int64 *)&dword_100014454 )
      goto LABEL_17;
  }
  if ( *a4 != *(_DWORD *)v9 )
  {
    if ( *((_DWORD *)v9 + 8) )
    {
      v11 = D3DXTex::ScoreFormat((__int64)a4, (__int64)v9);
      if ( v11 != -1 && v11 <= v7 && (v11 != v7 || *((_DWORD *)v9 + 2) < *(_DWORD *)&v8[2]) )
      {
        v7 = v11;
        v8 = (const struct tagPALETTEENTRY *)v9;
      }
    }
    goto LABEL_14;
  }
  v8 = (const struct tagPALETTEENTRY *)v9;
LABEL_17:
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v16 = 0;
  }
  D3DXDebugMuteInt(0);
  return (__int64)*v8;
}
