__int64 __fastcall D3DXCore::CFont::GetDescW(D3DXCore::CFont *this, struct _D3DXFONT_DESCW *a2)
{
  void *v5; // rcx
  int pv; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+34h] [rbp-74h]
  int v8; // [rsp+40h] [rbp-68h]
  unsigned __int8 v9; // [rsp+44h] [rbp-64h]
  char v10; // [rsp+47h] [rbp-61h]
  char v11; // [rsp+48h] [rbp-60h]
  char v12; // [rsp+4Ah] [rbp-5Eh]
  char v13; // [rsp+4Bh] [rbp-5Dh]
  CHAR Src[68]; // [rsp+4Ch] [rbp-5Ch] BYREF

  if ( !a2 )
    return 2289436780LL;
  v5 = (void *)*((_QWORD *)this + 6);
  if ( !D3DXCore::g_bUnicodeAPI )
  {
    if ( GetObjectA(v5, 60, &pv) )
    {
      *(_DWORD *)a2 = pv;
      *((_DWORD *)a2 + 1) = v7;
      *((_DWORD *)a2 + 2) = v8;
      *((_DWORD *)a2 + 3) = *((_DWORD *)this + 596);
      *((_DWORD *)a2 + 4) = v9;
      *((_BYTE *)a2 + 20) = v10;
      *((_BYTE *)a2 + 21) = v11;
      *((_BYTE *)a2 + 22) = v12;
      *((_BYTE *)a2 + 23) = v13;
      MultiByteToWideChar(0, 0, Src, -1, (LPWSTR)a2 + 12, 32);
      *((_WORD *)a2 + 43) = 0;
      return 0;
    }
    return 2289436780LL;
  }
  if ( !GetObjectW(v5, 92, &pv) )
    return 2289436780LL;
  *(_DWORD *)a2 = pv;
  *((_DWORD *)a2 + 1) = v7;
  *((_DWORD *)a2 + 2) = v8;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 596);
  *((_DWORD *)a2 + 4) = v9;
  *((_BYTE *)a2 + 20) = v10;
  *((_BYTE *)a2 + 21) = v11;
  *((_BYTE *)a2 + 22) = v12;
  *((_BYTE *)a2 + 23) = v13;
  memcpy((char *)a2 + 24, Src, 0x40u);
  return 0;
}
