// Hidden C++ exception states: #wind=1
UITile *__fastcall UITile::UITile(UITile *this, struct UITileConstructionInfo *a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v6; // ebp
  int v7; // edi
  struct NodeSprite *v8; // rax
  RenderManager *v9; // rax
  __int64 v10; // rcx
  RenderManager *v11; // rax
  __int64 v12; // rdx
  int *v13; // rax
  __int64 v14; // rax
  RenderManager *v15; // rax
  int *v16; // rax

  *(_QWORD *)this = &UITile::`vftable';
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 13) = a4;
  v5 = a3 * UITile::_tileSize;
  v6 = a4 * UITile::_tileSize;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 7) = 0;
  v7 = a3 + *((_DWORD *)a2 + 68) + UITile::_tileWidth * (a4 + *((_DWORD *)a2 + 69));
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
  v8 = NodeSprite::Copy(*((NodeSprite **)qword_1000A6CD8 + a4));
  *((_QWORD *)this + 3) = v8;
  if ( v7 != *((_DWORD *)v8 + 96) )
  {
    *((_DWORD *)v8 + 96) = v7;
    v9 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v9 + 88) = 1;
  }
  Array<IEventListener *>::Add(*((_QWORD *)this + 3) + 200LL, (__int64)this);
  NodeBase::SetPosition(*((NodeBase **)this + 3), v5, *(_DWORD *)(*((_QWORD *)this + 3) + 12LL));
  NodeBase::SetPosition(*((NodeBase **)this + 3), *(_DWORD *)(*((_QWORD *)this + 3) + 8LL), 0);
  v10 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v10 + 41) != 1 )
  {
    *(_BYTE *)(v10 + 41) = 1;
    v11 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v11 + 88) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 3) + 72LL) = 1;
  *(_BYTE *)(*((_QWORD *)this + 3) + 75LL) = 1;
  UserInterface::RegisterNodeForFocus(g_pUserInterface, *((struct NodeBase **)this + 3));
  if ( !*((_DWORD *)this + 12) )
    Array<IEventListener *>::Add((__int64)&UITile::_accessibilityGroups, *((_QWORD *)this + 3));
  v12 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v12 + 144) != 1 )
  {
    *(_BYTE *)(v12 + 144) = 1;
    *(_DWORD *)(v12 + 192) = 43;
    UserInterface::Access_OnNodeAccessible(g_pUserInterface, (struct NodeBase *)v12);
  }
  v13 = (int *)NodeSprite::Copy(UITile::_pTopSpriteBase);
  *((_QWORD *)this + 2) = v13;
  NodeBase::SetPosition((NodeBase *)v13, v5, v13[3]);
  NodeBase::SetPosition(*((NodeBase **)this + 2), *(_DWORD *)(*((_QWORD *)this + 2) + 8LL), v6);
  *(_BYTE *)(*((_QWORD *)this + 2) + 72LL) = 0;
  v14 = *((_QWORD *)this + 2);
  if ( v7 != *(_DWORD *)(v14 + 384) )
  {
    *(_DWORD *)(v14 + 384) = v7;
    v15 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v15 + 88) = 1;
  }
  v16 = (int *)NodeSprite::Copy(UITile::_pHighlightSpriteBase);
  *((_QWORD *)this + 1) = v16;
  NodeBase::SetPosition((NodeBase *)v16, v5, v16[3]);
  NodeBase::SetPosition(*((NodeBase **)this + 1), *(_DWORD *)(*((_QWORD *)this + 1) + 8LL), v6);
  *(_BYTE *)(*((_QWORD *)this + 1) + 72LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 1) + 360LL) = 2;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 64) = 1;
  return this;
}
