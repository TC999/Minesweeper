bool __fastcall XmlNode::LoadXmlRaw(XmlNode *this, LPCCH lpMultiByteStr, unsigned int cbMultiByte)
{
  int v7; // ebp
  const CHAR *v8; // r12
  unsigned int v9; // eax
  __int64 cchWideChar; // rbx
  unsigned int v11; // esi
  WCHAR *lpWideCharStr; // rdi
  bool Xml; // al
  void *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // r12d
  WCHAR *v18; // rax
  const unsigned __int16 *v19; // rsi
  bool v20; // bl
  WCHAR WideCharStr; // [rsp+70h] [rbp+18h] BYREF

  if ( cbMultiByte > 2 && *lpMultiByteStr == -1 && lpMultiByteStr[1] == -2 )
    return XmlNode::LoadXml(this, (const unsigned __int16 *)lpMultiByteStr + 1, (cbMultiByte >> 1) - 1);
  if ( cbMultiByte > 3 && *lpMultiByteStr == -17 && lpMultiByteStr[1] == -69 && lpMultiByteStr[2] == -65 )
  {
    v7 = cbMultiByte - 3;
    v8 = lpMultiByteStr + 3;
    v9 = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr + 3, cbMultiByte - 3, &WideCharStr, 0);
    cchWideChar = v9;
    v11 = v9 + 1;
    lpWideCharStr = (WCHAR *)operator new(saturated_mul(v9 + 1, 2u));
    MultiByteToWideChar(0xFDE9u, 0, v8, v7, lpWideCharStr, cchWideChar);
    lpWideCharStr[cchWideChar] = 0;
    Xml = XmlNode::LoadXml(this, lpWideCharStr, v11);
    v14 = lpWideCharStr;
  }
  else
  {
    v15 = MultiByteToWideChar(0, 0, lpMultiByteStr, cbMultiByte, 0, 0);
    v16 = v15;
    v17 = v15 + 1;
    v18 = (WCHAR *)operator new(saturated_mul(v15 + 1, 2u));
    v19 = v18;
    if ( !v18 )
      return 0;
    MultiByteToWideChar(0, 0, lpMultiByteStr, cbMultiByte, v18, v16);
    v19[v16] = 0;
    Xml = XmlNode::LoadXml(this, v19, v17);
    v14 = (void *)v19;
  }
  v20 = Xml;
  operator delete(v14);
  return v20;
}
