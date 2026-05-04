char __fastcall CommonController::Poll(CommonController *this)
{
  HWND ForegroundWindow; // rax
  DWORD v4; // r12d
  __int64 v5; // rsi
  bool v6; // r13
  __int16 v7; // r8
  unsigned int v8; // ecx
  char v9; // bl
  bool v10; // zf
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  UINT v18; // ebx
  HWND v19; // rbx
  HWND v20; // rax
  HWND Parent; // rax
  UINT v22; // eax
  __int64 v23; // r9
  __int64 v24; // r9
  char v25; // al
  int v26; // ecx
  bool v27; // bl
  bool v28; // zf
  __int64 v29; // r9
  __int64 v30; // r9
  SHORT sThumbLY; // ax
  __int64 v32; // r9
  __int64 v33; // r9
  SHORT sThumbLX; // ax
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+30h] [rbp-48h]
  XINPUT_STATE pState; // [rsp+40h] [rbp-38h] BYREF

  if ( GetForegroundWindow() != *(HWND *)this )
  {
    ForegroundWindow = GetForegroundWindow();
    do
      ForegroundWindow = GetParent(ForegroundWindow);
    while ( ForegroundWindow != *(HWND *)this && ForegroundWindow );
    if ( ForegroundWindow != *(HWND *)this )
      return 1;
  }
  v4 = 0;
  v5 = 0;
  v6 = GetForegroundWindow() != *(HWND *)this;
  while ( !XInputGetState(v4, &pState) )
  {
    v7 = pState.Gamepad.wButtons & 1;
    if ( (pState.Gamepad.wButtons & 1) == 0 && (*((_BYTE *)this + 2 * v5 + 10) & 1) != 0 )
      *((_DWORD *)this + v5 + 23) = 0;
    if ( (pState.Gamepad.wButtons & 2) == 0 && (*((_BYTE *)this + 2 * v5 + 10) & 2) != 0 )
      *((_DWORD *)this + v5 + 23) = 0;
    if ( (pState.Gamepad.wButtons & 4) == 0 && (*((_BYTE *)this + 2 * v5 + 10) & 4) != 0 )
      *((_DWORD *)this + v5 + 23) = 0;
    if ( (pState.Gamepad.wButtons & 8) == 0 && (*((_BYTE *)this + 2 * v5 + 10) & 8) != 0 )
      *((_DWORD *)this + v5 + 23) = 0;
    v8 = *((_DWORD *)this + v5 + 23);
    v9 = 0;
    v10 = v8 == 0;
    if ( !v8 )
    {
      if ( *((_DWORD *)this + v5 + 19) != pState.dwPacketNumber )
        goto LABEL_23;
      v10 = 1;
    }
    if ( v10 )
      goto LABEL_29;
    if ( v8 < g_DelayCount || v8 % g_RepeatCount )
    {
      v9 = 0;
      *((_DWORD *)this + v5 + 23) = v8 + 1;
      goto LABEL_29;
    }
LABEL_23:
    v9 = 1;
LABEL_29:
    if ( v7 && v9 )
    {
      ++*((_DWORD *)this + v5 + 23);
      LOBYTE(v37) = 0;
      if ( v6 )
      {
        v11 = 9;
        LOBYTE(v36) = 1;
      }
      else
      {
        v11 = 38;
        LOBYTE(v36) = 0;
      }
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 1, v11, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 2) != 0 && v9 )
    {
      ++*((_DWORD *)this + v5 + 23);
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      v12 = 9;
      if ( !v6 )
        v12 = 40;
      CommonController::HandleEvent(this, v4, 2, v12, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 4) != 0 && v9 )
    {
      ++*((_DWORD *)this + v5 + 23);
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 3, 37, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 8) != 0 && v9 )
    {
      ++*((_DWORD *)this + v5 + 23);
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 4, 39, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 0x10) != 0 && (*((_BYTE *)this + 2 * v5 + 10) & 0x10) == 0 )
    {
      if ( v6 )
      {
        v13 = 13;
        v14 = 5;
        goto LABEL_54;
      }
      if ( *((_BYTE *)this + 8) )
      {
        FakeMCEMenu(*(HWND *)this);
      }
      else
      {
        LOBYTE(v37) = 0;
        LOBYTE(v36) = 0;
        LOBYTE(v35) = 0;
        if ( !(unsigned __int8)CommonController::HandleEvent(this, v4, 5, 121, v35, v36, v37) )
        {
          v13 = 40;
          v14 = 0;
LABEL_54:
          LOBYTE(v37) = 0;
          LOBYTE(v36) = 0;
          LOBYTE(v35) = 0;
          CommonController::HandleEvent(this, v4, v14, v13, v35, v36, v37);
        }
      }
    }
    if ( (pState.Gamepad.wButtons & 0x20) != 0 && (*((_BYTE *)this + 2 * v5 + 10) & 0x20) == 0 )
    {
      if ( v6 || (v15 = 166, *((_BYTE *)this + 108)) )
        v15 = 27;
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 6, v15, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 0x100) != 0 && (*((_WORD *)this + v5 + 5) & 0x100) == 0 )
    {
      LOBYTE(v37) = 0;
      if ( v6 )
      {
        v16 = 9;
        LOBYTE(v36) = 1;
      }
      else
      {
        v16 = 37;
        LOBYTE(v36) = 0;
      }
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 7, v16, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 0x200) != 0 && (*((_WORD *)this + v5 + 5) & 0x200) == 0 )
    {
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      v17 = 9;
      if ( !v6 )
        v17 = 39;
      CommonController::HandleEvent(this, v4, 8, v17, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 0x1000) != 0 && (*((_WORD *)this + v5 + 5) & 0x1000) == 0
      || (pState.Gamepad.wButtons & 0x4000) != 0 && (*((_WORD *)this + v5 + 5) & 0x4000) == 0 )
    {
      if ( v6 )
      {
        LOBYTE(v37) = 0;
        LOBYTE(v36) = 0;
        LOBYTE(v35) = 0;
        CommonController::HandleEvent(this, v4, 10, 32, v35, v36, v37);
      }
      else if ( *((_DWORD *)this + v5 + 11)
             && (v18 = timeGetTime() - *((_DWORD *)this + v5 + 11), v18 < GetDoubleClickTime()) )
      {
        v19 = *(HWND *)this;
        if ( GetForegroundWindow() == v19 )
          goto LABEL_84;
        v20 = GetForegroundWindow();
        Parent = GetParent(v20);
        if ( Parent == v19 )
          goto LABEL_84;
        do
        {
          if ( !Parent )
            break;
          Parent = GetParent(Parent);
        }
        while ( Parent != v19 );
        if ( Parent == v19 )
        {
LABEL_84:
          if ( (dword_1000ABADC & 1) != 0 )
          {
            v22 = dword_1000ABAD8;
          }
          else
          {
            dword_1000ABADC |= 1u;
            v22 = RegisterWindowMessageW(L"XNAControllerDoubleClick");
            dword_1000ABAD8 = v22;
          }
          PostMessageW(v19, v22, 0x41u, 0);
        }
      }
      else
      {
        LOBYTE(v37) = (pState.Gamepad.wButtons & 0x4000) != 0 && (*((_WORD *)this + v5 + 5) & 0x4000) == 0;
        LOBYTE(v36) = 0;
        LOBYTE(v35) = 0;
        CommonController::HandleEvent(this, v4, 10, 13, v35, v36, v37);
        *((_DWORD *)this + v5 + 11) = timeGetTime();
      }
    }
    if ( (pState.Gamepad.wButtons & 0x2000) != 0 && (*((_WORD *)this + v5 + 5) & 0x2000) == 0 )
    {
      if ( v6 || (v23 = 166, *((_BYTE *)this + 108)) )
        v23 = 27;
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 11, v23, v35, v36, v37);
    }
    if ( (pState.Gamepad.wButtons & 0x8000u) != 0 && (*((_WORD *)this + v5 + 5) & 0x8000) == 0 )
    {
      if ( v6 )
      {
        if ( !*((_BYTE *)this + 8) )
        {
          v24 = 13;
LABEL_110:
          LOBYTE(v37) = 0;
          LOBYTE(v36) = 0;
          LOBYTE(v35) = 0;
          CommonController::HandleEvent(this, v4, 12, v24, v35, v36, v37);
          goto LABEL_111;
        }
LABEL_106:
        FakeMCEMenu(*(HWND *)this);
        goto LABEL_111;
      }
      if ( *((_BYTE *)this + 8) )
        goto LABEL_106;
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      v25 = CommonController::HandleEvent(this, v4, 12, 121, v35, v36, v37);
      if ( *((_BYTE *)this + 9) && !v25 )
      {
        v24 = 40;
        goto LABEL_110;
      }
    }
