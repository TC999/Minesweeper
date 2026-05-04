// Hidden C++ exception states: #wind=1
char __fastcall Ober_ReadFile(const unsigned __int16 *a1, unsigned __int8 **a2, unsigned int *a3)
{
  DllFileMgr *v5; // r12
  char v6; // bl
  const void *v7; // rbp
  size_t v8; // rax
  size_t v9; // rbx
  unsigned __int8 *v10; // rax
  _BYTE v12[16]; // [rsp+28h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+78h] [rbp+20h] BYREF

  Str::Str((Str *)v12, a1);
  v5 = Singleton<DllFileMgr>::s_Singleton;
  v6 = 0;
  v14 = 0;
  v7 = DllFileMgr::LoadResource(Singleton<DllFileMgr>::s_Singleton, (const struct Str *)v12, &v14);
  if ( v7 && a2 && a3 )
  {
    v8 = v14;
    *a3 = v14;
    v9 = v8;
    v10 = (unsigned __int8 *)operator new(v8);
    *a2 = v10;
    memcpy(v10, v7, v9);
    DllFileMgr::UnloadResource(v5, v7);
    v6 = 1;
  }
  operator delete(Block);
  return v6;
}
