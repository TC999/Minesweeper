NodeButton *__fastcall NodeButton::`vector deleting destructor'(NodeButton *this, char a2)
{
  NodeButton::~NodeButton(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
