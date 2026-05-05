// Hidden C++ exception states: #wind=4
void __fastcall ChangeAppearanceDialog::Show(ChangeAppearanceDialog *this)
{
  int v1; // edi
  Game *v2; // rcx
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rbx
  Game *v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-128h]
  __int64 v14; // [rsp+38h] [rbp-110h]
  _DWORD v15[4]; // [rsp+40h] [rbp-108h] BYREF
  void *v16; // [rsp+50h] [rbp-F8h]
  _DWORD v17[4]; // [rsp+58h] [rbp-F0h] BYREF
  void *v18; // [rsp+68h] [rbp-E0h]
  _DWORD v19[4]; // [rsp+70h] [rbp-D8h] BYREF
  void *Block; // [rsp+80h] [rbp-C8h]
  _DWORD v21[4]; // [rsp+88h] [rbp-C0h] BYREF
  void *v22; // [rsp+98h] [rbp-B0h]
  _QWORD v23[7]; // [rsp+A0h] [rbp-A8h] BYREF
  int v24; // [rsp+D8h] [rbp-70h]
  const wchar_t *v25; // [rsp+E0h] [rbp-68h]
  _DWORD *v26; // [rsp+E8h] [rbp-60h]
  _DWORD *v27; // [rsp+F0h] [rbp-58h]
  int v28; // [rsp+F8h] [rbp-50h]
  __int64 v29; // [rsp+100h] [rbp-48h]
  const wchar_t *v30; // [rsp+108h] [rbp-40h]
  __int64 v31; // [rsp+110h] [rbp-38h]
  __int64 v32; // [rsp+118h] [rbp-30h]
  char v33; // [rsp+120h] [rbp-28h]
  __int64 v34; // [rsp+130h] [rbp-18h]

  v34 = -2;
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = 16;
  v16 = 0;
  v21[0] = 0;
  v21[1] = 0;
  v21[2] = 16;
  v22 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v17[2] = 16;
  v18 = 0;
  v19[0] = 0;
  v19[1] = 0;
  v19[2] = 16;
  Block = 0;
  v1 = 0;
  v2 = Game::G;
  if ( *((int *)Game::G + 36) > 0 )
  {
    v3 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)v15, *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v2 + 20)) + 16LL));
      ++v1;
      v3 += 8;
      v2 = Game::G;
    }
    while ( v1 < *((_DWORD *)Game::G + 36) );
  }
  v4 = 0;
  if ( *((int *)v2 + 18) > 0 )
  {
    v5 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)v17, *(_QWORD *)(*(_QWORD *)(v5 + *((_QWORD *)v2 + 11)) + 16LL));
      ++v4;
      v5 += 8;
      v2 = Game::G;
    }
    while ( v4 < *((_DWORD *)Game::G + 18) );
  }
  v6 = 0;
  if ( *((int *)v2 + 36) > 0 )
  {
    v7 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)v21, *(_QWORD *)(*(_QWORD *)(v7 + *((_QWORD *)v2 + 23)) + 16LL));
      ++v6;
      v7 += 8;
      v2 = Game::G;
    }
    while ( v6 < *((_DWORD *)Game::G + 36) );
  }
  v8 = 0;
  if ( *((int *)v2 + 18) > 0 )
  {
    v9 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)v19, *(_QWORD *)(*(_QWORD *)(v9 + *((_QWORD *)v2 + 14)) + 16LL));
      ++v8;
      v9 += 8;
      v2 = Game::G;
    }
    while ( v8 < *((_DWORD *)Game::G + 18) );
  }
  v23[0] = g_hInstance;
  v23[1] = g_hWnd;
  v23[2] = ChangeAppearanceDialog::StreamFromFileCallback;
  v23[3] = ChangeAppearanceDialog::LogErrorCallback;
  v32 = 0;
  v29 = 0;
  v33 = *((_BYTE *)v2 + 269);
  v23[6] = v21;
  v23[5] = v15;
  v23[4] = L"|42350|ChangeApp|Select Game Style// Label above top listview";
  v24 = *((_DWORD *)v2 + 17);
  v27 = v19;
  v26 = v17;
  v25 = L"|42351|ChangeApp|Select Board// Label above second listview";
  v28 = *((_DWORD *)v2 + 16);
  v31 = 0;
  v30 = L"|42352|ChangeApp|&Randomly choose game style and board// Checkbox for random selection";
  qword_1000A8640 = (__int64)v23;
  hWnd = 0;
  memset(&qword_1000A8600, 0, 0x40u);
  qword_1000A85F0 = 0;
  byte_1000A85B4 = 0;
  LOBYTE(v13) = 0;
  DialogHelper::DialogBoxMCE(
    (LPCWSTR)0x1F4,
    g_hWnd,
    (HWND)SharedDialogs::ChangeAppearance::DialogProc,
    (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))2,
    v13,
    0,
    0,
    v14);
  if ( byte_1000A85B4 == 1 )
  {
    v10 = Game::G;
    v11 = *((_DWORD *)Game::G + 17);
    if ( v24 != -1 && (unsigned int)v24 < v15[0] )
      v11 = v24;
    v12 = *((_DWORD *)Game::G + 16);
    if ( v28 != -1 && (unsigned int)v28 < v17[0] )
      v12 = v28;
    *((_BYTE *)Game::G + 269) = v33;
    if ( v33 )
      Game::RandomizeArt(v10, 1);
    else
      Game::SetArt(v10, v11, v12, 1);
  }
  if ( Block )
    free(Block);
  if ( v18 )
    free(v18);
  if ( v22 )
    free(v22);
  if ( v16 )
    free(v16);
}
