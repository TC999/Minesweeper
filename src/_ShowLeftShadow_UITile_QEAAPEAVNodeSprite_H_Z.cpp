struct NodeSprite *__fastcall UITile::ShowLeftShadow(UITile *this, int a2)
{
  int *v4; // rax
  int v5; // edx
  int v6; // r9d
  RenderManager *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( !*((_QWORD *)this + 16) )
  {
    v4 = (int *)NodeSprite::Copy(UITile::_pLeftShadowBase);
    v5 = UITile::_tileSize * *((_DWORD *)this + 12);
    *((_QWORD *)this + 16) = v4;
    NodeBase::SetPosition((NodeBase *)v4, v5, v4[3]);
    NodeBase::SetPosition(
      *((NodeBase **)this + 16),
      *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
      v6 * *((_DWORD *)this + 13));
    v7 = g_pRenderManager;
    *(_BYTE *)(*((_QWORD *)this + 16) + 72LL) = 0;
    v8 = *((_QWORD *)this + 16);
    if ( *(_BYTE *)(v8 + 41) != 1 )
    {
      *(_BYTE *)(v8 + 41) = 1;
      *((_BYTE *)v7 + 20) = 1;
      *((_BYTE *)v7 + 88) = 1;
    }
    v9 = *((_QWORD *)this + 16);
    if ( a2 != *(_DWORD *)(v9 + 396) )
    {
      *(_DWORD *)(v9 + 396) = a2;
      *((_BYTE *)v7 + 20) = 1;
      *((_BYTE *)v7 + 88) = 1;
    }
  }
  return (struct NodeSprite *)*((_QWORD *)this + 16);
}
