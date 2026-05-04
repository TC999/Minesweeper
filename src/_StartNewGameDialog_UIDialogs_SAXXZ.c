void UIDialogs::StartNewGameDialog(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  int v2; // eax
  char v3; // r8
  unsigned int v4; // [rsp+28h] [rbp-F0h]
  _BYTE v5[224]; // [rsp+30h] [rbp-E8h] BYREF

  RenderManager::Render(g_pRenderManager, 1);
  *(_DWORD *)&v5[64] = 160;
  memset(&v5[68], 0, 0x9Cu);
  *(_DWORD *)&v5[16] = -1;
  v0 = 4018;
  *(_DWORD *)&v5[84] = 16;
  *(_QWORD *)&v5[92] = 4027;
  *(_QWORD *)&v5[108] = 4017;
  *(_DWORD *)&v5[28] = -2;
  *(_QWORD *)&v5[20] = 4018;
  *(_QWORD *)&v5[32] = 4019;
  *(_DWORD *)&v5[40] = 2;
  *(_QWORD *)&v5[44] = 4020;
  v1 = *((_QWORD *)Game::G + 3);
  if ( v1 )
  {
    if ( *(int *)(v1 + 28) > 0 )
      v0 = 4026;
    *(_QWORD *)&v5[20] = v0;
  }
  *(_DWORD *)&v5[124] = 3;
  *(_QWORD *)&v5[4] = 0x20000040ALL;
  *(_QWORD *)&v5[128] = &v5[16];
  *(_DWORD *)&v5[136] = 1035;
  *(_DWORD *)v5 = 1035;
  GameAudio::StopAllSounds((GameAudio *)v0);
  LOWORD(v4) = 156;
  v2 = DialogHelper::ShowDialog((DialogHelper *)&v5[64], (struct _TASKDIALOGCONFIG *)v5, 3u, 0, 0, v4, *(bool **)v5)
     - 1034;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  Game::Reset(Game::G, 1, v3, 1);
}
