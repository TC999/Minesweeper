// Hidden C++ exception states: #wind=7
void __fastcall NodeBase::~NodeBase(NodeBase *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx
  RenderManager *v6; // rdi
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  NodeBase **v9; // rax
  UserInterface *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx

  *(_QWORD *)this = &NodeBase::`vftable';
  *((_DWORD *)this + 50) = 0;
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 - 8) )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 3);
    else
      operator delete((void *)(v2 - 8));
  }
  v3 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(v4 + *((_QWORD *)this + 12));
      if ( v5 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 104LL))(v5, 1);
      ++v3;
      v4 += 8;
    }
    while ( v3 < *((_DWORD *)this + 20) );
  }
  NodeBase::RemoveAllAnimations(this);
  v6 = g_pRenderManager;
  if ( *((_BYTE *)this + 40) )
  {
    v7 = (unsigned int *)((char *)g_pRenderManager + 128);
    v8 = 0;
    if ( *((_DWORD *)g_pRenderManager + 32) )
    {
      v9 = (NodeBase **)*((_QWORD *)g_pRenderManager + 18);
      while ( *v9 != this )
      {
        ++v8;
        ++v9;
        if ( v8 >= *v7 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v8 = -1;
    }
    if ( v8 != -1 )
      Array<NodeBase *>::Remove((__int64)v7, v8);
  }
  v10 = g_pUserInterface;
  if ( *((NodeBase **)g_pUserInterface + 8) == this )
    *((_QWORD *)g_pUserInterface + 8) = 0;
  if ( *((NodeBase **)v10 + 27) == this )
    *((_QWORD *)v10 + 27) = 0;
  if ( *((NodeBase **)v10 + 22) == this )
  {
    *((_QWORD *)v10 + 22) = 0;
    *((_QWORD *)v10 + 23) = 0;
    *((_QWORD *)v10 + 24) = 0;
    *((_QWORD *)v10 + 25) = 0;
  }
  if ( *((NodeBase **)v10 + 23) == this )
    *((_QWORD *)v10 + 23) = 0;
  if ( *((NodeBase **)v10 + 24) == this )
    *((_QWORD *)v10 + 24) = 0;
  if ( *((NodeBase **)v10 + 25) == this )
    *((_QWORD *)v10 + 25) = 0;
  if ( *((NodeBase **)v10 + 38) == this )
    *((_QWORD *)v10 + 38) = 0;
  if ( *((_BYTE *)this + 144) && *((NodeBase **)v6 + 15) != this )
    UserInterface::Access_ClipNode(v10, this);
  operator delete(*((void **)this + 16));
  LocalFree(*((HLOCAL *)this + 20));
  LocalFree(*((HLOCAL *)this + 19));
  LocalFree(*((HLOCAL *)this + 21));
  LocalFree(*((HLOCAL *)this + 22));
  LocalFree(*((HLOCAL *)this + 23));
  --NodeBase::m_RenderLayerNodeCount[*((unsigned int *)this + 15)];
  v11 = (void *)*((_QWORD *)this + 44);
  if ( v11 )
    free(v11);
  v12 = (void *)*((_QWORD *)this + 41);
  if ( v12 )
    free(v12);
  v13 = (void *)*((_QWORD *)this + 38);
  if ( v13 )
    free(v13);
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  free(*((void **)this + 30));
  free(*((void **)this + 31));
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  v14 = (void *)*((_QWORD *)this + 27);
  if ( v14 )
    free(v14);
  v15 = (void *)*((_QWORD *)this + 15);
  if ( v15 )
    free(v15);
  v16 = (void *)*((_QWORD *)this + 12);
  if ( v16 )
    free(v16);
}
