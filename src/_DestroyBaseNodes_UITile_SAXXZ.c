void UITile::DestroyBaseNodes(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  NodeBase::DeleteSelf(UITile::_pLeftShadowBase);
  NodeBase::DeleteSelf(UITile::_pUpperShadowBase);
  NodeBase::DeleteSelf(UITile::_pTopSpriteBase);
  NodeBase::DeleteSelf(UITile::_pHighlightSpriteBase);
  NodeBase::DeleteSelf(UITile::_pFlagSpriteBase);
  NodeBase::DeleteSelf(UITile::_pMineSpriteBase);
  NodeBase::DeleteSelf(UITile::_pBadGuessSpriteBase);
  NodeBase::DeleteSelf(UITile::_pQuestionMarkSpriteBase);
  NodeBase::DeleteSelf(UITile::_pNumberSpriteBase);
  NodeBase::DeleteSelf(UITile::_pExplosionAnimatedSpriteBase);
  NodeBase::DeleteSelf(UITile::_pDisarmAnimatedSpriteBase);
  NodeBase::DeleteSelf(UITile::_pTopLayerContainer);
  NodeBase::DeleteSelf(UITile::_pShadowLayerContainer);
  NodeBase::DeleteSelf(UITile::_pLabelLayerContainer);
  NodeBase::DeleteSelf(UITile::_pHighlightLayerContainer);
  NodeBase::DeleteSelf(UITile::_pFlagLayerContainer);
  NodeBase::DeleteSelf(UITile::_pXLayerContainer);
  NodeBase::DeleteSelf(UITile::_pAnimLayerContainer);
  v0 = 0;
  if ( UITile::_backContainerRows )
  {
    v1 = 0;
    do
    {
      NodeBase::DeleteSelf(*(NodeBase **)((char *)qword_1000A6CC0 + v1));
      NodeBase::DeleteSelf(*(NodeBase **)((char *)qword_1000A6CD8 + v1));
      ++v0;
      v1 += 8;
    }
    while ( v0 < UITile::_backContainerRows );
  }
  UITile::_backContainerRows = 0;
  UITile::_backSpriteRowBases = 0;
  UITile::_accessibilityGroups = 0;
}
