// Hidden C++ exception states: #wind=2
NodeLabel *__fastcall NodeLabel::NodeLabel(NodeLabel *this)
{
  NodeSprite::NodeSprite(this);
  *(_QWORD *)this = &NodeLabel::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 496,
    0x18u,
    32,
    (void (*)(void *))Str::Str,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
  *((_QWORD *)this + 60) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 119) = 2;
  *((_DWORD *)this + 118) = -1;
  Array<enum NodeType>::Add((__int64)this + 104, 3);
  NodeLabel::SetText(this, &String, 1u);
  *((_DWORD *)this + 316) = 0;
  return this;
}
