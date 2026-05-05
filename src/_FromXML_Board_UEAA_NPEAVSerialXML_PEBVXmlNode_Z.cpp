// Hidden C++ exception states: #wind=26
bool __fastcall Board::FromXML(Board *this, struct SerialXML *a2, const struct XmlNode *a3)
{
  __int64 v6; // rax
  const struct XmlNode *v7; // rax
  bool v8; // bl
  __int64 v10; // rax
  const struct XmlNode *v11; // rax
  bool v12; // bl
  __int64 v13; // rax
  const struct XmlNode *v14; // rax
  bool v15; // bl
  __int64 v16; // rax
  XmlNode *v17; // rax
  char v18; // di
  const wchar_t *NodeValue; // rax
  wchar_t *v20; // rbx
  char v21; // al
  bool v22; // bl
  __int64 v23; // rax
  XmlNode *v24; // rax
  const wchar_t *v25; // rax
  wchar_t *v26; // rbx
  float v27; // xmm1_4
  char v28; // al
  bool v29; // bl
  __int64 v30; // rax
  const struct XmlNode *v31; // rax
  bool v32; // bl
  __int64 v33; // rax
  const struct XmlNode *v34; // rax
  bool v35; // bl
  __int64 v36; // rax
  const struct XmlNode *v37; // rax
  bool v38; // bl
  __int64 v39; // rax
  const struct XmlNode *v40; // rax
  bool v41; // bl
  __int64 v42; // rax
  const struct XmlNode *v43; // rax
  bool v44; // bl
  __int64 v45; // rax
  XmlNode *v46; // rax
  const wchar_t *v47; // rax
  wchar_t *v48; // rbx
  __int64 v49; // rax
  const struct XmlNode *v50; // rax
  bool v51; // bl
  __int64 v52; // rax
  const struct XmlNode *v53; // rax
  bool v54; // bl
  _BYTE v55[16]; // [rsp+28h] [rbp-60h] BYREF
  void *Block; // [rsp+38h] [rbp-50h]
  _BYTE v57[16]; // [rsp+40h] [rbp-48h] BYREF
  void *v58; // [rsp+50h] [rbp-38h]
  _BYTE v59[24]; // [rsp+58h] [rbp-30h] BYREF

  Str::Str((Str *)v57, L"Mines");
  Str::Str((Str *)v59, L"/");
  v6 = operator+<Str>((Str *)v55);
  v7 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v6 + 16));
  v8 = !SerialXML::FromXML(a2, (int *)this + 2, v7);
  operator delete(Block);
  operator delete(v58);
  if ( v8 )
    return 0;
  Str::Str((Str *)v55, L"Height");
  Str::Str((Str *)v59, L"/");
  v10 = operator+<Str>((Str *)v57);
  v11 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v10 + 16));
  v12 = !SerialXML::FromXML(a2, (int *)this + 3, v11);
  operator delete(v58);
  operator delete(Block);
  if ( v12 )
    return 0;
  Str::Str((Str *)v55, L"Width");
  Str::Str((Str *)v59, L"/");
  v13 = operator+<Str>((Str *)v57);
  v14 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v13 + 16));
  v15 = !SerialXML::FromXML(a2, (int *)this + 4, v14);
  operator delete(v58);
  operator delete(Block);
  if ( v15 )
    return 0;
  Str::Str((Str *)v55, L"Difficulty");
  Str::Str((Str *)v59, L"/");
  v16 = operator+<Str>((Str *)v57);
  v17 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v16 + 16));
  v18 = 1;
  if ( v17 )
  {
    NodeValue = XmlNode::GetNodeValue(v17);
    v20 = (wchar_t *)NodeValue;
    if ( !NodeValue )
    {
      v21 = 0;
      goto LABEL_12;
    }
    *((_DWORD *)this + 9) = wcstoul(NodeValue, 0, 10);
    operator delete(v20);
  }
  v21 = 1;
