char __fastcall Tip::Initialize(Tip *this, const struct Tip::TipSource *a2, char a3)
{
  XmlNode *Xml; // rbp
  HLOCAL *v7; // rax
  __int64 v8; // rdx
  UserInterface *v9; // rcx
  XmlNode *v10; // rax
  unsigned __int16 *NodeValue; // r12
  struct NodeBase *v12; // rbx
  const wchar_t **v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  XmlNode *v19; // rax
  unsigned __int16 *v20; // r12
  struct NodeBase *v21; // rbx
  const wchar_t **v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  XmlNode *v27; // rax
  unsigned __int16 *v28; // r12
  struct NodeBase *v29; // rbx
  const wchar_t **v30; // rax
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  _DWORD *v34; // rax
  XmlNode *v35; // rax
  unsigned __int16 *v36; // r12
  struct NodeBase *v37; // rbx
  const wchar_t **v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // ecx
  _DWORD *v42; // rax
  XmlNode *v43; // rax
  unsigned __int16 *v44; // r12
  struct NodeBase *v45; // rbx
  const wchar_t **v46; // rax
  __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // ecx
  _DWORD *v50; // rax
  XmlNode *v51; // rax
  unsigned __int16 *v52; // r12
  struct NodeBase *v53; // rbx
  const wchar_t **v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  _DWORD *v58; // rax
  XmlNode *v59; // rax
  unsigned __int16 *v60; // r12
  struct NodeBase *v61; // rbx
  const wchar_t **v62; // rax
  __int64 v63; // rax
  unsigned int v64; // edx
  unsigned int v65; // ecx
  _DWORD *v66; // rax
  XmlNode *v67; // rax
  unsigned __int16 *v68; // r12
  struct NodeBase *v69; // rbx
  const wchar_t **v70; // rax
  __int64 v71; // rax
  unsigned int v72; // edx
  unsigned int v73; // ecx
  _DWORD *v74; // rax
  XmlNode *v75; // rax
  unsigned __int16 *v76; // r12
  struct NodeBase *v77; // rbx
  const wchar_t **v78; // rax
  __int64 v79; // rax
  unsigned int v80; // edx
  unsigned int v81; // ecx
  _DWORD *v82; // rax
  struct NodeBase *v83; // rax
  struct NodeBase *v84; // rax
  struct NodeBase *v85; // rax
  RenderManager *v86; // rax
  XmlNode *v87; // rax
  unsigned __int16 *v88; // r12
  struct NodeBase *v89; // rbx
  const wchar_t **v90; // rax
  __int64 v91; // rax
  unsigned int v92; // edx
  unsigned int v93; // ecx
  _DWORD *v94; // rax
  XmlNode *v95; // rax
  unsigned __int16 *v96; // r12
  struct NodeBase *v97; // rbx
  const wchar_t **v98; // rax
  __int64 v99; // rcx
  unsigned int v100; // edx
  _DWORD *v101; // rax
  XmlNode *v102; // rax
  unsigned __int16 *v103; // rbx
  unsigned __int16 *v104; // r12
  XmlNode *v105; // rax
  unsigned __int16 *v106; // r13
  wchar_t *v107; // rbx
  unsigned int v108; // r13d
  unsigned int XmlHex; // ebx
  int XmlInt; // eax
  __int64 v111; // r11
  RenderManager *v112; // rax
  __int64 v113; // rcx
  XmlNode *v114; // rax
  unsigned __int16 *v115; // rbx
  XmlNode *v116; // rax
  unsigned __int16 *v117; // r13
  wchar_t *v118; // rbx
  unsigned int v119; // r13d
  unsigned int v120; // ebx
  int v121; // eax
  bool v122; // al
  __int64 v123; // r11
  RenderManager *v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  int v127; // ecx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rbx
  struct NodeBase *v131; // rbp
  __int64 v132; // rcx
  struct NodeBase *v133; // r12
  unsigned int v134; // edx
  __int64 v135; // r8
  struct NodeBase **v136; // rcx
  struct NodeBase *v137; // rbx
  UserInterface *v138; // rcx
  unsigned int v139; // ecx
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // r8
  NodeSprite *v143; // rcx
  int v144; // [rsp+20h] [rbp-58h]
  int v145; // [rsp+28h] [rbp-50h]
  int v146; // [rsp+30h] [rbp-48h]
  int v147; // [rsp+88h] [rbp+10h] BYREF
  int v148; // [rsp+98h] [rbp+20h] BYREF

  Xml = XmlManager::GetXml(g_pXmlManager, *((const unsigned __int16 **)a2 + 1));
  if ( !Xml )
  {
    Log(0x2000u, 636, "Tip.cpp", L"Invalid style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v7 = (HLOCAL *)NodeBase::CreateFromType(L"Base", *(struct NodeBase **)a2, 1);
  *((_QWORD *)this + 16) = v7;
  if ( !v7 )
    return 0;
  NodeBase::SetAccessName(v7, L"|896|");
  v8 = *((_QWORD *)this + 16);
  if ( *(_BYTE *)(v8 + 144) != 1 )
  {
    v9 = g_pUserInterface;
    *(_BYTE *)(v8 + 144) = 1;
    *(_DWORD *)(v8 + 192) = 16;
    UserInterface::Access_OnNodeAccessible(v9, (struct NodeBase *)v8);
  }
  v10 = XmlNode::XPathElementSearchSingle(Xml, L"/Back");
  if ( v10 )
    NodeValue = XmlNode::GetNodeValue(v10);
  else
    NodeValue = 0;
  v12 = (struct NodeBase *)*((_QWORD *)this + 16);
  v13 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, NodeValue);
  *((_QWORD *)this + 15) = NodeBase::CreateFromXmlNode(v13, v12);
  operator delete(NodeValue);
  v14 = *((_QWORD *)this + 15);
  if ( !v14 || (v15 = *(_DWORD *)(v14 + 104), v16 = 0, !v15) )
  {
LABEL_14:
    Log(0x2000u, 666, "Tip.cpp", L"Invalid back in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v17 = *(_DWORD **)(v14 + 120);
  while ( *v17 != 1 )
  {
    ++v16;
    ++v17;
    if ( v16 >= v15 )
      goto LABEL_14;
  }
  v19 = XmlNode::XPathElementSearchSingle(Xml, L"/LeftBorder");
  if ( v19 )
    v20 = XmlNode::GetNodeValue(v19);
  else
    v20 = 0;
  v21 = (struct NodeBase *)*((_QWORD *)this + 16);
  v22 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v20);
  *((_QWORD *)this + 2) = NodeBase::CreateFromXmlNode(v22, v21);
  operator delete(v20);
  v23 = *((_QWORD *)this + 2);
  if ( !v23 || (v24 = *(_DWORD *)(v23 + 104), v25 = 0, !v24) )
  {
LABEL_24:
    Log(0x2000u, 682, "Tip.cpp", L"Invalid left border in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v26 = *(_DWORD **)(v23 + 120);
  while ( *v26 != 1 )
  {
    ++v25;
    ++v26;
    if ( v25 >= v24 )
      goto LABEL_24;
  }
  v27 = XmlNode::XPathElementSearchSingle(Xml, L"/RightBorder");
  if ( v27 )
    v28 = XmlNode::GetNodeValue(v27);
  else
    v28 = 0;
  v29 = (struct NodeBase *)*((_QWORD *)this + 16);
  v30 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v28);
  *((_QWORD *)this + 3) = NodeBase::CreateFromXmlNode(v30, v29);
  operator delete(v28);
  v31 = *((_QWORD *)this + 3);
  if ( !v31 || (v32 = *(_DWORD *)(v31 + 104), v33 = 0, !v32) )
  {
LABEL_33:
    Log(0x2000u, 694, "Tip.cpp", L"Invalid right border in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v34 = *(_DWORD **)(v31 + 120);
  while ( *v34 != 1 )
  {
    ++v33;
    ++v34;
    if ( v33 >= v32 )
      goto LABEL_33;
  }
  v35 = XmlNode::XPathElementSearchSingle(Xml, L"/TopBorder");
  if ( v35 )
    v36 = XmlNode::GetNodeValue(v35);
  else
    v36 = 0;
  v37 = (struct NodeBase *)*((_QWORD *)this + 16);
  v38 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v36);
  *((_QWORD *)this + 4) = NodeBase::CreateFromXmlNode(v38, v37);
  operator delete(v36);
  v39 = *((_QWORD *)this + 4);
  if ( !v39 || (v40 = *(_DWORD *)(v39 + 104), v41 = 0, !v40) )
  {
LABEL_42:
    Log(0x2000u, 706, "Tip.cpp", L"Invalid top border in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v42 = *(_DWORD **)(v39 + 120);
  while ( *v42 != 1 )
  {
    ++v41;
    ++v42;
    if ( v41 >= v40 )
      goto LABEL_42;
  }
  v43 = XmlNode::XPathElementSearchSingle(Xml, L"/BottomBorder");
  if ( v43 )
    v44 = XmlNode::GetNodeValue(v43);
  else
    v44 = 0;
  v45 = (struct NodeBase *)*((_QWORD *)this + 16);
  v46 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v44);
  *((_QWORD *)this + 5) = NodeBase::CreateFromXmlNode(v46, v45);
  operator delete(v44);
  v47 = *((_QWORD *)this + 5);
  if ( !v47 || (v48 = *(_DWORD *)(v47 + 104), v49 = 0, !v48) )
  {
LABEL_51:
    Log(0x2000u, 718, "Tip.cpp", L"Invalid bottom border in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v50 = *(_DWORD **)(v47 + 120);
  while ( *v50 != 1 )
  {
    ++v49;
    ++v50;
    if ( v49 >= v48 )
      goto LABEL_51;
  }
  v51 = XmlNode::XPathElementSearchSingle(Xml, L"/ULCorner");
  if ( v51 )
    v52 = XmlNode::GetNodeValue(v51);
  else
    v52 = 0;
  v53 = (struct NodeBase *)*((_QWORD *)this + 16);
  v54 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v52);
  *((_QWORD *)this + 6) = NodeBase::CreateFromXmlNode(v54, v53);
  operator delete(v52);
  v55 = *((_QWORD *)this + 6);
  if ( !v55 || (v56 = *(_DWORD *)(v55 + 104), v57 = 0, !v56) )
  {
LABEL_60:
    Log(0x2000u, 734, "Tip.cpp", L"Invalid ul corner in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v58 = *(_DWORD **)(v55 + 120);
  while ( *v58 != 1 )
  {
    ++v57;
    ++v58;
    if ( v57 >= v56 )
      goto LABEL_60;
  }
  v59 = XmlNode::XPathElementSearchSingle(Xml, L"/LLCorner");
  if ( v59 )
    v60 = XmlNode::GetNodeValue(v59);
  else
    v60 = 0;
  v61 = (struct NodeBase *)*((_QWORD *)this + 16);
  v62 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v60);
  *((_QWORD *)this + 8) = NodeBase::CreateFromXmlNode(v62, v61);
  operator delete(v60);
  v63 = *((_QWORD *)this + 8);
  if ( !v63 || (v64 = *(_DWORD *)(v63 + 104), v65 = 0, !v64) )
  {
LABEL_69:
    Log(0x2000u, 746, "Tip.cpp", L"Invalid LL corner in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v66 = *(_DWORD **)(v63 + 120);
  while ( *v66 != 1 )
  {
    ++v65;
    ++v66;
    if ( v65 >= v64 )
      goto LABEL_69;
  }
  v67 = XmlNode::XPathElementSearchSingle(Xml, L"/LRCorner");
  if ( v67 )
    v68 = XmlNode::GetNodeValue(v67);
  else
    v68 = 0;
  v69 = (struct NodeBase *)*((_QWORD *)this + 16);
  v70 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v68);
  *((_QWORD *)this + 9) = NodeBase::CreateFromXmlNode(v70, v69);
  operator delete(v68);
  v71 = *((_QWORD *)this + 9);
  if ( !v71 || (v72 = *(_DWORD *)(v71 + 104), v73 = 0, !v72) )
  {
LABEL_78:
    Log(0x2000u, 758, "Tip.cpp", L"Invalid LR corner in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v74 = *(_DWORD **)(v71 + 120);
  while ( *v74 != 1 )
  {
    ++v73;
    ++v74;
    if ( v73 >= v72 )
      goto LABEL_78;
  }
  v75 = XmlNode::XPathElementSearchSingle(Xml, L"/URCorner");
  if ( v75 )
    v76 = XmlNode::GetNodeValue(v75);
  else
    v76 = 0;
  v77 = (struct NodeBase *)*((_QWORD *)this + 16);
  v78 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v76);
  *((_QWORD *)this + 7) = NodeBase::CreateFromXmlNode(v78, v77);
  operator delete(v76);
  v79 = *((_QWORD *)this + 7);
  if ( !v79 || (v80 = *(_DWORD *)(v79 + 104), v81 = 0, !v80) )
  {
LABEL_87:
    Log(0x2000u, 770, "Tip.cpp", L"Invalid UR corner in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v82 = *(_DWORD **)(v79 + 120);
  while ( *v82 != 1 )
  {
    ++v81;
    ++v82;
    if ( v81 >= v80 )
      goto LABEL_87;
  }
  v83 = NodeBase::CreateFromType(L"Label", *((struct NodeBase **)this + 16), 1);
  *((_QWORD *)this + 10) = v83;
  if ( !v83 )
    return 0;
  (*(void (__fastcall **)(struct NodeBase *, _QWORD))(*(_QWORD *)v83 + 112LL))(v83, *((_QWORD *)a2 + 2));
  NodeBase::SetAccessName(*((HLOCAL **)this + 10), L"|895|");
  NodeBase::MoveToFront(*((NodeBase **)this + 10));
  v84 = NodeBase::CreateFromType(L"Label", *((struct NodeBase **)this + 16), 1);
  *((_QWORD *)this + 11) = v84;
  if ( !v84 )
    return 0;
  (*(void (__fastcall **)(struct NodeBase *, _QWORD))(*(_QWORD *)v84 + 112LL))(v84, *((_QWORD *)a2 + 3));
  NodeBase::SetAccessName(*((HLOCAL **)this + 11), L"|894|");
  NodeBase::MoveToFront(*((NodeBase **)this + 11));
  v85 = NodeBase::CreateFromType(L"Label", *((struct NodeBase **)this + 16), 1);
  *((_QWORD *)this + 13) = v85;
  if ( !v85 )
    return 0;
  if ( *((_DWORD *)v85 + 119) != 128 )
  {
    *((_DWORD *)v85 + 119) = 128;
    v86 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v86 + 88) = 1;
  }
  (*(void (__fastcall **)(_QWORD, const wchar_t *))(**((_QWORD **)this + 13) + 112LL))(*((_QWORD *)this + 13), L"|891|");
  NodeBase::MoveToFront(*((NodeBase **)this + 13));
  v87 = XmlNode::XPathElementSearchSingle(Xml, L"/InfoSprite");
  if ( v87 )
    v88 = XmlNode::GetNodeValue(v87);
  else
    v88 = 0;
  if ( v88 )
  {
    v89 = (struct NodeBase *)*((_QWORD *)this + 16);
    v90 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v88);
    *((_QWORD *)this + 12) = NodeBase::CreateFromXmlNode(v90, v89);
    operator delete(v88);
    v91 = *((_QWORD *)this + 12);
    if ( !v91 || (v92 = *(_DWORD *)(v91 + 104), v93 = 0, !v92) )
    {
LABEL_102:
      Log(0x2000u, 821, "Tip.cpp", L"Invalid info in style xml: %s", *((_QWORD *)a2 + 1));
      return 0;
    }
    v94 = *(_DWORD **)(v91 + 120);
    while ( *v94 != 1 )
    {
      ++v93;
      ++v94;
      if ( v93 >= v92 )
        goto LABEL_102;
    }
  }
  v95 = XmlNode::XPathElementSearchSingle(Xml, L"/CloseButton");
  if ( v95 )
    v96 = XmlNode::GetNodeValue(v95);
  else
    v96 = 0;
  v97 = (struct NodeBase *)*((_QWORD *)this + 16);
  v98 = (const wchar_t **)XmlManager::GetXml(g_pXmlManager, v96);
  *((_QWORD *)this + 18) = NodeBase::CreateFromXmlNode(v98, v97);
  operator delete(v96);
  v99 = *((_QWORD *)this + 18);
  if ( !v99 || (v100 = 0, !*(_DWORD *)(v99 + 104)) )
  {
LABEL_111:
    Log(0x2000u, 872, "Tip.cpp", L"Invalid close button in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v101 = *(_DWORD **)(v99 + 120);
  while ( *v101 != 2 )
  {
    ++v100;
    ++v101;
    if ( v100 >= *(_DWORD *)(v99 + 104) )
      goto LABEL_111;
  }
  NodeBase::SetAccessName((HLOCAL *)v99, L"|887|");
  *(_DWORD *)(*((_QWORD *)this + 18) + 192LL) = 43;
  NodeBase::SetAccessDefaultAction(*((HLOCAL **)this + 18), L"|886|");
  NodeBase::SetAccessDescription(*((HLOCAL **)this + 18), L"|885|");
  Array<IEventListener *>::Add(*((_QWORD *)this + 18) + 200LL, (__int64)this);
  v102 = XmlNode::XPathElementSearchSingle(Xml, L"/TitleFontFace");
  if ( v102 )
    v103 = XmlNode::GetNodeValue(v102);
  else
    v103 = 0;
  if ( !v103 )
  {
    Log(0x2000u, 899, "Tip.cpp", L"No title font in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v104 = LocalizeMessage(v103);
  operator delete(v103);
  v105 = XmlNode::XPathElementSearchSingle(Xml, L"/TitleFontSize");
  if ( v105 )
    v106 = XmlNode::GetNodeValue(v105);
  else
    v106 = 0;
  if ( !v106 )
  {
    Log(0x2000u, 910, "Tip.cpp", L"Invalid title font in style xml: %s", *((_QWORD *)a2 + 1));
LABEL_122:
    LocalFree(v104);
    return 0;
  }
  v107 = LocalizeMessage(v106);
  operator delete(v106);
  v108 = wcstoul(v107, 0, 10);
  LocalFree(v107);
  XmlHex = XmlNode::GetXmlHex(Xml, L"/TitleFontColor", 0xFFFFFFu);
  XmlInt = XmlNode::GetXmlInt(Xml, L"/TitleFontBold", -1);
  v148 = *((_DWORD *)a2 + 14);
  if ( !v148
    && !(*(unsigned __int8 (__fastcall **)(TextRenderer *, int *, _QWORD, unsigned __int16 *, bool, _BYTE, _BYTE))(*(_QWORD *)g_pTextRenderer + 8LL))(
          g_pTextRenderer,
          &v148,
          v108,
          v104,
          XmlInt > 0,
          0,
          0) )
  {
    Log(0x2000u, 934, "Tip.cpp", L"Couldn't create title font in style %s", *((_QWORD *)a2 + 1));
    goto LABEL_122;
  }
  LocalFree(v104);
  v111 = *((_QWORD *)this + 10);
  v112 = g_pRenderManager;
  if ( XmlHex != *(_DWORD *)(v111 + 404) )
  {
    *(_DWORD *)(v111 + 404) = XmlHex;
    *((_BYTE *)v112 + 20) = 1;
    *((_BYTE *)v112 + 88) = 1;
  }
  v113 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v113 + 472) != v148 )
  {
    *(_DWORD *)(v113 + 472) = v148;
    *((_BYTE *)v112 + 20) = 1;
    *((_BYTE *)v112 + 88) = 1;
  }
  v114 = XmlNode::XPathElementSearchSingle(Xml, L"/BodyFontFace");
  if ( v114 )
    v115 = XmlNode::GetNodeValue(v114);
  else
    v115 = 0;
  if ( !v115 )
  {
    Log(0x2000u, 952, "Tip.cpp", L"No Body font in style xml: %s", *((_QWORD *)a2 + 1));
    return 0;
  }
  v104 = LocalizeMessage(v115);
  operator delete(v115);
  v116 = XmlNode::XPathElementSearchSingle(Xml, L"/BodyFontSize");
  if ( v116 )
    v117 = XmlNode::GetNodeValue(v116);
  else
    v117 = 0;
  if ( !v117 )
  {
    Log(0x2000u, 962, "Tip.cpp", L"Invalid body font size in style xml: %s", *((_QWORD *)a2 + 1));
    goto LABEL_122;
  }
  v118 = LocalizeMessage(v117);
  operator delete(v117);
  v119 = wcstoul(v118, 0, 10);
  LocalFree(v118);
  v120 = XmlNode::GetXmlHex(Xml, L"/BodyFontColor", 0xFFFFFFu);
  v121 = XmlNode::GetXmlInt(Xml, L"/BodyFontBold", -1);
  v147 = *((_DWORD *)a2 + 15);
  v122 = v121 > 0;
  if ( !v147 )
  {
    LOBYTE(v146) = 0;
    LOBYTE(v145) = 0;
    LOBYTE(v144) = v122;
    if ( !(*(unsigned __int8 (__fastcall **)(TextRenderer *, int *, _QWORD, unsigned __int16 *, int, int, int))(*(_QWORD *)g_pTextRenderer + 8LL))(
            g_pTextRenderer,
            &v147,
            v119,
            v104,
            v144,
            v145,
            v146) )
    {
      Log(0x2000u, 986, "Tip.cpp", L"Couldn't create Body font in style %s", *((_QWORD *)a2 + 1));
      goto LABEL_122;
    }
  }
  LocalFree(v104);
  v123 = *((_QWORD *)this + 11);
  v124 = g_pRenderManager;
  if ( *(_DWORD *)(v123 + 476) != 128 )
  {
    *(_DWORD *)(v123 + 476) = 128;
    *((_BYTE *)v124 + 20) = 1;
    *((_BYTE *)v124 + 88) = 1;
  }
  v125 = *((_QWORD *)this + 11);
  if ( v120 != *(_DWORD *)(v125 + 404) )
  {
    *(_DWORD *)(v125 + 404) = v120;
    *((_BYTE *)v124 + 20) = 1;
    *((_BYTE *)v124 + 88) = 1;
  }
  v126 = *((_QWORD *)this + 11);
  v127 = v147;
  if ( *(_DWORD *)(v126 + 472) != v147 )
  {
    *(_DWORD *)(v126 + 472) = v147;
    *((_BYTE *)v124 + 20) = 1;
    *((_BYTE *)v124 + 88) = 1;
    v127 = v147;
  }
  v128 = *((_QWORD *)this + 13);
  if ( *(_DWORD *)(v128 + 472) != v127 )
  {
    *(_DWORD *)(v128 + 472) = v127;
    *((_BYTE *)v124 + 20) = 1;
    *((_BYTE *)v124 + 88) = 1;
  }
  v129 = *((_QWORD *)this + 13);
  if ( v120 != *(_DWORD *)(v129 + 404) )
  {
    *(_DWORD *)(v129 + 404) = v120;
    *((_BYTE *)v124 + 20) = 1;
    *((_BYTE *)v124 + 88) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 2) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 4) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 5) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 6) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 7) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 9) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 11) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 15) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 13) + 72LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 12) + 72LL) = 0;
  *((_DWORD *)this + 39) = XmlNode::GetXmlUInt(Xml, L"/TitleOffsetX", 5u);
  *((_DWORD *)this + 40) = XmlNode::GetXmlUInt(Xml, L"/TitleOffsetY", 0);
  *((_DWORD *)this + 41) = XmlNode::GetXmlUInt(Xml, L"/BodyOffsetX", 5u);
  *((_DWORD *)this + 42) = XmlNode::GetXmlUInt(Xml, L"/BodyOffsetY", 0);
  *((_DWORD *)this + 43) = XmlNode::GetXmlUInt(Xml, L"/CloseButtonOffsetX", 6u);
  *((_DWORD *)this + 44) = XmlNode::GetXmlUInt(Xml, L"/CloseButtonOffsetY", 6u);
  *((_QWORD *)this + 25) = *((_QWORD *)a2 + 10);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 19);
  *(_BYTE *)(*((_QWORD *)this + 16) + 72LL) = 1;
  *(_BYTE *)(*((_QWORD *)this + 16) + 64LL) = 1;
  Array<IEventListener *>::Add(*((_QWORD *)this + 16) + 200LL, (__int64)this);
  v130 = *((_QWORD *)this + 16);
  Array<IEventListener *>::Add((__int64)g_pRenderManager + 128, v130);
  v131 = (struct NodeBase *)*((_QWORD *)a2 + 10);
  *(_BYTE *)(v130 + 40) = 1;
  if ( v131 )
  {
    v132 = *((_QWORD *)v131 + 17);
    v133 = (struct NodeBase *)*((_QWORD *)this + 15);
    v134 = 0;
    v135 = v132 + 80;
    if ( *(_DWORD *)(v132 + 80) )
    {
      v136 = *(struct NodeBase ***)(v132 + 96);
      while ( *v136 != v131 )
      {
        ++v134;
        ++v136;
        if ( v134 >= *(_DWORD *)(*((_QWORD *)v131 + 17) + 80LL) )
          goto LABEL_160;
      }
      Array<NodeBase *>::Remove(v135, v134);
      v137 = (struct NodeBase *)*((_QWORD *)v131 + 17);
      Array<IEventListener *>::Add((__int64)v133 + 80, (__int64)v131);
      v138 = g_pUserInterface;
      *((_QWORD *)v131 + 17) = v133;
      UserInterface::Access_OnNodeImport(v138, v133, v131, v137);
    }
LABEL_160:
    NodeBase::MoveToFront(*((NodeBase **)a2 + 10));
    v139 = 0;
    *(_BYTE *)(*((_QWORD *)this + 25) + 72LL) = 0;
    if ( *(_DWORD *)(*((_QWORD *)this + 25) + 80LL) )
    {
      v140 = 0;
      do
      {
        v141 = *((_QWORD *)this + 25);
        if ( v139 >= *(_DWORD *)(v141 + 80) )
          v142 = 0;
        else
          v142 = *(_QWORD *)(v140 + *(_QWORD *)(v141 + 96));
        *(_BYTE *)(v142 + 72) = 0;
        ++v139;
        v140 += 8;
      }
      while ( v139 < *(_DWORD *)(*((_QWORD *)this + 25) + 80LL) );
    }
  }
  Tip::Arrange(this);
  if ( a3 )
  {
    NodeSprite::Pin(*((NodeSprite **)this + 2));
    NodeSprite::Pin(*((NodeSprite **)this + 3));
    NodeSprite::Pin(*((NodeSprite **)this + 4));
    NodeSprite::Pin(*((NodeSprite **)this + 5));
    NodeSprite::Pin(*((NodeSprite **)this + 6));
    NodeSprite::Pin(*((NodeSprite **)this + 7));
    NodeSprite::Pin(*((NodeSprite **)this + 8));
    NodeSprite::Pin(*((NodeSprite **)this + 9));
    v143 = (NodeSprite *)*((_QWORD *)this + 12);
    if ( v143 )
      NodeSprite::Pin(v143);
    NodeSprite::Pin(*((NodeSprite **)this + 18));
    NodeSprite::Pin(*((NodeSprite **)this + 15));
  }
  return 1;
}
