char __fastcall SerialXML::FromXML(SerialXML *this, bool *a2, const struct XmlNode *a3)
{
  const wchar_t *NodeValue; // rax
  wchar_t *v5; // rbx

  if ( !a3 )
    return 1;
  NodeValue = XmlNode::GetNodeValue(a3);
  v5 = (wchar_t *)NodeValue;
  if ( NodeValue )
  {
    *a2 = _wcsicmp(NodeValue, L"true") == 0;
    operator delete(v5);
    return 1;
  }
  return 0;
}
