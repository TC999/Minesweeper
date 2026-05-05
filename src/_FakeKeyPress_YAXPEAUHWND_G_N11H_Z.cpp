void __fastcall FakeKeyPress(HWND a1, __int16 a2, char a3, char a4, bool a5, int a6)
{
  HWND ForegroundWindow; // rax
  HWND Parent; // rax
  int v12; // r11d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r11d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  signed int v19; // r11d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  struct tagINPUT pInputs[8]; // [rsp+20h] [rbp-158h] BYREF

  if ( GetForegroundWindow() == a1 )
    goto LABEL_6;
  ForegroundWindow = GetForegroundWindow();
  Parent = GetParent(ForegroundWindow);
  if ( Parent == a1 )
    goto LABEL_6;
  do
  {
    if ( !Parent )
      break;
    Parent = GetParent(Parent);
  }
  while ( Parent != a1 );
  if ( Parent == a1 )
  {
LABEL_6:
    memset(pInputs, 0, sizeof(pInputs));
    v12 = 0;
    if ( a3 )
    {
      pInputs[0].mi.dy = 0;
      pInputs[0].type = 1;
      pInputs[0].ki.wVk = 18;
      v12 = 1;
      pInputs[0].ki.dwExtraInfo = a6;
    }
    if ( a4 )
    {
      v13 = 5LL * v12;
      *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v13) = 0;
      pInputs[v13 / 5].type = 1;
      *((_WORD *)&pInputs[0].mi.dx + 4 * v13) = 16;
      ++v12;
      *((_QWORD *)&pInputs[0].hi + v13 + 2) = a6;
    }
    if ( a5 )
    {
      v14 = 5LL * v12;
      *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v14) = 0;
      pInputs[v14 / 5].type = 1;
      *((_WORD *)&pInputs[0].mi.dx + 4 * v14) = 17;
      ++v12;
      *((_QWORD *)&pInputs[0].hi + v14 + 2) = a6;
    }
    v15 = v12;
    v16 = v12 + 1;
    v17 = 5 * v15;
    v18 = v16;
    v19 = v16 + 1;
    *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v17) = 0;
    pInputs[v17 / 5].type = 1;
    *((_WORD *)&pInputs[0].mi.dx + 4 * v17) = a2;
    *((_QWORD *)&pInputs[0].hi + v17 + 2) = a6;
    v20 = 5 * v18;
    pInputs[v20 / 5].type = 1;
    *((_WORD *)&pInputs[0].mi.dx + 4 * v20) = a2;
    *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v20) = 2;
    *((_QWORD *)&pInputs[0].hi + v20 + 2) = a6;
    if ( a3 )
    {
      v21 = v19++;
      v22 = 5 * v21;
      pInputs[v22 / 5].type = 1;
      *((_WORD *)&pInputs[0].mi.dx + 4 * v22) = 18;
      *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v22) = 2;
      *((_QWORD *)&pInputs[0].hi + v22 + 2) = a6;
    }
    if ( a4 )
    {
      v23 = v19++;
      v24 = 5 * v23;
      pInputs[v24 / 5].type = 1;
      *((_WORD *)&pInputs[0].mi.dx + 4 * v24) = 16;
      *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v24) = 2;
      *((_QWORD *)&pInputs[0].hi + v24 + 2) = a6;
    }
    if ( a5 )
    {
      v25 = v19++;
      v26 = 5 * v25;
      pInputs[v26 / 5].type = 1;
      *((_WORD *)&pInputs[0].mi.dx + 4 * v26) = 17;
      *((_DWORD *)&pInputs[0].hi.wParamL + 2 * v26) = 2;
      *((_QWORD *)&pInputs[0].hi + v26 + 2) = a6;
    }
    SendInput(v19, pInputs, 40);
  }
}
