// Hidden C++ exception states: #wind=3
void __fastcall Game::RemoveSavedGame(Game *this)
{
  void *v1; // rbx
  _BYTE v2[24]; // [rsp+30h] [rbp-58h] BYREF
  void *v3; // [rsp+48h] [rbp-40h]
  void *Block; // [rsp+50h] [rbp-38h]
  _BYTE v5[48]; // [rsp+58h] [rbp-30h] BYREF

  SerialXML::SerialXML((SerialXML *)v2);
  SerialXML::RemoveFile((SerialXML *)v2, Source, 0x28u);
  v1 = Block;
  if ( Block )
  {
    XmlNode::~XmlNode((XmlNode *)Block);
    operator delete(v1);
    Block = 0;
  }
  Stash::~Stash((Stash *)v5);
  operator delete(v3);
}
