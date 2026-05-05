// Hidden C++ exception states: #wind=2
struct NodeBase *__fastcall NodeShot::CreateNode(unsigned int *a1)
{
  NodeSprite *v1; // rax
  NodeSprite *v2; // rbx

  *a1 = 8;
  v1 = (NodeSprite *)operator new(0x1D8u);
  v2 = v1;
  if ( !v1 )
    return 0;
  NodeSprite::NodeSprite(v1);
  *(_QWORD *)v2 = &NodeShot::`vftable';
  Array<enum NodeType>::Add((__int64)v2 + 104, 5);
  return v2;
}
