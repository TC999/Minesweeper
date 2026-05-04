void __fastcall XmlNode::XmlString::~XmlString(void **this)
{
  if ( *(_BYTE *)this )
  {
    operator delete(this[1]);
    this[1] = 0;
  }
}
