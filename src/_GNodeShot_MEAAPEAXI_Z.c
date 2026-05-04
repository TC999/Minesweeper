NodeShot *__fastcall NodeShot::`scalar deleting destructor'(NodeShot *this, char a2)
{
  *(_QWORD *)this = &NodeShot::`vftable';
  NodeSprite::~NodeSprite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
