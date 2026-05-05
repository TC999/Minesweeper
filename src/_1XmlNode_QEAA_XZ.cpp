// Hidden C++ exception states: #wind=5
void __fastcall XmlNode::~XmlNode(void **this, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  char *v5; // rax
  void *v6; // rbp
  unsigned int v7; // ebp
  __int64 v8; // rsi
  void **v9; // rdi
  unsigned int v10; // edi
  __int64 v11; // rsi
  void *v12; // rcx

  if ( *((_BYTE *)this + 80) )
  {
    operator delete(this[17]);
    this[17] = 0;
    *((_DWORD *)this + 36) = 0;
    *((_BYTE *)this + 80) = 0;
  }
  v3 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v4 = 0;
    do
    {
      v5 = (char *)this[5];
      v6 = *(void **)&v5[v4];
      if ( v6 )
      {
        XmlNode::~XmlNode(*(XmlNode **)&v5[v4]);
        operator delete(v6);
      }
      ++v3;
      v4 += 8;
    }
    while ( v3 < *((_DWORD *)this + 6) );
  }
  *((_DWORD *)this + 6) = 0;
  v7 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v8 = 0;
    do
    {
      v9 = *(void ***)((char *)this[1] + v8);
      if ( v9 )
      {
        if ( *(_BYTE *)v9 )
        {
          operator delete(v9[1]);
          v9[1] = 0;
        }
        operator delete(v9);
      }
      ++v7;
      v8 += 8;
    }
    while ( v7 < *((_DWORD *)this + 4) );
  }
  v10 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v11 = 0;
    do
    {
      free(*(void **)((char *)*this + v11));
      ++v10;
      v11 += 8;
    }
    while ( v10 < *((_DWORD *)this + 4) );
  }
  *((_DWORD *)this + 4) = 0;
  if ( *((_BYTE *)this + 112) )
  {
    operator delete(this[15]);
    this[15] = 0;
  }
  if ( *((_BYTE *)this + 88) )
  {
    operator delete(this[12]);
    this[12] = 0;
  }
  if ( *((_BYTE *)this + 56) )
  {
    operator delete(this[8]);
    this[8] = 0;
  }
  v12 = this[5];
  if ( v12 )
    free(v12);
  LOBYTE(a2) = 1;
  SortedListW<XmlNode::XmlString *>::RemoveAll(this, a2);
}
