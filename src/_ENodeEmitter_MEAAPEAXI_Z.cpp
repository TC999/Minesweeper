NodeEmitter *__fastcall NodeEmitter::`vector deleting destructor'(NodeEmitter *this, char a2)
{
  NodeEmitter::~NodeEmitter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
