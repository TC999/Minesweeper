NodeNumber *__fastcall NodeNumber::`vector deleting destructor'(NodeNumber *this, char a2)
{
  NodeNumber::~NodeNumber(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
