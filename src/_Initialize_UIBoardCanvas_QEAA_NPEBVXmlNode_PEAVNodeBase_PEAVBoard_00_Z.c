bool __fastcall UIBoardCanvas::Initialize(
        UIBoardCanvas *this,
        const struct XmlNode *a2,
        struct NodeBase *a3,
        struct Board *a4,
        const struct XmlNode *a5,
        const struct XmlNode *a6)
{
  struct NodeBase *v10; // rax
  __int64 v11; // rdx
  UserInterface *v12; // rcx
  __int64 v13; // rdx
  UserInterface *v14; // rcx
  char v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]

  Log(0x1000000u, L"Initializing UIBoardCanvas");
  *((_BYTE *)this + 276) = 1;
  *((_QWORD *)this + 14) = NodeBase::CreateFromType(L"Base", a3, 1);
  v10 = NodeBase::CreateFromType(L"Base", a3, 1);
  v11 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 18) = v10;
  if ( *(_BYTE *)(v11 + 144) )
  {
    v12 = g_pUserInterface;
    *(_BYTE *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 192) = 59;
    UserInterface::Access_ClipNode(v12, (struct NodeBase *)v11);
  }
  v13 = *((_QWORD *)this + 18);
  if ( *(_BYTE *)(v13 + 144) )
  {
    v14 = g_pUserInterface;
    *(_BYTE *)(v13 + 144) = 0;
    *(_DWORD *)(v13 + 192) = 59;
    UserInterface::Access_ClipNode(v14, (struct NodeBase *)v13);
  }
  *((_QWORD *)this + 4) = a2;
  v17 = 0;
  v16 = 0;
  return (unsigned __int8)UIBoardCanvas::Reset(this, a4, a5, a6, *((_DWORD *)a4 + 9), v16, v17) != 0;
}
