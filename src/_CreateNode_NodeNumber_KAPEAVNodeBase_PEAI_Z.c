// Hidden C++ exception states: #wind=1
struct NodeBase *__fastcall NodeNumber::CreateNode(unsigned int *a1)
{
  NodeBase *v1; // rax
  NodeBase *v2; // rbx

  *a1 = 10;
  v1 = (NodeBase *)operator new(0x1B8u);
  v2 = v1;
  if ( !v1 )
    return 0;
  NodeBase::NodeBase(v1);
  *(_QWORD *)v2 = &NodeNumber::`vftable';
  *((_DWORD *)v2 + 104) = 0;
  *((_DWORD *)v2 + 105) = 0;
  *((_DWORD *)v2 + 106) = 16;
  *((_QWORD *)v2 + 54) = 0;
  *((_DWORD *)v2 + 96) = -1;
  *((_DWORD *)v2 + 97) = -1;
  *((_DWORD *)v2 + 98) = 0;
  *((_DWORD *)v2 + 99) = -1;
  *((_DWORD *)v2 + 100) = 255;
  *((_DWORD *)v2 + 102) = 1;
  *((_DWORD *)v2 + 103) = 1;
  return v2;
}
