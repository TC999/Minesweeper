// Hidden C++ exception states: #wind=2
char __fastcall SerialXML::FromXML(__int64 a1, __int64 *a2, XmlNode *a3)
{
  __int64 *v4; // r13
  unsigned int v5; // esi
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  void *v8; // rcx
  _DWORD *v9; // rax
  unsigned __int16 *NodeValue; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  int v17; // r14d
  __int64 v18; // r15
  wchar_t *v19; // rbp
  _DWORD *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rcx
  unsigned __int16 *v23; // rdi
  unsigned __int16 v24; // ax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rcx
  unsigned __int16 *v28; // rdi
  unsigned int v29; // eax
  char v30; // di
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned __int16 *v33; // rdi
  unsigned __int64 i; // rcx
  unsigned __int16 v35; // ax
  Str *v36; // rax
  __int64 v37; // rdx
  Str *v39; // rax
  __int64 v40; // rdx
  Str *v41; // rax
  __int64 v42; // rdx
  _QWORD v43[2]; // [rsp+28h] [rbp-80h] BYREF
  wchar_t *v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h]
  _BYTE v48[80]; // [rsp+58h] [rbp-50h] BYREF
  char v50; // [rsp+C0h] [rbp+18h]

  v4 = a2;
  if ( *a2 )
  {
    v5 = 0;
    if ( *(_DWORD *)*a2 )
    {
      v6 = 0;
      do
      {
        v7 = *(_QWORD **)(v6 + *(_QWORD *)(*v4 + 16));
        if ( v7 )
        {
          v8 = (void *)v7[2];
          if ( v8 )
            free(v8);
          operator delete(v7);
        }
        *(_QWORD *)(v6 + *(_QWORD *)(*v4 + 16)) = 0;
        ++v5;
        v6 += 8;
      }
      while ( v5 < *(_DWORD *)*v4 );
    }
    *(_DWORD *)*v4 = 0;
  }
  else
  {
    v9 = operator new(0x18u);
    if ( v9 )
    {
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 16;
      *((_QWORD *)v9 + 2) = 0;
    }
    else
    {
      v9 = 0;
    }
    *v4 = (__int64)v9;
  }
  if ( !a3 )
    return 1;
  NodeValue = XmlNode::GetNodeValue(a3);
  if ( !NodeValue )
    return 0;
  v11 = 0;
  v12 = -1;
  v13 = NodeValue;
  do
  {
    if ( !v12 )
      break;
    v14 = *v13++ == 0;
    --v12;
  }
  while ( !v14 );
  v15 = -v12 - 2;
  if ( v15 )
  {
    v16 = NodeValue;
    do
    {
      if ( *v16 != 9 )
        break;
      if ( *v16 != 10 )
        break;
      if ( *v16 != 32 )
        break;
      ++v11;
      ++v16;
    }
    while ( v11 < v15 );
    v4 = a2;
  }
  v17 = 0;
  v18 = (int)v11;
  v19 = 0;
  while ( 1 )
  {
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
    Array<IEventListener *>::Add(*v4, v21);
    v50 = 0;
    if ( v17 > 1000 )
      break;
    do
    {
      v43[0] = 0;
      v43[1] = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      if ( v17 > 1000 )
      {
        v39 = Str::Str((Str *)v48, L"Corrupt/invalid save file");
        LOBYTE(v40) = 1;
        StrErr(v39, v40);
        operator delete(0);
        operator delete(0);
        return 0;
      }
      v22 = -1;
      v23 = NodeValue;
      do
      {
        if ( !v22 )
          break;
        v14 = *v23++ == 0;
        --v22;
      }
      while ( !v14 );
      if ( v11 < (unsigned __int64)(-v22 - 2) )
      {
        do
        {
          v24 = NodeValue[v18];
          if ( v24 == 44 || v24 == 9 || v24 == 10 || v24 == 13 || v24 == 32 )
            break;
          Str::AppendF((Str *)v43, L"%c", v24);
          ++v11;
          ++v18;
          v17 = 0;
          v25 = -1;
          v26 = NodeValue;
          do
          {
            if ( !v25 )
              break;
            v14 = *v26++ == 0;
            --v25;
          }
          while ( !v14 );
        }
        while ( v11 < (unsigned __int64)(-v25 - 2) );
        v19 = v44;
        v4 = a2;
      }
      v27 = -1;
      v28 = NodeValue;
      do
      {
        if ( !v27 )
          break;
        v14 = *v28++ == 0;
        --v27;
      }
      while ( !v14 );
      if ( v11 >= (unsigned __int64)(-v27 - 2) || NodeValue[v18] == 10 || NodeValue[v18] == 13 )
      {
        v30 = 1;
        v50 = 1;
        v31 = wcstoul(v19, 0, 10);
        if ( !v31 || v31 > 0xC )
        {
LABEL_72:
          v36 = Str::Str((Str *)v48, L"Invalid digit in save grid");
          LOBYTE(v37) = 1;
          StrErr(v36, v37);
          operator delete(0);
          operator delete(v19);
          return 0;
        }
        Array<enum NodeType>::Add(v21, v31);
      }
      else if ( NodeValue[v18] == 44 )
      {
        v17 = 0;
        ++v11;
        ++v18;
        v29 = wcstoul(v19, 0, 10);
        if ( !v29 || v29 > 0xC )
          goto LABEL_72;
        Array<enum NodeType>::Add(v21, v29);
        v30 = v50;
      }
      else
      {
        v30 = 1;
        v50 = 1;
      }
      ++v17;
      operator delete(0);
      operator delete(v19);
      v19 = 0;
    }
    while ( !v30 );
    v32 = -1;
    v33 = NodeValue;
    do
    {
      if ( !v32 )
        break;
      v14 = *v33++ == 0;
      --v32;
    }
    while ( !v14 );
    for ( i = -v32 - 2; v11 < i; ++v18 )
    {
      v35 = NodeValue[v18];
      if ( v35 != 10 && v35 != 13 && v35 != 9 && v35 != 32 )
        break;
      v17 = 0;
      ++v11;
    }
    ++v17;
    if ( v11 >= i )
    {
      operator delete(NodeValue);
      return 1;
    }
  }
  v41 = Str::Str((Str *)v48, L"Corrupt/invalid save file");
  LOBYTE(v42) = 1;
  StrErr(v41, v42);
  return 0;
}
