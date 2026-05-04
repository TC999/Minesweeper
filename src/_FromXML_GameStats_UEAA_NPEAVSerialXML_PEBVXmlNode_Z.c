// Hidden C++ exception states: #wind=6
bool __fastcall GameStats::FromXML(GameStats *this, struct SerialXML *a2, const struct XmlNode *a3)
{
  struct SerialXML *v4; // r14
  Str *v6; // rbx
  void **v7; // rax
  Str *v8; // rax
  const struct XmlNode *v9; // rbp
  unsigned int v10; // r13d
  char v11; // r12
  __int64 v12; // rdi
  GameStat *v13; // rbx
  void *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  _DWORD *v17; // rbx
  __int64 v18; // r8
  void *v19; // rcx
  _BYTE v21[16]; // [rsp+28h] [rbp-70h] BYREF
  void *Block; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  void *v24; // [rsp+50h] [rbp-48h]
  _BYTE v25[24]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v6 = Str::Str((Str *)&v23, L"IndividualStats");
  v7 = (void **)Str::Str((Str *)v25, L"/");
  v8 = operator+<Str>((Str *)v21, v7, (__int64)v6);
  v9 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v8 + 2));
  v10 = 0;
  v11 = 1;
  if ( *((_DWORD *)this + 2) )
  {
    v12 = 0;
    do
    {
      v13 = *(GameStat **)(v12 + *((_QWORD *)this + 3));
      if ( v13 )
      {
        *(_QWORD *)v13 = &GameStat::`vftable';
        GameStat::freeRes(v13);
        v14 = (void *)*((_QWORD *)v13 + 8);
        if ( v14 )
          free(v14);
        operator delete(v13);
      }
      *(_QWORD *)(v12 + *((_QWORD *)this + 3)) = 0;
      ++v10;
      v12 += 8;
    }
    while ( v10 < *((_DWORD *)this + 2) );
    v4 = a2;
  }
  *((_DWORD *)this + 2) = 0;
  if ( v9 )
  {
    v15 = 0;
    if ( *((_DWORD *)v9 + 6) )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = operator new(0x48u);
        if ( v17 )
        {
          *(_QWORD *)v17 = &GameStat::`vftable';
          v17[12] = 0;
          v17[13] = 0;
          v17[14] = 16;
          *((_QWORD *)v17 + 8) = 0;
          GameStat::Reset((GameStat *)v17, 0);
        }
        else
        {
          v17 = 0;
        }
        v18 = v15 < *((_DWORD *)v9 + 6) ? *(_QWORD *)(v16 + *((_QWORD *)v9 + 5)) : 0LL;
        if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, struct SerialXML *, __int64))(*(_QWORD *)v17 + 8LL))(
                v17,
                v4,
                v18) )
          break;
        Array<IEventListener *>::Add((__int64)this + 8, (__int64)v17);
        ++v15;
        v16 += 8;
        if ( v15 >= *((_DWORD *)v9 + 6) )
          goto LABEL_24;
      }
      *(_QWORD *)v17 = &GameStat::`vftable';
      GameStat::freeRes((GameStat *)v17);
      v19 = (void *)*((_QWORD *)v17 + 8);
      if ( v19 )
        free(v19);
      operator delete(v17);
      v11 = 0;
    }
  }
LABEL_24:
  operator delete(Block);
  operator delete(v24);
  return v11 != 0;
}
