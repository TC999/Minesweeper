struct NodeSprite *__fastcall UITile::ShowMine(UITile *this)
{
  int *v2; // rax
  int v3; // edx
  int v4; // r9d
  __int64 v5; // rax
  RenderManager *v6; // rax

  if ( !*((_QWORD *)this + 10) )
  {
    v2 = (int *)NodeSprite::Copy(UITile::_pMineSpriteBase);
    v3 = UITile::_tileSize * *((_DWORD *)this + 12);
    *((_QWORD *)this + 10) = v2;
    NodeBase::SetPosition((NodeBase *)v2, v3, v2[3]);
    NodeBase::SetPosition(
      *((NodeBase **)this + 10),
      *(_DWORD *)(*((_QWORD *)this + 10) + 8LL),
      v4 * *((_DWORD *)this + 13));
    *(_BYTE *)(*((_QWORD *)this + 10) + 72LL) = 0;
    v5 = *((_QWORD *)this + 10);
    if ( *(_BYTE *)(v5 + 41) != 1 )
    {
      *(_BYTE *)(v5 + 41) = 1;
      v6 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v6 + 88) = 1;
    }
  }
  return (struct NodeSprite *)*((_QWORD *)this + 10);
}
