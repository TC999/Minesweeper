bool __fastcall Game::FromXML(Game *this, struct SerialXML *a2, const struct XmlNode *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  const struct XmlNode *v8; // rax
  bool v9; // bl
  __int64 v11; // rax
  const struct XmlNode *v12; // rax
  bool v13; // bl
  __int64 v14; // rax
  const struct XmlNode *v15; // rax
  bool v16; // bl
  __int64 v17; // rax
  const struct XmlNode *v18; // rax
  bool v19; // bl
  __int64 v20; // rax
  const struct XmlNode *v21; // rax
  bool v22; // bl
  __int64 v23; // rax
  const struct XmlNode *v24; // rax
  bool v25; // bl
  __int64 v26; // rax
  const struct XmlNode *v27; // rax
  bool v28; // bl
  __int64 v29; // rax
  const struct XmlNode *v30; // rax
  bool v31; // bl
  __int64 v32; // rax
  const struct XmlNode *v33; // rax
  bool v34; // bl
  __int64 v35; // rax
  XmlNode *v36; // rax
  const wchar_t *NodeValue; // rax
  wchar_t *v38; // rbx
  char v39; // al
  bool v40; // bl
  __int64 v41; // rax
  const struct XmlNode *v42; // rax
  bool v43; // bl
  __int64 v44; // rax
  const struct XmlNode *v45; // rax
  bool v46; // bl
  __int64 v47; // rax
  const struct XmlNode *v48; // rax
  bool v49; // bl
  __int64 v50; // rax
  const struct XmlNode *v51; // rax
  bool v52; // bl
  __int64 v53; // rax
  const struct XmlNode *v54; // rax
  bool v55; // bl
  __int64 v56; // rax
  const struct XmlNode *v57; // rax
  bool v58; // bl
  __int64 v59; // rax
  const struct XmlNode *v60; // rax
  bool v61; // bl
  __int64 v62; // rax
  const struct XmlNode *v63; // rax
  bool v64; // bl
  _BYTE v65[16]; // [rsp+28h] [rbp-60h] BYREF
  void *Block; // [rsp+38h] [rbp-50h]
  _BYTE v67[16]; // [rsp+40h] [rbp-48h] BYREF
  void *v68; // [rsp+50h] [rbp-38h]
  _BYTE v69[24]; // [rsp+58h] [rbp-30h] BYREF

  Str::Str((Str *)v67, L"GameStats");
  Str::Str((Str *)v69, L"/");
  v6 = operator+<Str>((Str *)v65);
  v7 = *((_QWORD *)this + 29);
  v8 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v6 + 16));
  v9 = (*(unsigned __int8 (__fastcall **)(char *, struct SerialXML *, const struct XmlNode *))(v7 + 8))(
         (char *)this + 232,
         a2,
         v8) == 0;
  operator delete(Block);
  operator delete(v68);
  if ( v9 )
    return 0;
  Str::Str((Str *)v65, L"FirstPlay");
  Str::Str((Str *)v69, L"/");
  v11 = operator+<Str>((Str *)v67);
  v12 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v11 + 16));
  v13 = !SerialXML::FromXML(a2, (bool *)this + 271, v12);
  operator delete(v68);
  operator delete(Block);
  if ( v13 )
    return 0;
  Str::Str((Str *)v65, L"AutoContinueSaveGames");
  Str::Str((Str *)v69, L"/");
  v14 = operator+<Str>((Str *)v67);
  v15 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v14 + 16));
  v16 = !SerialXML::FromXML(a2, (bool *)this + 270, v15);
  operator delete(v68);
  operator delete(Block);
  if ( v16 )
    return 0;
  Str::Str((Str *)v65, L"SoundEnabled");
  Str::Str((Str *)v69, L"/");
  v17 = operator+<Str>((Str *)v67);
  v18 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v17 + 16));
  v19 = !SerialXML::FromXML(a2, (bool *)this + 42, v18);
  operator delete(v68);
  operator delete(Block);
  if ( v19 )
    return 0;
  Str::Str((Str *)v65, L"AnimationsEnabled");
  Str::Str((Str *)v69, L"/");
  v20 = operator+<Str>((Str *)v67);
  v21 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v20 + 16));
  v22 = !SerialXML::FromXML(a2, (bool *)this + 43, v21);
  operator delete(v68);
  operator delete(Block);
  if ( v22 )
    return 0;
  Str::Str((Str *)v65, L"QuestionMarksEnabled");
  Str::Str((Str *)v69, L"/");
  v23 = operator+<Str>((Str *)v67);
  v24 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v23 + 16));
  v25 = !SerialXML::FromXML(a2, (bool *)this + 44, v24);
  operator delete(v68);
  operator delete(Block);
  if ( v25 )
    return 0;
  Str::Str((Str *)v65, L"TipsEnabled");
  Str::Str((Str *)v69, L"/");
  v26 = operator+<Str>((Str *)v67);
  v27 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v26 + 16));
  v28 = !SerialXML::FromXML(a2, (bool *)this + 45, v27);
  operator delete(v68);
  operator delete(Block);
  if ( v28 )
    return 0;
  Str::Str((Str *)v65, L"UserPrefersKeyboard");
  Str::Str((Str *)v69, L"/");
  v29 = operator+<Str>((Str *)v67);
  v30 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v29 + 16));
  v31 = !SerialXML::FromXML(a2, (bool *)this + 46, v30);
  operator delete(v68);
  operator delete(Block);
  if ( v31 )
    return 0;
  Str::Str((Str *)v65, L"UseRandomArt");
  Str::Str((Str *)v69, L"/");
  v32 = operator+<Str>((Str *)v67);
  v33 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v32 + 16));
  v34 = !SerialXML::FromXML(a2, (bool *)this + 269, v33);
  operator delete(v68);
  operator delete(Block);
  if ( v34 )
    return 0;
  Str::Str((Str *)v65, L"PreferredDifficulty");
  Str::Str((Str *)v69, L"/");
  v35 = operator+<Str>((Str *)v67);
  v36 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v35 + 16));
  if ( v36 )
  {
    NodeValue = XmlNode::GetNodeValue(v36);
    v38 = (wchar_t *)NodeValue;
    if ( !NodeValue )
    {
      v39 = 0;
      goto LABEL_24;
    }
    *((_DWORD *)this + 69) = wcstoul(NodeValue, 0, 10);
    operator delete(v38);
  }
  v39 = 1;
