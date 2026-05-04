Access_Node *__fastcall Access_Node::`vector deleting destructor'(Access_Node *this, char a2)
{
  Access_Node::~Access_Node(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
