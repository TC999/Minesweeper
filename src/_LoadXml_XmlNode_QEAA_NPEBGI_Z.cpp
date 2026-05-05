bool __fastcall XmlNode::LoadXml(XmlNode *this, const unsigned __int16 *Src, unsigned int a3)
{
  __int64 v4; // rdi
  void *v6; // rax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  *((_BYTE *)this + 80) = 1;
  v4 = a3;
  v6 = operator new(saturated_mul(a3, 2u));
  *((_QWORD *)this + 17) = v6;
  if ( v6 )
  {
    memcpy(v6, Src, 2 * v4);
    LOBYTE(v6) = XmlNode::ParseXml(this, *((unsigned __int16 **)this + 17), v4, &v8);
  }
  return (char)v6;
}
