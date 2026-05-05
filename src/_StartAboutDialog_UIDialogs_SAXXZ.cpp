// Hidden C++ exception states: #wind=1
void UIDialogs::StartAboutDialog(void)
{
  GameAudio *v0; // rcx
  HICON IconW; // rdi
  Str *v2; // rbx
  Str *v3; // rax
  _BYTE v4[16]; // [rsp+28h] [rbp-40h] BYREF
  void *Block; // [rsp+38h] [rbp-30h]
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF
  void *v7; // [rsp+50h] [rbp-18h]

  RenderManager::Render(g_pRenderManager, 1);
  if ( g_Flowerbed )
    IconW = LoadIconW(g_hInstance, (LPCWSTR)0x6F);
  else
    IconW = LoadIconW(g_hInstance, (LPCWSTR)0x6E);
  GameAudio::StopAllSounds(v0);
  v2 = Str::Str((Str *)v6, 0x6Cu);
  v3 = Str::Str((Str *)v4, 0x66u);
  ShellAboutW(g_hWnd, *((LPCWSTR *)v3 + 2), *((LPCWSTR *)v2 + 2), IconW);
  operator delete(Block);
  operator delete(v7);
  Engine_ResetTimer();
}
