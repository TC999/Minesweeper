// Hidden C++ exception states: #wind=6
void __fastcall Game::Save(Game *this, char a2, char a3)
{
  Game *v4; // rbx
  int v5; // r8d
  _DWORD *v6; // rcx
  int v7; // eax
  Str *v8; // rax
  __int64 v9; // rdx
  Str *v10; // rax
  __int64 v11; // rdx
  void *v12; // rbx
  XmlNode *v13; // rbx
  _BYTE v14[24]; // [rsp+30h] [rbp-C8h] BYREF
  void *v15; // [rsp+48h] [rbp-B0h]
  XmlNode *v16; // [rsp+50h] [rbp-A8h]
  _BYTE v17[40]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp-78h] BYREF
  void *v19; // [rsp+98h] [rbp-60h]
  void *Block; // [rsp+A0h] [rbp-58h]
  _BYTE v21[40]; // [rsp+A8h] [rbp-50h] BYREF
  _BYTE v22[40]; // [rsp+D0h] [rbp-28h] BYREF

  v4 = Game::G;
  if ( a3 )
  {
    v5 = *((_DWORD *)Game::G + 69);
    v6 = (_DWORD *)*((_QWORD *)Game::G + 3);
    v7 = v6[9];
    if ( v5 == v7 )
    {
      if ( v5 == 4 && v7 == 4 )
      {
        *((_DWORD *)Game::G + 70) = v6[4];
        *((_DWORD *)v4 + 71) = v6[3];
        *((_DWORD *)v4 + 72) = v6[2];
      }
    }
    else
    {
      *((_DWORD *)Game::G + 69) = v7;
    }
  }
  SerialXML::SerialXML((SerialXML *)v14);
  (**(void (__fastcall ***)(Game *, _BYTE *))Game::G)(Game::G, v14);
  if ( SerialXML::WriteFile((SerialXML *)v14, qword_1000AB390, 0x1Cu, 1) )
  {
    Game::SaveGameExplorerStatistics(v4);
  }
  else
  {
    v8 = Str::Str((Str *)v22, L"Couldn't write settings file");
    LOBYTE(v9) = 1;
    StrErr(v8, v9);
  }
  if ( a2 )
  {
    SerialXML::SerialXML((SerialXML *)v18);
    (***((void (__fastcall ****)(_QWORD, _BYTE *))v4 + 3))(*((_QWORD *)v4 + 3), v18);
    if ( !SerialXML::WriteFile((SerialXML *)v18, Source, 0x28u, 0) )
    {
      v10 = Str::Str((Str *)v22, L"Couldn't write game save file");
      LOBYTE(v11) = 1;
      StrErr(v10, v11);
    }
    v12 = Block;
    if ( Block )
    {
      XmlNode::~XmlNode((XmlNode *)Block);
      operator delete(v12);
      Block = 0;
    }
    Stash::~Stash((Stash *)v21);
    operator delete(v19);
  }
  v13 = v16;
  if ( v16 )
  {
    XmlNode::~XmlNode(v16);
    operator delete(v13);
    v16 = 0;
  }
  Stash::~Stash((Stash *)v17);
  operator delete(v15);
}
