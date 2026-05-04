__int64 __fastcall SharedDialogs::ExitGame::Show(SharedDialogs::ExitGame *this, HWND a2)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v6; // [rsp+28h] [rbp-F0h]
  _BYTE v7[224]; // [rsp+30h] [rbp-E8h] BYREF

  *(_DWORD *)&v7[64] = 160;
  memset(&v7[68], 0, 0x9Cu);
  *(_DWORD *)&v7[16] = -1;
  v2 = 0;
  *(_QWORD *)&v7[128] = &v7[16];
  *(_DWORD *)&v7[136] = 5005;
  *(_DWORD *)v7 = 5005;
  LOWORD(v6) = 501;
  *(_DWORD *)&v7[84] = 8;
  *(_QWORD *)&v7[92] = 6001;
  *(_QWORD *)&v7[108] = 6002;
  *(_QWORD *)&v7[20] = 6003;
  *(_DWORD *)&v7[28] = -2;
  *(_QWORD *)&v7[32] = 6004;
  *(_DWORD *)&v7[40] = 2;
  *(_QWORD *)&v7[44] = 6005;
  *(_DWORD *)&v7[124] = 3;
  *(_QWORD *)&v7[4] = 0x20000138ELL;
  v3 = DialogHelper::ShowDialog((DialogHelper *)&v7[64], (struct _TASKDIALOGCONFIG *)v7, 3u, 0, 0, v6, *(bool **)v7);
  if ( v3 == 2 )
  {
    return 3;
  }
  else
  {
    LOBYTE(v2) = v3 == 5006;
    return (unsigned int)(v2 + 1);
  }
}
