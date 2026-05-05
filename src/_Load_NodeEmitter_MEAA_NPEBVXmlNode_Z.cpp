char __fastcall NodeEmitter::Load(NodeEmitter *this, const wchar_t **a2)
{
  const struct XmlNode *v5; // rax
  const unsigned __int16 *NodeValue; // rax
  unsigned __int16 *v7; // rbx
  const wchar_t **Xml; // rbp
  const wchar_t *v9; // rax

  if ( !a2 )
    return 1;
  v5 = XmlNode::XPathElementSearchSingle((XmlNode *)a2, L"/Sprite");
  if ( !v5 || *((_BYTE *)v5 + 48) )
  {
    v9 = L"<no xml source file>";
    if ( a2[12] )
      v9 = a2[12];
    Log(0x100u, 119, "NodeEmitter.cpp", L"Sprite source not found in emitter xml %s", v9);
  }
  else
  {
    NodeValue = XmlNode::GetNodeValue(v5);
    v7 = (unsigned __int16 *)NodeValue;
    if ( NodeValue )
    {
      Xml = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, NodeValue);
      if ( Xml )
      {
        operator delete(v7);
        if ( NodeSprite::Load(this, Xml) )
        {
          *((_QWORD *)this + 65) = a2;
          return 1;
        }
      }
      else
      {
        Log(0x100u, 137, "NodeEmitter.cpp", L"Couldn't load sprite xml %s", v7);
        operator delete(v7);
      }
    }
  }
  return 0;
}
