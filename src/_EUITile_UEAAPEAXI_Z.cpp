// Hidden C++ exception states: #wind=1
struct NodeBase **__fastcall UITile::`vector deleting destructor'(struct NodeBase **this, char a2)
{
  NodeBase *v4; // rcx
  NodeBase *v5; // rcx
  NodeBase *v6; // rcx
  NodeBase *v7; // rcx
  NodeBase *v8; // rcx
  NodeBase *v9; // rcx

  *this = (struct NodeBase *)&UITile::`vftable';
  UITile::RemoveExplosionAnimation((UITile *)this);
  UITile::RemoveDisarmAnimation((UITile *)this);
  UITile::RemoveInvalidMoveAnimation((UITile *)this);
  UserInterface::UnRegisterNodeForFocus(g_pUserInterface, this[3]);
  v4 = this[15];
  if ( v4 )
  {
    NodeBase::DeleteSelf(v4);
    this[15] = 0;
  }
  v5 = this[16];
  if ( v5 )
  {
    NodeBase::DeleteSelf(v5);
    this[16] = 0;
  }
  v6 = this[10];
  if ( v6 )
  {
    NodeBase::DeleteSelf(v6);
    this[10] = 0;
  }
  v7 = this[12];
  if ( v7 )
  {
    NodeBase::DeleteSelf(v7);
    this[12] = 0;
  }
  v8 = this[13];
  if ( v8 )
  {
    NodeBase::DeleteSelf(v8);
    this[13] = 0;
  }
  v9 = this[11];
  if ( v9 )
  {
    NodeBase::DeleteSelf(v9);
    this[11] = 0;
  }
  *this = (struct NodeBase *)&IEventListener::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
