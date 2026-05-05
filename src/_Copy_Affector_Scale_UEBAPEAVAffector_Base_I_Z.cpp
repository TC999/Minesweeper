struct Affector_Base *__fastcall Affector_Scale::Copy(Affector_Scale *this, int a2)
{
  _DWORD *v4; // rax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  __int64 v7; // rbp

  v4 = operator new(0x38u);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v4[8] = 0;
    v4[9] = 0;
    v4[10] = 16;
    *((_QWORD *)v4 + 6) = 0;
    v4[6] = 0;
    *(_QWORD *)v4 = &Affector_Scale::`vftable';
  }
  else
  {
    v6 = 0;
  }
  v6[4] = a2;
  if ( *((_DWORD *)this + 8) )
  {
    v7 = 0;
    do
    {
      Array<enum NodeType>::Add((__int64)(v6 + 8), *(_DWORD *)(*((_QWORD *)this + 6) + v7));
      ++v5;
      v7 += 4;
    }
    while ( v5 < *((_DWORD *)this + 8) );
  }
  return (struct Affector_Base *)v6;
}
