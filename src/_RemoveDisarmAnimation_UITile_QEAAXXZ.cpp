void __fastcall UITile::RemoveDisarmAnimation(UITile *this)
{
  NodeBase *v2; // rcx

  v2 = (NodeBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    NodeBase::RemoveListener(v2, this);
    NodeBase::DeleteSelf(*((NodeBase **)this + 5));
    *((_QWORD *)this + 5) = 0;
    *((_DWORD *)this + 37) = 0;
  }
}
