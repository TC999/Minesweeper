// Hidden C++ exception states: #wind=5
TipManager *__fastcall TipManager::`scalar deleting destructor'(TipManager *this, __int64 a2)
{
  char v2; // r12
  UserInterface *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rsi
  void **v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdx

  v2 = a2;
  *(_QWORD *)this = &TipManager::`vftable';
  if ( *((_BYTE *)this + 144) == 1 )
  {
    *((_BYTE *)this + 144) = 0;
    v4 = g_pUserInterface;
    Array<Access_Node *>::FindRemove((__int64)g_pUserInterface + 120, (__int64)this);
    Array<Access_Node *>::FindRemove((__int64)v4 + 96, (__int64)this);
  }
  v5 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v6 = 0;
    do
    {
      v7 = *(void ***)(v6 + *((_QWORD *)this + 2));
      if ( v7 )
      {
        operator delete(v7[8]);
        operator delete(v7[5]);
        operator delete(v7[2]);
        operator delete(v7);
      }
      ++v5;
      v6 += 8;
    }
    while ( v5 < *((_DWORD *)this + 6) );
  }
  LOBYTE(a2) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 8, a2);
  v8 = *((unsigned int *)this + 30);
  if ( (_DWORD)v8 )
  {
    Timer::DeleteEvent(g_pTimer, v8);
    *((_DWORD *)this + 30) = 0;
  }
  `eh vector destructor iterator'(
    (char *)this + 48,
    0x18u,
    3,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
  LOBYTE(v9) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 8, v9);
  *(_QWORD *)this = &IEventListener::`vftable';
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
