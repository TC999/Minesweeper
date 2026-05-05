// Hidden C++ exception states: #wind=2
char __fastcall SerialXML::FromXML(__int64 a1, __int64 *a2, XmlNode *a3)
{
  void *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  void *v9; // rcx
  _DWORD *v10; // rax
  unsigned __int16 *NodeValue; // r12
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  bool v15; // zf
  unsigned __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  int v18; // r15d
  __int64 v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  unsigned __int16 *v23; // rdi
  unsigned __int16 v24; // ax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rcx
  unsigned __int16 *v28; // rdi
  bool v29; // di
  bool v30; // di
  bool v31; // di
  bool v32; // di
  __int64 v33; // rcx
  unsigned __int16 *v34; // rdi
  unsigned __int64 i; // rcx
  unsigned __int16 v36; // ax
  Str *v37; // rax
  __int64 v38; // rdx
  Str *v40; // rax
  __int64 v41; // rdx
  _QWORD v42[2]; // [rsp+28h] [rbp-70h] BYREF
  void *v43; // [rsp+38h] [rbp-60h]
  __int64 v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  __int64 v46; // [rsp+50h] [rbp-48h]
  _BYTE v47[16]; // [rsp+58h] [rbp-40h] BYREF
  void *Block; // [rsp+68h] [rbp-30h]
  char v49; // [rsp+A8h] [rbp+10h]

  v5 = 0;
  if ( *a2 )
  {
    v6 = 0;
    if ( *(_DWORD *)*a2 )
    {
      v7 = 0;
      do
      {
        v8 = *(_QWORD **)(v7 + *(_QWORD *)(*a2 + 16));
        if ( v8 )
        {
          v9 = (void *)v8[2];
          if ( v9 )
            free(v9);
          operator delete(v8);
        }
        v5 = 0;
        *(_QWORD *)(v7 + *(_QWORD *)(*a2 + 16)) = 0;
        ++v6;
        v7 += 8;
      }
      while ( v6 < *(_DWORD *)*a2 );
    }
    *(_DWORD *)*a2 = 0;
  }
  else
  {
    v10 = operator new(0x18u);
    if ( v10 )
    {
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 16;
      *((_QWORD *)v10 + 2) = 0;
    }
    else
    {
      v10 = 0;
    }
    *a2 = (__int64)v10;
  }
  if ( !a3 )
    return 1;
  NodeValue = XmlNode::GetNodeValue(a3);
  if ( !NodeValue )
    return 1;
  v12 = 0;
  v13 = -1;
  v14 = NodeValue;
  do
  {
    if ( !v13 )
      break;
    v15 = *v14++ == 0;
    --v13;
  }
  while ( !v15 );
  v16 = -v13 - 2;
  if ( v16 )
  {
    v17 = NodeValue;
    do
    {
      if ( *v17 != 9 )
        break;
      if ( *v17 != 10 )
        break;
      if ( *v17 != 32 )
        break;
      ++v12;
      ++v17;
    }
    while ( v12 < v16 );
  }
  v18 = 0;
  v19 = (int)v12;
  while ( 2 )
  {
    if ( v18 > 1000 )
    {
      v40 = Str::Str((Str *)v47, L"Corrupt/invalid save file");
      LOBYTE(v41) = 1;
      StrErr(v40, v41);
      return 0;
    }
    v20 = operator new(0x18u);
    v21 = (__int64)v20;
    if ( v20 )
    {
      *v20 = 0;
      v20[1] = 0;
      v20[2] = 16;
      *((_QWORD *)v20 + 2) = 0;
    }
    else
    {
      v21 = 0;
    }
    Array<IEventListener *>::Add(*a2, v21);
    v49 = 0;
    do
    {
      v42[0] = 0;
      v42[1] = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v22 = -1;
      v23 = NodeValue;
      do
      {
        if ( !v22 )
          break;
        v15 = *v23++ == 0;
        --v22;
      }
      while ( !v15 );
      if ( v12 < (unsigned __int64)(-v22 - 2) )
      {
        do
        {
          v24 = NodeValue[v19];
          if ( v24 == 44 || v24 == 9 || v24 == 10 || v24 == 13 || v24 == 32 )
            break;
          Str::AppendF((Str *)v42, L"%c", v24);
          ++v12;
          ++v19;
          v18 = 0;
          v25 = -1;
          v26 = NodeValue;
          do
          {
            if ( !v25 )
              break;
            v15 = *v26++ == 0;
            --v25;
          }
          while ( !v15 );
        }
        while ( v12 < (unsigned __int64)(-v25 - 2) );
        v5 = v43;
      }
      v27 = -1;
      v28 = NodeValue;
      do
      {
        if ( !v27 )
          break;
        v15 = *v28++ == 0;
        --v27;
      }
      while ( !v15 );
      if ( v12 >= (unsigned __int64)(-v27 - 2) || NodeValue[v19] == 10 || NodeValue[v19] == 13 )
      {
        v49 = 1;
        Str::Str((Str *)v47, L"T");
        if ( v5 )
          v31 = Str::Equals((Str *)v42, (const struct Str *)v47);
        else
          v31 = 0;
        operator delete(Block);
        if ( v31 )
        {
LABEL_56:
          Array<bool>::Add(v21, 1);
          goto LABEL_72;
        }
        Str::Str((Str *)v47, L"F");
        if ( v5 )
          v32 = Str::Equals((Str *)v42, (const struct Str *)v47);
        else
          v32 = 0;
        operator delete(Block);
        if ( !v32 )
        {
LABEL_84:
          v37 = Str::Str((Str *)v47, L"Invalid mine value in save grid");
          LOBYTE(v38) = 1;
          StrErr(v37, v38);
          operator delete(0);
          operator delete(v5);
          return 0;
        }
      }
      else
      {
        if ( NodeValue[v19] != 44 )
        {
          v49 = 1;
          goto LABEL_72;
        }
        ++v12;
        ++v19;
        v18 = 0;
        Str::Str((Str *)v47, L"T");
        if ( v5 )
          v29 = Str::Equals((Str *)v42, (const struct Str *)v47);
        else
          v29 = 0;
        operator delete(Block);
        if ( v29 )
          goto LABEL_56;
        Str::Str((Str *)v47, L"F");
        if ( v5 )
          v30 = Str::Equals((Str *)v42, (const struct Str *)v47);
        else
          v30 = 0;
        operator delete(Block);
        if ( !v30 )
          goto LABEL_84;
      }
      Array<bool>::Add(v21, 0);
LABEL_72:
      operator delete(0);
      operator delete(v5);
      v5 = 0;
    }
    while ( !v49 );
    v33 = -1;
    v34 = NodeValue;
    do
    {
      if ( !v33 )
        break;
      v15 = *v34++ == 0;
      --v33;
    }
    while ( !v15 );
    for ( i = -v33 - 2; v12 < i; v18 = 0 )
    {
      v36 = NodeValue[v19];
      if ( v36 != 10 && v36 != 13 && v36 != 9 && v36 != 32 )
        break;
      ++v12;
      ++v19;
    }
    ++v18;
    if ( v12 < i )
      continue;
    break;
  }
  operator delete(NodeValue);
  return 1;
}
