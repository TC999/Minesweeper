char __fastcall UITile::InitBaseNodes(
        struct UITileConstructionInfo *a1,
        struct Str *a2,
        struct Str *a3,
        wchar_t **a4,
        wchar_t **a5,
        wchar_t **a6,
        wchar_t **a7,
        wchar_t **a8)
{
  int v12; // r12d
  __int64 v13; // rbp
  struct NodeBase *v14; // rax
  struct NodeSprite *ChildTileSprite; // rax
  __int64 v16; // rax
  RenderManager *v17; // rax
  __int64 v18; // rdx
  UserInterface *v19; // rcx
  unsigned __int16 *v20; // rbx
  NodeBase *v21; // rax
  struct NodeBase *v22; // rdx
  NodeBase *v23; // rax
  struct NodeBase *v24; // rdx
  NodeBase *v25; // rax
  struct NodeBase *v26; // rdx
  NodeBase *v27; // rax
  struct NodeBase *v28; // rdx
  NodeBase *v29; // rax
  struct NodeBase *v30; // rdx
  NodeBase *v31; // rax
  struct NodeBase *v32; // rdx
  NodeBase *v33; // rax
  const unsigned __int16 *v34; // rdx
  struct NodeBase *v35; // rbx
  const struct XmlNode *Xml; // rax
  NodeBase *v37; // rax
  struct NodeBase *v38; // rbx
  const unsigned __int16 *v39; // rdx
  const struct XmlNode *v40; // rax
  struct NodeBase *v41; // rax
  RenderManager *v42; // r10
  NodeBase *v43; // rcx
  __int64 v44; // r10
  __int64 v45; // r11

  if ( UITile::_pExplosionAnimatedSpriteBase )
    UITile::DestroyBaseNodes();
  UITile::_tileWidth = *((_DWORD *)a1 + 66);
  UITile::_tileSize = *((_DWORD *)a1 + 67);
  UITile::_mineExplodeXOffset = *((_DWORD *)a1 + 70);
  UITile::_mineExplodeYOffset = *((_DWORD *)a1 + 71);
  if ( !UITile::_disarmFrameControlAnimationId )
    UITile::_disarmFrameControlAnimationId = ResourceAnimation::Create(a4[2], (unsigned int)*a4 + 1);
  if ( !UITile::_alphaQuickPulseAnimationId )
    UITile::_alphaQuickPulseAnimationId = ResourceAnimation::Create(a5[2], (unsigned int)*a5 + 1);
  if ( !UITile::_alphaQuickFadeInAnimationId )
    UITile::_alphaQuickFadeInAnimationId = ResourceAnimation::Create(a6[2], (unsigned int)*a6 + 1);
  if ( !UITile::_alphaQuickFadeOutAnimationId )
    UITile::_alphaQuickFadeOutAnimationId = ResourceAnimation::Create(a7[2], (unsigned int)*a7 + 1);
  if ( !UITile::_explosionControlAnimationId )
    UITile::_explosionControlAnimationId = ResourceAnimation::Create(a8[2], (unsigned int)*a8 + 1);
  v12 = 0;
  if ( *((int *)a1 + 4) > 0 )
  {
    v13 = 0;
    do
    {
      v14 = NodeBase::CreateFromType(L"Base", *(struct NodeBase **)a1, 1);
      Array<IEventListener *>::Add((__int64)&UITile::_backContainerRows, (__int64)v14);
      ChildTileSprite = UITile::createChildTileSprite(
                          *(struct NodeBase **)((char *)qword_1000A6CC0 + v13),
                          (const unsigned __int16 **)a1 + 9);
      Array<IEventListener *>::Add((__int64)&UITile::_backSpriteRowBases, (__int64)ChildTileSprite);
      v16 = *(_QWORD *)((char *)qword_1000A6CD8 + v13);
      if ( *(_BYTE *)(v16 + 41) )
      {
        *(_BYTE *)(v16 + 41) = 0;
        v17 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 20) = 1;
        *((_BYTE *)v17 + 88) = 1;
      }
      v18 = *(_QWORD *)((char *)qword_1000A6CC0 + v13);
      if ( *(_BYTE *)(v18 + 144) != 1 )
      {
        v19 = g_pUserInterface;
        *(_BYTE *)(v18 + 144) = 1;
        *(_DWORD *)(v18 + 192) = 20;
        UserInterface::Access_OnNodeAccessible(v19, (struct NodeBase *)v18);
      }
      v20 = LocalizeMessage(L"|42417|ACC|Row %1!d!//accessibility row (container) id", (unsigned int)(v12 + 1));
      NodeBase::SetAccessName(*(NodeBase **)((char *)qword_1000A6CC0 + v13), v20);
      NodeBase::SetAccessDescription(*(NodeBase **)((char *)qword_1000A6CC0 + v13), v20);
      LocalFree(v20);
      NodeBase::SetPosition(
        *(NodeBase **)((char *)qword_1000A6CC0 + v13),
        *(_DWORD *)(*(_QWORD *)((char *)qword_1000A6CC0 + v13) + 8LL),
        *((_DWORD *)a1 + 67) * v12);
      NodeBase::SetSize(
        *(NodeBase **)((char *)qword_1000A6CC0 + v13),
        *((_DWORD *)a1 + 67) * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL) + 16LL),
        *(_DWORD *)(*(_QWORD *)((char *)qword_1000A6CC0 + v13) + 20LL));
      NodeBase::SetSize(
        *(NodeBase **)((char *)qword_1000A6CC0 + v13),
        *(_DWORD *)(*(_QWORD *)((char *)qword_1000A6CC0 + v13) + 16LL),
        *((_DWORD *)a1 + 67));
      v13 += 8;
      ++v12;
    }
    while ( v12 < *((_DWORD *)a1 + 4) );
  }
  v21 = NodeBase::CreateFromType(L"Base", *(struct NodeBase **)a1, 1);
  v22 = *(struct NodeBase **)a1;
  UITile::_pShadowLayerContainer = v21;
  v23 = NodeBase::CreateFromType(L"Base", v22, 1);
  v24 = *(struct NodeBase **)a1;
  UITile::_pLabelLayerContainer = v23;
  v25 = NodeBase::CreateFromType(L"Base", v24, 1);
  v26 = *(struct NodeBase **)a1;
  UITile::_pTopLayerContainer = v25;
  v27 = NodeBase::CreateFromType(L"Base", v26, 1);
  v28 = *(struct NodeBase **)a1;
  UITile::_pHighlightLayerContainer = v27;
  v29 = NodeBase::CreateFromType(L"Base", v28, 1);
  v30 = *(struct NodeBase **)a1;
  UITile::_pFlagLayerContainer = v29;
  v31 = NodeBase::CreateFromType(L"Base", v30, 1);
  v32 = *(struct NodeBase **)a1;
  UITile::_pXLayerContainer = v31;
  UITile::_pAnimLayerContainer = NodeBase::CreateFromType(L"Base", v32, 1);
  UITile::_pLeftShadowBase = UITile::createChildTileSprite(
                               UITile::_pShadowLayerContainer,
                               (const unsigned __int16 **)a1 + 30);
  UITile::_pUpperShadowBase = UITile::createChildTileSprite(
                                UITile::_pShadowLayerContainer,
                                (const unsigned __int16 **)a1 + 27);
  UITile::_pTopSpriteBase = UITile::createChildTileSprite(
                              UITile::_pTopLayerContainer,
                              (const unsigned __int16 **)a1 + 3);
  UITile::_pHighlightSpriteBase = UITile::createChildTileSprite(
                                    UITile::_pHighlightLayerContainer,
                                    (const unsigned __int16 **)a1 + 6);
  UITile::_pFlagSpriteBase = UITile::createChildTileSprite(
                               UITile::_pFlagLayerContainer,
                               (const unsigned __int16 **)a1 + 15);
  UITile::_pMineSpriteBase = UITile::createChildTileSprite(
                               UITile::_pFlagLayerContainer,
                               (const unsigned __int16 **)a1 + 12);
  UITile::_pQuestionMarkSpriteBase = UITile::createChildTileSprite(
                                       UITile::_pFlagLayerContainer,
                                       (const unsigned __int16 **)a1 + 21);
  UITile::_pNumberSpriteBase = UITile::createChildTileSprite(
                                 UITile::_pFlagLayerContainer,
                                 (const unsigned __int16 **)a1 + 24);
  v33 = UITile::createChildTileSprite(UITile::_pXLayerContainer, (const unsigned __int16 **)a1 + 18);
  v34 = (const unsigned __int16 *)*((_QWORD *)a2 + 2);
  v35 = UITile::_pAnimLayerContainer;
  UITile::_pBadGuessSpriteBase = v33;
  Xml = XmlManager::GetXml(g_pXmlManager, v34);
  v37 = NodeBase::CreateFromXmlNode(Xml, v35);
  v38 = UITile::_pAnimLayerContainer;
  v39 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
  UITile::_pExplosionAnimatedSpriteBase = v37;
  v40 = XmlManager::GetXml(g_pXmlManager, v39);
  v41 = NodeBase::CreateFromXmlNode(v40, v38);
  v42 = g_pRenderManager;
  UITile::_pDisarmAnimatedSpriteBase = v41;
  if ( *((_BYTE *)UITile::_pLeftShadowBase + 41) )
  {
    *((_BYTE *)UITile::_pLeftShadowBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pUpperShadowBase + 41) )
  {
    *((_BYTE *)UITile::_pUpperShadowBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pTopSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pTopSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pHighlightSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pHighlightSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pFlagSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pFlagSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pMineSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pMineSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pBadGuessSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pBadGuessSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pQuestionMarkSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pQuestionMarkSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)UITile::_pNumberSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pNumberSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  v43 = UITile::_pExplosionAnimatedSpriteBase;
  if ( *((_BYTE *)UITile::_pExplosionAnimatedSpriteBase + 41) )
  {
    *((_BYTE *)UITile::_pExplosionAnimatedSpriteBase + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  if ( *((_BYTE *)v41 + 41) )
  {
    *((_BYTE *)v41 + 41) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  *((_BYTE *)v43 + 413) = 0;
  *((_BYTE *)v43 + 412) = 0;
  *((_BYTE *)v43 + 72) = 0;
  if ( *((_DWORD *)v43 + 96) )
  {
    *((_DWORD *)v43 + 96) = 0;
    *((_BYTE *)v42 + 20) = 1;
    *((_BYTE *)v42 + 88) = 1;
  }
  NodeBase::SetMaterial(v43, *(const struct Material **)(*((_QWORD *)v42 + 7) + 8LL));
  *(_BYTE *)(v45 + 413) = 0;
  *(_BYTE *)(v45 + 412) = 0;
  *(_BYTE *)(v45 + 72) = 0;
  if ( *(_DWORD *)(v45 + 384) )
  {
    *(_DWORD *)(v45 + 384) = 0;
    *(_BYTE *)(v44 + 20) = 1;
    *(_BYTE *)(v44 + 88) = 1;
  }
  NodeBase::SetMaterial((NodeBase *)v45, *(const struct Material **)(*(_QWORD *)(v44 + 56) + 8LL));
  return 1;
}
