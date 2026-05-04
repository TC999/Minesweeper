NodeLabel *__fastcall NodeLabel::`vector deleting destructor'(NodeLabel *this, char a2)
{
  NodeLabel::~NodeLabel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
