// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeButton::CreateNode(unsigned int *a1)
{
  NodeButton *v1; // rcx
  struct NodeBase *result; // rax

  *a1 = 12;
  v1 = (NodeButton *)operator new(0x1F8u);
  result = 0;
  if ( v1 )
    return NodeButton::NodeButton(v1);
  return result;
}
