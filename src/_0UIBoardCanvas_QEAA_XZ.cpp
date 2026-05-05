// Hidden C++ exception states: #wind=6
UIBoardCanvas *__fastcall UIBoardCanvas::UIBoardCanvas(UIBoardCanvas *this)
{
  unsigned __int16 *v2; // rbx
  char v4; // [rsp+20h] [rbp-38h]
  char v5; // [rsp+28h] [rbp-30h]
  char v6; // [rsp+30h] [rbp-28h]

  *(_QWORD *)this = &UIBoardCanvas::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 16;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 16;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 16;
  *((_QWORD *)this + 37) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 16;
  *((_QWORD *)this + 40) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 16;
  *((_QWORD *)this + 43) = 0;
  *((_BYTE *)this + 64) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 11) = 16711680;
  *((_BYTE *)this + 277) = 0;
  v2 = LocalizeMessage(L"|50781|UI|Segoe UI// Font for tile numbers");
  v6 = 0;
  v5 = 0;
  v4 = 0;
  (*(void (__fastcall **)(TextRenderer *, char *, __int64, unsigned __int16 *, char, char, char))(*(_QWORD *)g_pTextRenderer
                                                                                                + 8LL))(
    g_pTextRenderer,
    (char *)this + 40,
    12,
    v2,
    v4,
    v5,
    v6);
  LocalFree(v2);
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 276) = 0;
  Array<IEventListener *>::Add((__int64)g_pUserInterface + 96, (__int64)this);
  Array<IEventListener *>::Add((__int64)g_pUserInterface + 120, (__int64)this);
  *((_QWORD *)this + 44) = 0;
  return this;
}
