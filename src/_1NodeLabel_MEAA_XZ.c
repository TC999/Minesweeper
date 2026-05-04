// Hidden C++ exception states: #wind=2
void __fastcall NodeLabel::~NodeLabel(NodeLabel *this)
{
  _DWORD *v2; // rax

  *(_QWORD *)this = &NodeLabel::`vftable';
  v2 = (_DWORD *)*((_QWORD *)this + 52);
  if ( v2 )
    *v2 = 0;
  operator delete(*((void **)this + 60));
  *((_QWORD *)this + 60) = 0;
  `eh vector destructor iterator'(
    (char *)this + 496,
    0x18u,
    32,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
  NodeSprite::~NodeSprite(this);
}
