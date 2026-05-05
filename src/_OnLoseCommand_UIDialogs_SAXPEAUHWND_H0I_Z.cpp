void __fastcall UIDialogs::OnLoseCommand(HWND hWnd, int a2, HWND a3)
{
  int v5; // ebx
  Game *v6; // rcx
  LONG top; // r11d
  int v8; // ebx
  char v9; // r8
  HWND Parent; // rax
  int v11; // r8d
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-38h] BYREF

  wndpl.length = 44;
  GetWindowPlacement(hWnd, &wndpl);
  v5 = a2 - 2;
  v6 = Game::G;
  top = wndpl.rcNormalPosition.top;
  *((_DWORD *)Game::G + 12) = wndpl.rcNormalPosition.left;
  *((_DWORD *)v6 + 13) = top;
  if ( !v5 )
  {
    v9 = 0;
LABEL_7:
    Game::Reset(v6, 1, v9, 1);
    goto LABEL_8;
  }
  v8 = v5 - 1002;
  if ( v8 )
  {
    if ( v8 != 1 )
      return;
    v9 = 1;
    goto LABEL_7;
  }
  Parent = GetParent(hWnd);
  PostMessageW(Parent, 0x10u, 0, 0);
LABEL_8:
  DialogHelper::DismissDialog(hWnd, 0, v11);
}
