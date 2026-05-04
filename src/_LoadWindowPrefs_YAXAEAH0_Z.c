void __fastcall LoadWindowPrefs(int *a1, int *a2)
{
  wchar_t *v4; // rcx
  void *SpecialFolderFile; // rax
  void *v6; // r12
  DWORD FileSize; // edi
  void *v8; // rax
  void *v9; // r13
  XmlNode *v10; // rax
  XmlNode *v11; // rbx
  bool XmlBool; // al
  HWND WindowW; // rdi
  HMONITOR v14; // rax
  LONG top; // eax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-48h] BYREF
  DWORD NumberOfBytesRead; // [rsp+90h] [rbp+18h] BYREF

  v4 = L"windowprefsMCE.xml";
  if ( !(_BYTE)g_bMediaCenter )
    v4 = (wchar_t *)L"windowprefs.xml";
  SpecialFolderFile = (void *)CreateSpecialFolderFile(v4, 1, 0x1Cu, 0, 0);
  v6 = SpecialFolderFile;
  if ( SpecialFolderFile != (void *)-1LL )
  {
    FileSize = GetFileSize(SpecialFolderFile, 0);
    v8 = operator new[](FileSize);
    NumberOfBytesRead = 0;
    v9 = v8;
    if ( !ReadFile(v6, v8, FileSize, &NumberOfBytesRead, 0) || NumberOfBytesRead != FileSize )
      goto LABEL_26;
    v10 = (XmlNode *)operator new(0x98u);
    if ( v10 )
      v11 = XmlNode::XmlNode(v10);
    else
      v11 = 0;
    if ( !XmlNode::LoadXmlRaw(v11, (LPCCH)v9, FileSize) )
    {
LABEL_24:
      operator delete(v9);
      if ( v11 )
      {
        XmlNode::~XmlNode(v11);
        operator delete(v11);
      }
LABEL_26:
      CloseSpecialFolderFile((__int64)v6, 0x1Cu, 1);
      return;
    }
    winPrefs::iX = XmlNode::GetXmlInt(v11, L"/WindowX", -1);
    winPrefs::iY = XmlNode::GetXmlInt(v11, L"/WindowY", -1);
    winPrefs::iMaxX = XmlNode::GetXmlInt(v11, L"/MaxX", 0);
    winPrefs::iMaxY = XmlNode::GetXmlInt(v11, L"/MaxY", 0);
    winPrefs::uiWidth = XmlNode::GetXmlUInt(v11, L"/WindowWidth", 0xFFFFFFFF);
    winPrefs::uiHeight = XmlNode::GetXmlUInt(v11, L"/WindowHeight", 0xFFFFFFFF);
    if ( !(_BYTE)g_bMediaCenter )
      g_bMaximizeInitial = XmlNode::GetXmlUInt(v11, L"/Maximized", 0) != 0;
    XmlBool = XmlNode::GetXmlBool(v11, L"/LastInputKeyboard", 1);
    if ( g_pUserInterface )
      *((_BYTE *)g_pUserInterface + 300) = XmlBool;
    UserInterface::m_bDefaultLastInputKeyboard = XmlBool;
    if ( winPrefs::uiWidth == -1 || winPrefs::uiHeight == -1 )
    {
      winPrefs::uiWidth = g_uiLayoutX;
      winPrefs::uiHeight = g_uiLayoutY;
    }
    if ( (_BYTE)g_bMediaCenter )
    {
      WindowW = FindWindowW(L"eHome Render Window", 0);
      if ( WindowW )
      {
        memset(&mi.rcMonitor, 0, 0x24u);
        mi.cbSize = 40;
        v14 = MonitorFromWindow(WindowW, 2u);
        GetMonitorInfoW(v14, &mi);
        top = mi.rcMonitor.top;
        *a1 = mi.rcMonitor.left;
LABEL_23:
        *a2 = top;
        winPrefs::bUseDefault = 0;
        goto LABEL_24;
      }
    }
    else if ( !g_bMaximizeInitial )
    {
      *a1 = winPrefs::iX;
      top = winPrefs::iY;
      goto LABEL_23;
    }
    *a1 = winPrefs::iMaxX;
    top = winPrefs::iMaxY;
    goto LABEL_23;
  }
}
