// Hidden C++ exception states: #wind=1
NodeButton *__fastcall NodeButton::NodeButton(NodeButton *this)
{
  NodeSprite::NodeSprite(this);
  *(_QWORD *)this = &NodeButton::`vftable';
  Array<enum NodeType>::Add((__int64)this + 104, 2);
  *((_BYTE *)this + 413) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 118) = 30;
  *((_BYTE *)this + 496) = 1;
  *((_BYTE *)this + 498) = 1;
  *((_BYTE *)this + 497) = 1;
  *((_BYTE *)this + 499) = 1;
  *((_BYTE *)this + 500) = 1;
  *((_BYTE *)this + 501) = 0;
  *((_BYTE *)this + 502) = 0;
  return this;
}
