// Hidden C++ exception states: #wind=6
void __fastcall UIBoardCanvas::~UIBoardCanvas(NodeBase **this)
{
  UserInterface *v2; // rbx
  NodeBase *v3; // rcx
  NodeBase *v4; // rcx
  NodeBase *v5; // rcx
  NodeBase *v6; // rcx
  NodeBase *v7; // rcx

  *this = (NodeBase *)&UIBoardCanvas::`vftable';
  Log(0x1000000u, L"Destroy Canvas");
  v2 = g_pUserInterface;
  Array<Access_Node *>::FindRemove((char *)g_pUserInterface + 96, this);
  Array<Access_Node *>::FindRemove((char *)v2 + 120, this);
  UIBoardCanvas::ClearAnimations((UIBoardCanvas *)this);
  UIBoardCanvas::cleanupBoardObjects((UIBoardCanvas *)this);
  UIBoardCanvas::clearExplosionCheckers((UIBoardCanvas *)this);
  UIBoardCanvas::cleanupTiles((UIBoardCanvas *)this);
  UITile::DestroyBaseNodes();
  NodeBase::DeleteSelf(this[14]);
  NodeBase::DeleteSelf(this[18]);
  v3 = this[43];
  if ( v3 )
    free(v3);
  v4 = this[40];
  if ( v4 )
    free(v4);
  v5 = this[37];
  if ( v5 )
    free(v5);
  v6 = this[24];
  if ( v6 )
    free(v6);
  v7 = this[3];
  if ( v7 )
    free(v7);
  *this = (NodeBase *)&IEventListener::`vftable';
}
