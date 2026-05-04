_BOOL8 __fastcall GetD3DRegValue(LPCSTR lpValueName, BYTE *a2, HKEY *a3)
{
  HKEY v5; // rcx
  LSTATUS v6; // ebx
  _BOOL8 result; // rax
  DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v10; // [rsp+68h] [rbp+20h] BYREF

  v5 = *a3;
  v10 = 4;
  v6 = RegQueryValueExA(v5, lpValueName, 0, v9, a2, &v10);
  RegCloseKey(*a3);
  result = 0;
  if ( !v6 )
    return v9[0] == 4;
  return result;
}
