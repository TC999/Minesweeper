bool __fastcall SerialXML::ReadFile(SerialXML *this, const unsigned __int16 *a2, unsigned int a3)
{
  void *v3; // rbx
  __int64 v7; // rax
  XmlNode *v8; // rax
  XmlNode *v9; // rax
  unsigned int v10; // ebp
  char *v11; // r12
  unsigned int **v12; // rax
  wchar_t *v13; // r13
  char *SrcBuf; // [rsp+60h] [rbp+8h] BYREF

  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    XmlNode::~XmlNode(*((XmlNode **)this + 4));
    operator delete(v3);
    *((_QWORD *)this + 4) = 0;
  }
  *(_DWORD *)this = 0;
  Str::operator=((char *)this + 8, &String);
  v7 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) = 0;
  (*(void (__fastcall **)(char *))(v7 + 8))((char *)this + 40);
  if ( (*(unsigned __int8 (__fastcall **)(char *, const unsigned __int16 *, _QWORD))(*((_QWORD *)this + 5) + 16LL))(
         (char *)this + 40,
         a2,
         a3) )
  {
    v8 = (XmlNode *)operator new(0x98u);
    if ( v8 )
      v9 = XmlNode::XmlNode(v8);
    else
      v9 = 0;
    *((_QWORD *)this + 4) = v9;
    v10 = 0;
    if ( *((_DWORD *)this + 12) )
    {
      v12 = (unsigned int **)*((_QWORD *)this + 8);
      v10 = **v12;
      v11 = (char *)*((_QWORD *)*v12 + 1);
    }
    else
    {
      Log(0x80u, L"Stash::GetBuffer(): Invalid buffer id(%u)", 0);
      v11 = SrcBuf;
    }
    v13 = (wchar_t *)operator new[](saturated_mul(v10, 2u));
    mbstowcs_s((size_t *)&SrcBuf, v13, v10, v11, 0xFFFFFFFFFFFFFFFFuLL);
    XmlNode::LoadXml(*((XmlNode **)this + 4), v13, v10);
    if ( v13 )
      operator delete(v13);
  }
  return *((_QWORD *)this + 4) != 0;
}
