void __fastcall NodeBase::MoveToBack(NodeBase *this)
{
  __int64 v1; // rax
  unsigned int v3; // edx
  NodeBase **v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  void *v8; // rax
  int v9; // r8d
  __int64 v10; // r9
  bool v11; // zf

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
  {
    v3 = 0;
    if ( *(_DWORD *)(v1 + 80) )
    {
      v4 = *(NodeBase ***)(v1 + 96);
      while ( *v4 != this )
      {
        ++v3;
        ++v4;
        if ( v3 >= *(_DWORD *)(v1 + 80) )
          goto LABEL_6;
      }
      Array<NodeBase *>::Remove(v1 + 80, v3);
      v5 = *((_QWORD *)this + 17);
      v6 = *(_DWORD *)(v5 + 84);
      if ( ++*(_DWORD *)(v5 + 80) > v6 )
      {
        v7 = *(_DWORD *)(v5 + 88) + v6;
        *(_DWORD *)(v5 + 84) = v7;
        v8 = realloc(*(void **)(v5 + 96), 8 * v7);
        if ( !v8 )
        {
          CheckAllocation(0);
          return;
        }
        *(_QWORD *)(v5 + 96) = v8;
      }
      v9 = *(_DWORD *)(v5 + 80) - 1;
      if ( *(_DWORD *)(v5 + 80) != 1 )
      {
        v10 = 8LL * v9;
        do
        {
          v11 = v9-- == 1;
          *(_QWORD *)(v10 + *(_QWORD *)(v5 + 96)) = *(_QWORD *)(v10 + *(_QWORD *)(v5 + 96) - 8);
          v10 -= 8;
        }
        while ( !v11 );
      }
      **(_QWORD **)(v5 + 96) = this;
    }
    else
    {
LABEL_6:
      Log(0x100u, 1172, "NodeBase.cpp", L"Couldn't find ourselves in our parent child list. Not good.");
    }
  }
}
