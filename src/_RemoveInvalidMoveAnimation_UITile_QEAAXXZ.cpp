void __fastcall UITile::RemoveInvalidMoveAnimation(UITile *this)
{
  unsigned int v1; // edx
  NodeBase *v3; // rcx
  NodeBase *v4; // rcx

  v1 = *((_DWORD *)this + 35);
  if ( v1 )
  {
    v3 = (NodeBase *)*((_QWORD *)this + 12);
    if ( v3 )
    {
      NodeBase::StopAnimation(v3, v1);
      NodeBase::RemoveListener(*((NodeBase **)this + 12), this);
      v4 = (NodeBase *)*((_QWORD *)this + 12);
      if ( v4 )
      {
        NodeBase::DeleteSelf(v4);
        *((_QWORD *)this + 12) = 0;
      }
      *((_DWORD *)this + 35) = 0;
    }
  }
}
