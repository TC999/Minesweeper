// Hidden C++ exception states: #wind=12
char __fastcall UIBoardCanvas::attachCustomBack(NodeBase **this, int a2)
{
  Str *v3; // rax
  Str *v4; // rax
  Str *v5; // rax
  Str *v6; // rax
  Str *v7; // rax
  Str *v8; // rax
  Str *v9; // rax
  Str *v10; // rax
  Str *v11; // rax
  Str *v12; // rax
  Str *v13; // rax
  Str *v14; // rax
  struct NodeSprite *ChildPanelBackSprite; // rbp
  struct NodeSprite *v16; // r12
  struct NodeSprite *v17; // rsi
  int *v18; // r13
  struct NodeSprite *v19; // rbx
  int *v20; // r14
  int *v21; // r15
  struct NodeSprite *v22; // rax
  int *v23; // rbx
  unsigned int v24; // r9d
  int v25; // r9d
  NodeBase *v26; // rcx
  NodeBase *v27; // r11
  int v28; // r9d
  __int64 v29; // r11
  NodeBase *v30; // rcx
  int v31; // r9d
  NodeBase *v32; // rcx
  int v33; // r10d
  int v34; // r9d
  __int64 v35; // r11
  NodeBase *v36; // rcx
  int v37; // r10d
  int v38; // r9d
  NodeBase *v39; // rcx
  NodeBase *v40; // rcx
  NodeBase *v41; // r9
  __int64 v42; // r9
  NodeBase *v43; // rcx
  __int64 v44; // r9
  NodeBase *v45; // rcx
  int v46; // r10d
  NodeBase *v47; // rcx
  int v48; // r10d
  NodeBase *v49; // rcx
  __int64 v50; // r9
  NodeBase *v51; // rcx
  int v52; // r10d
  NodeBase *v53; // rcx
  __int64 v54; // r11
  Str *v56; // rax
  __int64 v57; // rdx
  NodeBase *v58; // [rsp+20h] [rbp-2C8h]
  int *v59; // [rsp+28h] [rbp-2C0h]
  int *v60; // [rsp+30h] [rbp-2B8h]
  _BYTE v61[16]; // [rsp+38h] [rbp-2B0h] BYREF
  void *v62; // [rsp+48h] [rbp-2A0h]
  _BYTE v63[16]; // [rsp+50h] [rbp-298h] BYREF
  void *v64; // [rsp+60h] [rbp-288h]
  _BYTE v65[16]; // [rsp+68h] [rbp-280h] BYREF
  void *v66; // [rsp+78h] [rbp-270h]
  _BYTE v67[16]; // [rsp+80h] [rbp-268h] BYREF
  void *v68; // [rsp+90h] [rbp-258h]
  _BYTE v69[16]; // [rsp+98h] [rbp-250h] BYREF
  void *v70; // [rsp+A8h] [rbp-240h]
  _BYTE v71[16]; // [rsp+B0h] [rbp-238h] BYREF
  void *v72; // [rsp+C0h] [rbp-228h]
  _BYTE v73[16]; // [rsp+C8h] [rbp-220h] BYREF
  void *v74; // [rsp+D8h] [rbp-210h]
  _BYTE v75[16]; // [rsp+E0h] [rbp-208h] BYREF
  void *Block; // [rsp+F0h] [rbp-1F8h]
  _BYTE v77[16]; // [rsp+F8h] [rbp-1F0h] BYREF
  void *v78; // [rsp+108h] [rbp-1E0h]
  _BYTE v79[16]; // [rsp+110h] [rbp-1D8h] BYREF
  void *v80; // [rsp+120h] [rbp-1C8h]
  _BYTE v81[16]; // [rsp+128h] [rbp-1C0h] BYREF
  void *v82; // [rsp+138h] [rbp-1B0h]
  _BYTE v83[16]; // [rsp+140h] [rbp-1A8h] BYREF
  void *v84; // [rsp+150h] [rbp-198h]
  __int64 v85; // [rsp+158h] [rbp-190h]
  _BYTE v86[24]; // [rsp+160h] [rbp-188h] BYREF
  _BYTE v87[24]; // [rsp+178h] [rbp-170h] BYREF
  _BYTE v88[24]; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v89[24]; // [rsp+1A8h] [rbp-140h] BYREF
  _BYTE v90[24]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v91[24]; // [rsp+1D8h] [rbp-110h] BYREF
  _BYTE v92[24]; // [rsp+1F0h] [rbp-F8h] BYREF
  _BYTE v93[24]; // [rsp+208h] [rbp-E0h] BYREF
  _BYTE v94[24]; // [rsp+220h] [rbp-C8h] BYREF
  _BYTE v95[24]; // [rsp+238h] [rbp-B0h] BYREF
  _BYTE v96[24]; // [rsp+250h] [rbp-98h] BYREF
  _BYTE v97[24]; // [rsp+268h] [rbp-80h] BYREF
  _BYTE v98[104]; // [rsp+280h] [rbp-68h] BYREF
  struct NodeSprite *v99; // [rsp+2F0h] [rbp+8h]
  struct NodeSprite *v101; // [rsp+300h] [rbp+18h]
  int *v102; // [rsp+308h] [rbp+20h]

  v85 = -2;
  Log(0x1000000u, L"Attach custom back");
  v3 = Str::Str((Str *)v86, L"/Shared/PanelCustomBottomCenterXml");
  XmlUtil::GetStrFromXml(v81, this + 4, v3);
  v4 = Str::Str((Str *)v93, L"/Shared/PanelCustomBottomLeftHorzXml");
  XmlUtil::GetStrFromXml(v61, this + 4, v4);
  v5 = Str::Str((Str *)v89, L"/Shared/PanelCustomBottomLeftVertXml");
  XmlUtil::GetStrFromXml(v77, this + 4, v5);
  v6 = Str::Str((Str *)v97, L"/Shared/PanelCustomBottomRightHorzXml");
  XmlUtil::GetStrFromXml(v73, this + 4, v6);
  v7 = Str::Str((Str *)v91, L"/Shared/PanelCustomBottomRightVertXml");
  XmlUtil::GetStrFromXml(v69, this + 4, v7);
  v8 = Str::Str((Str *)v95, L"/Shared/PanelCustomTopCenterXml");
  XmlUtil::GetStrFromXml(v65, this + 4, v8);
  v9 = Str::Str((Str *)v87, L"/Shared/PanelCustomTopLeftHorzXml");
  XmlUtil::GetStrFromXml(v63, this + 4, v9);
  v10 = Str::Str((Str *)v88, L"/Shared/PanelCustomTopLeftVertXml");
  XmlUtil::GetStrFromXml(v79, this + 4, v10);
  v11 = Str::Str((Str *)v90, L"/Shared/PanelCustomTopRightHorzXml");
  XmlUtil::GetStrFromXml(v71, this + 4, v11);
  v12 = Str::Str((Str *)v92, L"/Shared/PanelCustomTopRightVertXml");
  XmlUtil::GetStrFromXml(v83, this + 4, v12);
  v13 = Str::Str((Str *)v94, L"/Shared/PanelCustomCenterLeftXml");
  XmlUtil::GetStrFromXml(v67, this + 4, v13);
  v14 = Str::Str((Str *)v96, L"/Shared/PanelCustomCenterRightXml");
  XmlUtil::GetStrFromXml(v75, this + 4, v14);
  ChildPanelBackSprite = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v65);
  v58 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v81);
  v16 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v67);
  v17 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v75);
  v99 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v61);
  v18 = (int *)UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v77);
  v19 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v73);
  v59 = (int *)v19;
  v20 = (int *)UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v69);
  v101 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v63);
  v102 = (int *)UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v79);
  v21 = (int *)UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v71);
  v22 = UIBoardCanvas::createChildPanelBackSprite((UIBoardCanvas *)this, (struct Str *)v83);
  v60 = (int *)v22;
  if ( v58 && v99 && v18 && v19 && v20 && ChildPanelBackSprite && v101 && v102 && v21 && v22 && v16 && v17 )
  {
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v58);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v99);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v18);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v19);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v20);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)ChildPanelBackSprite);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v101);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v102);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v21);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v60);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v16);
    Array<IEventListener *>::Add((__int64)(this + 22), (__int64)v17);
    v23 = (int *)v58;
    NodeBase::SetSize(
      this[15],
      a2 * *((_DWORD *)this[7] + 4) + *((_DWORD *)v16 + 4) + *((_DWORD *)v17 + 4),
      *((_DWORD *)this[15] + 5));
    NodeBase::SetSize(this[15], *((_DWORD *)this[15] + 4), v24);
    NodeBase::SetPosition((NodeBase *)v23, *((_DWORD *)v99 + 4) + v18[4], v23[3]);
    NodeBase::SetPosition(v26, v23[2], v25 - v23[5]);
    NodeBase::SetPosition(v27, v18[4], *((_DWORD *)v27 + 3));
    NodeBase::SetPosition(v30, *(_DWORD *)(v29 + 8), v28 - *(_DWORD *)(v29 + 20));
    NodeBase::SetPosition((NodeBase *)v18, 0, v18[3]);
    NodeBase::SetPosition(v32, v18[2], v31 - v18[5]);
    NodeBase::SetPosition((NodeBase *)v59, v33 - v59[4] - v20[4], v59[3]);
    NodeBase::SetPosition(v36, *(_DWORD *)(v35 + 8), v34 - *(_DWORD *)(v35 + 20));
    NodeBase::SetPosition((NodeBase *)v20, v37 - v20[4], v20[3]);
    NodeBase::SetPosition(v39, v20[2], v38 - v20[5]);
    NodeBase::SetPosition(ChildPanelBackSprite, *((_DWORD *)v101 + 4), *((_DWORD *)ChildPanelBackSprite + 3));
    NodeBase::SetPosition(v40, *((_DWORD *)ChildPanelBackSprite + 2), 0);
    NodeBase::SetPosition(v41, 0, *((_DWORD *)v41 + 3));
    NodeBase::SetPosition(v43, *(_DWORD *)(v42 + 8), 0);
    NodeBase::SetPosition((NodeBase *)v102, 0, v102[3]);
    NodeBase::SetPosition(v45, v102[2], *(_DWORD *)(v44 + 20));
    NodeBase::SetPosition((NodeBase *)v21, v46 - v21[4], v21[3]);
    NodeBase::SetPosition(v47, v21[2], 0);
    NodeBase::SetPosition((NodeBase *)v60, v48 - v60[4], v60[3]);
    NodeBase::SetPosition(v49, v60[2], v21[5]);
    NodeBase::SetPosition(v16, 0, *((_DWORD *)v16 + 3));
    NodeBase::SetPosition(v51, *((_DWORD *)v16 + 2), *(_DWORD *)(v50 + 20) + v102[5]);
    NodeBase::SetPosition(v17, v52 - *((_DWORD *)v17 + 4), *((_DWORD *)v17 + 3));
    NodeBase::SetPosition(v53, *((_DWORD *)v17 + 2), v60[5] + v21[5]);
    NodeBase::SetSize(
      ChildPanelBackSprite,
      v21[2] - *((_DWORD *)ChildPanelBackSprite + 2),
      *((_DWORD *)ChildPanelBackSprite + 5));
    NodeBase::SetSize(v58, *(_DWORD *)(v54 + 8) - *((_DWORD *)v58 + 2), *((_DWORD *)v58 + 5));
    NodeBase::SetSize(v16, *((_DWORD *)v16 + 4), abs32(*((_DWORD *)v16 + 3) - v18[3]));
    NodeBase::SetSize(v17, *((_DWORD *)v17 + 4), v20[3] - *((_DWORD *)v17 + 3));
    operator delete(Block);
    operator delete(v68);
    operator delete(v84);
    operator delete(v72);
    operator delete(v80);
    operator delete(v64);
    operator delete(v66);
    operator delete(v70);
    operator delete(v74);
    operator delete(v78);
    operator delete(v62);
    operator delete(v82);
    return 1;
  }
  else
  {
    v56 = Str::Str((Str *)v98, L"Couldn't load custom back pieces");
    LOBYTE(v57) = 1;
    StrErr(v56, v57);
    operator delete(Block);
    operator delete(v68);
    operator delete(v84);
    operator delete(v72);
    operator delete(v80);
    operator delete(v64);
    operator delete(v66);
    operator delete(v70);
    operator delete(v74);
    operator delete(v78);
    operator delete(v62);
    operator delete(v82);
    return 0;
  }
}
