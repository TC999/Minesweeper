char __fastcall NodeBase::Load(HLOCAL *this, const struct XmlNode *a2)
{
  XmlNode *v4; // rax
  unsigned __int16 *NodeValue; // r13
  XmlNode *v6; // rax
  unsigned __int16 *v7; // r12
  XmlNode *v8; // rax
  unsigned __int16 *v9; // r14
  XmlNode *v10; // rax
  unsigned __int16 *v11; // rsi
  XmlNode *v12; // rax
  unsigned __int16 *v13; // rbp
  XmlNode *v14; // rax
  XmlNode *v15; // rbx

  if ( a2 )
  {
    v4 = XmlNode::XPathElementSearchSingle(a2, L"/AccessName");
    if ( v4 )
      NodeValue = XmlNode::GetNodeValue(v4);
    else
      NodeValue = 0;
    v6 = XmlNode::XPathElementSearchSingle(a2, L"/AccessDesc");
    if ( v6 )
      v7 = XmlNode::GetNodeValue(v6);
    else
      v7 = 0;
    v8 = XmlNode::XPathElementSearchSingle(a2, L"/AccessValue");
    if ( v8 )
      v9 = XmlNode::GetNodeValue(v8);
    else
      v9 = 0;
    v10 = XmlNode::XPathElementSearchSingle(a2, L"/AccessDefAction");
    if ( v10 )
      v11 = XmlNode::GetNodeValue(v10);
    else
      v11 = 0;
    v12 = XmlNode::XPathElementSearchSingle(a2, L"/AccessKeyShort");
    if ( v12 )
      v13 = XmlNode::GetNodeValue(v12);
    else
      v13 = 0;
    if ( NodeValue )
    {
      NodeBase::SetAccessName((NodeBase *)this, NodeValue);
      operator delete(NodeValue);
    }
    if ( v7 )
    {
      NodeBase::SetAccessDescription((NodeBase *)this, v7);
      operator delete(v7);
    }
    if ( v9 )
    {
      LocalFree(this[23]);
      this[23] = LocalizeMessage(v9);
      operator delete(v9);
    }
    if ( v11 )
    {
      NodeBase::SetAccessDefaultAction((NodeBase *)this, v11);
      operator delete(v11);
    }
    if ( v13 )
    {
      LocalFree(this[21]);
      this[21] = LocalizeMessage(v13);
      operator delete(v13);
    }
    v14 = XmlNode::XPathElementSearchSingle(a2, L"/OverrideBB");
    v15 = v14;
    if ( v14 )
    {
      *((_BYTE *)this + 42) = 1;
      *((_DWORD *)this + 11) = XmlNode::GetXmlInt(v14, L"/X0", 0);
      *((_DWORD *)this + 12) = XmlNode::GetXmlInt(v15, L"/Y0", 0);
      *((_DWORD *)this + 13) = XmlNode::GetXmlInt(v15, L"/X1", 0) - *((_DWORD *)this + 11);
      *((_DWORD *)this + 14) = XmlNode::GetXmlInt(v15, L"/Y1", 0) - *((_DWORD *)this + 12);
    }
  }
  return 1;
}
