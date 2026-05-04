// Hidden C++ exception states: #wind=1
void __fastcall NodeButton::~NodeButton(NodeButton *this)
{
  *(_QWORD *)this = &NodeButton::`vftable';
  ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 121));
  ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 123));
  UserInterface::UnRegisterNodeForFocus(g_pUserInterface, this);
  NodeSprite::~NodeSprite(this);
}
