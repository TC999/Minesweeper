// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeBase::CreateNode(unsigned int *a1)
{
  NodeBase *v1; // rcx
  struct NodeBase *result; // rax

  *a1 = 6;
  v1 = (NodeBase *)operator new(0x180u);
  result = 0;
  if ( v1 )
    return NodeBase::NodeBase(v1);
  return result;
}
