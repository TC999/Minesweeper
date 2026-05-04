// Hidden C++ exception states: #wind=16
char __fastcall Game::Load(Game *this, char a2, char a3, char a4)
{
  _DWORD *v7; // rax
  unsigned __int16 *NodeValue; // rsi
  char v9; // r14
  XmlNode *v10; // rax
  const struct Str *v11; // rdi
  Str *v12; // rax
  bool v13; // al
  bool v14; // di
  Str *v15; // rax
  __int64 v16; // rdx
  XmlNode *v17; // rdi
  char v18; // r15
  char v19; // r13
  unsigned int v20; // ebp
  wchar_t *v21; // rax
  int v22; // ecx
  const WCHAR *CommandLineW; // rax
  LPWSTR *v24; // rax
  int v25; // r8d
  bool v26; // zf
  _WORD **v27; // rdx
  const wchar_t *v28; // rdi
  _WORD *v29; // rsi
  __int64 v30; // rcx
  XmlNode *v31; // rax
  unsigned __int16 *v32; // r12
  const struct Str *v33; // rdi
  Str *v34; // rax
  bool v35; // al
  bool v36; // di
  __int64 v37; // rdi
  const unsigned __int16 *v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  Str *v42; // rax
  bool v43; // di
  Board *v44; // rcx
  Str *v45; // rax
  __int64 v46; // rdx
  Board *v47; // rdi
  void *v48; // rcx
  unsigned int v49; // esi
  int v50; // r13d
  int v51; // r12d
  int v52; // ebp
  Board *v53; // rdi
  void *v54; // rcx
  void *v55; // rdi
  int v56; // eax
  __int64 v57; // rax
  XmlNode *v58; // rdi
  unsigned __int16 *v60; // [rsp+30h] [rbp-3F8h]
  bool v61; // [rsp+38h] [rbp-3F0h]
  int v63; // [rsp+54h] [rbp-3D4h]
  int v64; // [rsp+58h] [rbp-3D0h]
  int v65; // [rsp+5Ch] [rbp-3CCh]
  int pNumArgs[2]; // [rsp+60h] [rbp-3C8h] BYREF
  void *v67; // [rsp+68h] [rbp-3C0h]
  _BYTE v68[16]; // [rsp+70h] [rbp-3B8h] BYREF
  void *Block; // [rsp+80h] [rbp-3A8h]
  _BYTE v70[16]; // [rsp+88h] [rbp-3A0h] BYREF
  void *v71; // [rsp+98h] [rbp-390h]
  _BYTE v72[24]; // [rsp+A0h] [rbp-388h] BYREF
  void *v73; // [rsp+B8h] [rbp-370h]
  XmlNode *v74; // [rsp+C0h] [rbp-368h]
  _BYTE v75[40]; // [rsp+C8h] [rbp-360h] BYREF
  _BYTE v76[24]; // [rsp+F0h] [rbp-338h] BYREF
  void *v77; // [rsp+108h] [rbp-320h]
  XmlNode *v78; // [rsp+110h] [rbp-318h]
  _BYTE v79[40]; // [rsp+118h] [rbp-310h] BYREF
  _BYTE v80[16]; // [rsp+140h] [rbp-2E8h] BYREF
  void *v81; // [rsp+150h] [rbp-2D8h]
  __int64 v82; // [rsp+158h] [rbp-2D0h]
  _BYTE v83[16]; // [rsp+160h] [rbp-2C8h] BYREF
  void *v84; // [rsp+170h] [rbp-2B8h]
  _BYTE v85[24]; // [rsp+178h] [rbp-2B0h] BYREF
  _BYTE v86[16]; // [rsp+190h] [rbp-298h] BYREF
  void *v87; // [rsp+1A0h] [rbp-288h]
  _BYTE v88[24]; // [rsp+1A8h] [rbp-280h] BYREF
  _BYTE v89[32]; // [rsp+1C0h] [rbp-268h] BYREF
  wchar_t Destination[264]; // [rsp+1E0h] [rbp-248h] BYREF

  v82 = -2;
  v7 = (_DWORD *)*((_QWORD *)this + 3);
  LOBYTE(NodeValue) = 0;
  if ( v7 )
    v64 = v7[4];
  else
    v64 = *((_DWORD *)this + 70);
  if ( v7 )
    v65 = v7[3];
  else
    v65 = *((_DWORD *)this + 71);
  if ( v7 )
    LODWORD(v67) = v7[2];
  else
    LODWORD(v67) = *((_DWORD *)this + 72);
  if ( v7 )
    v63 = v7[9];
  else
    v63 = *((_DWORD *)this + 69);
  v9 = 0;
  if ( !a3 )
  {
    SerialXML::SerialXML((SerialXML *)v76);
    if ( SerialXML::FileExists((SerialXML *)v76, qword_1000AB390, 0x1Cu) )
    {
      if ( SerialXML::ReadFile((SerialXML *)v76, qword_1000AB390, 0x1Cu, 0)
        && (v10 = XmlNode::XPathElementSearchSingle(v78, L"/SaveVersion")) != 0 )
      {
        NodeValue = XmlNode::GetNodeValue(v10);
        v11 = (const struct Str *)Str::FromNumber(v70, 3);
        v12 = Str::Str((Str *)v68, NodeValue);
        if ( *((_QWORD *)v12 + 2) )
          v13 = Str::Equals(v12, v11);
        else
          v13 = 0;
        v14 = !v13;
        operator delete(Block);
        operator delete(v71);
        if ( v14 )
        {
          SerialXML::RemoveFile((SerialXML *)v76, qword_1000AB390, 0x1Cu);
        }
        else if ( (*(unsigned __int8 (__fastcall **)(Game *, _BYTE *, XmlNode *))(*(_QWORD *)this + 8LL))(
                    this,
                    v76,
                    v78) )
        {
          if ( *((_BYTE *)this + 269) && a2 )
          {
            Game::RandomizeArt(this, 0);
            v9 = 1;
          }
        }
        else
        {
          v15 = Str::Str((Str *)v80, L"Xml settings load failed");
          LOBYTE(v16) = 1;
          StrErr(v15, v16);
          SerialXML::RemoveFile((SerialXML *)v76, qword_1000AB390, 0x1Cu);
          LOBYTE(v60) = 1;
          DialogHelper::ShowMessageBox(0x66u, 0x6Du, 1u, 0xFFFEu, 0, 0, v60, v61);
          if ( Game::G )
          {
            Game::`scalar deleting destructor'(Game::G, 1u);
            Game::G = 0;
          }
          PostQuitMessage(1);
        }
        operator delete(NodeValue);
        LOBYTE(NodeValue) = 0;
      }
      else
      {
        SerialXML::RemoveFile((SerialXML *)v76, qword_1000AB390, 0x1Cu);
      }
    }
    v17 = v78;
    if ( v78 )
    {
      XmlNode::~XmlNode(v78);
      operator delete(v17);
      v78 = 0;
    }
    Stash::~Stash((Stash *)v79);
    operator delete(v77);
  }
  v18 = 0;
  v19 = 0;
  SerialXML::SerialXML((SerialXML *)v72);
  memset(Destination, 0, 520);
  v20 = 0;
  if ( GetCommandLineFilename(Destination, 0x104u) )
  {
    if ( !wcschr(Destination, 0x5Cu) && !wcschr(Destination, 0x2Fu) )
    {
      v21 = wcschr(Destination, 0x3Au);
      v22 = 0;
      if ( !v21 )
        v22 = 40;
      v20 = v22;
    }
  }
  else
  {
    wcscpy_s(Destination, 0x104u, Source);
    v20 = 40;
  }
  if ( !a3 || !SerialXML::FileExists((SerialXML *)v72, Destination, v20) )
    goto LABEL_83;
  CommandLineW = GetCommandLineW();
  pNumArgs[0] = 0;
  v24 = CommandLineToArgvW(CommandLineW, pNumArgs);
  v25 = 1;
  v26 = pNumArgs[0] == 1;
  if ( pNumArgs[0] > 1 )
  {
    v27 = v24 + 1;
    while ( 1 )
    {
      v28 = L"-newgame";
      v29 = *v27;
      v30 = 9;
      do
      {
        if ( !v30 )
          break;
        v26 = *v29++ == *v28++;
        --v30;
      }
      while ( v26 );
      if ( v26 )
        break;
      ++v25;
      ++v27;
      v26 = v25 == pNumArgs[0];
      if ( v25 >= pNumArgs[0] )
      {
        LOBYTE(NodeValue) = 0;
        goto LABEL_52;
      }
    }
    LocalFree(v24);
    LOBYTE(NodeValue) = 0;
    goto LABEL_83;
  }
LABEL_52:
  LocalFree(v24);
  if ( !SerialXML::ReadFile((SerialXML *)v72, Destination, v20, 0) )
  {
    SerialXML::RemoveFile((SerialXML *)v72, Destination, v20);
    goto LABEL_82;
  }
  v31 = XmlNode::XPathElementSearchSingle(v74, L"/SaveVersion");
  NodeValue = (unsigned __int16 *)v31;
  if ( !v31 )
  {
    SerialXML::RemoveFile((SerialXML *)v72, Destination, v20);
    Log(0x40000u, L"No version exists in save game -- creating new");
    goto LABEL_82;
  }
  v32 = XmlNode::GetNodeValue(v31);
  v33 = (const struct Str *)Str::FromNumber(v70, 3);
  v34 = Str::Str((Str *)v68, v32);
  if ( *((_QWORD *)v34 + 2) )
    v35 = Str::Equals(v34, v33);
  else
    v35 = 0;
  v36 = !v35;
  operator delete(Block);
  operator delete(v71);
  if ( v36 )
  {
    SerialXML::RemoveFile((SerialXML *)v72, Destination, v20);
    v19 = 1;
    Str::Str((Str *)v68, L") -- creating new");
    Str::Str((Str *)v70, L" vs ");
    v37 = Str::FromNumber(v80, 3);
    v38 = XmlNode::GetNodeValue((XmlNode *)NodeValue);
    Str::Str((Str *)v83, v38);
    v39 = (void **)operator+<unsigned short const *>((Str *)v88);
    v40 = (void **)operator+<Str>((Str *)v89, v39, (__int64)v70);
    v41 = (void **)operator+<Str>((Str *)v85, v40, v37);
    v42 = operator+<Str>((Str *)v86, v41, (__int64)v68);
    Log(0x40000u, *((const unsigned __int16 **)v42 + 2));
    operator delete(v87);
    operator delete(v84);
    operator delete(v81);
    operator delete(v71);
    operator delete(Block);
    LOBYTE(NodeValue) = 0;
  }
  else
  {
    LOBYTE(NodeValue) = 0;
    v43 = *((_BYTE *)this + 270) || GetCommandLineFilename(0, 0);
    if ( !*((_BYTE *)this + 270) && !GetCommandLineFilename(0, 0) )
    {
      UIDialogs::LoadOldBoard = 0;
      UIDialogs::StartLoadBoardDialog(g_hWnd);
      v43 = UIDialogs::LoadOldBoard;
    }
    if ( v43 )
    {
      v44 = (Board *)*((_QWORD *)this + 3);
      *((_DWORD *)v44 + 2) = 0;
      *((_DWORD *)v44 + 3) = 0;
      *((_DWORD *)v44 + 4) = 0;
      *((_DWORD *)v44 + 9) = 0;
      *((_DWORD *)v44 + 8) = 0;
      *((_DWORD *)v44 + 5) = 0;
      *((_DWORD *)v44 + 6) = 0;
      *((_DWORD *)v44 + 7) = 0;
      *((_DWORD *)v44 + 10) = 0;
      *((_DWORD *)v44 + 11) = 0;
      *((_DWORD *)v44 + 12) = 0;
      Board::freeRes(v44);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, XmlNode *))(**((_QWORD **)this + 3) + 8LL))(
             *((_QWORD *)this + 3),
             v72,
             v74)
        && Board::Validate(*((Board **)this + 3)) )
      {
        if ( (int)Board::GetNumTilesActuallyPlayed(*((Board **)this + 3)) > 0 && *((_BYTE *)this + 294) != 1 )
        {
          *((_BYTE *)this + 294) = 1;
          Engine_RegisterSecondTimer(Game::OnSecondElapsed);
        }
        v9 = 1;
        v18 = 1;
      }
      else
      {
        v45 = Str::Str((Str *)v85, L"Xml settings load failed");
        LOBYTE(v46) = 1;
        StrErr(v45, v46);
        SerialXML::RemoveFile((SerialXML *)v72, Destination, v20);
        v47 = (Board *)*((_QWORD *)this + 3);
        if ( v47 )
        {
          *(_QWORD *)pNumArgs = *((_QWORD *)this + 3);
          *(_QWORD *)v47 = &Board::`vftable';
          Board::freeRes(v47);
          v48 = (void *)*((_QWORD *)v47 + 9);
          if ( v48 )
            free(v48);
          operator delete(v47);
          *((_QWORD *)this + 3) = 0;
        }
        v19 = 1;
      }
    }
  }
  operator delete(v32);
  if ( !v18 )
  {
    if ( v19 != 1 )
    {
LABEL_83:
      if ( a4 != (_BYTE)NodeValue )
        UIDialogs::StartChooseDifficultyDialog();
      v49 = *((_DWORD *)this + 69);
      if ( v49 == 4 )
      {
        v50 = *((_DWORD *)this + 70);
        v51 = *((_DWORD *)this + 71);
        v52 = *((_DWORD *)this + 72);
      }
      else
      {
        v50 = EDifficultyToWidth(v49);
        v51 = EDifficultyToHeight(v49);
        v52 = EDifficultyToMineCount(v49);
      }
      if ( a4 || v49 != v63 || v50 != v64 || v51 != v65 || v52 != (_DWORD)v67 || !*((_QWORD *)this + 3) )
      {
        v53 = (Board *)*((_QWORD *)this + 3);
        if ( v53 )
        {
          v67 = (void *)*((_QWORD *)this + 3);
          *(_QWORD *)v53 = &Board::`vftable';
          Board::freeRes(v53);
          v54 = (void *)*((_QWORD *)v53 + 9);
          if ( v54 )
            free(v54);
          operator delete(v53);
          *((_QWORD *)this + 3) = 0;
        }
        v55 = operator new(0x60u);
        v67 = v55;
        if ( v55 )
        {
          v56 = time(0);
          v57 = Board::Board((__int64)v55, v49, v50, v51, v52, v56, -1, -1, 0);
        }
        else
        {
          v57 = 0;
        }
        *((_QWORD *)this + 3) = v57;
        v9 = 1;
      }
      Game::SaveGameExplorerStatistics(this);
      goto LABEL_103;
    }
LABEL_82:
    LOBYTE(v60) = 1;
    DialogHelper::ShowMessageBox(0x1784u, 0x1785u, 1u, 0xFFFFu, 0, 0, v60, v61);
    goto LABEL_83;
  }
LABEL_103:
  if ( v9 )
    Game::ResetCanvas(this);
  v58 = v74;
  if ( v74 )
  {
    XmlNode::~XmlNode(v74);
    operator delete(v58);
    v74 = 0;
  }
  Stash::~Stash((Stash *)v75);
  operator delete(v73);
  return v18;
}