LABEL_111:
    if ( !pState.Gamepad.bRightTrigger && *((_BYTE *)this + v5 + 22) )
      *((_DWORD *)this + v5 + 15) = 0;
    if ( !pState.Gamepad.bLeftTrigger && *((_BYTE *)this + v5 + 18) )
      *((_DWORD *)this + v5 + 15) = 0;
    v26 = *((_DWORD *)this + v5 + 15);
    v27 = 0;
    v28 = v26 == 0;
    if ( v26 )
      goto LABEL_123;
    if ( *((_DWORD *)this + v5 + 19) == pState.dwPacketNumber )
    {
      v28 = 1;
LABEL_123:
      if ( !v28 )
      {
        *((_DWORD *)this + v5 + 15) = v26 + 1;
        v27 = v26 + 1 >= g_DelayCount && (v26 + 1) % g_RepeatCount == 0;
      }
LABEL_127:
      if ( pState.Gamepad.bLeftTrigger && v27 )
      {
        LOBYTE(v37) = 0;
        if ( v6 )
        {
          v29 = 9;
          LOBYTE(v36) = 1;
        }
        else
        {
          v29 = 37;
          LOBYTE(v36) = 0;
        }
        LOBYTE(v35) = 0;
        CommonController::HandleEvent(this, v4, 13, v29, v35, v36, v37);
      }
      if ( pState.Gamepad.bRightTrigger && v27 )
      {
        LOBYTE(v37) = 0;
        LOBYTE(v36) = 0;
        LOBYTE(v35) = 0;
        v30 = 9;
        if ( !v6 )
          v30 = 39;
        CommonController::HandleEvent(this, v4, 14, v30, v35, v36, v37);
      }
      goto LABEL_138;
    }
    v27 = 1;
    if ( pState.Gamepad.bLeftTrigger || pState.Gamepad.bRightTrigger )
    {
      *((_DWORD *)this + v5 + 15) = 1;
      goto LABEL_127;
    }
