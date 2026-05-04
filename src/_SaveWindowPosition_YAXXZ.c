void SaveWindowPosition(void)
{
  XmlNode *v0; // rbp
  XmlNode *v1; // rax
  XmlNode *v2; // rbx
  XmlNode *v3; // rax
  XmlNode *v4; // r13
  XmlNode *v5; // rax
  struct XmlNode *v6; // rdi
  XmlNode *v7; // rax
  XmlNode *v8; // r15
  XmlNode *v9; // rax
  XmlNode *v10; // r14
  XmlNode *v11; // rax
  XmlNode *v12; // rsi
  bool v13; // cl
  const unsigned __int16 *v14; // rdx
  XmlNode *v15; // rax
  XmlNode *v16; // r12
  XmlNode *v17; // rax
  XmlNode *v18; // rax
  XmlNode *v19; // rax
  const unsigned __int16 *v20; // rdx
  wchar_t *v21; // rcx
  void *SpecialFolderFile; // rax
  void *v23; // rbx
  __int64 v24; // rbp
  void *v25; // rsi
  _BYTE v26[8]; // [rsp+30h] [rbp-A8h] BYREF
  void *Block; // [rsp+38h] [rbp-A0h] BYREF
  DWORD NumberOfBytesWritten; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-94h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-90h] BYREF
  struct XmlNode *v31; // [rsp+58h] [rbp-80h]
  WINDOWPLACEMENT wndpl; // [rsp+60h] [rbp-78h] BYREF
  wchar_t Buffer[12]; // [rsp+90h] [rbp-48h] BYREF

  v0 = 0;
  memset(&wndpl, 0, sizeof(wndpl));
  GetWindowPlacement(g_hWnd, &wndpl);
  v1 = (XmlNode *)operator new(0x98u);
  if ( v1 )
    v2 = XmlNode::XmlNode(v1);
  else
    v2 = 0;
  XmlNode::SetNodeName(v2, L"Root");
  v3 = (XmlNode *)operator new(0x98u);
  if ( v3 )
    v4 = XmlNode::XmlNode(v3);
  else
    v4 = 0;
  XmlNode::SetNodeName(v4, L"WindowX");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)wndpl.rcNormalPosition.left);
  XmlNode::SetNodeValue(v4, Buffer);
  v5 = (XmlNode *)operator new(0x98u);
  if ( v5 )
    v6 = XmlNode::XmlNode(v5);
  else
    v6 = 0;
  v31 = v6;
  XmlNode::SetNodeName(v6, L"WindowY");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)wndpl.rcNormalPosition.top);
  XmlNode::SetNodeValue(v6, Buffer);
  GetClientRect(g_hWnd, &Rect);
  GetWindowDimensionsFromContentAreaDimensions(
    Rect.right - Rect.left,
    Rect.bottom - Rect.top,
    &v29,
    (unsigned int *)&Block,
    g_hWnd,
    g_hWndStatus);
  wndpl.rcNormalPosition.right += Rect.right - Rect.left - v29;
  wndpl.rcNormalPosition.bottom += Rect.bottom - Rect.top - (_DWORD)Block;
  v7 = (XmlNode *)operator new(0x98u);
  if ( v7 )
    v8 = XmlNode::XmlNode(v7);
  else
    v8 = 0;
  XmlNode::SetNodeName(v8, L"WindowWidth");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)(wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left));
  XmlNode::SetNodeValue(v8, Buffer);
  v9 = (XmlNode *)operator new(0x98u);
  if ( v9 )
    v10 = XmlNode::XmlNode(v9);
  else
    v10 = 0;
  XmlNode::SetNodeName(v10, L"WindowHeight");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)(wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top));
  XmlNode::SetNodeValue(v10, Buffer);
  v11 = (XmlNode *)operator new(0x98u);
  if ( v11 )
    v12 = XmlNode::XmlNode(v11);
  else
    v12 = 0;
  XmlNode::SetNodeName(v12, L"Maximized");
  v13 = IsIconic(g_hWnd) && (wndpl.flags & 2) != 0 || IsZoomed(g_hWnd);
  v14 = L"0";
  if ( v13 )
    v14 = L"1";
  XmlNode::SetNodeValue(v12, v14);
  v15 = (XmlNode *)operator new(0x98u);
  if ( v15 )
    v16 = XmlNode::XmlNode(v15);
  else
    v16 = 0;
  XmlNode::SetNodeName(v16, L"MaxX");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)g_iMaximizedX);
  XmlNode::SetNodeValue(v16, Buffer);
  v17 = (XmlNode *)operator new(0x98u);
  if ( v17 )
    v0 = XmlNode::XmlNode(v17);
  XmlNode::SetNodeName(v0, L"MaxY");
  swprintf_s(Buffer, 0xAu, L"%d", (unsigned int)g_iMaximizedY);
  XmlNode::SetNodeValue(v0, Buffer);
  v18 = (XmlNode *)operator new(0x98u);
  if ( v18 )
    v19 = XmlNode::XmlNode(v18);
  else
    v19 = 0;
  Block = v19;
  XmlNode::SetNodeName(v19, L"LastInputKeyboard");
  v20 = L"false";
  if ( *((_BYTE *)g_pUserInterface + 300) )
    v20 = L"true";
  XmlNode::SetNodeValue((XmlNode *)Block, v20);
  XmlNode::InsertNode(v2, v4, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v31, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v8, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v10, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v12, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, (struct XmlNode *)Block, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v16, 0xFFFFFFFF);
  XmlNode::InsertNode(v2, v0, 0xFFFFFFFF);
  Block = 0;
  v29 = 0;
  XmlNode::PrintToString(v2, (unsigned __int16 **)&Block, &v29);
  if ( v2 )
  {
    XmlNode::~XmlNode(v2);
    operator delete(v2);
  }
  v21 = L"windowprefsMCE.xml";
  if ( !(_BYTE)g_bMediaCenter )
    v21 = (wchar_t *)L"windowprefs.xml";
  SpecialFolderFile = (void *)CreateSpecialFolderFile(v21, 0, 0x1Cu, 0, 0);
  v23 = SpecialFolderFile;
  if ( SpecialFolderFile == (void *)-1LL )
  {
    operator delete(Block);
    Log(0x800u, 2379, "Window.cpp", L"Couldn't open the window preferences file to save.");
  }
  else
  {
    NumberOfBytesWritten = 0;
    v26[0] = -1;
    v26[1] = -2;
    if ( WriteFile(SpecialFolderFile, v26, 2u, &NumberOfBytesWritten, 0) && NumberOfBytesWritten == 2 )
    {
      v24 = v29;
      v25 = Block;
      if ( WriteFile(v23, Block, 2 * v29, &NumberOfBytesWritten, 0) && NumberOfBytesWritten == 2 * v24 )
      {
        operator delete(v25);
      }
      else
      {
        operator delete(v25);
        Log(0x800u, 2402, "Window.cpp", L"Couldn't write the xml to the preferences file");
      }
    }
    else
    {
      operator delete(Block);
      Log(0x800u, 2392, "Window.cpp", L"Couldn't write the unicode byte order to the preferences file");
    }
    CloseSpecialFolderFile((__int64)v23, 0x1Cu, 1);
  }
}
