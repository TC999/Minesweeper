// Hidden C++ exception states: #wind=1
NodeSprite *__fastcall NodeSprite::NodeSprite(NodeSprite *this)
{
  NodeBase::NodeBase(this);
  *(_QWORD *)this = &NodeSprite::`vftable';
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_BYTE *)this + 412) = 1;
  *((_DWORD *)this + 115) = 1023969417;
  *((_DWORD *)this + 107) = 0;
  *((_BYTE *)this + 413) = 1;
  *((_QWORD *)this + 52) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 255;
  *((_DWORD *)this + 101) = -1;
  *((_BYTE *)this + 464) = 0;
  *((_BYTE *)this + 401) = 0;
  *((_BYTE *)this + 400) = 0;
  *((_BYTE *)this + 414) = 0;
  *((_BYTE *)this + 408) = 1;
  *((_BYTE *)this + 409) = 0;
  *((_BYTE *)this + 410) = 0;
  *((_BYTE *)this + 411) = 0;
  Array<enum NodeType>::Add((__int64)this + 104, 1);
  return this;
}
