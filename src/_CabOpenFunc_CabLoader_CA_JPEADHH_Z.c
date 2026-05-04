// Hidden C++ exception states: #wind=8
Str *__fastcall CabLoader::CabOpenFunc(LPCCH lpMultiByteStr, __int16 a2)
{
  char v3; // si
  Str *v4; // rbx
  const void *Resource; // rbp
  Str *v7; // rdi
  int v8; // ebx
  int v9[2]; // [rsp+38h] [rbp-270h] BYREF
  const wchar_t *v10[2]; // [rsp+40h] [rbp-268h] BYREF
  void *Block; // [rsp+50h] [rbp-258h]
  __int64 v12; // [rsp+58h] [rbp-250h]
  Str *v13; // [rsp+60h] [rbp-248h]
  WCHAR WideCharStr[264]; // [rsp+70h] [rbp-238h] BYREF

  v12 = -2;
  v3 = 0;
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 260);
  WideCharStr[259] = 0;
  if ( (a2 & 0x100) != 0 )
  {
    v4 = (Str *)operator new(0x30u);
    *(_QWORD *)v9 = v4;
    if ( v4 )
    {
      Str::Str((Str *)v10, WideCharStr);
      v3 = 1;
      Str::Str(v4, v10);
      *((_QWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 8) = 0;
      *((_DWORD *)v4 + 9) = 0;
      *((_BYTE *)v4 + 40) = 1;
      *((_BYTE *)v4 + 41) = 0;
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 1) != 0 )
      operator delete(Block);
    CabLoader::RegisterCabStream(v4);
    return v4;
  }
  else
  {
    v9[0] = 0;
    Str::Str((Str *)v10, WideCharStr);
    Resource = DllFileMgr::LoadResource(Singleton<DllFileMgr>::s_Singleton, (const struct Str *)v10, v9);
    operator delete(Block);
    if ( Resource )
    {
      v7 = (Str *)operator new(0x30u);
      v13 = v7;
      if ( v7 )
      {
        Str::Str((Str *)v10, WideCharStr);
        v3 = 2;
        v8 = v9[0];
        Str::Str(v7, v10);
        *((_QWORD *)v7 + 3) = Resource;
        *((_DWORD *)v7 + 8) = v8;
        *((_DWORD *)v7 + 9) = 0;
        *((_BYTE *)v7 + 40) = 0;
        *((_BYTE *)v7 + 41) = 0;
      }
      else
      {
        v7 = 0;
      }
      if ( (v3 & 2) != 0 )
        operator delete(Block);
      CabLoader::RegisterCabStream(v7);
      return v7;
    }
    else
    {
      *_errno() = 2;
      return (Str *)-1LL;
    }
  }
}
