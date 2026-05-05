char __fastcall TextRenderer::Initialize(TextRenderer *this)
{
  HFONT *v2; // rax
  HFONT *v3; // rbx
  HMODULE ModuleHandleW; // rax
  HMODULE v5; // rax
  int v6; // ebp
  HFONT FontW; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  HFONT v9; // rcx
  _WORD *v11; // rax
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  HFONT v13; // rcx
  struct IDirect3DDevice9 *v14; // rcx
  signed int v15; // esi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  HFONT v17; // rcx
  const unsigned __int16 *HResult; // rax
  _DWORD *v19; // rcx
  HFONT v20; // rax
  __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  HFONT v23; // rcx
  __int64 cWeight; // [rsp+20h] [rbp-4A8h]
  __int64 cWeighta; // [rsp+20h] [rbp-4A8h]
  __int64 iClipPrecision; // [rsp+50h] [rbp-478h]
  __int64 v27; // [rsp+70h] [rbp-458h] BYREF
  WCHAR Buffer[264]; // [rsp+80h] [rbp-448h] BYREF
  WCHAR String[264]; // [rsp+290h] [rbp-238h] BYREF

  v2 = (HFONT *)operator new(0x28u);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 8) = 1;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  else
  {
    v3 = 0;
  }
  memset(Buffer, 0, 520);
  ModuleHandleW = GetModuleHandleW(0);
  LoadStringW(ModuleHandleW, 0x3E8u, Buffer, 260);
  memset(String, 0, 520);
  v5 = GetModuleHandleW(0);
  LoadStringW(v5, 0x3EAu, String, 260);
  v6 = _wtoi(String);
  FontW = CreateFontW(v6, 0, 0, 0, 400, 0, 0, 0, 1u, 0, 0, 5u, 0x30u, Buffer);
  *v3 = FontW;
  if ( !FontW )
  {
    DeleteObject(0);
    v8 = (void (__fastcall ***)(_QWORD, __int64))v3[1];
    *v3 = 0;
    if ( v8 )
      (**v8)(v8, 1);
    v9 = v3[2];
    v3[1] = 0;
    operator delete(v9);
    v3[2] = 0;
    operator delete(v3);
    LODWORD(cWeight) = GetLastError();
    Log(2u, 436, "TextRenderer.cpp", L"Couldn't create the courier font (WinError %d)", cWeight);
    return 0;
  }
  *((_BYTE *)v3 + 28) = 0;
  *((_BYTE *)v3 + 29) = 0;
  *((_BYTE *)v3 + 30) = 0;
  *((_DWORD *)v3 + 6) = 12;
  v11 = operator new[](0x1Au);
  v3[2] = (HFONT)v11;
  if ( !v11 )
  {
    DeleteObject(*v3);
    v12 = (void (__fastcall ***)(_QWORD, __int64))v3[1];
    *v3 = 0;
    if ( v12 )
      (**v12)(v12, 1);
    v13 = v3[2];
    v3[1] = 0;
    operator delete(v13);
    v3[2] = 0;
    operator delete(v3);
    return 0;
  }
  *v11 = 0;
  wcscpy_s((wchar_t *)v3[2], 0xDu, Buffer);
  v14 = (struct IDirect3DDevice9 *)*((_QWORD *)g_pRenderManager + 10);
  iClipPrecision = (__int64)v3[2];
  v27 = 0;
  v15 = D3DXCreateFontW(v14, 1, 0, 1, 0, 5, 0, iClipPrecision, (__int64)&v27);
  if ( v15 < 0 )
  {
    DeleteObject(*v3);
    v16 = (void (__fastcall ***)(_QWORD, __int64))v3[1];
    *v3 = 0;
    if ( v16 )
      (**v16)(v16, 1);
    v17 = v3[2];
    v3[1] = 0;
    operator delete(v17);
    v3[2] = 0;
    operator delete(v3);
    HResult = GetHResult(v15);
    LODWORD(cWeighta) = v15;
    Log(
      2u,
      473,
      "TextRenderer.cpp",
      L"Unable to create the d3dxfont for the default font. %08x (%s)",
      cWeighta,
      HResult);
    return 0;
  }
  v19 = operator new(0x48u);
  if ( v19 )
  {
    v20 = *v3;
    *(_QWORD *)v19 = &Font::`vftable';
    v19[2] = 0;
    v19[3] = 0;
    v19[4] = 16;
    *((_QWORD *)v19 + 3) = 0;
    *((_QWORD *)v19 + 5) = v20;
    v21 = v27;
    *((_QWORD *)v19 + 6) = 0;
    v19[8] = 0;
    v19[16] = v6;
    *((_BYTE *)v19 + 68) = 0;
    *((_QWORD *)v19 + 7) = v21;
  }
  else
  {
    v19 = 0;
  }
  v3[1] = (HFONT)v19;
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19) )
  {
    DeleteObject(*v3);
    v22 = (void (__fastcall ***)(_QWORD, __int64))v3[1];
    *v3 = 0;
    if ( v22 )
      (**v22)(v22, 1);
    v23 = v3[2];
    v3[1] = 0;
    operator delete(v23);
    v3[2] = 0;
    operator delete(v3);
    Log(2u, 481, "TextRenderer.cpp", L"Unable to intialize Courier New dx font");
    return 0;
  }
  Array<IEventListener *>::Add((__int64)this + 8, (__int64)v3);
  *((_DWORD *)this + 8) = 0;
  return 1;
}
