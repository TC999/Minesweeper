// Hidden C++ exception states: #wind=4
char __fastcall Game::GetCanvasDimensions(Game *this, unsigned int *a2, int *a3)
{
  Game *v4; // r12
  char v5; // bl
  Str *v6; // rax
  __int64 XmlStr; // rax
  XmlNode *Xml; // r14
  Str *v9; // rax
  __int64 v10; // rax
  XmlNode *v11; // rbp
  Str *v12; // rax
  __int64 v13; // rax
  XmlNode *v14; // rdi
  Str *v15; // rax
  __int64 v16; // rax
  XmlNode *v17; // rsi
  unsigned int XmlUInt; // r13d
  int v19; // ebx
  unsigned int v20; // esi
  unsigned int v21; // esi
  int v22; // edi
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  __int64 v26; // [rsp+20h] [rbp-F8h]
  __int64 v27; // [rsp+20h] [rbp-F8h]
  __int64 v28; // [rsp+20h] [rbp-F8h]
  _BYTE v29[16]; // [rsp+28h] [rbp-F0h] BYREF
  void *v30; // [rsp+38h] [rbp-E0h]
  _BYTE v31[16]; // [rsp+40h] [rbp-D8h] BYREF
  void *v32; // [rsp+50h] [rbp-C8h]
  _BYTE v33[16]; // [rsp+58h] [rbp-C0h] BYREF
  void *v34; // [rsp+68h] [rbp-B0h]
  _BYTE v35[16]; // [rsp+70h] [rbp-A8h] BYREF
  void *Block; // [rsp+80h] [rbp-98h]
  __int64 v37; // [rsp+88h] [rbp-90h] BYREF
  _BYTE v38[24]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v39[24]; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE v40[32]; // [rsp+D0h] [rbp-48h] BYREF

  v4 = Game::G;
  v5 = 0;
  v6 = Str::Str((Str *)&v37, &String);
  XmlStr = XmlNode::GetXmlStr(*((_QWORD *)v4 + 4), v35, L"/Shared/PanelCustomBottomCenterXml", v6, -2);
  Xml = XmlManager::GetXml(g_pXmlManager, *(const unsigned __int16 **)(XmlStr + 16));
  operator delete(Block);
  v9 = Str::Str((Str *)v39, &String);
  v10 = XmlNode::GetXmlStr(*((_QWORD *)v4 + 4), v33, L"/Shared/PanelCustomTopCenterXml", v9, v26);
  v11 = XmlManager::GetXml(g_pXmlManager, *(const unsigned __int16 **)(v10 + 16));
  operator delete(v34);
  v12 = Str::Str((Str *)v38, &String);
  v13 = XmlNode::GetXmlStr(*((_QWORD *)v4 + 4), v31, L"/Shared/PanelCustomCenterLeftXml", v12, v27);
  v14 = XmlManager::GetXml(g_pXmlManager, *(const unsigned __int16 **)(v13 + 16));
  operator delete(v32);
  v15 = Str::Str((Str *)v40, &String);
  v16 = XmlNode::GetXmlStr(*((_QWORD *)v4 + 4), v29, L"/Shared/PanelCustomCenterRightXml", v15, v28);
  v17 = XmlManager::GetXml(g_pXmlManager, *(const unsigned __int16 **)(v16 + 16));
  operator delete(v30);
  XmlUInt = XmlNode::GetXmlUInt(*((XmlNode **)v4 + 4), L"/Shared/TileSizePixels", 0xFFFFFFFF);
  if ( Xml && v11 && v14 && v17 )
  {
    v19 = *(_DWORD *)(*((_QWORD *)v4 + 3) + 16LL);
    v20 = XmlNode::GetXmlUInt(v17, L"/SourceWidth", 0);
    v21 = XmlUInt * v19 + XmlNode::GetXmlUInt(v14, L"/SourceWidth", 0) + v20;
    v22 = *(_DWORD *)(*((_QWORD *)v4 + 3) + 12LL);
    v23 = XmlNode::GetXmlUInt(v11, L"/SourceHeight", 0);
    v24 = XmlNode::GetXmlUInt(Xml, L"/SourceHeight", 0) + v23;
    *a2 = v21;
    *a3 = XmlUInt * v22 + v24;
    return 1;
  }
  return v5;
}
