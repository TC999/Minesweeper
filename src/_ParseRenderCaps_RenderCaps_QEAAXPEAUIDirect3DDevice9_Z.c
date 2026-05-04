void __fastcall RenderCaps::ParseRenderCaps(RenderCaps *this, struct IDirect3DDevice9 *a2)
{
  bool *v2; // rbx
  __int16 v3; // r11
  unsigned int v4; // edx
  unsigned int v5; // ecx
  char v6[60]; // [rsp+20h] [rbp-138h] BYREF
  int v7; // [rsp+5Ch] [rbp-FCh]
  int v8; // [rsp+B4h] [rbp-A4h]
  int v9; // [rsp+B8h] [rbp-A0h]
  unsigned int v10; // [rsp+E4h] [rbp-74h]
  unsigned int v11; // [rsp+ECh] [rbp-6Ch]

  v2 = (bool *)g_pRenderCaps;
  ((void (__fastcall *)(struct IDirect3DDevice9 *, char *))a2->lpVtbl->GetDeviceCaps)(a2, v6);
  v3 = v7;
  v2[1] = (v7 & 0x20) == 0;
  *v2 = (v3 & 2) == 0;
  if ( (v3 & 2) != 0 )
    *v2 = (v3 & 0x100) != 0;
  v4 = v10;
  v5 = v11;
  *((_DWORD *)v2 + 3) = v8;
  *((_DWORD *)v2 + 4) = v9;
  v2[2] = v5 < 0xFFFF0101;
  v2[3] = v4 < 0xFFFE0100;
  switch ( v4 )
  {
    case 0xFFFE0100:
      *((_DWORD *)v2 + 2) = 4;
      break;
    case 0xFFFE0101:
      *((_DWORD *)v2 + 2) = 5;
      break;
    case 0xFFFE0200:
      *((_DWORD *)v2 + 2) = 6;
      break;
  }
  switch ( v5 )
  {
    case 0xFFFF0101:
      *((_DWORD *)v2 + 1) = 0;
      break;
    case 0xFFFF0102:
      *((_DWORD *)v2 + 1) = 1;
      break;
    case 0xFFFF0103:
      *((_DWORD *)v2 + 1) = 2;
      break;
    case 0xFFFF0104:
      *((_DWORD *)v2 + 1) = 3;
      break;
  }
}