LABEL_24:
  v40 = v39 == 0;
  operator delete(v68);
  operator delete(Block);
  if ( v40 )
    return 0;
  Str::Str((Str *)v65, L"CustomWidth");
  Str::Str((Str *)v69, L"/");
  v41 = operator+<Str>((Str *)v67);
  v42 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v41 + 16));
  v43 = !SerialXML::FromXML(a2, (int *)this + 70, v42);
  operator delete(v68);
  operator delete(Block);
  if ( v43 )
    return 0;
  Str::Str((Str *)v65, L"CustomHeight");
  Str::Str((Str *)v69, L"/");
  v44 = operator+<Str>((Str *)v67);
  v45 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v44 + 16));
  v46 = !SerialXML::FromXML(a2, (int *)this + 71, v45);
  operator delete(v68);
  operator delete(Block);
  if ( v46 )
    return 0;
  Str::Str((Str *)v65, L"CustomMines");
  Str::Str((Str *)v69, L"/");
  v47 = operator+<Str>((Str *)v67);
  v48 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v47 + 16));
  v49 = !SerialXML::FromXML(a2, (int *)this + 72, v48);
  operator delete(v68);
  operator delete(Block);
  if ( v49 )
    return 0;
  Str::Str((Str *)v65, L"BoardStyleIndex");
  Str::Str((Str *)v69, L"/");
  v50 = operator+<Str>((Str *)v67);
  v51 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v50 + 16));
  v52 = !SerialXML::FromXML(a2, (int *)this + 16, v51);
  operator delete(v68);
  operator delete(Block);
  if ( v52 )
    return 0;
  Str::Str((Str *)v65, L"GameStyleIndex");
  Str::Str((Str *)v69, L"/");
  v53 = operator+<Str>((Str *)v67);
  v54 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v53 + 16));
  v55 = !SerialXML::FromXML(a2, (int *)this + 17, v54);
  operator delete(v68);
  operator delete(Block);
  if ( v55 )
    return 0;
  Str::Str((Str *)v65, L"AutoSaveGameOnExit");
  Str::Str((Str *)v69, L"/");
  v56 = operator+<Str>((Str *)v67);
  v57 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v56 + 16));
  v58 = !SerialXML::FromXML(a2, (bool *)this + 272, v57);
  operator delete(v68);
  operator delete(Block);
  if ( v58 )
    return 0;
  Str::Str((Str *)v65, L"WinLoseDialogX");
  Str::Str((Str *)v69, L"/");
  v59 = operator+<Str>((Str *)v67);
  v60 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v59 + 16));
  v61 = !SerialXML::FromXML(a2, (int *)this + 12, v60);
  operator delete(v68);
  operator delete(Block);
  if ( v61 )
    return 0;
  Str::Str((Str *)v65, L"WinLoseDialogY");
  Str::Str((Str *)v69, L"/");
  v62 = operator+<Str>((Str *)v67);
  v63 = XmlNode::XPathElementSearchSingle(a3, *(const unsigned __int16 **)(v62 + 16));
  v64 = !SerialXML::FromXML(a2, (int *)this + 13, v63);
  operator delete(v68);
  operator delete(Block);
  return !v64;
}
