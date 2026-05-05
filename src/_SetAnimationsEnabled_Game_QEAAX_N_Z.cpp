void __fastcall Game::SetAnimationsEnabled(Game *this, char a2)
{
  char v4; // r8
  char v5; // al
  UIBoardCanvas *v6; // rcx
  _DWORD v7[78]; // [rsp+20h] [rbp-138h] BYREF
  int pvParam; // [rsp+168h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)g_pRenderManager + 10) + 56LL))(
    *((_QWORD *)g_pRenderManager + 10),
    v7);
  v4 = 0;
  if ( v7[0] != 3 )
    v4 = a2;
  *((_BYTE *)this + 41) = v4;
  pvParam = 1;
  SystemParametersInfoW(0x1042u, 0, &pvParam, 0);
  if ( pvParam )
    v5 = *((_BYTE *)this + 41);
  else
    v5 = 0;
  *((_BYTE *)this + 41) = v5;
  if ( !v5 )
  {
    v6 = (UIBoardCanvas *)*((_QWORD *)this + 2);
    if ( v6 )
      UIBoardCanvas::ClearAnimations(v6);
  }
}
