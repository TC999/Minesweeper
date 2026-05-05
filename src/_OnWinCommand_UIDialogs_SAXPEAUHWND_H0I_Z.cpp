void __fastcall UIDialogs::OnWinCommand(HWND hWnd, int a2, HWND a3)
{
  Game *v5; // rcx
  LONG top; // r11d
  HWND Parent; // rax
  int v8; // r8d
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-38h] BYREF

  wndpl.length = 44;
  GetWindowPlacement(hWnd, &wndpl);
  v5 = Game::G;
  top = wndpl.rcNormalPosition.top;
  *((_DWORD *)Game::G + 12) = wndpl.rcNormalPosition.left;
  *((_DWORD *)v5 + 13) = top;
  if ( a2 == 2 )
  {
    Game::Reset(v5, 1, 0, 1);
  }
  else
  {
    if ( a2 != 1027 )
      return;
    Game::RemoveSavedGame(v5);
    Parent = GetParent(hWnd);
    PostMessageW(Parent, 0x10u, 0, 0);
  }
  DialogHelper::DismissDialog(hWnd, 0, v8);
}