LABEL_12:
  v22 = v21 == 0;
  operator delete(v58);
  operator delete(Block);
  if ( v22 )
    return 0;
  Str::Str((Str *)v55, L"TimeElapsed");
  Str::Str((Str *)v59, L"/");
  v23 = operator+<Str>((Str *)v57);
  v24 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v23 + 16));
  if ( v24 )
  {
    v25 = XmlNode::GetNodeValue(v24);
    v26 = (wchar_t *)v25;
    if ( !v25 )
    {
      v28 = 0;
      goto LABEL_19;
    }
    v27 = wcstod(v25, 0);
    *((float *)this + 8) = v27;
    operator delete(v26);
  }
  v28 = 1;
LABEL_19:
  v29 = v28 == 0;
  operator delete(v58);
  operator delete(Block);
  if ( v29 )
    return 0;
  Str::Str((Str *)v55, L"FlagsPlaced");
  Str::Str((Str *)v59, L"/");
  v30 = operator+<Str>((Str *)v57);
  v31 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v30 + 16));
  v32 = !SerialXML::FromXML(a2, (int *)this + 5, v31);
  operator delete(v58);
  operator delete(Block);
  if ( v32 )
    return 0;
  Str::Str((Str *)v55, L"RevealedSquares");
  Str::Str((Str *)v59, L"/");
  v33 = operator+<Str>((Str *)v57);
  v34 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v33 + 16));
  v35 = !SerialXML::FromXML(a2, (int *)this + 6, v34);
  operator delete(v58);
  operator delete(Block);
  if ( v35 )
    return 0;
  Str::Str((Str *)v55, L"RevealsAttempted");
  Str::Str((Str *)v59, L"/");
  v36 = operator+<Str>((Str *)v57);
  v37 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v36 + 16));
  v38 = !SerialXML::FromXML(a2, (int *)this + 7, v37);
  operator delete(v58);
  operator delete(Block);
  if ( v38 )
    return 0;
  Str::Str((Str *)v55, L"FirstXClickPos");
  Str::Str((Str *)v59, L"/");
  v39 = operator+<Str>((Str *)v57);
  v40 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v39 + 16));
  v41 = !SerialXML::FromXML(a2, (int *)this + 10, v40);
  operator delete(v58);
  operator delete(Block);
  if ( v41 )
    return 0;
  Str::Str((Str *)v55, L"FirstYClickPos");
  Str::Str((Str *)v59, L"/");
  v42 = operator+<Str>((Str *)v57);
  v43 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v42 + 16));
  v44 = !SerialXML::FromXML(a2, (int *)this + 11, v43);
  operator delete(v58);
  operator delete(Block);
  if ( v44 )
    return 0;
  Str::Str((Str *)v55, L"RandSeed");
  Str::Str((Str *)v59, L"/");
  v45 = operator+<Str>((Str *)v57);
  v46 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v45 + 16));
  if ( v46 )
  {
    v47 = XmlNode::GetNodeValue(v46);
    v48 = (wchar_t *)v47;
    if ( v47 )
    {
      *((_DWORD *)this + 12) = wcstoul(v47, 0, 10);
      operator delete(v48);
    }
    else
    {
      v18 = 0;
    }
  }
  operator delete(v58);
  operator delete(Block);
  if ( !v18 )
    return 0;
  Str::Str((Str *)v55, L"BoardTiles");
  Str::Str((Str *)v59, L"/");
  v49 = operator+<Str>((Str *)v57);
  v50 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v49 + 16));
  v51 = (unsigned __int8)SerialXML::FromXML(a2, (char *)this + 80, v50) == 0;
  operator delete(v58);
  operator delete(Block);
  if ( v51 )
    return 0;
  Str::Str((Str *)v55, L"BoardMines");
  Str::Str((Str *)v59, L"/");
  v52 = operator+<Str>((Str *)v57);
  v53 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v52 + 16));
  v54 = (unsigned __int8)SerialXML::FromXML(a2, (char *)this + 88, v53) == 0;
  operator delete(v58);
  operator delete(Block);
  return !v54;
}
