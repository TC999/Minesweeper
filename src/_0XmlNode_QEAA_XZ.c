XmlNode *__fastcall XmlNode::XmlNode(XmlNode *this)
{
  *(_QWORD *)this = malloc(0x80u);
  *((_QWORD *)this + 1) = malloc(0x80u);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 16;
  *((_DWORD *)this + 8) = 16;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 80) = 1;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_BYTE *)this + 48) = 1;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  return this;
}
