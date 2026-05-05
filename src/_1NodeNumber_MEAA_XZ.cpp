// Hidden C++ exception states: #wind=2
void __fastcall NodeNumber::~NodeNumber(NodeNumber *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &NodeNumber::`vftable';
  NodeNumber::Cleanup(this);
  v2 = (void *)*((_QWORD *)this + 54);
  if ( v2 )
    free(v2);
  NodeBase::~NodeBase(this);
}
