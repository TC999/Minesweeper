// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeSprite::CreateNode(unsigned int *a1)
{
  NodeSprite *v1; // rcx
  struct NodeBase *result; // rax

  *a1 = 7;
  v1 = (NodeSprite *)operator new(0x1D8u);
  result = 0;
  if ( v1 )
    return NodeSprite::NodeSprite(v1);
  return result;
}
