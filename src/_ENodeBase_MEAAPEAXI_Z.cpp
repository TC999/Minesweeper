NodeBase *__fastcall NodeBase::`vector deleting destructor'(NodeBase *this, char a2)
{
  NodeBase::~NodeBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
