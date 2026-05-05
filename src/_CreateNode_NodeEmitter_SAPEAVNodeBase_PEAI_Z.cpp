// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeEmitter::CreateNode(unsigned int *a1)
{
  NodeEmitter *v1; // rcx
  struct NodeBase *result; // rax

  *a1 = 11;
  v1 = (NodeEmitter *)operator new(0x250u);
  result = 0;
  if ( v1 )
    return NodeEmitter::NodeEmitter(v1);
  return result;
}
