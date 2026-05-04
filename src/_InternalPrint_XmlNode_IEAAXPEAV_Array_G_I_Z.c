__int64 __fastcall XmlNode::InternalPrint(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  _WORD *v8; // rdi
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-28h]
  unsigned int v21; // [rsp+50h] [rbp+8h]
  __int64 v23; // [rsp+68h] [rbp+20h]
  __int64 v24; // [rsp+68h] [rbp+20h]

  v3 = 0;
  if ( a3 )
  {
    v6 = a3;
    do
    {
      Array<unsigned short>::Add(a2, 32);
      Array<unsigned short>::Add(a2, 32);
      Array<unsigned short>::Add(a2, 32);
      Array<unsigned short>::Add(a2, 32);
      --v6;
    }
    while ( v6 );
  }
  Array<unsigned short>::Add(a2, 60);
  if ( *(_DWORD *)(a1 + 72) )
  {
    v7 = 0;
    do
    {
      Array<unsigned short>::Add(a2, *(unsigned __int16 *)(v7 + *(_QWORD *)(a1 + 64)));
      LODWORD(v3) = v3 + 1;
      v7 += 2;
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) );
    v3 = 0;
  }
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v23 = 0;
    do
    {
      Array<unsigned short>::Add(a2, 32);
      v8 = *(_WORD **)(v23 + *(_QWORD *)a1);
      v9 = -1;
      do
      {
        if ( !v9 )
          break;
        v10 = *v8++ == 0;
        --v9;
      }
      while ( !v10 );
      v11 = v23;
      v12 = -v9 - 2;
      if ( (_DWORD)v12 )
      {
        v20 = (unsigned int)v12;
        do
        {
          Array<unsigned short>::Add(a2, *(unsigned __int16 *)(*(_QWORD *)(v23 + *(_QWORD *)a1) + v3));
          v3 += 2;
          --v20;
        }
        while ( v20 );
        v3 = 0;
      }
      Array<unsigned short>::Add(a2, 61);
      Array<unsigned short>::Add(a2, 34);
      v13 = *(_QWORD *)(v23 + *(_QWORD *)(a1 + 8));
      if ( *(_DWORD *)(v13 + 16) )
      {
        v24 = *(unsigned int *)(v13 + 16);
        do
        {
          Array<unsigned short>::Add(
            a2,
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + *(_QWORD *)(a1 + 8)) + 8LL) + v3));
          v3 += 2;
          --v24;
        }
        while ( v24 );
        v3 = 0;
      }
      Array<unsigned short>::Add(a2, 34);
      v23 = v11 + 8;
      ++v21;
    }
    while ( v21 < *(_DWORD *)(a1 + 16) );
  }
  if ( *(_BYTE *)(a1 + 48) )
  {
    Array<unsigned short>::Add(a2, 47);
  }
  else
  {
    Array<unsigned short>::Add(a2, 62);
    if ( *(_DWORD *)(a1 + 24) )
    {
      Array<unsigned short>::Add(a2, 10);
      if ( *(_DWORD *)(a1 + 24) )
      {
        v15 = 0;
        v16 = a3 + 1;
        do
        {
          XmlNode::InternalPrint(*(_QWORD *)(v15 + *(_QWORD *)(a1 + 40)), a2, v16);
          v16 = a3 + 1;
          LODWORD(v3) = v3 + 1;
          v15 += 8;
        }
        while ( (unsigned int)v3 < *(_DWORD *)(a1 + 24) );
        LODWORD(v3) = 0;
      }
      v17 = a3;
      if ( a3 )
      {
        do
        {
          Array<unsigned short>::Add(a2, 32);
          Array<unsigned short>::Add(a2, 32);
          Array<unsigned short>::Add(a2, 32);
          Array<unsigned short>::Add(a2, 32);
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v14 = 0;
      if ( *(_DWORD *)(a1 + 128) )
      {
        do
        {
          Array<unsigned short>::Add(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 120) + v3));
          ++v14;
          v3 += 2;
        }
        while ( v14 < *(_DWORD *)(a1 + 128) );
        LODWORD(v3) = 0;
      }
    }
    Array<unsigned short>::Add(a2, 60);
    Array<unsigned short>::Add(a2, 47);
    if ( *(_DWORD *)(a1 + 72) )
    {
      v18 = 0;
      do
      {
        Array<unsigned short>::Add(a2, *(unsigned __int16 *)(v18 + *(_QWORD *)(a1 + 64)));
        LODWORD(v3) = v3 + 1;
        v18 += 2;
      }
      while ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) );
    }
  }
  Array<unsigned short>::Add(a2, 62);
  return Array<unsigned short>::Add(a2, 10);
}
