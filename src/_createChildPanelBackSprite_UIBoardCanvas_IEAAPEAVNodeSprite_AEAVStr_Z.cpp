struct NodeSprite *__fastcall UIBoardCanvas::createChildPanelBackSprite(
        UIBoardCanvas *this,
        const unsigned __int16 **a2)
{
  struct NodeBase *v2; // rbx
  const struct XmlNode *Xml; // rax
  int *v4; // rax
  NodeBase *v5; // rcx
  __int64 v6; // rcx
  char v7; // r8
  NodeBase *v8; // r11
  __int64 v9; // r11

  v2 = (struct NodeBase *)*((_QWORD *)this + 15);
  Xml = XmlManager::GetXml(g_pXmlManager, a2[2]);
  v4 = (int *)NodeBase::CreateFromXmlNode(Xml, v2);
  NodeBase::SetPosition((NodeBase *)v4, 0, v4[3]);
  NodeBase::SetPosition(v5, *((_DWORD *)v5 + 2), 0);
  *(_BYTE *)(v6 + 413) = v7;
  NodeBase::SetMaterial(v8, *(const struct Material **)(*((_QWORD *)g_pRenderManager + 7) + 8LL));
  *(_BYTE *)(v9 + 72) = 0;
  return (struct NodeSprite *)v9;
}
