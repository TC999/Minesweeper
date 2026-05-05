void __fastcall UIDialogs::StartLoadBoardDialog(HWND a1)
{
  unsigned int v1; // [rsp+28h] [rbp-D0h]
  _BYTE v2[12]; // [rsp+30h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-BCh]
  __int64 v4; // [rsp+40h] [rbp-B8h]
  _QWORD v5[21]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v6; // [rsp+108h] [rbp+10h] BYREF
  int v7; // [rsp+110h] [rbp+18h] BYREF
  int v8; // [rsp+114h] [rbp+1Ch]

  LOBYTE(v6) = 0;
  LODWORD(v5[0]) = 160;
  memset((char *)v5 + 4, 0, 0x9Cu);
  v5[8] = v2;
  LOWORD(v1) = 502;
  HIDWORD(v5[2]) = 8;
  *(_QWORD *)((char *)&v5[3] + 4) = 6006;
  *(_QWORD *)((char *)&v5[5] + 4) = 6007;
  *(_QWORD *)((char *)&v5[11] + 4) = 6023;
  *(_DWORD *)v2 = 1;
  *(_QWORD *)&v2[4] = 6008;
  v3 = 2;
  v4 = 6009;
  HIDWORD(v5[7]) = 2;
  LODWORD(v5[9]) = 1;
  v7 = 1;
  v8 = 2;
  UIDialogs::LoadOldBoard = DialogHelper::ShowDialog(
                              (DialogHelper *)v5,
                              (struct _TASKDIALOGCONFIG *)&v7,
                              2u,
                              0,
                              (unsigned int)&v6,
                              v1,
                              *(bool **)v2) == 1;
  if ( (_BYTE)v6 )
    *((_BYTE *)Game::G + 270) = 1;
}
