__int64 __fastcall D3DXCore::CFont::Initialize(D3DXCore::CFont *this, struct IDirect3DDevice9 *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v6; // ebx
  int v7; // r11d
  HMODULE ModuleHandleA; // rbx
  HMODULE LibraryA; // rbx
  HDC CompatibleDC; // rax
  HFONT FontIndirectA; // rax
  int v12; // eax
  DWORD v13; // r11d
  CHAR v14; // al
  HFONT FontIndirectW; // rax
  void *v16; // rdx
  HDC v17; // rcx
  HGDIOBJ v18; // rax
  HDC v19; // rcx
  DWORD FontLanguageInfo; // eax
  HDC v21; // rcx
  _DWORD *v22; // rbx
  HBITMAP Bitmap; // rax
  HGDIOBJ v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // rbx
  unsigned int v29; // r9d
  int v30; // r10d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // r8d
  unsigned int v35; // r8d
  unsigned int i; // eax
  unsigned int v37; // ecx
  int v38; // ecx
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // ecx
  D3DXTex *v42; // rcx
  int v43; // eax
  size_t v44; // rax
  void *v45; // rax
  __int64 v46; // rcx
  HDC v47; // rcx
  const WCHAR *v48; // rdx
  HDC v49; // rcx
  const WCHAR *v50; // rdx
  _QWORD v51[2]; // [rsp+50h] [rbp-128h] BYREF
  _OSVERSIONINFOA VersionInformation; // [rsp+60h] [rbp-118h] BYREF
  _QWORD v53[3]; // [rsp+100h] [rbp-78h] BYREF
  CHAR MultiByteStr[32]; // [rsp+118h] [rbp-60h] BYREF

  if ( !a2 || !a3 )
    return 2289436780LL;
  *((_QWORD *)this + 2) = a2;
  ((void (__fastcall *)(struct IDirect3DDevice9 *))a2->lpVtbl->AddRef)(a2);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 2))(
         *((_QWORD *)this + 2),
         &IID_IDirect3DDevice9Ex,
         v51) < 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 6;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v51[0] + 16LL))(v51[0]);
  }
  *((_DWORD *)this + 6) = v6;
  if ( !dword_1000AB154 )
  {
    dword_1000AB154 = 1;
    if ( dword_1000ABABC )
    {
      v7 = D3DXCore::g_bUnicodeAPI;
    }
    else
    {
      dword_1000ABABC = 1;
      VersionInformation.dwOSVersionInfoSize = 148;
      GetVersionExA(&VersionInformation);
      v7 = VersionInformation.dwPlatformId == 2;
      D3DXCore::g_bUnicodeAPI = v7;
    }
    if ( v7 )
    {
      ModuleHandleA = GetModuleHandleA("gdi32.dll");
      if ( ModuleHandleA || (ModuleHandleA = LoadLibraryA("gdi32.dll")) != 0 )
      {
        GetCharABCWidthsI = (BOOL (__stdcall *)(HDC, UINT, UINT, LPWORD, LPABC))GetProcAddress(
                                                                                  ModuleHandleA,
                                                                                  "GetCharABCWidthsI");
        if ( !GetCharABCWidthsI )
          return 2147942414LL;
        GetCharWidthI = (BOOL (__stdcall *)(HDC, UINT, UINT, LPWORD, LPINT))GetProcAddress(
                                                                              ModuleHandleA,
                                                                              "GetCharWidthI");
        if ( !GetCharWidthI )
          return 2147942414LL;
        GetFontUnicodeRanges = (DWORD (__stdcall *)(HDC, LPGLYPHSET))GetProcAddress(
                                                                       ModuleHandleA,
                                                                       "GetFontUnicodeRanges");
        if ( !GetFontUnicodeRanges )
          return 2147942414LL;
      }
    }
    LibraryA = GetModuleHandleA("usp10.dll");
    if ( LibraryA || (LibraryA = LoadLibraryA("usp10.dll")) != 0 )
    {
      dword_1000AB198 = 1;
      ScriptItemize_0 = (HRESULT (__stdcall *)(const WCHAR *, int, int, const SCRIPT_CONTROL *, const SCRIPT_STATE *, SCRIPT_ITEM *, int *))GetProcAddress(LibraryA, "ScriptItemize");
      if ( !ScriptItemize_0 )
        return 2147942414LL;
      ScriptShape = (HRESULT (__stdcall *)(HDC, SCRIPT_CACHE *, const WCHAR *, int, int, SCRIPT_ANALYSIS *, WORD *, WORD *, SCRIPT_VISATTR *, int *))GetProcAddress(LibraryA, "ScriptShape");
      if ( !ScriptShape )
        return 2147942414LL;
      ScriptPlace = (HRESULT (__stdcall *)(HDC, SCRIPT_CACHE *, const WORD *, int, const SCRIPT_VISATTR *, SCRIPT_ANALYSIS *, int *, GOFFSET *, ABC *))GetProcAddress(LibraryA, "ScriptPlace");
      if ( !ScriptPlace )
        return 2147942414LL;
      ScriptBreak_0 = (HRESULT (__stdcall *)(const WCHAR *, int, const SCRIPT_ANALYSIS *, SCRIPT_LOGATTR *))GetProcAddress(LibraryA, "ScriptBreak");
      if ( !ScriptBreak_0 )
        return 2147942414LL;
      ScriptJustify = (HRESULT (__stdcall *)(const SCRIPT_VISATTR *, const int *, int, int, int, int *))GetProcAddress(LibraryA, "ScriptJustify");
      if ( !ScriptJustify )
        return 2147942414LL;
      ScriptTextOut = (HRESULT (__stdcall *)(const HDC, SCRIPT_CACHE *, int, int, UINT, const RECT *, const SCRIPT_ANALYSIS *, const WCHAR *, int, const WORD *, int, const int *, const int *, const GOFFSET *))GetProcAddress(LibraryA, "ScriptTextOut");
      if ( !ScriptTextOut )
        return 2147942414LL;
      ScriptGetProperties = (HRESULT (__stdcall *)(const SCRIPT_PROPERTIES ***, int *))GetProcAddress(
                                                                                         LibraryA,
                                                                                         "ScriptGetProperties");
      if ( !ScriptGetProperties )
        return 2147942414LL;
      ScriptFreeCache = (HRESULT (__stdcall *)(SCRIPT_CACHE *))GetProcAddress(LibraryA, "ScriptFreeCache");
      if ( !ScriptFreeCache )
        return 2147942414LL;
      ScriptRecordDigitSubstitution = (HRESULT (__stdcall *)(LCID, SCRIPT_DIGITSUBSTITUTE *))GetProcAddress(
                                                                                               LibraryA,
                                                                                               "ScriptRecordDigitSubstitution");
      if ( !ScriptRecordDigitSubstitution )
        return 2147942414LL;
      ScriptApplyDigitSubstitution = (HRESULT (__stdcall *)(const SCRIPT_DIGITSUBSTITUTE *, SCRIPT_CONTROL *, SCRIPT_STATE *))GetProcAddress(LibraryA, "ScriptApplyDigitSubstitution");
      if ( !ScriptApplyDigitSubstitution )
        return 2147942414LL;
      ScriptGetFontProperties = (HRESULT (__stdcall *)(HDC, SCRIPT_CACHE *, SCRIPT_FONTPROPERTIES *))GetProcAddress(LibraryA, "ScriptGetFontProperties");
      if ( !ScriptGetFontProperties )
        return 2147942414LL;
      ScriptStringAnalyse = (HRESULT (__stdcall *)(HDC, const void *, int, int, int, DWORD, int, SCRIPT_CONTROL *, SCRIPT_STATE *, const int *, SCRIPT_TABDEF *, const BYTE *, SCRIPT_STRING_ANALYSIS *))GetProcAddress(LibraryA, "ScriptStringAnalyse");
      if ( !ScriptStringAnalyse )
        return 2147942414LL;
      ScriptStringOut = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS, int, int, UINT, const RECT *, int, int, BOOL))GetProcAddress(LibraryA, "ScriptStringOut");
      if ( !ScriptStringOut )
        return 2147942414LL;
      ScriptStringFree = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS *))GetProcAddress(LibraryA, "ScriptStringFree");
      if ( !ScriptStringFree )
        return 2147942414LL;
      ScriptStringCPtoX = (HRESULT (__stdcall *)(SCRIPT_STRING_ANALYSIS, int, BOOL, int *))GetProcAddress(
                                                                                             LibraryA,
                                                                                             "ScriptStringCPtoX");
      if ( !ScriptStringCPtoX )
        return 2147942414LL;
      ScriptString_pSize = (const SIZE *(__stdcall *)(SCRIPT_STRING_ANALYSIS))GetProcAddress(
                                                                                LibraryA,
                                                                                "ScriptString_pSize");
      if ( !ScriptString_pSize )
        return 2147942414LL;
      ((void (__fastcall *)(void *, _QWORD *))ScriptGetProperties)(&unk_1000AB230, v51);
      ((void (__fastcall *)(__int64, void *))ScriptRecordDigitSubstitution)(1024, &unk_1000AB220);
    }
  }
  CompatibleDC = CreateCompatibleDC(0);
  *((_QWORD *)this + 5) = CompatibleDC;
  if ( !CompatibleDC )
    return 2147942414LL;
  SetMapMode(CompatibleDC, 1);
  if ( D3DXCore::g_bUnicodeAPI || (SetTextAlign(*((HDC *)this + 5), 1u), D3DXCore::g_bUnicodeAPI) )
  {
    memset(&VersionInformation, 0, 0x5Cu);
    v13 = *a3;
    VersionInformation.dwMajorVersion = a3[1];
    VersionInformation.dwPlatformId = a3[2];
    VersionInformation.szCSDVersion[0] = *((_BYTE *)a3 + 16);
    VersionInformation.szCSDVersion[3] = *((_BYTE *)a3 + 20);
    v14 = *((_BYTE *)a3 + 21);
    VersionInformation.dwOSVersionInfoSize = v13;
    VersionInformation.szCSDVersion[4] = v14;
    VersionInformation.szCSDVersion[6] = *((_BYTE *)a3 + 22);
    VersionInformation.szCSDVersion[7] = *((_BYTE *)a3 + 23);
    memcpy(&VersionInformation.szCSDVersion[8], a3 + 6, 0x40u);
    if ( (VersionInformation.szCSDVersion[6] & 7) == 0 )
      VersionInformation.szCSDVersion[6] |= 4u;
    FontIndirectW = CreateFontIndirectW((const LOGFONTW *)&VersionInformation);
    *((_QWORD *)this + 6) = FontIndirectW;
    if ( !FontIndirectW )
      return 2147942414LL;
    v12 = a3[3];
  }
  else
  {
    memcpy(v53, a3, sizeof(v53));
    WideCharToMultiByte(0, 0, (LPCWCH)a3 + 12, -1, MultiByteStr, 32, 0, 0);
    MultiByteStr[31] = 0;
    memset(&VersionInformation, 0, 0x3Cu);
    VersionInformation.dwPlatformId = v53[1];
    VersionInformation.szCSDVersion[0] = v53[2];
    *(_WORD *)&VersionInformation.szCSDVersion[3] = WORD2(v53[2]);
    *(_QWORD *)&VersionInformation.dwOSVersionInfoSize = v53[0];
    *(_WORD *)&VersionInformation.szCSDVersion[6] = HIWORD(v53[2]);
    memcpy(&VersionInformation.szCSDVersion[8], MultiByteStr, 0x20u);
    if ( (v53[2] & 0x7000000000000LL) == 0 )
      VersionInformation.szCSDVersion[6] = BYTE6(v53[2]) | 4;
    FontIndirectA = CreateFontIndirectA((const LOGFONTA *)&VersionInformation);
    *((_QWORD *)this + 6) = FontIndirectA;
    if ( !FontIndirectA )
      return 2147942414LL;
    v12 = HIDWORD(v53[1]);
  }
  v16 = (void *)*((_QWORD *)this + 6);
  v17 = (HDC)*((_QWORD *)this + 5);
  *((_DWORD *)this + 596) = v12;
  v18 = SelectObject(v17, v16);
  v19 = (HDC)*((_QWORD *)this + 5);
  *((_QWORD *)this + 7) = v18;
  FontLanguageInfo = GetFontLanguageInfo(v19);
  v21 = (HDC)*((_QWORD *)this + 5);
  *((_DWORD *)this + 39) = FontLanguageInfo;
  if ( D3DXCore::g_bUnicodeAPI )
  {
    v22 = (_DWORD *)((char *)this + 96);
    GetTextMetricsW(v21, (LPTEXTMETRICW)((char *)this + 96));
  }
  else
  {
    GetTextMetricsA(v21, (LPTEXTMETRICA)&VersionInformation);
    v22 = (_DWORD *)((char *)this + 96);
    memcpy((char *)this + 96, &VersionInformation, 0x2Cu);
    *((_DWORD *)this + 37) = *(_DWORD *)&VersionInformation.szCSDVersion[28];
    *((_BYTE *)this + 152) = VersionInformation.szCSDVersion[32];
    *((_WORD *)this + 70) = (unsigned __int8)VersionInformation.szCSDVersion[24];
    *((_WORD *)this + 71) = (unsigned __int8)VersionInformation.szCSDVersion[25];
    *((_WORD *)this + 72) = (unsigned __int8)VersionInformation.szCSDVersion[26];
    *((_WORD *)this + 73) = (unsigned __int8)VersionInformation.szCSDVersion[27];
  }
  *((_DWORD *)this + 20) = *((_DWORD *)this + 30);
  *((_DWORD *)this + 21) = *v22;
  Bitmap = D3DXCore::CFont::CreateBitmap(this, (const struct tagSIZE *)this + 10, (struct tagRGBQUAD **)this + 11);
  *((_QWORD *)this + 8) = Bitmap;
  if ( !Bitmap )
    return 2147942414LL;
  SetBkMode(*((HDC *)this + 5), 2);
  SetBkColor(*((HDC *)this + 5), 0);
  SetTextColor(*((HDC *)this + 5), 0xFFFFFFu);
  v24 = SelectObject(*((HDC *)this + 5), *((HGDIOBJ *)this + 8));
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 9) = v24;
  memset((char *)this + 200, 0, 0x800u);
  v25 = (unsigned int *)((char *)this + 2300);
  *((_DWORD *)this + 565) = 0;
  *((_QWORD *)this + 285) = 0;
  *((_QWORD *)this + 289) = 0;
  *((_DWORD *)this + 564) = 21;
  *((_DWORD *)this + 575) = 1;
  *((_DWORD *)this + 573) = 1;
  if ( *v22 > 1u )
  {
    do
    {
      *((_DWORD *)this + 573) *= 2;
      ++*v25;
    }
    while ( *((_DWORD *)this + 573) < *v22 );
  }
  v26 = *((_DWORD *)this + 573);
  v27 = *v25;
  v28 = (unsigned int *)((char *)this + 2332);
  *((_DWORD *)this + 581) = v26;
  *((_DWORD *)this + 583) = v27;
  if ( v26 < *((_DWORD *)this + 29) )
  {
    do
    {
      *((_DWORD *)this + 573) *= 2;
      ++*v25;
    }
    while ( *((_DWORD *)this + 573) < *((_DWORD *)this + 29) );
  }
  if ( v26 < *((_DWORD *)this + 30) )
  {
    do
    {
      *((_DWORD *)this + 581) *= 2;
      ++*v28;
    }
    while ( *((_DWORD *)this + 581) < *((_DWORD *)this + 30) );
  }
  v29 = *((_DWORD *)this + 581);
  v30 = *((_DWORD *)this + 573);
  v31 = v30 * v30;
  *((_DWORD *)this + 582) = v29 * v29;
  v32 = *((_DWORD *)this + 596);
  *((_DWORD *)this + 574) = v30 * v30;
  if ( v32 )
  {
    if ( *v25 > v32 )
      *v25 = v32;
    if ( *v28 > v32 )
      *v28 = v32;
  }
  v33 = *((unsigned __int16 *)this + 70);
  v34 = *((unsigned __int16 *)this + 71);
  *((_DWORD *)this + 576) = v30;
  *((_DWORD *)this + 584) = v29;
  v35 = v34 - v33 + 1;
  if ( v35 > 0x80 )
    v35 = 128;
  for ( i = v31 * v35; i > v31; i = v35 * *((_DWORD *)this + 574) )
  {
    v37 = *((_DWORD *)this + 576);
    if ( v37 >= 0x100 )
      break;
    v38 = 2 * v37;
    *((_DWORD *)this + 576) = v38;
    v31 = v38 * v38;
  }
  v39 = *((_DWORD *)this + 576);
  if ( v29 < v39 )
    *((_DWORD *)this + 584) = v39;
  v40 = *((_DWORD *)this + 584);
  v41 = v39 * v39;
  *((_DWORD *)this + 577) = v41;
  *((_DWORD *)this + 572) = v41;
  v42 = (D3DXTex *)*((_QWORD *)this + 2);
  v43 = v40 * v40;
  *((_DWORD *)this + 585) = v43;
  *((_DWORD *)this + 580) = v43;
  result = CheckTextureRequirements(
             v42,
             (unsigned int *)this + 576,
             (unsigned int *)this + 576,
             0,
             (unsigned int *)this + 575,
             0,
             (int *)this + 564,
             *((_DWORD *)this + 6));
  if ( (int)result >= 0 )
  {
    result = CheckTextureRequirements(
               *((D3DXTex **)this + 2),
               (unsigned int *)this + 584,
               (unsigned int *)this + 584,
               0,
               (unsigned int *)this + 583,
               0,
               (int *)this + 564,
               *((_DWORD *)this + 6));
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)this + 564) != 21
        || *((_DWORD *)this + 576) < *((_DWORD *)this + 573)
        || *((_DWORD *)this + 584) < *((_DWORD *)this + 581) )
      {
        return 2289437529LL;
      }
      memcpy((char *)this + 2344, (char *)this + 2280, 0x20u);
      if ( *v28 > 1 )
      {
        v44 = 8LL * *((unsigned int *)this + 582);
        if ( !is_mul_ok(*((unsigned int *)this + 582), 8u) )
          v44 = -1;
        v45 = operator new(v44, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        *((_QWORD *)this + 297) = v45;
        if ( !v45 )
          return 2147942414LL;
      }
      if ( dword_1000AB198 )
      {
        memset((char *)this + 168, 0, 0x10u);
        v46 = *((_QWORD *)this + 5);
        *((_DWORD *)this + 42) = 16;
        result = ((__int64 (__fastcall *)(__int64, char *, char *))ScriptGetFontProperties)(
                   v46,
                   (char *)this + 160,
                   (char *)this + 168);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        memset(&VersionInformation, 0, 0x40u);
        v47 = (HDC)*((_QWORD *)this + 5);
        *(_QWORD *)&VersionInformation.szCSDVersion[28] = (char *)this + 174;
        VersionInformation.dwOSVersionInfoSize = 64;
        *(_DWORD *)&VersionInformation.szCSDVersion[36] = 1;
        v48 = (const WCHAR *)((char *)this + 144);
        if ( D3DXCore::g_bUnicodeAPI )
          GetCharacterPlacementW(v47, v48, 1, 0, (LPGCP_RESULTSW)&VersionInformation, 0);
        else
          GetCharacterPlacementA(v47, (LPCSTR)v48, 1, 0, (LPGCP_RESULTSA)&VersionInformation, 0);
        v49 = (HDC)*((_QWORD *)this + 5);
        *(_QWORD *)&VersionInformation.szCSDVersion[28] = (char *)this + 172;
        VersionInformation.dwOSVersionInfoSize = 64;
        *(_DWORD *)&VersionInformation.szCSDVersion[36] = 1;
        v50 = (const WCHAR *)((char *)this + 146);
        if ( D3DXCore::g_bUnicodeAPI )
          GetCharacterPlacementW(v49, v50, 1, 0, (LPGCP_RESULTSW)&VersionInformation, 0);
        else
          GetCharacterPlacementA(v49, (LPCSTR)v50, 1, 0, (LPGCP_RESULTSA)&VersionInformation, 0);
      }
      return 0;
    }
  }
  return result;
}
