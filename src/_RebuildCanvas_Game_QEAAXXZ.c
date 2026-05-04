// Hidden C++ exception states: #wind=1
void __fastcall Game::RebuildCanvas(Game *this)
{
  __int64 v2; // rcx
  UIBoardCanvas *v3; // rax
  UIBoardCanvas *v4; // r11
  unsigned __int16 *v5; // [rsp+30h] [rbp-28h]
  bool v6; // [rsp+38h] [rbp-20h]

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1);
    *((_QWORD *)this + 2) = 0;
  }
  v3 = (UIBoardCanvas *)operator new(0x168u);
  if ( v3 )
    v4 = UIBoardCanvas::UIBoardCanvas(v3);
  else
    v4 = 0;
  *((_QWORD *)this + 2) = v4;
  if ( UIBoardCanvas::Initialize(
         v4,
         *((const struct XmlNode **)this + 4),
         *((struct NodeBase **)this + 1),
         *((struct Board **)this + 3),
         *(const struct XmlNode **)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)this + 16)),
         *(const struct XmlNode **)(*((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 17))) )
  {
    Game::ResetCanvas(this);
  }
  else
  {
    LOBYTE(v5) = 1;
    DialogHelper::ShowMessageBox(0x66u, 0x69u, 1u, 0xFFFEu, 0, 0, v5, v6);
    if ( Game::G )
    {
      Game::`scalar deleting destructor'(Game::G);
      Game::G = 0;
    }
    PostQuitMessage(1);
  }
}