LABEL_138:
    sThumbLY = pState.Gamepad.sThumbLY;
    if ( pState.Gamepad.sThumbLY > 28672 && !*((_BYTE *)this + v5 + 26) )
    {
      LOBYTE(v37) = 0;
      if ( v6 )
      {
        v32 = 9;
        LOBYTE(v36) = 1;
      }
      else
      {
        v32 = 38;
        LOBYTE(v36) = 0;
      }
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 19, v32, v35, v36, v37);
      sThumbLY = pState.Gamepad.sThumbLY;
      *((_BYTE *)this + v5 + 26) = 1;
    }
    if ( sThumbLY < 18432 && *((_BYTE *)this + v5 + 26) )
      *((_BYTE *)this + v5 + 26) = 0;
    if ( sThumbLY < -28672 && !*((_BYTE *)this + v5 + 30) )
    {
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      v33 = 9;
      if ( !v6 )
        v33 = 40;
      CommonController::HandleEvent(this, v4, 20, v33, v35, v36, v37);
      sThumbLY = pState.Gamepad.sThumbLY;
      *((_BYTE *)this + v5 + 30) = 1;
    }
    if ( sThumbLY > -18432 && *((_BYTE *)this + v5 + 30) )
      *((_BYTE *)this + v5 + 30) = 0;
    sThumbLX = pState.Gamepad.sThumbLX;
    if ( pState.Gamepad.sThumbLX < -28672 && !*((_BYTE *)this + v5 + 34) )
    {
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 17, 37, v35, v36, v37);
      sThumbLX = pState.Gamepad.sThumbLX;
      *((_BYTE *)this + v5 + 34) = 1;
    }
    if ( sThumbLX > -18432 && *((_BYTE *)this + v5 + 34) )
      *((_BYTE *)this + v5 + 34) = 0;
    if ( sThumbLX > 28672 && !*((_BYTE *)this + v5 + 38) )
    {
      LOBYTE(v37) = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v35) = 0;
      CommonController::HandleEvent(this, v4, 18, 39, v35, v36, v37);
      sThumbLX = pState.Gamepad.sThumbLX;
      *((_BYTE *)this + v5 + 38) = 1;
    }
    if ( sThumbLX < 18432 )
    {
      if ( *((_BYTE *)this + v5 + 38) )
        *((_BYTE *)this + v5 + 38) = 0;
    }
    ++v4;
    *((_WORD *)this + v5 + 5) = pState.Gamepad.wButtons;
    *((_BYTE *)this + v5 + 18) = pState.Gamepad.bLeftTrigger;
    *((_BYTE *)this + v5 + 22) = pState.Gamepad.bRightTrigger;
    *((_DWORD *)this + v5++ + 19) = pState.dwPacketNumber;
    if ( (int)v4 >= 4 )
      return 1;
  }
  return 1;
}
