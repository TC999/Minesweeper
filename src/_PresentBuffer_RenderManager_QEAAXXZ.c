void __fastcall RenderManager::PresentBuffer(RenderManager *this)
{
  RenderManager *v1; // rbx
  signed int v2; // ecx
  const unsigned __int16 *HResult; // rax
  int v4; // ecx
  signed int v5; // ecx
  signed int v6; // ecx
  const unsigned __int16 *v7; // rax
  int v8; // ecx
  const unsigned __int16 *v9; // rax
  int v10; // ecx
  signed int v11; // eax
  signed int v12; // edi
  const unsigned __int16 *v13; // rax
  int v14; // ecx
  signed int v15; // eax
  const unsigned __int16 *v16; // rax
  int v17; // ecx
  int yBottom[2]; // [rsp+20h] [rbp-28h]
  int yBottoma[2]; // [rsp+20h] [rbp-28h]
  int yBottomb[2]; // [rsp+20h] [rbp-28h]
  struct tagRECT rc; // [rsp+30h] [rbp-18h] BYREF
  RenderManager *v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  v22 = this;
  v1 = g_pRenderManager;
  if ( (*((_DWORD *)g_pRenderManager + 53) & 0x1000) != 0 )
  {
    RenderManager::SaveBackBuffer(g_pRenderManager);
    if ( !*((_QWORD *)v1 + 3) )
    {
      Log(2u, 819, "RenderManager.cpp", L"No cached backbuffer in PresentBuffer - Forcing a Render()");
      RenderManager::Render(v1, 1);
      return;
    }
    if ( *(_BYTE *)v1 == 1 )
      goto LABEL_5;
    if ( (*((_DWORD *)v1 + 53) & 0x1000) == 0 )
      return;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 10) + 328LL))(*((_QWORD *)v1 + 10));
    if ( v2 < 0 )
    {
      HResult = GetHResult(v2);
      Log(2u, 847, "RenderManager.cpp", L"Couldn't BeginScene for PresentBuffer %x(%s)", v4, HResult);
      return;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)v1 + 10) + 144LL))(
           *((_QWORD *)v1 + 10),
           0,
           0,
           0,
           &v23);
    if ( v5 < 0 )
    {
      v9 = GetHResult(v5);
      yBottom[0] = v10;
      Log(
        2u,
        875,
        "RenderManager.cpp",
        L"Couldn't get the backbuffer for PresentBuffer: %x(%s)",
        *(_QWORD *)yBottom,
        v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, RenderManager **))(**((_QWORD **)v1 + 3) + 144LL))(
        *((_QWORD *)v1 + 3),
        0,
        &v22);
      SetRect(&rc, 0, 0, *(_DWORD *)(*((_QWORD *)v1 + 8) + 8LL), *(_DWORD *)(*((_QWORD *)v1 + 8) + 12LL));
      v6 = (*(__int64 (__fastcall **)(_QWORD, RenderManager *, struct tagRECT *, __int64, _QWORD, _DWORD))(**((_QWORD **)v1 + 10) + 272LL))(
             *((_QWORD *)v1 + 10),
             v22,
             &rc,
             v23,
             0,
             0);
      if ( v6 < 0 )
      {
        v7 = GetHResult(v6);
        yBottoma[0] = v8;
        Log(2u, 867, "RenderManager.cpp", L"Couldn't StretchRect in PresentBuffer: %x(%s)", *(_QWORD *)yBottoma, v7);
      }
      (*(void (__fastcall **)(RenderManager *))(*(_QWORD *)v22 + 16LL))(v22);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 10) + 336LL))(*((_QWORD *)v1 + 10));
    v12 = v11;
    if ( v11 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 136LL))(
              *((_QWORD *)v1 + 10),
              0,
              0,
              0,
              0);
      v12 = v15;
      if ( v15 >= 0 )
        return;
      v16 = GetHResult(v15);
      yBottomb[0] = v17;
      Log(2u, 902, "RenderManager.cpp", L"Error Present()ing in PresentBuffer() %x(%s)", *(_QWORD *)yBottomb, v16);
      if ( v12 == -2005530520 )
      {
        Sleep(0x64u);
        RenderManager::SetEngineState(v1, 260);
        if ( g_bPauseForLock )
          return;
        Sleep(0x64u);
        InvalidateRect(g_hWnd, 0, 0);
      }
    }
    else
    {
      v13 = GetHResult(v11);
      yBottoma[0] = v14;
      Log(2u, 881, "RenderManager.cpp", L"Error in EndScene %08x(%s)", *(_QWORD *)yBottoma, v13);
      if ( v12 == -2005530520 )
      {
        RenderManager::SetEngineState(v1, 260);
LABEL_5:
        if ( !g_bPauseForLock )
        {
          Sleep(0x64u);
          InvalidateRect(g_hWnd, 0, 0);
        }
        return;
      }
    }
    if ( v12 == -2005530512 )
      RenderManager::SetEngineState(v1, 320);
  }
}
