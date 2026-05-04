NodeSprite *__fastcall NodeSprite::`scalar deleting destructor'(NodeSprite *this, char a2)
{
  NodeSprite::~NodeSprite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
