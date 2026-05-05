// Hidden C++ exception states: #wind=3
void __fastcall UIDialogs::StartExitGameDialog(HWND a1, char a2)
{
  SharedDialogs::ExitGame *v3; // rdi
  bool v4; // r8
  int v5; // eax
  char v6; // di
  void *v7; // rbx
  _BYTE v8[24]; // [rsp+30h] [rbp-58h] BYREF
  void *v9; // [rsp+48h] [rbp-40h]
  void *Block; // [rsp+50h] [rbp-38h]
  _BYTE v11[48]; // [rsp+58h] [rbp-30h] BYREF

  v3 = (SharedDialogs::ExitGame *)g_hWnd;
  RenderManager::Render(g_pRenderManager, 1);
  if ( a2 )
  {
    v5 = SharedDialogs::ExitGame::Show(v3, 0, v4) - 2;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        UIDialogs::CancelClose = 1;
      }
      else
      {
        UIDialogs::CancelClose = 0;
        UIDialogs::SaveOnExit = 1;
        SerialXML::SerialXML((SerialXML *)v8);
        v6 = SerialXML::FileExists((SerialXML *)v8, Source, 0x28u);
        v7 = Block;
        if ( Block )
        {
          XmlNode::~XmlNode((XmlNode *)Block);
          operator delete(v7);
          Block = 0;
        }
        Stash::~Stash((Stash *)v11);
        operator delete(v9);
        if ( v6 )
          Game::RemoveSavedGame(Game::G);
      }
    }
    else
    {
      UIDialogs::CancelClose = 0;
      UIDialogs::SaveOnExit = 0;
    }
  }
  else
  {
    UIDialogs::CancelClose = 0;
    UIDialogs::SaveOnExit = 0;
  }
}
