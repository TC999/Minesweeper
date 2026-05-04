char __fastcall XmlNode::ParseXml(XmlNode *this, XmlNode *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int Open; // eax
  __int64 v8; // rdi
  const unsigned __int16 *v9; // r9
  int v10; // edx
  unsigned int v11; // edx
  unsigned __int16 *v12; // r10
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rax
  unsigned int v15; // r9d
  unsigned __int16 *v16; // rax
  int matched; // eax
  unsigned int v18; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r11
  unsigned __int16 *v24; // rax
  int v25; // eax
  unsigned int *v26; // r9
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // edx
  XmlNode *v30; // rax
  XmlNode *v31; // rcx
  unsigned int v32; // r8d
  unsigned __int16 *i; // rcx
  unsigned __int16 *v34; // rax
  unsigned __int16 *j; // rcx
  unsigned __int16 *v36; // rax
  void *v37; // rbx
  __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned __int16 *v40; // rdx
  int v41; // edi
  __int64 v42; // rax
  unsigned int v43; // r11d
  unsigned __int16 *v44; // r10
  unsigned int v45; // eax
  unsigned __int16 *v46; // rcx
  unsigned int v47; // edx
  unsigned __int16 *v48; // rax
  unsigned int v49; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-44h]
  unsigned int v51; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-3Ch]
  void *Block; // [rsp+40h] [rbp-38h] BYREF
  __int64 v54; // [rsp+48h] [rbp-30h]
  __int64 v55; // [rsp+50h] [rbp-28h]

  v4 = 0;
  if ( !a3 || (Open = XmlNode::FindOpen(a2, (unsigned __int16 *)a3, &v49, a4), v8 = Open, v52 = Open, Open == -1) )
  {
    v9 = L"Couldn't find root element near: %.20s";
    v10 = 992;
    goto LABEL_105;
  }
  if ( Open == a3 - 1 )
  {
    v9 = L"Couldn't find valid root element near %.02s";
    v10 = 1013;
LABEL_105:
    Log(0x400u, v10, "XmlNode.cpp", v9, a2);
    goto LABEL_106;
  }
  v11 = v49;
  v12 = (unsigned __int16 *)((char *)a2 + 2 * Open);
  v54 = Open;
  v13 = 0;
  Block = v12;
  if ( !v49 )
    goto LABEL_10;
  v14 = (unsigned __int16 *)((char *)a2 + 2 * Open);
  while ( *v14 == 32 || *v14 == 60 )
  {
    ++v13;
    ++v14;
    if ( v13 >= v49 )
      goto LABEL_10;
  }
  if ( !v13 || (v15 = v13, v13 >= v49) )
  {
LABEL_10:
    Log(0x400u, 1026, "XmlNode.cpp", L"Couldn't find name of element near: %.20s", (char *)a2 + 2 * v8);
LABEL_106:
    *a4 = 0;
    return 0;
  }
  v16 = &v12[v13];
  while ( *v16 != 32 && *v16 != 62 && *v16 != 47 )
  {
    ++v15;
    ++v16;
    if ( v15 >= v49 )
      goto LABEL_10;
  }
  *((_DWORD *)this + 18) = v15 - v13;
  *((_QWORD *)this + 8) = &v12[v13];
  *((_BYTE *)this + 48) = 0;
  matched = XmlNode::MatchTag(this, (unsigned __int16 *)a2 + v8, a3 - (unsigned int)v8, v11);
  if ( matched == -1 )
  {
    Log(0x400u, 1041, "XmlNode.cpp", L"Couldn't match root element near: %.20s", Block);
    goto LABEL_106;
  }
  v50 = v8 + matched;
  if ( !XmlNode::ParseAttributes(this, (unsigned __int16 *)Block, v49) )
  {
    Log(0x400u, 1058, "XmlNode.cpp", L"Couldn't parse attributes near: %.20s", Block);
    goto LABEL_106;
  }
  if ( *((_BYTE *)this + 48) )
  {
    v18 = v49 + v8;
    *((_DWORD *)this + 36) = a3;
    *a4 = v18;
    goto LABEL_25;
  }
  v20 = v50;
  v21 = v49;
  v22 = v49 + (unsigned int)v8;
  v23 = (int)v50;
  v55 = (int)v50;
  if ( (_DWORD)v22 == v50 )
  {
    if ( a3 == v50 )
    {
LABEL_31:
      v25 = -1;
    }
    else
    {
      v24 = (unsigned __int16 *)((char *)a2 + 2 * (int)v50);
      while ( *v24 != 62 )
      {
        ++v4;
        ++v24;
        if ( v4 >= a3 - v50 )
          goto LABEL_31;
      }
      v25 = v4 + 2;
    }
    *((_BYTE *)this + 48) = 1;
    *a4 = v25 + v20 - 1;
    *((_DWORD *)this + 36) = a3;
    goto LABEL_25;
  }
  if ( (unsigned int)v22 > v50 )
    goto LABEL_106;
  v26 = (unsigned int *)(v50 - v49 - v52);
  v52 = (unsigned int)v26;
  if ( !(_DWORD)v26 )
  {
LABEL_80:
    v39 = 0;
    if ( a3 == v20 )
    {
LABEL_84:
      v41 = -1;
    }
    else
    {
      v40 = (unsigned __int16 *)((char *)a2 + 2 * v23);
      while ( *v40 != 62 )
      {
        ++v39;
        ++v40;
        if ( v39 >= a3 - v20 )
          goto LABEL_84;
      }
      v41 = v39 + 2;
    }
    v42 = v54 + v21;
    v43 = -1;
    *((_BYTE *)this + 48) = 1;
    v44 = (unsigned __int16 *)((char *)a2 + 2 * v42);
    v45 = 0;
    if ( (_DWORD)v26 )
    {
      v46 = v44;
      while ( *v46 == 32 || *v46 == 10 || *v46 == 13 )
      {
        ++v45;
        ++v46;
        if ( v45 >= (unsigned int)v26 )
          goto LABEL_94;
      }
      *((_BYTE *)this + 48) = 0;
      v43 = v45;
    }
LABEL_94:
    if ( !*((_BYTE *)this + 48) )
    {
      v47 = (_DWORD)v26 - 1;
      if ( !(_DWORD)v26 )
      {
LABEL_101:
        Log(0x400u, 1119, "XmlNode.cpp", L"Malformed node interior near: %.20s", v44);
        goto LABEL_106;
      }
      v48 = &v44[v47];
      while ( *v48 == 32 || *v48 == 10 || *v48 == 13 )
      {
        --v47;
        --v48;
        if ( v47 >= (unsigned int)v26 )
          goto LABEL_101;
      }
      *((_QWORD *)this + 15) = &v44[v43];
      *((_DWORD *)this + 32) = v47 - v43 + 1;
    }
    *a4 = v41 + v20 - 1;
    *((_DWORD *)this + 36) = a3;
LABEL_25:
    *((_QWORD *)this + 17) = a2;
    return 1;
  }
  v27 = XmlNode::FindOpen(
          (XmlNode *)((char *)a2 + 2 * v54 + 2 * v49),
          (unsigned __int16 *)(unsigned int)v26,
          &Block,
          v26);
  v28 = -1;
  if ( v27 == -1 )
  {
    v21 = v49;
    v20 = v50;
    LODWORD(v26) = v52;
    v23 = v55;
    goto LABEL_80;
  }
  v29 = v50;
  v51 = 0;
  if ( (unsigned int)v22 >= v50 )
  {
LABEL_71:
    if ( a3 != v29 )
    {
      v36 = (unsigned __int16 *)((char *)a2 + 2 * (int)v29);
      while ( *v36 != 62 )
      {
        ++v4;
        ++v36;
        if ( v4 >= a3 - v29 )
          goto LABEL_78;
      }
      v28 = v4 + 2;
    }
LABEL_78:
    *((_DWORD *)this + 36) = a3;
    *a4 = v28 + v29 - 1;
    goto LABEL_25;
  }
  while ( 2 )
  {
    v30 = (XmlNode *)operator new(0x98u);
    if ( v30 )
      v31 = XmlNode::XmlNode(v30);
    else
      v31 = 0;
    v32 = v50 - v22;
    Block = v31;
    *((_BYTE *)v31 + 80) = 0;
    if ( XmlNode::ParseXml(v31, (unsigned __int16 *)a2 + v22, v32, &v51) )
    {
      Array<IEventListener *>::Add((__int64)this + 24, (__int64)Block);
      v22 = v51 + (unsigned int)v22;
      v29 = v50;
      for ( i = (unsigned __int16 *)((char *)a2 + 2 * (int)v22);
            (*i == 32 || *i == 9 || *i == 10 || *i == 13) && (unsigned int)v22 < v50;
            ++i )
      {
        v22 = (unsigned int)(v22 + 1);
      }
      if ( v50 - (unsigned int)v22 > 7
        && *((_WORD *)a2 + v22) == 60
        && *((_WORD *)a2 + (unsigned int)(v22 + 1)) == 33
        && *((_WORD *)a2 + (unsigned int)(v22 + 2)) == 45
        && *((_WORD *)a2 + (unsigned int)(v22 + 3)) == 45 )
      {
        v22 = (unsigned int)(v22 + 4);
        if ( (unsigned int)v22 < v50 - 3 )
        {
          v34 = (unsigned __int16 *)((char *)a2 + 2 * (int)v22 + 4);
          while ( *(v34 - 2) != 45 || *(v34 - 1) != 45 || *v34 != 62 )
          {
            v22 = (unsigned int)(v22 + 1);
            ++v34;
            if ( (unsigned int)v22 >= v50 - 3 )
              goto LABEL_62;
          }
          v22 = (unsigned int)(v22 + 3);
        }
      }
LABEL_62:
      for ( j = (unsigned __int16 *)((char *)a2 + 2 * (int)v22); *j == 32 || *j == 9 || *j == 10 || *j == 13; ++j )
      {
        if ( (unsigned int)v22 >= v50 )
          goto LABEL_70;
        v22 = (unsigned int)(v22 + 1);
      }
      if ( (unsigned int)v22 < v50 )
        continue;
LABEL_70:
      v28 = -1;
      goto LABEL_71;
    }
    break;
  }
  Log(0x400u, 1155, "XmlNode.cpp", L"Couldn't parse inner node near: %.20s", (char *)a2 + 2 * v22);
  *a4 = 0;
  v37 = Block;
  XmlNode::~XmlNode((void **)Block, v38);
  operator delete(v37);
  return 0;
}
