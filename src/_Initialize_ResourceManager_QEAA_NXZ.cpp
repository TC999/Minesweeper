char __fastcall ResourceManager::Initialize(ResourceManager *this)
{
  ResourceManager *v1; // rdi
  wchar_t *v2; // rax
  XmlNode *Xml; // rax
  const struct XmlNode **v4; // rax
  unsigned int v5; // r13d
  const struct XmlNode **v6; // r14
  XmlNode **v7; // rsi
  wchar_t *v8; // r15
  int v9; // eax
  const void **v10; // rbx
  __int64 v11; // r9
  int v12; // ebp
  int v13; // ebp
  void *v14; // rax
  size_t v15; // rcx
  void *v16; // rdi
  void *v17; // rax
  void *v18; // r12
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rdi
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  wchar_t *v25; // rdi
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r12
  void *v29; // rcx
  wchar_t *String; // [rsp+20h] [rbp-48h]
  wchar_t *v32; // [rsp+28h] [rbp-40h]
  unsigned int v33; // [rsp+78h] [rbp+10h] BYREF
  ResourceManager *v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v1 = g_pResourceManager;
  v34 = g_pResourceManager;
  if ( !ResourceBase::wszCache )
  {
    v2 = (wchar_t *)operator new[](0x64u);
    LODWORD(ResourceBase::CacheCch[0]) = 50;
    ResourceBase::wszCache = v2;
  }
  Xml = XmlManager::GetXml(g_pXmlManager, L"SplitList.xml");
  if ( Xml )
  {
    v33 = 0;
    v4 = XmlNode::XPathElementSearch(Xml, L"/Texture", &v33);
    v5 = 0;
    v6 = v4;
    if ( !v33 )
    {
LABEL_26:
      operator delete(v6);
      return 1;
    }
    v7 = v4;
    while ( 1 )
    {
      v8 = XmlNode::XPathAttributeSearchSingle(*v7, L"/@name");
      String = XmlNode::XPathAttributeSearchSingle(*v7, L"/@width");
      v32 = XmlNode::XPathAttributeSearchSingle(*v7, L"/@height");
      if ( !v8 )
        goto LABEL_25;
      LODWORD(v35) = wcstol(String, 0, 0);
      v9 = wcstol(v32, 0, 0);
      v10 = (const void **)((char *)v1 + 80);
      v11 = *((unsigned int *)v1 + 24);
      HIDWORD(v35) = v9;
      v12 = SortedListW<TipManager::TipInfo *>::BinSearch((char *)v1 + 80, v8, 0, v11);
      if ( v12 >= 0 )
        goto LABEL_25;
      v13 = ~v12;
      if ( (unsigned int)(*((_DWORD *)v1 + 24) + 1) >= *((_DWORD *)v1 + 25) )
      {
        if ( !*((_DWORD *)v1 + 25) )
          *((_DWORD *)v1 + 25) = 2;
        v14 = malloc(16LL * *((unsigned int *)v1 + 25));
        v15 = 16LL * *((unsigned int *)v1 + 25);
        v16 = v14;
        v17 = malloc(v15);
        v18 = v17;
        if ( !v17 || !v16 )
        {
          CheckAllocation(v17);
          v29 = v16;
LABEL_29:
          CheckAllocation(v29);
          goto LABEL_24;
        }
        memcpy(v16, *v10, 8LL * *((unsigned int *)v10 + 4));
        memcpy(v18, v10[1], 8LL * *((unsigned int *)v10 + 4));
        free((void *)*v10);
        free((void *)v10[1]);
        v19 = *((_DWORD *)v10 + 5);
        *v10 = v16;
        v10[1] = v18;
        *((_DWORD *)v10 + 5) = 2 * v19;
      }
      v20 = *((_DWORD *)v10 + 4) - 1;
      if ( v20 >= v13 )
      {
        v21 = 8LL * (int)v20;
        do
        {
          if ( v20 >= *((_DWORD *)v10 + 4) )
            break;
          --v20;
          *(_QWORD *)((char *)*v10 + v21 + 8) = *(_QWORD *)((char *)*v10 + v21);
          v22 = (char *)v10[1];
          v23 = *(_QWORD *)&v22[v21];
          v21 -= 8;
          *(_QWORD *)&v22[v21 + 16] = v23;
        }
        while ( v20 >= v13 );
      }
      ++*((_DWORD *)v10 + 4);
      v24 = -1;
      v25 = v8;
      do
      {
        if ( !v24 )
          break;
        v26 = *v25++ == 0;
        --v24;
      }
      while ( !v26 );
      v27 = ~v24;
      v28 = v27 - 1;
      *((_QWORD *)*v10 + v13) = malloc(8 * v27);
      v29 = (void *)*((_QWORD *)*v10 + v13);
      if ( !v29 )
        goto LABEL_29;
      wcscpy_s((wchar_t *)v29, v28 + 1, v8);
      *((_QWORD *)v10[1] + v13) = v35;
LABEL_24:
      v1 = v34;
LABEL_25:
      operator delete(v8);
      operator delete(String);
      operator delete(v32);
      ++v5;
      ++v7;
      if ( v5 >= v33 )
        goto LABEL_26;
    }
  }
  Log(4u, 79, "ResourceManager.cpp", L"No split list found.");
  return 1;
}
