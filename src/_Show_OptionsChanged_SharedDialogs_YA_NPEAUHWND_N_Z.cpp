bool __fastcall SharedDialogs::OptionsChanged::Show(SharedDialogs::OptionsChanged *this, HWND a2)
{
  char v3; // di
  __int16 v4; // ax
  __int64 v5; // r9
  unsigned int v7; // [rsp+28h] [rbp-D0h]
  _BYTE v8[12]; // [rsp+30h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-BCh]
  __int64 v10; // [rsp+40h] [rbp-B8h]
  _QWORD v11[21]; // [rsp+50h] [rbp-A8h] BYREF
  int v12; // [rsp+100h] [rbp+8h] BYREF
  int v13; // [rsp+104h] [rbp+Ch]

  v3 = (char)a2;
  LODWORD(v11[0]) = 160;
  memset((char *)v11 + 4, 0, 0x9Cu);
  *(_QWORD *)((char *)v11 + 4) = this;
  HIDWORD(v11[2]) = 24;
  *(_QWORD *)((char *)&v11[3] + 4) = 6014;
  *(_QWORD *)((char *)&v11[5] + 4) = 6015;
  *(_DWORD *)v8 = 1;
  v11[8] = v8;
  *(_QWORD *)&v8[4] = 6016;
  v9 = 2;
  v10 = 6017;
  HIDWORD(v11[7]) = 2;
  LODWORD(v11[9]) = 2;
  v12 = 1;
  v13 = 2;
  if ( v3 )
  {
    v4 = 507;
    v5 = 6027;
  }
  else
  {
    v4 = 504;
    v5 = 0;
  }
  LOWORD(v7) = v4;
  return DialogHelper::ShowDialog(
           (DialogHelper *)v11,
           (struct _TASKDIALOGCONFIG *)&v12,
           2u,
           (unsigned int *const)v5,
           0,
           v7,
           *(bool **)v8) == 1;
}
