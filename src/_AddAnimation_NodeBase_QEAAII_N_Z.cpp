__int64 __fastcall NodeBase::AddAnimation(NodeBase *this, unsigned int a2)
{
  struct ResourceBase *Resource; // rax
  unsigned int v5; // edi
  __int64 v7; // rsi
  AnimationState *v8; // rax
  AnimationState *v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rsi
  unsigned int v12; // esi
  __int64 v13; // rbp
  AnimationState *v14; // [rsp+58h] [rbp+20h] BYREF

  Resource = ResourceManager::GetResource(g_pResourceManager, a2, 0);
  v5 = 0;
  if ( Resource )
  {
    v7 = *((_QWORD *)Resource + 6);
    v8 = (AnimationState *)operator new(0x40u);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = 0;
      *((_DWORD *)v8 + 2) = 16;
      *((_QWORD *)v8 + 2) = 0;
      *((_QWORD *)v8 + 4) = v7;
      *((_DWORD *)v8 + 7) = 0;
      *((_QWORD *)v8 + 6) = 0;
      *((_BYTE *)v8 + 24) = 0;
      *((_BYTE *)v8 + 41) = 0;
      *((_DWORD *)v8 + 15) = 0;
      *((_BYTE *)v8 + 40) = 1;
      *((_BYTE *)v8 + 42) = 0;
    }
    else
    {
      v9 = 0;
    }
    AnimationState::Reset(v9);
    v14 = v9;
    *((_QWORD *)v9 + 6) = this;
    v10 = 0;
    if ( *(_DWORD *)v9 )
    {
      v11 = 0;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + *((_QWORD *)v9 + 2)) + 32LL))(
          *(_QWORD *)(v11 + *((_QWORD *)v9 + 2)),
          *((_QWORD *)v9 + 6));
        ++v10;
        v11 += 16;
      }
      while ( v10 < *(_DWORD *)v9 );
    }
    v12 = g_uiNextHandle++;
    *((_DWORD *)v9 + 14) = v12;
    if ( *(_DWORD *)v9 )
    {
      v13 = 0;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v9 + 2) + v13) + 40LL))(
          *(_QWORD *)(*((_QWORD *)v9 + 2) + v13),
          v12);
        ++v5;
        v13 += 16;
      }
      while ( v5 < *(_DWORD *)v9 );
    }
    SortedListI<AnimationState *>::Add((char *)this + 240, v12, &v14);
    return v12;
  }
  else
  {
    Log(0x100u, L"Couldn't find animation id %d", a2);
    return 0;
  }
}
