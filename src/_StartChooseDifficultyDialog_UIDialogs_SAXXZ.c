void UIDialogs::StartChooseDifficultyDialog(void)
{
  GameAudio *v0; // rcx
  int v1; // eax
  int v2; // eax
  unsigned int v3; // [rsp+28h] [rbp-F0h]
  _BYTE v4[12]; // [rsp+30h] [rbp-E8h] BYREF
  int v5; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+44h] [rbp-D4h]
  int v7; // [rsp+4Ch] [rbp-CCh]
  __int64 v8; // [rsp+50h] [rbp-C8h]
  int v9; // [rsp+58h] [rbp-C0h]
  __int64 v10; // [rsp+5Ch] [rbp-BCh]
  _QWORD v11[21]; // [rsp+70h] [rbp-A8h] BYREF

  RenderManager::Render(g_pRenderManager, 1);
  LODWORD(v11[0]) = 160;
  memset((char *)v11 + 4, 0, 0x9Cu);
  HIDWORD(v11[2]) = 24;
  v11[8] = &v5;
  *(_QWORD *)((char *)&v11[3] + 4) = 4004;
  *(_QWORD *)((char *)&v11[5] + 4) = 4005;
  *(_QWORD *)((char *)&v11[16] + 4) = 4006;
  LODWORD(v11[9]) = 2;
  v5 = 2;
  v6 = 4007;
  v7 = -2;
  v8 = 4008;
  v9 = -3;
  v10 = 4009;
  HIDWORD(v11[7]) = 3;
  *(_DWORD *)v4 = 2;
  *(_QWORD *)&v4[4] = 0x3F1000003F0LL;
  GameAudio::StopAllSounds(v0);
  LOWORD(v3) = 151;
  v1 = DialogHelper::ShowDialog((DialogHelper *)v11, (struct _TASKDIALOGCONFIG *)v4, 3u, 0, 0, v3, *(bool **)v4) - 2;
  if ( v1 )
  {
    v2 = v1 - 1006;
    if ( v2 )
    {
      if ( v2 == 1 )
        *((_DWORD *)Game::G + 69) = 3;
    }
    else
    {
      *((_DWORD *)Game::G + 69) = 2;
    }
  }
  else
  {
    *((_DWORD *)Game::G + 69) = 1;
  }
}
