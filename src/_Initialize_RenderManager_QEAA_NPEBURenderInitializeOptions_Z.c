char __fastcall RenderManager::Initialize(RenderManager *this, const struct RenderInitializeOptions *a2)
{
  RenderManager *v2; // rbx
  _QWORD *v4; // r11
  _DWORD *v5; // rax
  UserInterface *v7; // rax
  UserInterface *v8; // r11
  __int64 v9; // rcx
  bool v10; // r10
  int v11; // r9d
  __int64 v12; // kr00_8
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  XmlNode *Xml; // rax
  XmlNode *v18; // rdi

  v2 = g_pRenderManager;
  v4 = operator new(0x18u);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
  }
  else
  {
    v4 = 0;
  }
  *((_QWORD *)v2 + 8) = v4;
  *v4 = *(_QWORD *)a2;
  v4[1] = *((_QWORD *)a2 + 1);
  v4[2] = *((_QWORD *)a2 + 2);
  Log(2u, 619, "RenderManager.cpp", L"Initialzing the text renderer");
  v5 = operator new(0x28u);
  if ( v5 )
  {
    *(_QWORD *)v5 = &TextRenderer::`vftable';
    v5[2] = 0;
    v5[3] = 0;
    *((_QWORD *)v5 + 3) = 0;
    v5[4] = 16;
  }
  else
  {
    v5 = 0;
  }
  g_pTextRenderer = (TextRenderer *)v5;
  if ( !RenderManager::RecreateAllResources(v2) && *((_DWORD *)v2 + 53) != 257 )
  {
    Log(2u, 632, "RenderManager.cpp", L"RecreateAllResources() failed");
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(TextRenderer *))(*(_QWORD *)g_pTextRenderer + 32LL))(g_pTextRenderer) )
  {
    Log(2u, 639, "RenderManager.cpp", L"Couldn't create Text Renderer");
    return 0;
  }
  *((_QWORD *)v2 + 15) = NodeBase::CreateFromType(L"Base", 0, 1);
  Log(2u, 649, "RenderManager.cpp", L"Initializing the user interface.");
  v7 = (UserInterface *)operator new(0x140u);
  if ( v7 )
    v8 = UserInterface::UserInterface(v7);
  else
    v8 = 0;
  v9 = *((_QWORD *)v2 + 8);
  v10 = g_bDoubleDPI;
  g_pUserInterface = v8;
  v11 = g_bDoubleDPI + 1;
  v12 = *(int *)(v9 + 8);
  *((_DWORD *)v8 + 65) = *(_DWORD *)(v9 + 12) / v11;
  *((_DWORD *)v8 + 64) = v12 / v11;
  v13 = *((_QWORD *)v2 + 8);
  v14 = *(_DWORD *)(v13 + 12) / v11;
  v15 = *(_DWORD *)(v13 + 8);
  *((_DWORD *)v8 + 71) = 0;
  *((_DWORD *)v8 + 72) = 0;
  *((_DWORD *)v8 + 74) = v14;
  *((_DWORD *)v8 + 73) = v15 / v11;
  v16 = *((_QWORD *)v2 + 15);
  if ( *(_BYTE *)(v16 + 144) != 1 )
  {
    *(_BYTE *)(v16 + 144) = 1;
    *(_DWORD *)(v16 + 192) = 59;
    UserInterface::Access_OnNodeAccessible(v8, (struct NodeBase *)v16);
    v10 = g_bDoubleDPI;
  }
  NodeBase::SetSize(
    *((NodeBase **)v2 + 15),
    *(_DWORD *)(*((_QWORD *)v2 + 8) + 8LL) / (v10 + 1),
    *(_DWORD *)(*((_QWORD *)v2 + 8) + 12LL) / (v10 + 1));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD))(**((_QWORD **)v2 + 10) + 344LL))(
    *((_QWORD *)v2 + 10),
    0,
    0,
    1,
    0,
    1065353216,
    0);
  Xml = XmlManager::GetXml(g_pXmlManager, L"engine.xml");
  v18 = Xml;
  if ( Xml )
  {
    g_bLogFillRate = (int)XmlNode::GetXmlInt(Xml, L"/LogFillRate", -1) > 0;
    *((_BYTE *)v2 + 166) = (int)XmlNode::GetXmlInt(v18, L"/ForceFilter", -1) > 0;
  }
  if ( !*((_DWORD *)v2 + 53) )
    *((_DWORD *)v2 + 53) = 4096;
  SetDPIFromWindowSize();
  return 1;
}
