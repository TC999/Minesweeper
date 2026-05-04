void __fastcall UIBoardCanvas::ClearAnimations(NodeBase **this)
{
  NodeBase *v2; // r11
  RenderManager *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rdi

  Log(0x1000000u, L"Clear Animations");
  UITile::ClearRumble();
  if ( *((_DWORD *)this + 12) )
  {
    NodeBase::RemoveAllAnimations(this[9]);
    v2 = this[9];
    if ( *((_BYTE *)v2 + 41) )
    {
      v3 = g_pRenderManager;
      *((_BYTE *)v2 + 41) = 0;
      *((_BYTE *)v3 + 20) = 1;
      *((_BYTE *)v3 + 88) = 1;
    }
    NodeBase::RemoveListener(this[9], (struct IEventListener *)this);
    *((_DWORD *)this + 12) = 0;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 70) )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)((char *)this[37] + v5);
      if ( !*(_BYTE *)(v6 + 13) )
      {
        if ( v6 )
          (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1);
        *(_QWORD *)((char *)this[37] + v5) = 0;
      }
      ++v4;
      v5 += 8;
    }
    while ( v4 < *((_DWORD *)this + 70) );
  }
  *((_DWORD *)this + 70) = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 76) )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)((char *)this[40] + v8);
      if ( !*(_BYTE *)(v9 + 13) )
      {
        if ( v9 )
          (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1);
        *(_QWORD *)((char *)this[40] + v8) = 0;
      }
      ++v7;
      v8 += 8;
    }
    while ( v7 < *((_DWORD *)this + 76) );
  }
  *((_DWORD *)this + 76) = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 82) )
  {
    v11 = 0;
    do
    {
      UITile::RemoveExplosionAnimation(*(UITile **)((char *)this[43] + v11));
      UITile::RemoveDisarmAnimation(*(UITile **)((char *)this[43] + v11));
      ++v10;
      v11 += 8;
    }
    while ( v10 < *((_DWORD *)this + 82) );
  }
  *((_DWORD *)this + 82) = 0;
}
