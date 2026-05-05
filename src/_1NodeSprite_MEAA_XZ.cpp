// Hidden C++ exception states: #wind=1
void __fastcall NodeSprite::~NodeSprite(NodeSprite *this)
{
  char *v2; // rcx
  char *v3; // rbx

  *(_QWORD *)this = &NodeSprite::`vftable';
  v2 = (char *)*((_QWORD *)this + 52);
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator'(v2, 0x20u, *((_DWORD *)v2 - 1), (void (*)(void *))NodeSprite::Source::~Source);
    operator delete(v3);
  }
  NodeBase::~NodeBase(this);
}
