char __fastcall AnimationDescriptor::ParseXml(AnimationDescriptor *this, const unsigned __int16 *a2)
{
  AnimationDescriptor *v2; // rdi
  struct XmlNode *Xml; // rax
  struct XmlNode *v5; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  XmlNode *v10; // r15
  XmlNode *v11; // rax
  unsigned __int16 *NodeValue; // rbp
  bool v13; // zf
  _DWORD *v14; // rbx
  const wchar_t *v15; // rdi
  unsigned __int16 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r12
  int v20; // esi
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  const struct XmlNode **v23; // rax
  const struct XmlNode **v24; // r14
  XmlNode **v25; // r12
  int XmlInt; // eax
  const wchar_t *v27; // rdi
  unsigned __int16 *v28; // rsi
  __int64 v29; // rcx
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  const wchar_t *v32; // rdi
  unsigned __int16 *v33; // rsi
  __int64 v34; // rcx
  _DWORD *v35; // rax
  void **v36; // rax
  const wchar_t *v37; // rdi
  unsigned __int16 *v38; // rsi
  __int64 v39; // rcx
  _DWORD *v40; // rax
  const wchar_t *v41; // rdi
  unsigned __int16 *v42; // rsi
  __int64 v43; // rcx
  _DWORD *v44; // rax
  const wchar_t *v45; // rdi
  unsigned __int16 *v46; // rsi
  __int64 v47; // rcx
  _DWORD *v48; // rax
  const wchar_t *v49; // rdi
  unsigned __int16 *v50; // rsi
  __int64 v51; // rcx
  _DWORD *v52; // rax
  const wchar_t *v53; // rdi
  unsigned __int16 *v54; // rsi
  __int64 v55; // rcx
  _DWORD *v56; // rax
  const struct XmlNode **v57; // rax
  const struct XmlNode **v58; // r14
  _QWORD *v59; // r15
  unsigned int v60; // ebx
  XmlNode **v61; // r13
  const wchar_t *v62; // rdi
  bool v63; // zf
  unsigned __int16 *v64; // rsi
  unsigned __int16 *v65; // r12
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rdi
  const unsigned __int16 *v69; // rdx
  const wchar_t *v70; // rdi
  unsigned __int16 *v71; // rsi
  __int64 v72; // rcx
  _QWORD *v73; // rax
  const wchar_t *v74; // rdi
  unsigned __int16 *v75; // rsi
  __int64 v76; // rcx
  _QWORD *v77; // rax
  XmlNode *v78; // rax
  unsigned __int16 *v79; // rsi
  __int64 v80; // rcx
  unsigned __int16 *v81; // rdi
  unsigned __int64 v82; // rdi
  void *v83; // rax
  _QWORD *v84; // rdi
  __int64 v85; // rsi
  unsigned int v86; // [rsp+40h] [rbp-98h]
  char *v87; // [rsp+48h] [rbp-90h]
  XmlNode *v88; // [rsp+50h] [rbp-88h]
  __int64 i; // [rsp+58h] [rbp-80h]
  struct XmlNode *v90; // [rsp+60h] [rbp-78h]
  _DWORD *v91; // [rsp+68h] [rbp-70h] BYREF
  _DWORD *v92; // [rsp+70h] [rbp-68h]
  __int64 v93; // [rsp+78h] [rbp-60h]
  __int64 v94; // [rsp+80h] [rbp-58h]
  unsigned int v97; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v98; // [rsp+F8h] [rbp+20h] BYREF

  v2 = this;
  Xml = XmlManager::GetXml(g_pXmlManager, a2);
  v5 = Xml;
  v90 = Xml;
  if ( !Xml )
  {
    Log(0x200u, 398, "AnimationDescriptor.cpp", L"Invalid Xml: %s", a2);
    return 0;
  }
  v7 = *((_DWORD *)Xml + 6);
  v8 = 0;
  v86 = 0;
  if ( !v7 )
    return 1;
  v9 = 0;
  for ( i = 0; ; i += 8 )
  {
    if ( v8 < v7 )
      v10 = *(XmlNode **)(v9 + *((_QWORD *)v5 + 5));
    else
      v10 = 0;
    v88 = v10;
    if ( !XmlNode::MatchName(v10, L"Animation") )
    {
      if ( XmlNode::MatchName(v10, L"WaitForComplete") )
      {
        AnimationDescriptor::AddAnimator(v2, 0, 0);
      }
      else if ( XmlNode::MatchName(v10, L"SendAnimationComplete") )
      {
        *(_BYTE *)v2 = 1;
      }
      goto LABEL_116;
    }
    v11 = XmlNode::XPathElementSearchSingle(v10, L"/Affects");
    if ( v11 )
      NodeValue = XmlNode::GetNodeValue(v11);
    else
      NodeValue = 0;
    if ( !NodeValue )
    {
      Log(0x200u, 419, "AnimationDescriptor.cpp", L"Malformed animation file, no Affects tag (%s)", a2);
      return 0;
    }
    v13 = 1;
    v14 = 0;
    v15 = L"CurrentFrame";
    v16 = NodeValue;
    v17 = 13;
    v91 = 0;
    v92 = 0;
    do
    {
      if ( !v17 )
        break;
      v13 = *v16++ == *v15++;
      --v17;
    }
    while ( v13 );
    v18 = 0;
    v93 = 0;
    v19 = 0;
    v94 = 0;
    if ( v13 )
    {
      v20 = 1;
      v21 = operator new(0x38u);
      v22 = v21;
      if ( v21 )
      {
        v21[8] = 0;
        v21[9] = 0;
        v21[10] = 16;
        *((_QWORD *)v21 + 6) = 0;
        v21[6] = 0;
        *(_QWORD *)v21 = &Affector_CurrentFrame::`vftable';
      }
      else
      {
        v22 = 0;
      }
      v91 = v22;
      v23 = XmlNode::XPathElementSearch(v10, L"/IntMessage", &v98);
      v24 = v23;
      if ( v98 )
      {
        v25 = v23;
        do
        {
          XmlInt = XmlNode::GetXmlInt(*v25, L"/", 0);
          Array<enum NodeType>::Add((__int64)(v22 + 8), XmlInt);
          LODWORD(v18) = v18 + 1;
          ++v25;
        }
        while ( (unsigned int)v18 < v98 );
        v19 = v94;
      }
      operator delete(v24);
      v18 = v93;
    }
    else
    {
      v27 = L"Position";
      v28 = NodeValue;
      v29 = 9;
      do
      {
        if ( !v29 )
          break;
        v13 = *v28++ == *v27++;
        --v29;
      }
      while ( v13 );
      if ( !v13 )
      {
        v32 = L"XPosition";
        v33 = NodeValue;
        v34 = 10;
        do
        {
          if ( !v34 )
            break;
          v13 = *v33++ == *v32++;
          --v34;
        }
        while ( v13 );
        if ( v13 )
        {
          v20 = 1;
          v35 = operator new(0x38u);
          v22 = v35;
          if ( v35 )
          {
            v35[8] = 0;
            v35[9] = 0;
            v35[10] = 16;
            *((_QWORD *)v35 + 6) = 0;
            v35[6] = 0;
            v36 = &Affector_XPosition::`vftable';
            goto LABEL_73;
          }
LABEL_74:
          v22 = 0;
        }
        else
        {
          v37 = L"YPosition";
          v38 = NodeValue;
          v39 = 10;
          do
          {
            if ( !v39 )
              break;
            v13 = *v38++ == *v37++;
            --v39;
          }
          while ( v13 );
          if ( v13 )
          {
            v20 = 1;
            v40 = operator new(0x38u);
            v22 = v40;
            if ( !v40 )
              goto LABEL_74;
            v40[8] = 0;
            v40[9] = 0;
            v40[10] = 16;
            *((_QWORD *)v40 + 6) = 0;
            v40[6] = 0;
            v36 = &Affector_YPosition::`vftable';
          }
          else
          {
            v41 = L"Scale";
            v42 = NodeValue;
            v43 = 6;
            do
            {
              if ( !v43 )
                break;
              v13 = *v42++ == *v41++;
              --v43;
            }
            while ( v13 );
            if ( v13 )
            {
              v20 = 1;
              v44 = operator new(0x38u);
              v22 = v44;
              if ( !v44 )
                goto LABEL_74;
              v44[8] = 0;
              v44[9] = 0;
              v44[10] = 16;
              *((_QWORD *)v44 + 6) = 0;
              v44[6] = 0;
              v36 = &Affector_Scale::`vftable';
            }
            else
            {
              v45 = L"XScale";
              v46 = NodeValue;
              v47 = 7;
              do
              {
                if ( !v47 )
                  break;
                v13 = *v46++ == *v45++;
                --v47;
              }
              while ( v13 );
              if ( v13 )
              {
                v20 = 1;
                v48 = operator new(0x38u);
                v22 = v48;
                if ( !v48 )
                  goto LABEL_74;
                v48[8] = 0;
                v48[9] = 0;
                v48[10] = 16;
                *((_QWORD *)v48 + 6) = 0;
                v48[6] = 0;
                v36 = &Affector_XScale::`vftable';
              }
              else
              {
                v49 = L"YScale";
                v50 = NodeValue;
                v51 = 7;
                do
                {
                  if ( !v51 )
                    break;
                  v13 = *v50++ == *v49++;
                  --v51;
                }
                while ( v13 );
                if ( v13 )
                {
                  v20 = 1;
                  v52 = operator new(0x38u);
                  v22 = v52;
                  if ( !v52 )
                    goto LABEL_74;
                  v52[8] = 0;
                  v52[9] = 0;
                  v52[10] = 16;
                  *((_QWORD *)v52 + 6) = 0;
                  v52[6] = 0;
                  v36 = &Affector_YScale::`vftable';
                }
                else
                {
                  v53 = L"Alpha";
                  v54 = NodeValue;
                  v55 = 6;
                  do
                  {
                    if ( !v55 )
                      break;
                    v13 = *v54++ == *v53++;
                    --v55;
                  }
                  while ( v13 );
                  if ( !v13 )
                  {
                    Log(0x200u, 488, "AnimationDescriptor.cpp", L"Invalid affector %s in file %s", NodeValue, a2);
                    operator delete(NodeValue);
                    return 0;
                  }
                  v20 = 1;
                  v56 = operator new(0x38u);
                  v22 = v56;
                  if ( !v56 )
                    goto LABEL_74;
                  v56[8] = 0;
                  v56[9] = 0;
                  v56[10] = 16;
                  *((_QWORD *)v56 + 6) = 0;
                  v56[6] = 0;
                  v36 = &Affector_Alpha::`vftable';
                }
              }
            }
          }
LABEL_73:
          *(_QWORD *)v22 = v36;
        }
        v91 = v22;
        goto LABEL_76;
      }
      v20 = 2;
      v30 = operator new(0x38u);
      v22 = v30;
      if ( v30 )
      {
        v30[8] = 0;
        v30[9] = 0;
        v30[10] = 16;
        *((_QWORD *)v30 + 6) = 0;
        v30[6] = 0;
        *(_QWORD *)v30 = &Affector_XPosition::`vftable';
      }
      else
      {
        v22 = 0;
      }
      v91 = v22;
      v31 = operator new(0x38u);
      v14 = v31;
      if ( v31 )
      {
        v31[8] = 0;
        v31[9] = 0;
        v31[10] = 16;
        *((_QWORD *)v31 + 6) = 0;
        v31[6] = 0;
        *(_QWORD *)v31 = &Affector_YPosition::`vftable';
      }
      else
      {
        v14 = 0;
      }
      v92 = v14;
    }
LABEL_76:
    v97 = 0;
    v57 = XmlNode::XPathElementSearch(v10, L"/Type", &v97);
    v58 = v57;
    if ( v97 != v20 )
      break;
    v59 = 0;
    v60 = 0;
    if ( v97 )
    {
      v61 = v57;
      v87 = (char *)((char *)&v91 - (char *)v57);
      do
      {
        v62 = L"LinearRelative";
        v64 = XmlNode::XPathAttributeSearchSingle(*v61, L"/@Name");
        v65 = v64;
        v66 = 15;
        do
        {
          if ( !v66 )
            break;
          v63 = *v64++ == *v62++;
          --v66;
        }
        while ( v63 );
        if ( v63 )
        {
          v67 = operator new(0x18u);
          v68 = v67;
          if ( v67 )
          {
            v67[1] = 0;
            *v67 = &Animator_LinearRelative::`vftable';
          }
          else
          {
            v68 = 0;
          }
          v69 = L"/Count";
        }
        else
        {
          v70 = L"LinearAbsolute";
          v71 = v65;
          v72 = 15;
          do
          {
            if ( !v72 )
              break;
            v63 = *v71++ == *v70++;
            --v72;
          }
          while ( v63 );
          if ( v63 )
          {
            v73 = operator new(0x20u);
            v68 = v73;
            if ( v73 )
            {
              v73[1] = 0;
              *v73 = &Animator_LinearAbsolute::`vftable';
            }
            else
            {
              v68 = 0;
            }
            *((_DWORD *)v68 + 4) = XmlNode::GetXmlInt(*v61, L"/Start", 0);
            *((_DWORD *)v68 + 5) = XmlNode::GetXmlInt(*v61, L"/End", 0);
            *((float *)v68 + 6) = XmlNode::GetXmlFloat(*v61, L"/Time", 0.0);
            goto LABEL_104;
          }
          v74 = L"LinearTargeted";
          v75 = v65;
          v76 = 15;
          do
          {
            if ( !v76 )
              break;
            v63 = *v75++ == *v74++;
            --v76;
          }
          while ( v63 );
          if ( !v63 )
          {
            Log(
              0x200u,
              571,
              "AnimationDescriptor.cpp",
              L"Invalid type %s for affector %s in file %s",
              v65,
              NodeValue,
              a2);
            operator delete(NodeValue);
            operator delete(v58);
            operator delete(v65);
            if ( v60 < 4 )
            {
              v84 = &(&v91)[v60];
              v85 = 4 - v60;
              do
              {
                if ( *v84 )
                  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v84 + 8LL))(*v84, 1);
                ++v84;
                --v85;
              }
              while ( v85 );
            }
            return 0;
          }
          v77 = operator new(0x18u);
          v68 = v77;
          if ( v77 )
          {
            v77[1] = 0;
            *v77 = &Animator_LinearTargeted::`vftable';
          }
          else
          {
            v68 = 0;
          }
          v69 = L"/Target";
        }
        *((_DWORD *)v68 + 4) = XmlNode::GetXmlInt(*v61, v69, 0);
        *((float *)v68 + 5) = XmlNode::GetXmlFloat(*v61, L"/Time", 0.0);
LABEL_104:
        if ( !v59 )
          v59 = v68;
        AnimationDescriptor::AddAnimator(
          this,
          (const struct Animator_Base *)v68,
          *(const struct Affector_Base **)((char *)v61 + (_QWORD)v87));
        operator delete(v65);
        ++v60;
        ++v61;
      }
      while ( v60 < v97 );
    }
    operator delete(v58);
    operator delete(NodeValue);
    v78 = XmlNode::XPathElementSearchSingle(v88, L"/SendComplete");
    if ( v78 )
      v79 = XmlNode::GetNodeValue(v78);
    else
      v79 = 0;
    if ( v79 )
    {
      operator delete((void *)v59[1]);
      v80 = -1;
      v81 = v79;
      do
      {
        if ( !v80 )
          break;
        v13 = *v81++ == 0;
        --v80;
      }
      while ( !v13 );
      v82 = (unsigned int)~(_DWORD)v80;
      v83 = operator new[](saturated_mul(v82, 2u));
      v59[1] = v83;
      memcpy(v83, v79, 2 * v82);
      operator delete(v79);
    }
    v2 = this;
LABEL_116:
    v5 = v90;
    v7 = *((_DWORD *)v90 + 6);
    v8 = v86 + 1;
    v9 = i + 8;
    v86 = v8;
    if ( v8 >= v7 )
      return 1;
  }
  Log(0x200u, 503, "AnimationDescriptor.cpp", L"Invalid type count(%d) for affector %s in file %s", v97, NodeValue, a2);
  operator delete(NodeValue);
  operator delete(v58);
  if ( v22 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v22 + 8LL))(v22, 1);
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1);
  if ( v19 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1);
  return 0;
}
