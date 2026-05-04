// Hidden C++ exception states: #wind=8
bool __fastcall Game::parseXml(Game *this, const unsigned __int16 **a2)
{
  XmlNode *Xml; // rax
  const struct XmlNode **v4; // rax
  __int64 v5; // rdx
  const struct XmlNode **v6; // r13
  unsigned int v7; // ebx
  const struct XmlNode **v8; // rdi
  unsigned __int16 *v9; // rbp
  Str *v10; // rax
  Str *v11; // rax
  __int64 v12; // rdx
  Str *v13; // rax
  Str *v14; // rax
  const struct XmlNode **v15; // rax
  __int64 v16; // rdx
  const struct XmlNode **v17; // rbp
  unsigned int v18; // edi
  const struct XmlNode **v19; // rbx
  unsigned __int16 *v20; // r12
  Str *v21; // rax
  Str *v22; // rax
  __int64 v23; // rdx
  Str *v24; // rax
  Str *v25; // rax
  _BYTE v27[16]; // [rsp+38h] [rbp-60h] BYREF
  void *Block; // [rsp+48h] [rbp-50h]
  _BYTE v29[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 *v30; // [rsp+60h] [rbp-38h]
  Str *v31; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+10h] BYREF

  Xml = XmlManager::GetXml(g_pXmlManager, a2[2]);
  *((_QWORD *)this + 4) = Xml;
  if ( Xml )
  {
    v32 = 0;
    v4 = XmlNode::XPathElementSearch(Xml, L"/GameStyles/GameStyle", &v32);
    v6 = v4;
    v7 = 0;
    if ( g_Flowerbed )
      v7 = v32 > 1;
    if ( v7 < v32 )
    {
      v8 = &v4[v7];
      do
      {
        LOBYTE(v31) = 0;
        LOBYTE(v5) = 1;
        XmlUtil::GetAttrAsStr(v29, v5, *v8, L"/@Name", &v31);
        if ( (_BYTE)v31 )
        {
          v9 = LocalizeMessage(v30);
          v10 = (Str *)operator new(0x18u);
          v31 = v10;
          if ( v10 )
            v11 = Str::Str(v10, v9);
          else
            v11 = 0;
          Array<IEventListener *>::Add((char *)this + 144, v11);
          LocalFree(v9);
          Array<IEventListener *>::Add((char *)this + 192, *v8);
          LOBYTE(v12) = 1;
          XmlUtil::GetAttrAsStr(v27, v12, *v8, L"/@Thumbnail", &v31);
          v13 = (Str *)operator new(0x18u);
          v31 = v13;
          if ( v13 )
            v14 = Str::Str(v13, (const unsigned __int16 *)Block);
          else
            v14 = 0;
          Array<IEventListener *>::Add((char *)this + 168, v14);
          operator delete(Block);
        }
        operator delete(v30);
        ++v7;
        ++v8;
      }
      while ( v7 < v32 );
    }
    v32 = 0;
    v15 = XmlNode::XPathElementSearch(*((XmlNode **)this + 4), L"/BoardStyles/BoardStyle", &v32);
    v17 = v15;
    v18 = 0;
    if ( v32 )
    {
      v19 = v15;
      do
      {
        LOBYTE(v31) = 0;
        LOBYTE(v16) = 1;
        XmlUtil::GetAttrAsStr(v27, v16, *v19, L"/@Name", &v31);
        if ( (_BYTE)v31 )
        {
          v20 = LocalizeMessage((const unsigned __int16 *)Block);
          v21 = (Str *)operator new(0x18u);
          v31 = v21;
          if ( v21 )
            v22 = Str::Str(v21, v20);
          else
            v22 = 0;
          Array<IEventListener *>::Add((char *)this + 72, v22);
          LocalFree(v20);
          Array<IEventListener *>::Add((char *)this + 120, *v19);
          LOBYTE(v23) = 1;
          XmlUtil::GetAttrAsStr(v29, v23, *v19, L"/@Thumbnail", &v31);
          v24 = (Str *)operator new(0x18u);
          v31 = v24;
          if ( v24 )
            v25 = Str::Str(v24, v30);
          else
            v25 = 0;
          Array<IEventListener *>::Add((char *)this + 96, v25);
          operator delete(v30);
        }
        operator delete(Block);
        ++v18;
        ++v19;
      }
      while ( v18 < v32 );
    }
    operator delete(v6);
    operator delete(v17);
    LOBYTE(Xml) = 1;
  }
  return (char)Xml;
}
