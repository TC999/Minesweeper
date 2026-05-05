// Hidden C++ exception states: #wind=1
char __fastcall NodeSprite::Load(NodeSprite *this, const wchar_t **a2)
{
  NodeBase *v5; // rcx
  const struct XmlNode **v6; // rax
  XmlNode **v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rax
  bool v10; // cf
  size_t v11; // rax
  unsigned int *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r15
  XmlNode **v15; // r14
  bool v16; // bl
  XmlNode *v17; // rax
  unsigned __int16 *NodeValue; // r13
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdi
  bool v21; // zf
  const wchar_t *v22; // rax
  char *v23; // rcx
  char *v24; // rdi
  const wchar_t *v25; // rax
  char *v26; // rcx
  char *v27; // rdi
  const wchar_t *v28; // rax
  unsigned int v29; // [rsp+78h] [rbp+10h]

  if ( !a2 )
    return 1;
  NodeBase::Load((HLOCAL *)this, (const struct XmlNode *)a2);
  *((_BYTE *)this + 464) = 1;
  *((_DWORD *)this + 113) = XmlNode::GetXmlUInt((XmlNode *)a2, L"/SourceWidth", 0xFFFFFFFF);
  *((_DWORD *)this + 114) = XmlNode::GetXmlUInt((XmlNode *)a2, L"/SourceHeight", 0xFFFFFFFF);
  *((_DWORD *)this + 97) = XmlNode::GetXmlInt((XmlNode *)a2, L"/RegistrationX", 0);
  *((_DWORD *)this + 98) = XmlNode::GetXmlInt((XmlNode *)a2, L"/RegistrationY", 0);
  NodeBase::SetSize(this, *((_DWORD *)this + 113), *((_DWORD *)this + 5));
  NodeBase::SetSize(v5, *((_DWORD *)this + 4), *((_DWORD *)this + 114));
  v6 = XmlNode::XPathElementSearch((XmlNode *)a2, L"/Animation", (unsigned int *)this + 106);
  v7 = v6;
  if ( *((_DWORD *)this + 106) && v6 )
  {
    v8 = *((_DWORD *)this + 106);
    v9 = 32LL * v8;
    if ( !is_mul_ok(v8, 0x20u) )
      v9 = -1;
    v10 = __CFADD__(v9, 4);
    v11 = v9 + 4;
    if ( v10 )
      v11 = -1;
    v12 = (unsigned int *)operator new[](v11);
    if ( v12 )
    {
      *v12 = v8;
      v13 = v12 + 1;
      `eh vector constructor iterator'(
        v12 + 1,
        0x20u,
        v8,
        (void (*)(void *))NodeSprite::Source::Source,
        (void (*)(void *))NodeSprite::Source::~Source);
    }
    else
    {
      v13 = 0;
    }
    *((_QWORD *)this + 52) = v13;
    v29 = 0;
    if ( *((_DWORD *)this + 106) )
    {
      v14 = 0;
      v15 = v7;
      while ( XmlNode::XPathElementSearchSingle(*v15, L"/Texture") )
      {
        v16 = (int)XmlNode::GetXmlInt(*v15, L"/DepthSensitive", -1) > 0;
        v17 = XmlNode::XPathElementSearchSingle(*v15, L"/Texture");
        NodeValue = XmlNode::GetNodeValue(v17);
        v19 = -1;
        v20 = NodeValue;
        do
        {
          if ( !v19 )
            break;
          v21 = *v20++ == 0;
          --v19;
        }
        while ( !v21 );
        *(_DWORD *)(v14 + *((_QWORD *)this + 52)) = ResourceTextureD3D::Create(NodeValue, ~(_DWORD)v19, v16);
        if ( !*(_DWORD *)(v14 + *((_QWORD *)this + 52)) )
        {
          v22 = L"<no xml source file>";
          if ( a2[12] )
            v22 = a2[12];
          Log(
            0x100u,
            297,
            "NodeSprite.cpp",
            L"Texture Load Failed (%s), referenced in sprite xml: %s",
            NodeValue,
            v22,
            -2);
          operator delete(NodeValue);
          operator delete(v7);
          v23 = (char *)*((_QWORD *)this + 52);
          if ( v23 )
          {
            v24 = v23 - 4;
            `eh vector destructor iterator'(
              v23,
              0x20u,
              *((_DWORD *)v23 - 1),
              (void (*)(void *))NodeSprite::Source::~Source);
            operator delete(v24);
          }
          *((_QWORD *)this + 52) = 0;
          return 0;
        }
        operator delete(NodeValue);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 24) = XmlNode::GetXmlUInt(*v15, L"/RegistrationOffsetX", 0);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 28) = XmlNode::GetXmlUInt(*v15, L"/RegistrationOffsetY", 0);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 4) = XmlNode::GetXmlUInt(*v15, L"/SheetOffsetX", 0xFFFFFFFF);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 8) = XmlNode::GetXmlUInt(*v15, L"/SheetOffsetY", 0xFFFFFFFF);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 12) = XmlNode::GetXmlUInt(*v15, L"/FrameCount", 0xFFFFFFFF);
        *(_DWORD *)(v14 + *((_QWORD *)this + 52) + 16) = XmlNode::GetXmlUInt(*v15, L"/FramesPerRow", 0xFFFFFFFF);
        *(_BYTE *)(v14 + *((_QWORD *)this + 52) + 20) = (int)XmlNode::GetXmlInt(*v15, L"/PreppedForFilter", -1) > 0;
        ++v29;
        ++v15;
        v14 += 32;
        if ( v29 >= *((_DWORD *)this + 106) )
          goto LABEL_31;
      }
      v25 = L"<no xml source file>";
      if ( a2[12] )
        v25 = a2[12];
      Log(0x100u, 280, "NodeSprite.cpp", L"No texture in source block in xml: %s", v25);
      operator delete(v7);
      v26 = (char *)*((_QWORD *)this + 52);
      if ( v26 )
      {
        v27 = v26 - 4;
        `eh vector destructor iterator'(v26, 0x20u, *((_DWORD *)v26 - 1), (void (*)(void *))NodeSprite::Source::~Source);
        operator delete(v27);
      }
      *((_QWORD *)this + 52) = 0;
      return 0;
    }
    else
    {
LABEL_31:
      operator delete(v7);
      return 1;
    }
  }
  else
  {
    v28 = L"<no xml source file>";
    if ( a2[12] )
      v28 = a2[12];
    Log(0x100u, 265, "NodeSprite.cpp", L"No sources found in xml: %s", v28);
    return 0;
  }
}
