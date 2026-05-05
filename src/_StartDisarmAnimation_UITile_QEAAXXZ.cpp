void __fastcall UITile::StartDisarmAnimation(UITile *this)
{
  int *v2; // rax
  int v3; // r9d
  int v4; // edx
  int v5; // r9d
  __int64 v6; // rax
  RenderManager *v7; // rax

  if ( *((_QWORD *)this + 5) )
    UITile::RemoveDisarmAnimation(this);
  v2 = (int *)NodeSprite::Copy(UITile::_pDisarmAnimatedSpriteBase);
  v3 = UITile::_tileSize;
  v4 = *((_DWORD *)this + 12) - 1;
  *((_QWORD *)this + 5) = v2;
  NodeBase::SetPosition((NodeBase *)v2, v3 * v4 + 1, v2[3]);
  NodeBase::SetPosition(
    *((NodeBase **)this + 5),
    *(_DWORD *)(*((_QWORD *)this + 5) + 8LL),
    v5 * (*((_DWORD *)this + 13) - 4) + 4);
  *((_DWORD *)this + 37) = NodeBase::AddAnimation(*((NodeBase **)this + 5), UITile::_disarmFrameControlAnimationId, 0);
  v6 = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(v6 + 41) != 1 )
  {
    *(_BYTE *)(v6 + 41) = 1;
    v7 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v7 + 88) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 5) + 72LL) = 1;
  Array<IEventListener *>::Add(*((_QWORD *)this + 5) + 200LL, (__int64)this);
  NodeBase::ResumeAnimation(*((NodeBase **)this + 5), *((_DWORD *)this + 37));
}
