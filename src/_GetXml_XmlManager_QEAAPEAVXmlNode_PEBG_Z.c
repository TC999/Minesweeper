struct XmlNode *__fastcall XmlManager::GetXml(XmlManager *this, const unsigned __int16 *a2)
{
  XmlManager *v2; // rbx
  __int64 v5; // rcx
  char ***v6; // rdi
  char *v7; // rdx
  char *v8; // r9
  int v9; // r8d
  int v10; // eax
  XmlNode *v11; // rbp
  wchar_t **v12; // rax
  wchar_t **v13; // rsi
  __int64 v14; // rcx
  const unsigned __int16 *v15; // rdi
  bool v16; // zf
  unsigned __int64 v17; // rdi
  wchar_t *v18; // rax
  wchar_t *v19; // rdi
  unsigned int v20; // ecx
  __int64 v21; // rdx
  void *v22; // rax

  v2 = g_pXmlManager;
  if ( !a2 )
  {
    Log(0x400u, 89, "XmlManager.cpp", L"Zero passed in to GetXml.");
    return 0;
  }
  v5 = 0;
  if ( !*(_DWORD *)g_pXmlManager )
  {
LABEL_11:
    v11 = XmlManager::Load(g_pXmlManager, a2);
    if ( !v11 )
    {
      Log(0x400u, 113, "XmlManager.cpp", L"Failed to load xml file: %s", a2);
      return 0;
    }
    v12 = (wchar_t **)operator new(0x10u);
    v13 = v12;
    if ( v12 )
    {
      *v12 = 0;
      v12[1] = 0;
    }
    else
    {
      v13 = 0;
    }
    if ( !v13 )
    {
LABEL_18:
      XmlNode::~XmlNode(v11);
      operator delete(v11);
      return 0;
    }
    v13[1] = (wchar_t *)v11;
    v14 = -1;
    v15 = a2;
    do
    {
      if ( !v14 )
        break;
      v16 = *v15++ == 0;
      --v14;
    }
    while ( !v16 );
    v17 = (unsigned int)~(_DWORD)v14;
    v18 = (wchar_t *)operator new[](saturated_mul(v17, 2u));
    *v13 = v18;
    if ( !v18 )
    {
      v19 = v13[1];
      if ( v19 )
      {
        XmlNode::~XmlNode((XmlNode *)v13[1]);
        operator delete(v19);
      }
      operator delete(*v13);
      operator delete(v13);
      goto LABEL_18;
    }
    wcscpy_s(v18, v17, a2);
    v20 = *((_DWORD *)v2 + 1);
    if ( ++*(_DWORD *)v2 > v20 )
    {
      v21 = *((_DWORD *)v2 + 2) + v20;
      *((_DWORD *)v2 + 1) = v21;
      v22 = realloc(*((void **)v2 + 2), 8 * v21);
      if ( !v22 )
      {
        CheckAllocation(0);
        return v11;
      }
      *((_QWORD *)v2 + 2) = v22;
    }
    *(_QWORD *)(*((_QWORD *)v2 + 2) + 8LL * (unsigned int)(*(_DWORD *)v2 - 1)) = v13;
    return v11;
  }
  v6 = (char ***)*((_QWORD *)g_pXmlManager + 2);
  while ( 1 )
  {
    v7 = **v6;
    v8 = (char *)((char *)a2 - v7);
    do
    {
      v9 = *(unsigned __int16 *)&v8[(_QWORD)v7];
      v10 = *(unsigned __int16 *)v7 - v9;
      if ( v10 )
        break;
      v7 += 2;
    }
    while ( v9 );
    if ( !v10 )
      return *(struct XmlNode **)(*(_QWORD *)(*((_QWORD *)g_pXmlManager + 2) + 8 * v5) + 8LL);
    v5 = (unsigned int)(v5 + 1);
    ++v6;
    if ( (unsigned int)v5 >= *(_DWORD *)g_pXmlManager )
      goto LABEL_11;
  }
}
