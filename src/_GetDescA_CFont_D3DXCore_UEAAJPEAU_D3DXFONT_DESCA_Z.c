__int64 __fastcall D3DXCore::CFont::GetDescA(HANDLE *this, struct _D3DXFONT_DESCA *a2)
{
  _DWORD pv[5]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v6; // [rsp+34h] [rbp-44h]
  char v7; // [rsp+37h] [rbp-41h]
  char v8; // [rsp+38h] [rbp-40h]
  char v9; // [rsp+3Ah] [rbp-3Eh]
  char v10; // [rsp+3Bh] [rbp-3Dh]
  _BYTE Src[32]; // [rsp+3Ch] [rbp-3Ch] BYREF

  if ( !a2 || !GetObjectA(this[6], 60, pv) )
    return 2289436780LL;
  *(_DWORD *)a2 = pv[0];
  *((_DWORD *)a2 + 1) = pv[1];
  *((_DWORD *)a2 + 2) = pv[4];
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 596);
  *((_DWORD *)a2 + 4) = v6;
  *((_BYTE *)a2 + 20) = v7;
  *((_BYTE *)a2 + 21) = v8;
  *((_BYTE *)a2 + 22) = v9;
  *((_BYTE *)a2 + 23) = v10;
  memcpy((char *)a2 + 24, Src, 0x20u);
  return 0;
}
