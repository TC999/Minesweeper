// Hidden C++ exception states: #wind=8
void __fastcall TipManager::parseXml(TipManager *this, const struct XmlNode *a2)
{
  TipManager *v2; // rbp
  const struct XmlNode **v3; // rax
  unsigned int v4; // r13d
  XmlNode **v5; // r15
  XmlNode *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  Str *v9; // rax
  __int64 XmlStr; // rax
  Str *v11; // rax
  __int64 v12; // rax
  Str *v13; // rax
  __int64 v14; // rax
  Str *v15; // rax
  Str *v16; // rax
  bool v17; // di
  Str *v18; // rax
  Str *v19; // rax
  bool v20; // di
  Str *v21; // rax
  bool v22; // di
  bool v23; // di
  const wchar_t *v24; // r14
  char *v25; // rsi
  int v26; // ebp
  int v27; // ebp
  void *v28; // rdi
  void *v29; // rax
  void *v30; // r12
  unsigned int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // rcx
  const wchar_t *v34; // rdi
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // r12
  wchar_t **v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-98h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+20h] [rbp-98h]
  __int64 v43; // [rsp+20h] [rbp-98h]
  _BYTE v44[16]; // [rsp+28h] [rbp-90h] BYREF
  void *v45; // [rsp+38h] [rbp-80h]
  _BYTE v46[16]; // [rsp+40h] [rbp-78h] BYREF
  void *Block; // [rsp+50h] [rbp-68h]
  _BYTE v48[96]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+10h] BYREF
  const struct XmlNode **v51; // [rsp+D0h] [rbp+18h]
  _QWORD *v52; // [rsp+D8h] [rbp+20h]

  v39 = -2;
  v2 = this;
  if ( !a2 )
    return;
  v50 = 0;
  v3 = XmlNode::XPathElementSearch(a2, L"/Tip", &v50);
  v51 = v3;
  v4 = 0;
  if ( !v50 )
    goto LABEL_52;
  v5 = v3;
  do
  {
    v6 = *v5;
    v7 = operator new(0x70u);
    v8 = v7;
    if ( v7 )
    {
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[6] = 0;
      v7[7] = 0;
      v7[8] = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = Str::Str((Str *)v44, &String);
    XmlStr = XmlNode::GetXmlStr(v6, v46, L"/Id", v9, v39);
    Str::operator=(v8, XmlStr);
    operator delete(Block);
    v11 = Str::Str((Str *)v44, &String);
    v12 = XmlNode::GetXmlStr(v6, v46, L"/Title", v11, v40);
    Str::operator=(v8 + 6, v12);
    operator delete(Block);
    v13 = Str::Str((Str *)v44, &String);
    v14 = XmlNode::GetXmlStr(v6, v46, L"/Message", v13, v41);
    Str::operator=(v8 + 3, v14);
    operator delete(Block);
    *((_BYTE *)v8 + 72) = 1;
    *((float *)v8 + 19) = XmlNode::GetXmlFloat(v6, L"/Duration", 0.0);
    *((_DWORD *)v8 + 21) = XmlNode::GetXmlInt(v6, L"/MaxHeight", -1);
    *((_DWORD *)v8 + 22) = XmlNode::GetXmlInt(v6, L"/MaxWidth", -1);
    *((_DWORD *)v8 + 23) = XmlNode::GetXmlInt(v6, L"/MinHeight", -1);
    *((_DWORD *)v8 + 24) = XmlNode::GetXmlInt(v6, L"/MinWidth", -1);
    *((_DWORD *)v8 + 25) = XmlNode::GetXmlInt(v6, L"/ImageWidth", 0);
    *((_DWORD *)v8 + 26) = XmlNode::GetXmlInt(v6, L"/ImageHeight", 0);
    *((_BYTE *)v8 + 80) = 1;
    Str::Str((Str *)v44, L"false");
    v15 = Str::Str((Str *)v48, &String);
    v16 = (Str *)XmlNode::GetXmlStr(v6, v46, L"/CaptureGlobalClick", v15, v42);
    if ( *((_QWORD *)v16 + 2) )
      v17 = Str::Equals(v16, (const struct Str *)v44);
    else
      v17 = 0;
    operator delete(Block);
    operator delete(v45);
    if ( v17 )
      *((_BYTE *)v8 + 80) = 0;
    *((_BYTE *)v8 + 81) = 0;
    Str::Str((Str *)v44, L"true");
    v18 = Str::Str((Str *)v48, &String);
    v19 = (Str *)XmlNode::GetXmlStr(v6, v46, L"/NoTimeout", v18, v43);
    if ( *((_QWORD *)v19 + 2) )
      v20 = Str::Equals(v19, (const struct Str *)v44);
    else
      v20 = 0;
    operator delete(Block);
    operator delete(v45);
    if ( v20 )
      *((_BYTE *)v8 + 81) = 1;
    if ( !*v8 )
    {
      Log(0x2000u, L"parseXml() : Tips must have an id (%i)", v4);
      v52 = v8;
      operator delete((void *)v8[8]);
      operator delete((void *)v8[5]);
      operator delete((void *)v8[2]);
      operator delete(v8);
      goto LABEL_50;
    }
    if ( *((float *)v8 + 19) == 0.0 )
      *((_DWORD *)v8 + 19) = 1106247680;
    v21 = Str::Str((Str *)v48, &String);
    XmlNode::GetXmlStr(v6, v44, L"/Type", v21, v39);
    *((_DWORD *)v8 + 27) = 1;
    Str::Str((Str *)v46, L"Intro");
    if ( v45 )
      v22 = Str::Equals((Str *)v44, (const struct Str *)v46);
    else
      v22 = 0;
    operator delete(Block);
    if ( v22 )
    {
      *((_DWORD *)v8 + 27) = 0;
    }
    else
    {
      Str::Str((Str *)v46, L"Error");
      if ( v45 )
        v23 = Str::Equals((Str *)v44, (const struct Str *)v46);
      else
        v23 = 0;
      operator delete(Block);
      if ( v23 )
        *((_DWORD *)v8 + 27) = 2;
    }
    v24 = (const wchar_t *)v8[2];
    v25 = (char *)v2 + 8;
    v26 = SortedListW<TipManager::TipInfo *>::BinSearch((char *)v2 + 8, v24, 0, *((unsigned int *)v2 + 6));
    if ( v26 < 0 )
    {
      v27 = ~v26;
      if ( (unsigned int)(*((_DWORD *)v25 + 4) + 1) < *((_DWORD *)v25 + 5) )
        goto LABEL_39;
      if ( !*((_DWORD *)v25 + 5) )
        *((_DWORD *)v25 + 5) = 2;
      v28 = malloc(16LL * *((unsigned int *)v25 + 5));
      v29 = malloc(16LL * *((unsigned int *)v25 + 5));
      v30 = v29;
      if ( v29 && v28 )
      {
        memcpy(v28, *(const void **)v25, 8LL * *((unsigned int *)v25 + 4));
        memcpy(v30, *((const void **)v25 + 1), 8LL * *((unsigned int *)v25 + 4));
        free(*(void **)v25);
        free(*((void **)v25 + 1));
        *(_QWORD *)v25 = v28;
        *((_QWORD *)v25 + 1) = v30;
        *((_DWORD *)v25 + 5) *= 2;
LABEL_39:
        v31 = *((_DWORD *)v25 + 4) - 1;
        if ( v31 >= v27 )
        {
          v32 = 8LL * (int)v31;
          do
          {
            if ( v31 >= *((_DWORD *)v25 + 4) )
              break;
            *(_QWORD *)(v32 + *(_QWORD *)v25 + 8) = *(_QWORD *)(v32 + *(_QWORD *)v25);
            *(_QWORD *)(*((_QWORD *)v25 + 1) + v32 + 8) = *(_QWORD *)(*((_QWORD *)v25 + 1) + v32);
            --v31;
            v32 -= 8;
          }
          while ( v31 >= v27 );
        }
        ++*((_DWORD *)v25 + 4);
        v33 = -1;
        v34 = v24;
        do
        {
          if ( !v33 )
            break;
          v35 = *v34++ == 0;
          --v33;
        }
        while ( !v35 );
        v36 = ~v33;
        v37 = v36 - 1;
        *(_QWORD *)(*(_QWORD *)v25 + 8LL * v27) = malloc(8 * v36);
        v38 = *(wchar_t ***)v25;
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL * v27) )
        {
          wcscpy_s(v38[v27], v37 + 1, v24);
          *(_QWORD *)(*((_QWORD *)v25 + 1) + 8LL * v27) = v8;
        }
        else
        {
          CheckAllocation(v38[v27]);
        }
        goto LABEL_49;
      }
      CheckAllocation(v29);
      CheckAllocation(v28);
    }
LABEL_49:
    operator delete(v45);
    v2 = this;
LABEL_50:
    ++v4;
    ++v5;
  }
  while ( v4 < v50 );
  v3 = v51;
LABEL_52:
  operator delete(v3);
}
