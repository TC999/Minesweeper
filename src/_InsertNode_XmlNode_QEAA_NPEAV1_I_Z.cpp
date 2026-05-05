char __fastcall XmlNode::InsertNode(XmlNode *this, struct XmlNode *a2)
{
  __int64 v2; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  void *v8; // rax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r10

  v2 = 0xFFFFFFFFLL;
  if ( !*((_BYTE *)a2 + 80) || *((_QWORD *)this + 15) )
    return 0;
  if ( *((_DWORD *)this + 6) != -1 )
    v2 = *((unsigned int *)this + 6);
  ++*((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 7);
  if ( *((_DWORD *)this + 6) <= v6 )
    goto LABEL_10;
  v7 = *((_DWORD *)this + 8) + v6;
  *((_DWORD *)this + 7) = v7;
  v8 = realloc(*((void **)this + 5), 8 * v7);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = v8;
LABEL_10:
    v9 = *((_DWORD *)this + 6) - 1;
    if ( v9 > (unsigned int)v2 )
    {
      v10 = 8LL * v9;
      v11 = (unsigned int)(v9 - v2);
      do
      {
        *(_QWORD *)(v10 + *((_QWORD *)this + 5)) = *(_QWORD *)(v10 + *((_QWORD *)this + 5) - 8);
        v10 -= 8;
        --v11;
      }
      while ( v11 );
    }
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) = a2;
    goto LABEL_14;
  }
  CheckAllocation(0);
LABEL_14:
  *((_BYTE *)this + 48) = 0;
  return 1;
}
