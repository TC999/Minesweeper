void __fastcall UIBoardCanvas::cleanupBoardObjects(TipManager **this)
{
  NodeBase *v2; // rcx
  NodeBase *v3; // rcx
  NodeBase *v4; // rcx
  NodeBase *v5; // rcx
  NodeBase *v6; // rcx
  NodeBase *v7; // rcx
  NodeBase *v8; // rcx
  NodeBase *v9; // rcx
  NodeBase *v10; // rcx
  NodeBase *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rsi
  NodeBase *v14; // rcx
  TipManager *v15; // rcx

  UITile::ClearRumble();
  TipManager::HideTip(this[33], 0);
  v2 = this[17];
  if ( v2 )
  {
    NodeBase::DeleteSelf(v2);
    this[17] = 0;
  }
  v3 = this[16];
  if ( v3 )
  {
    NodeBase::DeleteSelf(v3);
    this[16] = 0;
  }
  v4 = this[9];
  if ( v4 )
  {
    NodeBase::DeleteSelf(v4);
    this[9] = 0;
  }
  v5 = this[10];
  if ( v5 )
  {
    NodeBase::DeleteSelf(v5);
    this[10] = 0;
  }
  v6 = this[11];
  if ( v6 )
  {
    NodeBase::DeleteSelf(v6);
    this[11] = 0;
  }
  v7 = this[13];
  if ( v7 )
  {
    NodeBase::DeleteSelf(v7);
    this[13] = 0;
  }
  v8 = this[12];
  if ( v8 )
  {
    NodeBase::DeleteSelf(v8);
    this[12] = 0;
  }
  v9 = this[21];
  if ( v9 )
  {
    NodeBase::DeleteSelf(v9);
    this[21] = 0;
  }
  v10 = this[20];
  if ( v10 )
  {
    NodeBase::DeleteSelf(v10);
    this[20] = 0;
  }
  v11 = this[19];
  if ( v11 )
  {
    NodeBase::DeleteSelf(v11);
    this[19] = 0;
  }
  v12 = 0;
  if ( *((_DWORD *)this + 44) )
  {
    v13 = 0;
    do
    {
      NodeBase::DeleteSelf(*(NodeBase **)((char *)this[24] + v13));
      ++v12;
      v13 += 8;
    }
    while ( v12 < *((_DWORD *)this + 44) );
  }
  *((_DWORD *)this + 44) = 0;
  v14 = this[15];
  if ( v14 )
  {
    NodeBase::DeleteSelf(v14);
    this[15] = 0;
  }
  v15 = this[33];
  if ( v15 )
  {
    (*(void (__fastcall **)(TipManager *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1);
    this[33] = 0;
  }
}
