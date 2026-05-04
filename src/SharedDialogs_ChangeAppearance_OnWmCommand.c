void __fastcall SharedDialogs::ChangeAppearance::OnWmCommand(HWND hWnd, int a2)
{
  int v2; // edx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned int v8; // r13d
  int v9; // r8d

  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    byte_1000A85B4 = 0;
  }
  else
  {
    v4 = 0;
    byte_1000A85B4 = 1;
    v5 = 2;
    do
    {
      v6 = qword_1000A8640;
      *(_DWORD *)(v4 * 8 + qword_1000A8640 + 56) = -1;
      v7 = 0;
      v8 = SendMessageW((HWND)qword_1000A8600[v4], 0x1004u, 0, 0);
      if ( v8 )
      {
        while ( !(unsigned int)SendMessageW((HWND)qword_1000A8600[v4], 0x102Cu, v7, 2) )
        {
          if ( ++v7 >= v8 )
            goto LABEL_10;
        }
        *(_DWORD *)(v4 * 8 + v6 + 56) = v7;
      }
LABEL_10:
      v4 += 4;
      --v5;
    }
    while ( v5 );
    *(_BYTE *)(qword_1000A8640 + 128) = (unsigned int)SendMessageW(qword_1000A85F0, 0xF0u, 0, 0) == 1;
  }
  SharedDialogs::ChangeAppearance::ExitCleanup();
  DialogHelper::DismissDialog(hWnd, 0, v9);
}
