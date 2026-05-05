struct NodeBase *__fastcall NodeBase::CreateFromXmlNode(const wchar_t **a1, struct NodeBase *a2)
{
  struct NodeBase *v2; // rdi
  unsigned __int16 *v5; // rbp
  NodeBase *v6; // rbx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  int v9; // r9d
  int v10; // r8d
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  unsigned int v13; // ecx
  RenderManager *v14; // rax
  void (__fastcall ***GameEvent)(_QWORD, __int64); // rdi
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
    return 0;
  if ( !a2 )
    v2 = (struct NodeBase *)*((_QWORD *)g_pRenderManager + 15);
  v5 = XmlNode::XPathAttributeSearchSingle((XmlNode *)a1, L"/@Type");
  if ( !v5 )
  {
    Log(0x100u, 337, "NodeBase.cpp", L"No type found in xml");
    return 0;
  }
  v6 = 0;
  v7 = 0;
  v16 = 0;
  if ( NodeBase::m_TypeList )
  {
    while ( 1 )
    {
      v8 = v5;
      do
      {
        v9 = *(unsigned __int16 *)((char *)v8 + (_BYTE *)qword_1000A6D38 + 48 * v7 - (_BYTE *)v5);
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      if ( !v10 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= NodeBase::m_TypeList )
        goto LABEL_15;
    }
    v6 = (NodeBase *)(*((__int64 (__fastcall **)(int *))qword_1000A6D38 + 6 * v7 + 5))(&v16);
  }
LABEL_15:
  operator delete(v5);
  if ( !v6 )
  {
    v11 = L"<no xml source file>";
    if ( a1[12] )
      v11 = a1[12];
    Log(0x100u, 360, "NodeBase.cpp", L"Unknown node type: %s, in xml: %s", v5, v11);
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(NodeBase *, const wchar_t **))(*(_QWORD *)v6 + 96LL))(v6, a1) )
  {
    v12 = L"<no xml source file>";
    if ( a1[12] )
      v12 = a1[12];
    Log(0x100u, 369, "NodeBase.cpp", L"Node Load() Failed for xml: %s", v12);
    (*(void (__fastcall **)(NodeBase *, __int64))(*(_QWORD *)v6 + 104LL))(v6, 1);
    return 0;
  }
  if ( v16 == 1 || v16 == 2 || !v16 )
    v13 = 0;
  else
    v13 = g_uiNextHandle++;
  *((_DWORD *)v6 + 17) = v13;
  if ( v2 )
    Array<IEventListener *>::Add((__int64)v2 + 80, (__int64)v6);
  v14 = g_pRenderManager;
  *((_QWORD *)v6 + 17) = v2;
  NodeBase::SetMaterial(v6, *(const struct Material **)(*((_QWORD *)v14 + 7) + 8LL));
  (**(void (***)(void))v6)();
  GameEvent = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(23);
  (*(void (__fastcall **)(NodeBase *, _QWORD))(*(_QWORD *)v6 + 16LL))(v6, GameEvent);
  if ( GameEvent )
    (**GameEvent)(GameEvent, 1);
  return v6;
}
