void __fastcall UITile::StartExplosionAnimation(UITile *this)
{
  struct NodeSprite *v2; // rax
  RenderManager *v3; // rax
  int v4; // r9d
  __int64 v5; // rax
  RenderManager *v6; // rax
  struct NodeSprite *v7; // rax
  RenderManager *v8; // rdx
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  XINPUT_VIBRATION pVibration; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
    UITile::RemoveExplosionAnimation(this);
  v2 = NodeSprite::Copy(UITile::_pExplosionAnimatedSpriteBase);
  *((_QWORD *)this + 4) = v2;
  if ( *((_BYTE *)v2 + 41) != 1 )
  {
    *((_BYTE *)v2 + 41) = 1;
    v3 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v3 + 88) = 1;
  }
  NodeBase::SetPosition(
    *((NodeBase **)this + 4),
    UITile::_mineExplodeXOffset + UITile::_tileSize * *((_DWORD *)this + 12),
    *(_DWORD *)(*((_QWORD *)this + 4) + 12LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 4),
    *(_DWORD *)(*((_QWORD *)this + 4) + 8LL),
    UITile::_mineExplodeYOffset + v4 * *((_DWORD *)this + 13));
  *((_DWORD *)this + 36) = NodeBase::AddAnimation(*((NodeBase **)this + 4), UITile::_explosionControlAnimationId, 0);
  v5 = *((_QWORD *)this + 4);
  if ( *(_BYTE *)(v5 + 41) != 1 )
  {
    *(_BYTE *)(v5 + 41) = 1;
    v6 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v6 + 88) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 4) + 72LL) = 1;
  Array<IEventListener *>::Add(*((_QWORD *)this + 4) + 200LL, (__int64)this);
  *(_BYTE *)(*((_QWORD *)this + 4) + 413LL) = 1;
  NodeBase::ResumeAnimation(*((NodeBase **)this + 4), *((_DWORD *)this + 36));
  v7 = UITile::ShowMine(this);
  v8 = g_pRenderManager;
  if ( *((_DWORD *)v7 + 99) != 130 )
  {
    *((_DWORD *)v7 + 99) = 130;
    *((_BYTE *)v8 + 20) = 1;
    *((_BYTE *)v8 + 88) = 1;
  }
  v9 = 2236962;
  if ( this == *(UITile **)(*((_QWORD *)this + 9) + 248LL) )
    v9 = 16711680;
  if ( v9 != *((_DWORD *)v7 + 101) )
  {
    *((_DWORD *)v7 + 101) = v9;
    *((_BYTE *)v8 + 20) = 1;
    *((_BYTE *)v8 + 88) = 1;
  }
  *((_BYTE *)this + 136) = 0;
  UITile::SetTopVisible(this, 0);
  if ( UITile::_tileSize * *((_DWORD *)this + 12) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 56LL) + 16LL) / 2 )
  {
    if ( g_pCommonController )
    {
      v11 = UITile::_rightRumbleCount;
      if ( !UITile::_rightRumbleCount )
      {
        pVibration.wLeftMotorSpeed = 0;
        pVibration.wRightMotorSpeed = 0x8000;
        XInputSetState(0, &pVibration);
        v11 = UITile::_rightRumbleCount;
      }
      UITile::_rightRumbleCount = v11 + 1;
    }
  }
  else if ( g_pCommonController )
  {
    v10 = UITile::_leftRumbleCount;
    if ( !UITile::_leftRumbleCount )
    {
      pVibration.wRightMotorSpeed = 0;
      pVibration.wLeftMotorSpeed = 0x8000;
      XInputSetState(0, &pVibration);
      v10 = UITile::_leftRumbleCount;
    }
    UITile::_leftRumbleCount = v10 + 1;
  }
}
