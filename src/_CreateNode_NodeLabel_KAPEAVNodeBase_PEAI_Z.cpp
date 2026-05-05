// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeLabel::CreateNode(unsigned int *a1)
{
  NodeLabel *v1; // rcx
  struct NodeBase *result; // rax

  *a1 = 9;
  v1 = (NodeLabel *)operator new(0x4F8u);
  result = 0;
  if ( v1 )
    return NodeLabel::NodeLabel(v1);
  return result;
}
