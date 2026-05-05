// Hidden C++ exception states: #wind=1
char __fastcall FileMgrStream::Open(void **this, const unsigned __int16 *a2, char a3)
{
  void *v5; // rdi
  size_t v6; // rsi
  void *v7; // rax
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF
  void *Block; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  Str::Str((Str *)v9, a2);
  v5 = (void *)DllFileMgr::LoadResource(Singleton<DllFileMgr>::s_Singleton, (const struct Str *)v9, &v11);
  operator delete(Block);
  if ( !v5 )
    return 0;
  if ( *((_BYTE *)this + 28) )
    operator delete(this[1]);
  if ( a3 )
  {
    *((_BYTE *)this + 28) = 0;
    *((_DWORD *)this + 4) = v11;
    this[1] = v5;
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
    *((_BYTE *)this + 28) = 1;
    operator delete(this[1]);
    v6 = v11;
    *((_DWORD *)this + 4) = v11;
    v7 = operator new((unsigned int)v6);
    this[1] = v7;
    *((_DWORD *)this + 5) = 0;
    if ( v7 )
      memcpy(v7, v5, v6);
    DllFileMgr::UnloadResource(Singleton<DllFileMgr>::s_Singleton, v5);
  }
  return 1;
}
