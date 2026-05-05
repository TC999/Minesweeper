char __fastcall NodeBase::ShowTip(NodeBase *this, const struct Tip::TipSource *a2, bool a3)
{
  __int64 v4; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rcx
  RenderManager *v11; // rax

  v4 = *((_QWORD *)this + 29);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1);
  v7 = operator new(0xD0u);
  if ( v7 )
  {
    v7[17] = this;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    *v7 = &Tip::`vftable';
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[15] = 0;
    v7[16] = 0;
    v7[12] = 0;
    v7[13] = 0;
    *((_DWORD *)v7 + 29) = 0;
    *((_DWORD *)v7 + 28) = 0;
    v7[18] = 0;
    *((_BYTE *)v7 + 152) = 0;
  }
  else
  {
    v7 = 0;
  }
  *((_QWORD *)this + 29) = v7;
  if ( Tip::Initialize((Tip *)v7, a2, a3) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 29) + 128LL);
    if ( *(_BYTE *)(v10 + 41) != 1 )
    {
      v11 = g_pRenderManager;
      *(_BYTE *)(v10 + 41) = 1;
      *((_BYTE *)v11 + 20) = 1;
      *((_BYTE *)v11 + 88) = 1;
    }
    return 1;
  }
  else
  {
    v8 = *((_QWORD *)this + 29);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1);
    *((_QWORD *)this + 29) = 0;
    return 0;
  }
}
