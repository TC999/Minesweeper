// Hidden C++ exception states: #wind=1
void __fastcall NodeSprite::Copy(struct NodeSprite *a1, const struct NodeSprite *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // rax
  bool v7; // cf
  size_t v8; // rax
  unsigned int *v9; // rax
  void *v10; // rbp
  unsigned int v11; // r12d
  __int64 v12; // rbp
  struct ResourceBase *Resource; // rax
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // rbp

  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
  *((_BYTE *)a1 + 41) = *((_BYTE *)a2 + 41);
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 9);
  *((_BYTE *)a1 + 41) = *((_BYTE *)a2 + 41);
  *((_DWORD *)a1 + 90) = *((_DWORD *)a2 + 90);
  *((_QWORD *)a1 + 17) = *((_QWORD *)a2 + 17);
  *((_DWORD *)a1 + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)a1 + 67) = *((_DWORD *)a2 + 67);
  *((_DWORD *)a1 + 68) = *((_DWORD *)a2 + 68);
  *((_DWORD *)a1 + 69) = *((_DWORD *)a2 + 69);
  *((_DWORD *)a1 + 108) = *((_DWORD *)a2 + 108);
  *((_DWORD *)a1 + 109) = *((_DWORD *)a2 + 109);
  *((_DWORD *)a1 + 110) = *((_DWORD *)a2 + 110);
  *((_DWORD *)a1 + 111) = *((_DWORD *)a2 + 111);
  *((_DWORD *)a1 + 96) = *((_DWORD *)a2 + 96);
  *((_DWORD *)a1 + 112) = *((_DWORD *)a2 + 112);
  *((_BYTE *)a1 + 412) = *((_BYTE *)a2 + 412);
  *((_DWORD *)a1 + 115) = *((_DWORD *)a2 + 115);
  *((_DWORD *)a1 + 107) = *((_DWORD *)a2 + 107);
  *((_BYTE *)a1 + 413) = *((_BYTE *)a2 + 413);
  *((_DWORD *)a1 + 97) = *((_DWORD *)a2 + 97);
  *((_DWORD *)a1 + 98) = *((_DWORD *)a2 + 98);
  *((_DWORD *)a1 + 99) = *((_DWORD *)a2 + 99);
  *((_DWORD *)a1 + 101) = *((_DWORD *)a2 + 101);
  *((_DWORD *)a1 + 113) = *((_DWORD *)a2 + 113);
  *((_DWORD *)a1 + 114) = *((_DWORD *)a2 + 114);
  *((_BYTE *)a1 + 464) = *((_BYTE *)a2 + 464);
  *((_DWORD *)a1 + 106) = *((_DWORD *)a2 + 106);
  v4 = 0;
  *((_QWORD *)a1 + 52) = 0;
  *((_BYTE *)a1 + 414) = *((_BYTE *)a2 + 414);
  if ( *((_DWORD *)a2 + 106) )
  {
    v5 = *((_DWORD *)a2 + 106);
    v6 = 32LL * v5;
    if ( !is_mul_ok(v5, 0x20u) )
      v6 = -1;
    v7 = __CFADD__(v6, 4);
    v8 = v6 + 4;
    if ( v7 )
      v8 = -1;
    v9 = (unsigned int *)operator new[](v8);
    if ( v9 )
    {
      *v9 = v5;
      v10 = v9 + 1;
      `eh vector constructor iterator'(
        v9 + 1,
        0x20u,
        v5,
        (void (*)(void *))NodeSprite::Source::Source,
        (void (*)(void *))NodeSprite::Source::~Source);
    }
    else
    {
      v10 = 0;
    }
    *((_QWORD *)a1 + 52) = v10;
    memcpy(v10, *((const void **)a2 + 52), 32LL * *((unsigned int *)a2 + 106));
    v11 = 0;
    if ( *((_DWORD *)a2 + 106) )
    {
      v12 = 0;
      do
      {
        Resource = ResourceManager::GetResource(g_pResourceManager, *(_DWORD *)(*((_QWORD *)a1 + 52) + v12), 1);
        if ( Resource )
          ++*((_DWORD *)Resource + 2);
        ++v11;
        v12 += 32;
      }
      while ( v11 < *((_DWORD *)a2 + 106) );
    }
  }
  v14 = 0;
  if ( *((_DWORD *)a2 + 72) )
  {
    v15 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)a1 + 288, *(_QWORD *)(v15 + *((_QWORD *)a2 + 38)));
      ++v14;
      v15 += 8;
    }
    while ( v14 < *((_DWORD *)a2 + 72) );
  }
  if ( *((_DWORD *)a2 + 84) )
  {
    v16 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)a1 + 336, *(_QWORD *)(*((_QWORD *)a2 + 44) + v16));
      ++v4;
      v16 += 8;
    }
    while ( v4 < *((_DWORD *)a2 + 84) );
  }
  (**(void (__fastcall ***)(struct NodeSprite *))a1)(a1);
}
