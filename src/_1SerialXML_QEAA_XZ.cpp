// Hidden C++ exception states: #wind=2
void __fastcall SerialXML::~SerialXML(SerialXML *this)
{
  void *v2; // rdi

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    XmlNode::~XmlNode(*((XmlNode **)this + 4));
    operator delete(v2);
    *((_QWORD *)this + 4) = 0;
  }
  Stash::~Stash((SerialXML *)((char *)this + 40));
  operator delete(*((void **)this + 3));
}
