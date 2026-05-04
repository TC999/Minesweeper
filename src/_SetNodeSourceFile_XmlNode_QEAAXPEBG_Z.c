// Hidden C++ exception states: #wind=1
void __fastcall XmlNode::SetNodeSourceFile(void **this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const unsigned __int16 *v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // rdi
  void *v8; // rax
  _QWORD *v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rbx
  unsigned int v14; // r12d
  __int64 v15; // rdi
  _DWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 88) )
  {
    operator delete(this[12]);
    this[12] = 0;
  }
  v4 = -1;
  v5 = a2;
  do
  {
    if ( !v4 )
      break;
    v6 = *v5++ == 0;
    --v4;
  }
  while ( !v6 );
  v7 = (unsigned int)~(_DWORD)v4;
  v8 = operator new(saturated_mul(v7, 2u));
  this[12] = v8;
  *((_DWORD *)this + 26) = v7 - 1;
  *((_BYTE *)this + 88) = 1;
  memcpy(v8, a2, 2 * v7);
  v16[0] = 0;
  v16[1] = 0;
  v16[2] = 16;
  v9 = 0;
  v17 = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v11 = 0;
    do
    {
      Array<IEventListener *>::Add((__int64)v16, *(_QWORD *)((char *)this[5] + v11));
      ++v10;
      v11 += 8;
    }
    while ( v10 < *((_DWORD *)this + 6) );
    v12 = v16[0];
    if ( v16[0] )
    {
      v9 = v17;
      do
      {
        v13 = v9[v12 - 1];
        if ( v12 )
          --v12;
        v16[0] = v12;
        if ( *(_BYTE *)(v13 + 88) )
        {
          operator delete(*(void **)(v13 + 96));
          *(_QWORD *)(v13 + 96) = 0;
        }
        *(_BYTE *)(v13 + 88) = 0;
        *(_QWORD *)(v13 + 96) = this[12];
        *(_DWORD *)(v13 + 104) = *((_DWORD *)this + 26);
        v14 = 0;
        if ( *(_DWORD *)(v13 + 24) )
        {
          v15 = 0;
          do
          {
            Array<IEventListener *>::Add((__int64)v16, *(_QWORD *)(v15 + *(_QWORD *)(v13 + 40)));
            ++v14;
            v15 += 8;
          }
          while ( v14 < *(_DWORD *)(v13 + 24) );
          v9 = v17;
          v12 = v16[0];
        }
      }
      while ( v12 );
    }
    else
    {
      v9 = v17;
    }
  }
  if ( v9 )
    free(v9);
}
