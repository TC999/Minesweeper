// Hidden C++ exception states: #wind=73
char UIBoardCanvas::Reset(__int64 a1, __int64 a2, ...)
{
  XmlNode *v2; // r13
  XmlNode *v3; // r12
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rax
  RenderManager *v9; // rax
  GameAudio *v10; // rax
  const struct XmlNode *v11; // rdx
  bool v12; // r8
  void **v13; // rax
  Str *v14; // rax
  Str *v15; // rax
  Str *v16; // rax
  Str *v17; // rax
  struct NodeBase *v18; // rax
  struct NodeBase *v19; // rbx
  const struct XmlNode *Xml; // rax
  unsigned __int16 *v22; // rbx
  __int64 v23; // rdx
  struct NodeBase *v24; // rbx
  const struct XmlNode *v25; // rax
  struct NodeBase *v26; // rbx
  const struct XmlNode *v27; // rax
  struct NodeBase *v28; // rbx
  const struct XmlNode *v29; // rax
  struct NodeBase *v30; // rbx
  const struct XmlNode *v31; // rax
  unsigned __int16 *v32; // rbx
  unsigned __int16 *v33; // rbx
  unsigned int *v34; // rax
  const struct XmlNode *v35; // rbx
  TipManager *v36; // rax
  TipManager *v37; // r11
  Str *v38; // rax
  __int64 v39; // rax
  RenderManager *v40; // rcx
  __int64 v41; // rax
  void **v42; // rax
  Str *v43; // rdi
  void **v44; // rax
  const unsigned __int16 *v45; // rbx
  unsigned int XmlInt; // eax
  int v47; // r14d
  void **v48; // rax
  Str *v49; // rdi
  void **v50; // rax
  const unsigned __int16 *v51; // rbx
  unsigned int v52; // eax
  void **v53; // rax
  Str *v54; // rdi
  void **v55; // rax
  const unsigned __int16 *v56; // rbx
  unsigned int v57; // eax
  void **v58; // rax
  Str *v59; // rdi
  void **v60; // rax
  const unsigned __int16 *v61; // rbx
  unsigned int v62; // eax
  void **v63; // rax
  Str *v64; // rdi
  void **v65; // rax
  const unsigned __int16 *v66; // rbx
  unsigned int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  RenderManager *v70; // rax
  void **v71; // rax
  Str *v72; // rax
  unsigned int v73; // eax
  void **v74; // rax
  Str *v75; // rax
  unsigned int v76; // eax
  unsigned int XmlHex; // eax
  __int64 v78; // rdx
  RenderManager *v79; // rcx
  __int64 v80; // rax
  void **v81; // rax
  Str *v82; // rdi
  void **v83; // rax
  const unsigned __int16 *v84; // rbx
  unsigned int v85; // eax
  int v86; // r11d
  __int64 v87; // rax
  RenderManager *v88; // rax
  void **v89; // rax
  Str *v90; // rax
  unsigned int v91; // eax
  void **v92; // rax
  Str *v93; // rax
  unsigned int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rdx
  RenderManager *v97; // rcx
  __int64 v98; // rax
  void **v99; // rax
  Str *v100; // rax
  int v101; // eax
  void **v102; // rax
  Str *v103; // rax
  int v104; // eax
  __int64 v105; // r11
  int v106; // edi
  int v107; // ebx
  Str *v108; // rax
  Str *v109; // rax
  Str *v110; // rax
  Str *v111; // rax
  Str *v112; // rax
  Str *v113; // rax
  Str *v114; // rax
  Str *v115; // rax
  __int64 StrFromXml; // rax
  Str *v117; // rax
  __int64 v118; // rax
  Str *v119; // rax
  __int64 v120; // rax
  Str *v121; // rax
  __int64 v122; // rax
  Str *v123; // rax
  __int64 v124; // rax
  Str *v125; // rax
  __int64 v126; // rax
  Str *v127; // rax
  __int64 v128; // rax
  Str *v129; // rax
  __int64 v130; // rax
  Str *v131; // rax
  __int64 v132; // rax
  Str *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rbp
  __int64 v136; // rbx
  __int64 v137; // rdi
  _BYTE v138[16]; // [rsp+40h] [rbp-498h] BYREF
  void *v139; // [rsp+50h] [rbp-488h]
  _BYTE v140[16]; // [rsp+58h] [rbp-480h] BYREF
  void *v141; // [rsp+68h] [rbp-470h]
  _BYTE v142[16]; // [rsp+70h] [rbp-468h] BYREF
  void *Block; // [rsp+80h] [rbp-458h]
  _BYTE v144[16]; // [rsp+88h] [rbp-450h] BYREF
  void *v145; // [rsp+98h] [rbp-440h]
  _BYTE v146[16]; // [rsp+A0h] [rbp-438h] BYREF
  void *v147; // [rsp+B0h] [rbp-428h]
  _BYTE v148[24]; // [rsp+B8h] [rbp-420h] BYREF
  _BYTE v149[32]; // [rsp+D0h] [rbp-408h] BYREF
  _QWORD v150[2]; // [rsp+F0h] [rbp-3E8h] BYREF
  unsigned int v151; // [rsp+100h] [rbp-3D8h]
  _QWORD v152[2]; // [rsp+108h] [rbp-3D0h] BYREF
  void *v153; // [rsp+118h] [rbp-3C0h]
  _QWORD v154[2]; // [rsp+120h] [rbp-3B8h] BYREF
  void *v155; // [rsp+130h] [rbp-3A8h]
  _QWORD v156[2]; // [rsp+138h] [rbp-3A0h] BYREF
  void *v157; // [rsp+148h] [rbp-390h]
  _QWORD v158[2]; // [rsp+150h] [rbp-388h] BYREF
  void *v159; // [rsp+160h] [rbp-378h]
  _QWORD v160[2]; // [rsp+168h] [rbp-370h] BYREF
  void *v161; // [rsp+178h] [rbp-360h]
  _QWORD v162[2]; // [rsp+180h] [rbp-358h] BYREF
  void *v163; // [rsp+190h] [rbp-348h]
  _QWORD v164[2]; // [rsp+198h] [rbp-340h] BYREF
  void *v165; // [rsp+1A8h] [rbp-330h]
  _QWORD v166[2]; // [rsp+1B0h] [rbp-328h] BYREF
  void *v167; // [rsp+1C0h] [rbp-318h]
  _QWORD v168[2]; // [rsp+1C8h] [rbp-310h] BYREF
  void *v169; // [rsp+1D8h] [rbp-300h]
  _QWORD v170[2]; // [rsp+1E0h] [rbp-2F8h] BYREF
  void *v171; // [rsp+1F0h] [rbp-2E8h]
  int v172; // [rsp+1F8h] [rbp-2E0h]
  int v173; // [rsp+1FCh] [rbp-2DCh]
  int v174; // [rsp+200h] [rbp-2D8h]
  int v175; // [rsp+204h] [rbp-2D4h]
  int v176; // [rsp+208h] [rbp-2D0h]
  int v177; // [rsp+20Ch] [rbp-2CCh]
  int v178; // [rsp+210h] [rbp-2C8h]
  int v179; // [rsp+214h] [rbp-2C4h]
  int v180; // [rsp+218h] [rbp-2C0h]
  int v181; // [rsp+21Ch] [rbp-2BCh]
  _BYTE v182[16]; // [rsp+220h] [rbp-2B8h] BYREF
  unsigned __int16 *v183; // [rsp+230h] [rbp-2A8h]
  _BYTE v184[16]; // [rsp+238h] [rbp-2A0h] BYREF
  void *v185; // [rsp+248h] [rbp-290h]
  _DWORD v186[4]; // [rsp+250h] [rbp-288h] BYREF
  wchar_t *Source; // [rsp+260h] [rbp-278h]
  _BYTE v188[16]; // [rsp+268h] [rbp-270h] BYREF
  unsigned __int16 *v189; // [rsp+278h] [rbp-260h]
  _BYTE v190[16]; // [rsp+280h] [rbp-258h] BYREF
  unsigned __int16 *v191; // [rsp+290h] [rbp-248h]
  _BYTE v192[16]; // [rsp+298h] [rbp-240h] BYREF
  unsigned __int16 *v193; // [rsp+2A8h] [rbp-230h]
  _BYTE v194[16]; // [rsp+2B0h] [rbp-228h] BYREF
  void *v195; // [rsp+2C0h] [rbp-218h]
  _BYTE v196[16]; // [rsp+2C8h] [rbp-210h] BYREF
  void *v197; // [rsp+2D8h] [rbp-200h]
  _BYTE v198[16]; // [rsp+2E0h] [rbp-1F8h] BYREF
  void *v199; // [rsp+2F0h] [rbp-1E8h]
  _BYTE v200[16]; // [rsp+2F8h] [rbp-1E0h] BYREF
  void *v201; // [rsp+308h] [rbp-1D0h]
  __int64 v202; // [rsp+310h] [rbp-1C8h]
  _BYTE v203[16]; // [rsp+318h] [rbp-1C0h] BYREF
  void *v204; // [rsp+328h] [rbp-1B0h]
  _BYTE v205[16]; // [rsp+330h] [rbp-1A8h] BYREF
  void *v206; // [rsp+340h] [rbp-198h]
  _BYTE v207[16]; // [rsp+348h] [rbp-190h] BYREF
  void *v208; // [rsp+358h] [rbp-180h]
  _BYTE v209[24]; // [rsp+360h] [rbp-178h] BYREF
  _BYTE v210[24]; // [rsp+378h] [rbp-160h] BYREF
  _BYTE v211[24]; // [rsp+390h] [rbp-148h] BYREF
  _BYTE v212[24]; // [rsp+3A8h] [rbp-130h] BYREF
  _BYTE v213[24]; // [rsp+3C0h] [rbp-118h] BYREF
  _BYTE v214[24]; // [rsp+3D8h] [rbp-100h] BYREF
  _BYTE v215[24]; // [rsp+3F0h] [rbp-E8h] BYREF
  _BYTE v216[24]; // [rsp+408h] [rbp-D0h] BYREF
  _BYTE v217[24]; // [rsp+420h] [rbp-B8h] BYREF
  _BYTE v218[24]; // [rsp+438h] [rbp-A0h] BYREF
  _BYTE v219[24]; // [rsp+450h] [rbp-88h] BYREF
  _BYTE v220[24]; // [rsp+468h] [rbp-70h] BYREF
  _BYTE v221[88]; // [rsp+480h] [rbp-58h] BYREF
  XmlNode *v222; // [rsp+4F0h] [rbp+18h] BYREF
  va_list va; // [rsp+4F0h] [rbp+18h]
  XmlNode *v224; // [rsp+4F8h] [rbp+20h] BYREF
  va_list va1; // [rsp+4F8h] [rbp+20h]
  __int64 v226; // [rsp+500h] [rbp+28h]
  __int64 v227; // [rsp+508h] [rbp+30h]
  __int64 v228; // [rsp+510h] [rbp+38h]
  va_list va2; // [rsp+518h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v222 = va_arg(va1, XmlNode *);
  va_copy(va2, va1);
  v224 = va_arg(va2, XmlNode *);
  v226 = va_arg(va2, _QWORD);
  v227 = va_arg(va2, _QWORD);
  v228 = va_arg(va2, _QWORD);
  v202 = -2;
  v2 = v224;
  v3 = v222;
  Log(0x1000000u, L"Reset UI Board canvas");
  v6 = v228;
  if ( (_BYTE)v228 )
  {
    UIBoardCanvas::ClearAnimations((UIBoardCanvas *)a1);
    *(_QWORD *)(a1 + 248) = 0;
    *(_BYTE *)(a1 + 64) = 0;
    UIBoardCanvas::MakeAllTilesDirty((UIBoardCanvas *)a1);
    v7 = *(_QWORD *)(a1 + 240);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v8 + 41) )
      {
        *(_BYTE *)(v8 + 41) = 0;
        v9 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 20) = 1;
        *((_BYTE *)v9 + 88) = 1;
      }
    }
    *(_QWORD *)(a1 + 240) = 0;
    UIBoardCanvas::cleanupTiles((UIBoardCanvas *)a1);
    UserInterface::ClearFocus(g_pUserInterface);
  }
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 272) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/TileSizePixels", 0);
  Log(0x1000000u, L"Load art");
  if ( v6 )
  {
    UIBoardCanvas::cleanupBoardObjects((UIBoardCanvas *)a1);
    UITile::DestroyBaseNodes();
  }
  *(_DWORD *)(a1 + 212) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MinBoardHeight", 0);
  *(_DWORD *)(a1 + 216) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MaxBoardHeight", 0);
  *(_DWORD *)(a1 + 220) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MinBoardWidth", 0);
  *(_DWORD *)(a1 + 224) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MaxBoardWidth", 0);
  *(_DWORD *)(a1 + 228) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MinMines", 0);
  *(_DWORD *)(a1 + 232) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MaxMines", 0);
  *(_DWORD *)(a1 + 236) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MaxMinesPercent", 0);
  v10 = XmlNode::XPathElementSearchSingle(v2, L"/Audio");
  LOBYTE(v11) = 1;
  GameAudio::LoadGameAudio(v10, v11, v12);
  EDifficultyToStr((Str *)v184);
  Str::Str((Str *)v142, L"Layout");
  v13 = (void **)operator+<unsigned short const *>((Str *)v209, L"/Layouts/", (__int64)v184);
  operator+<Str>((Str *)v144, v13, (__int64)v142);
  operator delete(Block);
  v14 = Str::Str((Str *)v210, L"/Shared/DisarmScanBarXml");
  XmlUtil::GetStrFromXml(v192, a1 + 32, v14);
  v15 = Str::Str((Str *)v212, L"/NumberPanelSpriteXml");
  XmlUtil::GetStrFromXml(v182, (XmlNode **)va, v15);
  v16 = Str::Str((Str *)v211, L"/PanelMineSpriteXml");
  XmlUtil::GetStrFromXml(v188, (XmlNode **)va1, v16);
  v17 = Str::Str((Str *)v214, L"/Shared/PanelClockSpriteXml");
  XmlUtil::GetStrFromXml(v190, a1 + 32, v17);
  *(_DWORD *)(a1 + 44) = XmlNode::GetXmlHex(v3, L"/LoseTileColor", 0);
  v18 = NodeBase::CreateFromType(L"Base", *(struct NodeBase **)(a1 + 112), 1);
  *(_QWORD *)(a1 + 128) = v18;
  if ( *((_BYTE *)v18 + 144) )
  {
    *((_BYTE *)v18 + 144) = 0;
    *((_DWORD *)v18 + 48) = 59;
    UserInterface::Access_ClipNode(g_pUserInterface, v18);
  }
  v19 = *(struct NodeBase **)(a1 + 112);
  Xml = XmlManager::GetXml(g_pXmlManager, v193);
  *(_QWORD *)(a1 + 72) = NodeBase::CreateFromXmlNode(Xml, v19);
  *(_QWORD *)(a1 + 120) = NodeBase::CreateFromType(L"Base", *(struct NodeBase **)(a1 + 112), 1);
  if ( UIBoardCanvas::attachCustomBack((UIBoardCanvas *)a1, *(_DWORD *)(a1 + 272)) )
  {
    *(_QWORD *)(a1 + 152) = NodeBase::CreateFromType(L"Base", *(struct NodeBase **)(a1 + 112), 1);
    v22 = LocalizeMessage(L"|51718|ACC|Status information//accessibility description");
    v23 = *(_QWORD *)(a1 + 152);
    if ( *(_BYTE *)(v23 + 144) != 1 )
    {
      *(_BYTE *)(v23 + 144) = 1;
      *(_DWORD *)(v23 + 192) = 20;
      UserInterface::Access_OnNodeAccessible(g_pUserInterface, (struct NodeBase *)v23);
    }
    NodeBase::SetAccessName(*(NodeBase **)(a1 + 152), v22);
    NodeBase::SetAccessDescription(*(NodeBase **)(a1 + 152), v22);
    LocalFree(v22);
    *(_BYTE *)(*(_QWORD *)(a1 + 152) + 72LL) = 0;
    NodeBase::SetSize(
      *(NodeBase **)(a1 + 152),
      *(_DWORD *)(*(_QWORD *)(a1 + 120) + 16LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL));
    NodeBase::SetSize(
      *(NodeBase **)(a1 + 152),
      *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL));
    v24 = *(struct NodeBase **)(a1 + 152);
    v25 = XmlManager::GetXml(g_pXmlManager, v183);
    *(_QWORD *)(a1 + 80) = NodeBase::CreateFromXmlNode(v25, v24);
    v26 = *(struct NodeBase **)(a1 + 152);
    v27 = XmlManager::GetXml(g_pXmlManager, v183);
    *(_QWORD *)(a1 + 88) = NodeBase::CreateFromXmlNode(v27, v26);
    v28 = *(struct NodeBase **)(a1 + 152);
    v29 = XmlManager::GetXml(g_pXmlManager, v191);
    *(_QWORD *)(a1 + 104) = NodeBase::CreateFromXmlNode(v29, v28);
    v30 = *(struct NodeBase **)(a1 + 152);
    v31 = XmlManager::GetXml(g_pXmlManager, v189);
    *(_QWORD *)(a1 + 96) = NodeBase::CreateFromXmlNode(v31, v30);
    *(_QWORD *)(a1 + 168) = NodeBase::CreateFromType(L"Label", *(struct NodeBase **)(a1 + 152), 1);
    *(_QWORD *)(a1 + 160) = NodeBase::CreateFromType(L"Label", *(struct NodeBase **)(a1 + 152), 1);
    v32 = LocalizeMessage(L"|54387|ACC|Time//accessibility time elapsed name");
    NodeBase::SetAccessName(*(NodeBase **)(a1 + 168), v32);
    LocalFree(v32);
    v33 = LocalizeMessage(L"|46872|ACC|Mines Remaining//accessibility mines remaining name");
    NodeBase::SetAccessName(*(NodeBase **)(a1 + 160), v33);
    LocalFree(v33);
    v34 = (unsigned int *)NodeBase::CreateFromType(L"Base", *(struct NodeBase **)(a1 + 144), 1);
    *(_QWORD *)(a1 + 136) = v34;
    NodeBase::SetSize((NodeBase *)v34, *(_DWORD *)(*(_QWORD *)(a1 + 120) + 16LL), v34[5]);
    NodeBase::SetSize(
      *(NodeBase **)(a1 + 136),
      *(_DWORD *)(*(_QWORD *)(a1 + 136) + 16LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL));
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 72LL) = 0;
    v35 = XmlNode::XPathElementSearchSingle(v2, L"/Tips");
    v36 = (TipManager *)operator new(0x98u);
    if ( v36 )
      v37 = TipManager::TipManager(v36, v35, *(struct NodeBase **)(a1 + 136), 1);
    else
      v37 = 0;
    *(_QWORD *)(a1 + 264) = v37;
    *((_BYTE *)v37 + 145) = *((_BYTE *)Game::G + 41);
    v38 = Str::Str((Str *)v213, L"/Shared/DisarmScanBarAnimXml");
    XmlUtil::GetStrFromXml(v186, a1 + 32, v38);
    *(_DWORD *)(a1 + 208) = ResourceAnimation::Create(Source, (unsigned int)(v186[0] + 1));
    v39 = *(_QWORD *)(a1 + 72);
    v40 = g_pRenderManager;
    if ( *(_BYTE *)(v39 + 41) )
    {
      *(_BYTE *)(v39 + 41) = 0;
      *((_BYTE *)v40 + 20) = 1;
      *((_BYTE *)v40 + 88) = 1;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 413LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 412LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 72LL) = 0;
    v41 = *(_QWORD *)(a1 + 72);
    if ( *(_DWORD *)(v41 + 384) )
    {
      *(_DWORD *)(v41 + 384) = 0;
      *((_BYTE *)v40 + 20) = 1;
      *((_BYTE *)v40 + 88) = 1;
    }
    NodeBase::SetMaterial(*(NodeBase **)(a1 + 72), *(const struct Material **)(*((_QWORD *)v40 + 7) + 8LL));
    Str::Str((Str *)v140, L"/TimeLabelBack/Y");
    Str::Str((Str *)v142, L"/TimeLabelBack/X");
    v42 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v43 = operator+<Str>((Str *)v138, v42, (__int64)v140);
    v44 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v45 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v146, v44, (__int64)v142) + 2);
    LODWORD(v43) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v43 + 2), 0);
    XmlInt = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v45, 0);
    v47 = v226;
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 80), XmlInt, (unsigned int)v43, v226);
    operator delete(v147);
    operator delete(v139);
    operator delete(Block);
    operator delete(v141);
    Str::Str((Str *)v142, L"/MinesLabelBack/Y");
    Str::Str((Str *)v140, L"/MinesLabelBack/X");
    v48 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v49 = operator+<Str>((Str *)v146, v48, (__int64)v142);
    v50 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v51 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v138, v50, (__int64)v140) + 2);
    LODWORD(v49) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v49 + 2), 0);
    v52 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v51, 0);
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 88), v52, (unsigned int)v49, v47);
    operator delete(v139);
    operator delete(v147);
    operator delete(v141);
    operator delete(Block);
    Str::Str((Str *)v142, L"/TimeImage/Y");
    Str::Str((Str *)v140, L"/TimeImage/X");
    v53 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v54 = operator+<Str>((Str *)v146, v53, (__int64)v142);
    v55 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v56 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v138, v55, (__int64)v140) + 2);
    LODWORD(v54) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v54 + 2), 0);
    v57 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v56, 0);
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 104), v57, (unsigned int)v54, v47);
    operator delete(v139);
    operator delete(v147);
    operator delete(v141);
    operator delete(Block);
    Str::Str((Str *)v142, L"/MineImage/Y");
    Str::Str((Str *)v140, L"/MineImage/X");
    v58 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v59 = operator+<Str>((Str *)v146, v58, (__int64)v142);
    v60 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v61 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v138, v60, (__int64)v140) + 2);
    LODWORD(v59) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v59 + 2), 0);
    v62 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v61, 0);
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 96), v62, (unsigned int)v59, v47);
    operator delete(v139);
    operator delete(v147);
    operator delete(v141);
    operator delete(Block);
    Str::Str((Str *)v142, L"/TimeLabel/Y");
    Str::Str((Str *)v140, L"/TimeLabel/X");
    v63 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v64 = operator+<Str>((Str *)v146, v63, (__int64)v142);
    v65 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v66 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v138, v65, (__int64)v140) + 2);
    LODWORD(v64) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v64 + 2), 0);
    v67 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v66, 0);
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 168), v67, (unsigned int)v64, v47);
    operator delete(v139);
    operator delete(v147);
    operator delete(v141);
    operator delete(Block);
    v68 = *(_DWORD *)(a1 + 40);
    v69 = *(_QWORD *)(a1 + 168);
    if ( *(_DWORD *)(v69 + 472) != v68 )
    {
      *(_DWORD *)(v69 + 472) = v68;
      v70 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v70 + 88) = 1;
    }
    Str::Str((Str *)v140, L"/TimeLabel/Width");
    v71 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v72 = operator+<Str>((Str *)v138, v71, (__int64)v140);
    v73 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v72 + 2), 0);
    NodeBase::SetSize(*(NodeBase **)(a1 + 168), v73, *(_DWORD *)(*(_QWORD *)(a1 + 168) + 20LL));
    operator delete(v139);
    operator delete(v141);
    Str::Str((Str *)v140, L"/TimeLabel/Height");
    v74 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v75 = operator+<Str>((Str *)v138, v74, (__int64)v140);
    v76 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v75 + 2), 0);
    NodeBase::SetSize(*(NodeBase **)(a1 + 168), *(_DWORD *)(*(_QWORD *)(a1 + 168) + 16LL), v76);
    operator delete(v139);
    operator delete(v141);
    XmlHex = XmlNode::GetXmlHex(v3, L"/PanelLabelTextColor", 0);
    v78 = *(_QWORD *)(a1 + 168);
    v79 = g_pRenderManager;
    if ( XmlHex != *(_DWORD *)(v78 + 404) )
    {
      *(_DWORD *)(v78 + 404) = XmlHex;
      *((_BYTE *)v79 + 20) = 1;
      *((_BYTE *)v79 + 88) = 1;
    }
    v80 = *(_QWORD *)(a1 + 168);
    if ( *(_DWORD *)(v80 + 476) != 64 )
    {
      *(_DWORD *)(v80 + 476) = 64;
      *((_BYTE *)v79 + 20) = 1;
      *((_BYTE *)v79 + 88) = 1;
    }
    Str::Str((Str *)v142, L"/MinesLabel/Y");
    Str::Str((Str *)v140, L"/MinesLabel/X");
    v81 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v82 = operator+<Str>((Str *)v146, v81, (__int64)v142);
    v83 = (void **)Str::Str((Str *)v149, (const struct Str *)v144);
    v84 = (const unsigned __int16 *)*((_QWORD *)operator+<Str>((Str *)v138, v83, (__int64)v140) + 2);
    LODWORD(v82) = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v82 + 2), 0);
    v85 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), v84, 0);
    UIBoardCanvas::setCanvasNodeAttributes(a1, *(_QWORD *)(a1 + 160), v85, (unsigned int)v82, v47);
    operator delete(v139);
    operator delete(v147);
    operator delete(v141);
    operator delete(Block);
    v86 = *(_DWORD *)(a1 + 40);
    v87 = *(_QWORD *)(a1 + 160);
    if ( *(_DWORD *)(v87 + 472) != v86 )
    {
      *(_DWORD *)(v87 + 472) = v86;
      v88 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v88 + 88) = 1;
    }
    Str::Str((Str *)v140, L"/MinesLabel/Width");
    v89 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v90 = operator+<Str>((Str *)v138, v89, (__int64)v140);
    v91 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v90 + 2), 0);
    NodeBase::SetSize(*(NodeBase **)(a1 + 160), v91, *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL));
    operator delete(v139);
    operator delete(v141);
    Str::Str((Str *)v140, L"/MinesLabel/Height");
    v92 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v93 = operator+<Str>((Str *)v138, v92, (__int64)v140);
    v94 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v93 + 2), 0);
    NodeBase::SetSize(*(NodeBase **)(a1 + 160), *(_DWORD *)(*(_QWORD *)(a1 + 160) + 16LL), v94);
    operator delete(v139);
    operator delete(v141);
    v95 = XmlNode::GetXmlHex(v3, L"/PanelLabelTextColor", 0);
    v96 = *(_QWORD *)(a1 + 160);
    v97 = g_pRenderManager;
    if ( v95 != *(_DWORD *)(v96 + 404) )
    {
      *(_DWORD *)(v96 + 404) = v95;
      *((_BYTE *)v97 + 20) = 1;
      *((_BYTE *)v97 + 88) = 1;
    }
    v98 = *(_QWORD *)(a1 + 160);
    if ( *(_DWORD *)(v98 + 476) != 64 )
    {
      *(_DWORD *)(v98 + 476) = 64;
      *((_BYTE *)v97 + 20) = 1;
      *((_BYTE *)v97 + 88) = 1;
    }
    Str::Str((Str *)v140, L"/Tileset/X");
    v99 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v100 = operator+<Str>((Str *)v138, v99, (__int64)v140);
    v101 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v100 + 2), -1);
    NodeBase::SetPosition(*(NodeBase **)(a1 + 128), v101, *(_DWORD *)(*(_QWORD *)(a1 + 128) + 12LL));
    operator delete(v139);
    operator delete(v141);
    Str::Str((Str *)v140, L"/Tileset/Y");
    v102 = (void **)Str::Str((Str *)v148, (const struct Str *)v144);
    v103 = operator+<Str>((Str *)v138, v102, (__int64)v140);
    v104 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), *((const unsigned __int16 **)v103 + 2), -1);
    NodeBase::SetPosition(*(NodeBase **)(a1 + 128), *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL), v104);
    operator delete(v139);
    operator delete(v141);
    *(_BYTE *)(a1 + 277) = XmlNode::GetXmlBool(v2, L"/PlayOnlyFirstLoseSound", 0);
    *(_BYTE *)(*(_QWORD *)(a1 + 120) + 72LL) = 0;
    operator delete(Source);
    operator delete(v191);
    operator delete(v189);
    operator delete(v183);
    operator delete(v193);
    operator delete(v145);
    operator delete(v185);
    v105 = *(_QWORD *)(a1 + 56);
    v106 = *(_DWORD *)(v105 + 16);
    v107 = *(_DWORD *)(v105 + 12);
    v152[0] = 0;
    v152[1] = 0;
    v153 = 0;
    v154[0] = 0;
    v154[1] = 0;
    v155 = 0;
    v156[0] = 0;
    v156[1] = 0;
    v157 = 0;
    v158[0] = 0;
    v158[1] = 0;
    v159 = 0;
    v160[0] = 0;
    v160[1] = 0;
    v161 = 0;
    v162[0] = 0;
    v162[1] = 0;
    v163 = 0;
    v164[0] = 0;
    v164[1] = 0;
    v165 = 0;
    v166[0] = 0;
    v166[1] = 0;
    v167 = 0;
    v168[0] = 0;
    v168[1] = 0;
    v169 = 0;
    v170[0] = 0;
    v170[1] = 0;
    v171 = 0;
    v108 = Str::Str((Str *)v149, L"/BadGuessAnimXml");
    XmlUtil::GetStrFromXml(v205, (XmlNode **)va1, v108);
    v109 = Str::Str((Str *)v213, L"/BadGuessAnimSpecXml");
    XmlUtil::GetStrFromXml(v198, (XmlNode **)va1, v109);
    v110 = Str::Str((Str *)v214, L"/DisarmAnimXml");
    XmlUtil::GetStrFromXml(v207, (XmlNode **)va, v110);
    v111 = Str::Str((Str *)v211, L"/DisarmAnimSpecXml");
    XmlUtil::GetStrFromXml(v194, (XmlNode **)va, v111);
    v112 = Str::Str((Str *)v212, L"/Shared/AlphaQuickPulseAnimSpecXml");
    XmlUtil::GetStrFromXml(v200, a1 + 32, v112);
    v113 = Str::Str((Str *)v210, L"/Shared/AlphaQuickFadeOutAnimXml");
    XmlUtil::GetStrFromXml(v196, a1 + 32, v113);
    v114 = Str::Str((Str *)v209, L"/Shared/AlphaQuickFadeInAnimXml");
    XmlUtil::GetStrFromXml(v203, a1 + 32, v114);
    UITile::_leftRumbleCount = 0;
    UITile::_rightRumbleCount = 0;
    UITile::_pMouseEnterNode = 0;
    UITile::_mouseDragNode = 0;
    UITile::_bothButtonsWereDown = 0;
    v150[1] = a1;
    v150[0] = *(_QWORD *)(a1 + 128);
    v115 = Str::Str((Str *)v146, L"/NormalTileSpriteXml");
    StrFromXml = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v115);
    Str::operator=(v152, StrFromXml);
    operator delete(v139);
    v117 = Str::Str((Str *)v142, L"/HiliteTileSpriteXml");
    v118 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v117);
    Str::operator=(v154, v118);
    operator delete(v139);
    v119 = Str::Str((Str *)v184, L"/PressedTileSpriteXml");
    v120 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v119);
    Str::operator=(v156, v120);
    operator delete(v139);
    v121 = Str::Str((Str *)v221, L"/MineXml");
    v122 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va1, v121);
    Str::operator=(v158, v122);
    operator delete(v139);
    v123 = Str::Str((Str *)v215, L"/FlagXml");
    v124 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v123);
    Str::operator=(v160, v124);
    operator delete(v139);
    v125 = Str::Str((Str *)v220, L"/XXml");
    v126 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v125);
    Str::operator=(v162, v126);
    operator delete(v139);
    v127 = Str::Str((Str *)v218, L"/QuestionMarkXml");
    v128 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v127);
    Str::operator=(v164, v128);
    operator delete(v139);
    v129 = Str::Str((Str *)v216, L"/NumbersXml");
    v130 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v129);
    Str::operator=(v166, v130);
    operator delete(v139);
    v131 = Str::Str((Str *)v217, L"/TileShadowLeftXml");
    v132 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v131);
    Str::operator=(v170, v132);
    operator delete(v139);
    v133 = Str::Str((Str *)v219, L"/TileShadowUpperXml");
    v134 = XmlUtil::GetStrFromXml(v138, (XmlNode **)va, v133);
    Str::operator=(v168, v134);
    operator delete(v139);
    v176 = XmlNode::GetXmlInt(v2, L"/MineExplodeXOffset", 0);
    v177 = XmlNode::GetXmlInt(v2, L"/MineExplodeYOffset", 0);
    v178 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/LabelXOffset", 0);
    v179 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/LabelYOffset", 0);
    v180 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/LabelWidth", 0);
    v181 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/LabelHeight", 0);
    v172 = XmlNode::GetXmlInt(*(XmlNode **)(a1 + 32), L"/Shared/MaxBoardWidth", 0);
    v173 = *(_DWORD *)(a1 + 272);
    v174 = (*(_DWORD *)(a1 + 224) - v106) / 2;
    v175 = (*(_DWORD *)(a1 + 216) - v107) / 2;
    v151 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
    v135 = v151;
    UITile::InitBaseNodes(
      (struct UITileConstructionInfo *)v150,
      (struct Str *)v205,
      (struct Str *)v207,
      (struct Str *)v194,
      (struct Str *)v200,
      (struct Str *)v203,
      (struct Str *)v196,
      (struct Str *)v198);
    UIBoardCanvas::CreateAllTiles((UIBoardCanvas *)a1, (struct UITileConstructionInfo *)v150, v106, v107);
    if ( (int)v135 > 0 )
    {
      v136 = 0;
      v137 = v135;
      do
      {
        NodeBase::MoveToBack(*(NodeBase **)((char *)qword_1000A6CD8 + v136));
        NodeBase::MoveToBack(*(NodeBase **)((char *)qword_1000A6CC0 + v136));
        v136 += 8;
        --v137;
      }
      while ( v137 );
    }
    UIBoardCanvas::RefreshLabels((UIBoardCanvas *)a1);
    if ( *((_BYTE *)Game::G + 43) )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 56) + 28LL) )
        UIBoardCanvas::SetAllTilesTopAlpha((UIBoardCanvas *)a1, 0xFFu);
    }
    UIBoardCanvas::Refresh((UIBoardCanvas *)a1, 1);
    RenderManager::Render(g_pRenderManager, 1);
    Engine_SetLayout(*(_DWORD *)(*(_QWORD *)(a1 + 120) + 16LL), *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL), 0);
    RenderManager::Render(g_pRenderManager, 1);
    operator delete(v204);
    operator delete(v197);
    operator delete(v201);
    operator delete(v195);
    operator delete(v208);
    operator delete(v199);
    operator delete(v206);
    operator delete(v171);
    operator delete(v169);
    operator delete(v167);
    operator delete(v165);
    operator delete(v163);
    operator delete(v161);
    operator delete(v159);
    operator delete(v157);
    operator delete(v155);
    operator delete(v153);
    return 1;
  }
  else
  {
    operator delete(v191);
    operator delete(v189);
    operator delete(v183);
    operator delete(v193);
    operator delete(v145);
    operator delete(v185);
    return 0;
  }
}
