// Hidden C++ exception states: #wind=20
bool __fastcall GameStat::FromXML(GameStat *this, struct SerialXML *a2, const struct XmlNode *a3)
{
  Str *v6; // rbx
  void **v7; // rax
  Str *v8; // rax
  const struct XmlNode *v9; // rax
  Str *v11; // rbx
  void **v12; // rax
  Str *v13; // rax
  const struct XmlNode *v14; // rax
  Str *v15; // rbx
  void **v16; // rax
  Str *v17; // rax
  const struct XmlNode *v18; // rax
  Str *v19; // rbx
  void **v20; // rax
  Str *v21; // rax
  const struct XmlNode *v22; // rax
  Str *v23; // rbx
  void **v24; // rax
  Str *v25; // rax
  const struct XmlNode *v26; // rax
  Str *v27; // rbx
  void **v28; // rax
  Str *v29; // rax
  const struct XmlNode *v30; // rax
  Str *v31; // rbx
  void **v32; // rax
  Str *v33; // rax
  const struct XmlNode *v34; // rax
  Str *v35; // rbx
  void **v36; // rax
  Str *v37; // rax
  const struct XmlNode *v38; // rax
  Str *v39; // rbx
  void **v40; // rax
  Str *v41; // rax
  const struct XmlNode *v42; // rax
  Str *v43; // rbx
  void **v44; // rax
  Str *v45; // rax
  const struct XmlNode *v46; // rax
  _BYTE v47[16]; // [rsp+28h] [rbp-50h] BYREF
  void *Block; // [rsp+38h] [rbp-40h]
  _BYTE v49[16]; // [rsp+40h] [rbp-38h] BYREF
  void *v50; // [rsp+50h] [rbp-28h]
  _BYTE v51[24]; // [rsp+58h] [rbp-20h] BYREF

  v6 = Str::Str((Str *)v49, L"GamesWon");
  v7 = (void **)Str::Str((Str *)v51, L"/");
  v8 = operator+<Str>((Str *)v47, v7, (__int64)v6);
  v9 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v8 + 2));
  LOBYTE(v6) = !SerialXML::FromXML(a2, (int *)this + 2, v9);
  operator delete(Block);
  operator delete(v50);
  if ( (_BYTE)v6 )
    return 0;
  v11 = Str::Str((Str *)v47, L"GamesPlayed");
  v12 = (void **)Str::Str((Str *)v51, L"/");
  v13 = operator+<Str>((Str *)v49, v12, (__int64)v11);
  v14 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v13 + 2));
  LOBYTE(v11) = !SerialXML::FromXML(a2, (int *)this + 3, v14);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v11 )
    return 0;
  v15 = Str::Str((Str *)v47, L"LowestScore");
  v16 = (void **)Str::Str((Str *)v51, L"/");
  v17 = operator+<Str>((Str *)v49, v16, (__int64)v15);
  v18 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v17 + 2));
  LOBYTE(v15) = !SerialXML::FromXML(a2, (int *)this + 4, v18);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v15 )
    return 0;
  v19 = Str::Str((Str *)v47, L"HighestScore");
  v20 = (void **)Str::Str((Str *)v51, L"/");
  v21 = operator+<Str>((Str *)v49, v20, (__int64)v19);
  v22 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v21 + 2));
  LOBYTE(v19) = !SerialXML::FromXML(a2, (int *)this + 5, v22);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v19 )
    return 0;
  v23 = Str::Str((Str *)v47, L"AverageScore");
  v24 = (void **)Str::Str((Str *)v51, L"/");
  v25 = operator+<Str>((Str *)v49, v24, (__int64)v23);
  v26 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v25 + 2));
  LOBYTE(v23) = !SerialXML::FromXML(a2, (int *)this + 6, v26);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v23 )
    return 0;
  v27 = Str::Str((Str *)v47, L"HighScores");
  v28 = (void **)Str::Str((Str *)v51, L"/");
  v29 = operator+<Str>((Str *)v49, v28, (__int64)v27);
  v30 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v29 + 2));
  LOBYTE(v27) = (unsigned __int8)SerialXML::FromXML(a2, (char *)this + 48, v30) == 0;
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v27 )
    return 0;
  v31 = Str::Str((Str *)v47, L"LongestWinStreak");
  v32 = (void **)Str::Str((Str *)v51, L"/");
  v33 = operator+<Str>((Str *)v49, v32, (__int64)v31);
  v34 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v33 + 2));
  LOBYTE(v31) = !SerialXML::FromXML(a2, (int *)this + 7, v34);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v31 )
    return 0;
  v35 = Str::Str((Str *)v47, L"LongestLoseStreak");
  v36 = (void **)Str::Str((Str *)v51, L"/");
  v37 = operator+<Str>((Str *)v49, v36, (__int64)v35);
  v38 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v37 + 2));
  LOBYTE(v35) = !SerialXML::FromXML(a2, (int *)this + 8, v38);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v35 )
    return 0;
  v39 = Str::Str((Str *)v47, L"CurrentStreak");
  v40 = (void **)Str::Str((Str *)v51, L"/");
  v41 = operator+<Str>((Str *)v49, v40, (__int64)v39);
  v42 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v41 + 2));
  LOBYTE(v39) = !SerialXML::FromXML(a2, (int *)this + 9, v42);
  operator delete(v50);
  operator delete(Block);
  if ( (_BYTE)v39 )
    return 0;
  v43 = Str::Str((Str *)v47, L"CurrentStreakTypeIsWin");
  v44 = (void **)Str::Str((Str *)v51, L"/");
  v45 = operator+<Str>((Str *)v49, v44, (__int64)v43);
  v46 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v45 + 2));
  LOBYTE(v43) = !SerialXML::FromXML(a2, (bool *)this + 40, v46);
  operator delete(v50);
  operator delete(Block);
  return (_BYTE)v43 == 0;
}
