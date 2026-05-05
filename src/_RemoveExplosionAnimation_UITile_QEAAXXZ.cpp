void __fastcall UITile::RemoveExplosionAnimation(UITile *this)
{
  NodeBase *v2; // rcx

  v2 = (NodeBase *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    NodeBase::RemoveListener(v2, this);
    NodeBase::DeleteSelf(*((NodeBase **)this + 4));
    *((_QWORD *)this + 4) = 0;
    *((_DWORD *)this + 36) = 0;
  }
}
