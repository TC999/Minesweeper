// Hidden C++ exception states: #wind=8
void __fastcall UIBoardCanvas::RefreshLabels(UIBoardCanvas *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rdi
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // rbx
  _QWORD v11[2]; // [rsp+28h] [rbp-50h] BYREF
  void *v12; // [rsp+38h] [rbp-40h]
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Block; // [rsp+50h] [rbp-28h]
  _BYTE v15[16]; // [rsp+58h] [rbp-20h] BYREF
  void *v16; // [rsp+68h] [rbp-10h]

  if ( *((_DWORD *)Game::G + 14) == 3 )
    v2 = 0;
  else
    v2 = (unsigned int)(*(_DWORD *)(*((_QWORD *)Game::G + 3) + 8LL) - *(_DWORD *)(*((_QWORD *)Game::G + 3) + 20LL));
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  if ( (int)v2 >= -99 )
  {
    if ( (int)v2 <= 999 )
      v4 = Str::FromNumber(v13, v2);
    else
      v4 = Str::FromNumber(v13, 999);
    Str::operator=(v11, v4);
    operator delete(Block);
  }
  else
  {
    v3 = Str::FromNumber(v13, 4294967197LL);
    Str::operator=(v11, v3);
    operator delete(Block);
  }
  v5 = (unsigned int)(int)floorf(*(float *)(*((_QWORD *)Game::G + 3) + 32LL));
  v13[0] = 0;
  v13[1] = 0;
  Block = 0;
  if ( (int)v5 >= -99 )
  {
    if ( (int)v5 <= 999 )
      v7 = Str::FromNumber(v15, v5);
    else
      v7 = Str::FromNumber(v15, 999);
    Str::operator=(v13, v7);
    operator delete(v16);
  }
  else
  {
    v6 = Str::FromNumber(v15, 4294967197LL);
    Str::operator=(v13, v6);
    operator delete(v16);
  }
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 112LL))(*((_QWORD *)this + 20), v12);
  v8 = Block;
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 21) + 112LL))(*((_QWORD *)this + 21), Block);
  v9 = LocalizeMessage(L"|43727|ACC|Mines remaining: %1//accessibility mines remaining description", v12);
  NodeBase::SetAccessDescription(*((NodeBase **)this + 20), v9);
  LocalFree(v9);
  v10 = LocalizeMessage(L"|43410|ACC|Time elapsed: %1//accessibility time elapsed description", v8);
  NodeBase::SetAccessDescription(*((NodeBase **)this + 21), v10);
  LocalFree(v10);
  operator delete(v8);
  operator delete(v12);
}
