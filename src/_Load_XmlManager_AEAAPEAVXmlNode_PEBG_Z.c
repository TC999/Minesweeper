struct XmlNode *__fastcall XmlManager::Load(XmlManager *this, const unsigned __int16 *a2)
{
  __int64 v4; // rbp
  void *v5; // rdi
  XmlNode *v6; // rax
  XmlNode *v7; // rbx
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r12
  int cchWideChar; // r14d
  WCHAR *lpWideCharStr; // rax
  const unsigned __int16 *v13; // rbp
  XmlNode *v14; // rax
  unsigned __int16 *v15; // rcx
  WCHAR *v16; // rax
  const unsigned __int16 *v17; // r12
  XmlNode *v18; // rax
  int cbMultiByte; // [rsp+80h] [rbp+18h] BYREF
  void *Block; // [rsp+88h] [rbp+20h] BYREF

  if ( !Ober_ReadFile(a2, (unsigned __int8 **)&Block, (unsigned int *)&cbMultiByte) )
  {
    Log(0x400u, 203, "XmlManager.cpp", L"Couldn't load file from vfs: %s", a2);
    return 0;
  }
  v4 = (unsigned int)cbMultiByte;
  v5 = Block;
  if ( (unsigned int)cbMultiByte <= 2
    || *(_BYTE *)Block != 0xFF && *((_BYTE *)Block + 1) != 0xFF
    || *(_BYTE *)Block != 0xFE && *((_BYTE *)Block + 1) != 0xFE )
  {
    if ( (unsigned int)cbMultiByte > 3
      && *(_BYTE *)Block == 0xEF
      && *((_BYTE *)Block + 1) == 0xBB
      && *((_BYTE *)Block + 2) == 0xBF )
    {
      v8 = cbMultiByte - 3;
      v9 = MultiByteToWideChar(0xFDE9u, 0, (LPCCH)Block + 3, cbMultiByte - 3, 0, 0);
      v10 = v9;
      cchWideChar = v9 + 1;
      lpWideCharStr = (WCHAR *)operator new[](saturated_mul(v9 + 1, 2u));
      v13 = lpWideCharStr;
      if ( !lpWideCharStr )
        goto LABEL_14;
      MultiByteToWideChar(0xFDE9u, 0, (LPCCH)v5 + 3, v8, lpWideCharStr, cchWideChar);
      v13[v10] = 0;
      v14 = (XmlNode *)operator new(0x98u);
      if ( v14 )
        v7 = XmlNode::XmlNode(v14);
      else
        v7 = 0;
      if ( XmlNode::LoadXml(v7, v13, v10) )
      {
        XmlNode::SetNodeSourceFile(v7, a2);
      }
      else
      {
        Log(0x400u, 267, "XmlManager.cpp", L"Couldn't parse (ansi) xml: %s", a2);
        if ( v7 )
        {
          XmlNode::~XmlNode(v7);
          operator delete(v7);
        }
        v7 = 0;
      }
      v15 = (unsigned __int16 *)v13;
    }
    else
    {
      v16 = (WCHAR *)operator new[](saturated_mul((unsigned int)(cbMultiByte + 1), 2u));
      v17 = v16;
      if ( !v16 )
        goto LABEL_14;
      MultiByteToWideChar(0, 0, (LPCCH)v5, v4, v16, v4);
      v17[v4] = 0;
      v18 = (XmlNode *)operator new(0x98u);
      if ( v18 )
        v7 = XmlNode::XmlNode(v18);
      else
        v7 = 0;
      if ( XmlNode::LoadXml(v7, v17, v4 + 1) )
      {
        XmlNode::SetNodeSourceFile(v7, a2);
      }
      else
      {
        Log(0x400u, 305, "XmlManager.cpp", L"Couldn't parse (ansi) xml: %s", a2);
        if ( v7 )
        {
          XmlNode::~XmlNode(v7);
          operator delete(v7);
        }
        v7 = 0;
      }
      v15 = (unsigned __int16 *)v17;
    }
    operator delete(v15);
    goto LABEL_15;
  }
  v6 = (XmlNode *)operator new(0x98u);
  if ( v6 )
    v7 = XmlNode::XmlNode(v6);
  else
    v7 = 0;
  if ( XmlNode::LoadXml(v7, (const unsigned __int16 *)v5 + 1, (unsigned int)(v4 - 1) >> 1) )
  {
    XmlNode::SetNodeSourceFile(v7, a2);
    goto LABEL_15;
  }
  Log(0x400u, 224, "XmlManager.cpp", L"Couldn't parse (utf16) xml: %s", a2);
  if ( v7 )
  {
    XmlNode::~XmlNode(v7);
    operator delete(v7);
  }
LABEL_14:
  v7 = 0;
LABEL_15:
  operator delete(v5);
  return v7;
}
