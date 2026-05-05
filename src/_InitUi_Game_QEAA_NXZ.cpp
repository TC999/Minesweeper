// Hidden C++ exception states: #wind=1
bool __fastcall Game::InitUi(Game *this)
{
  Game *v1; // rdi
  RenderManager *v2; // rbx
  NodeBase *v3; // rcx
  RenderManager *v4; // rbx
  NodeBase *v5; // rcx
  struct NodeBase *v6; // rax
  UIBoardCanvas *v7; // rax
  UIBoardCanvas *v8; // r11
  bool result; // al
  unsigned __int16 *v10; // rbx

  v1 = Game::G;
  g_iMinesweeperFudge = 1;
  if ( g_CurrentBackStyle == 1 )
  {
    v2 = g_pRenderManager;
    v3 = (NodeBase *)*((_QWORD *)g_pRenderManager + 19);
    if ( v3 )
      NodeBase::DeleteSelf(v3);
    *((_QWORD *)v2 + 19) = 0;
  }
  else
  {
    g_CurrentBackStyle = 1;
    v4 = g_pRenderManager;
    v5 = (NodeBase *)*((_QWORD *)g_pRenderManager + 19);
    if ( v5 )
      NodeBase::DeleteSelf(v5);
    *((_QWORD *)v4 + 19) = 0;
    CenterRenderWindow();
    SetDPIFromWindowSize();
  }
  v6 = NodeBase::CreateFromType(L"Base", 0, 1);
  *((_QWORD *)v1 + 1) = v6;
  if ( !v6 )
    SharedDialogs::FatalDialog::Show(0);
  if ( *((_BYTE *)v6 + 144) )
  {
    *((_BYTE *)v6 + 144) = 0;
    *((_DWORD *)v6 + 48) = 59;
    UserInterface::Access_ClipNode(g_pUserInterface, v6);
  }
  v7 = (UIBoardCanvas *)operator new(0x168u);
  if ( v7 )
    v8 = UIBoardCanvas::UIBoardCanvas(v7);
  else
    v8 = 0;
  *((_QWORD *)v1 + 2) = v8;
  result = UIBoardCanvas::Initialize(
             v8,
             *((const struct XmlNode **)v1 + 4),
             *((struct NodeBase **)v1 + 1),
             *((struct Board **)v1 + 3),
             *(const struct XmlNode **)(*((_QWORD *)v1 + 17) + 8LL * *((unsigned int *)v1 + 16)),
             *(const struct XmlNode **)(*((_QWORD *)v1 + 26) + 8LL * *((unsigned int *)v1 + 17)));
  if ( result )
  {
    v10 = LocalizeMessage(L"|54922|ACC|Minesweeper//accessibility root node name");
    NodeBase::SetAccessName(*((NodeBase **)g_pRenderManager + 15), v10);
    LocalFree(v10);
    Game::RequestSetState((__int64)v1, 1);
    UIBoardCanvas::Refresh(*((UIBoardCanvas **)v1 + 2), 1);
    Game::CacheSounds(v1);
    return 1;
  }
  return result;
}
