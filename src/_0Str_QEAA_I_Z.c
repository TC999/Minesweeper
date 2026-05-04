Str *__fastcall Str::Str(Str *this, UINT a2)
{
  int v4; // ebx
  WCHAR *v5; // r12
  HMODULE ModuleHandleW; // rax
  __int64 StringW; // rsi
  unsigned __int64 v8; // rcx
  WCHAR *v9; // rsi
  int v10; // ebx
  HMODULE v11; // rax

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  v4 = 1024;
  while ( 1 )
  {
    v5 = (WCHAR *)operator new(saturated_mul(v4, 2u));
    if ( !v5 )
      break;
    ModuleHandleW = GetModuleHandleW(0);
    StringW = LoadStringW(ModuleHandleW, a2, v5, v4);
    operator delete(v5);
    if ( (int)StringW < v4 - 1 )
    {
      *(_QWORD *)this = StringW;
      if ( !(_DWORD)StringW )
        return this;
LABEL_7:
      v8 = *(_QWORD *)this + 1LL;
      *((_QWORD *)this + 1) = v8;
      v9 = (WCHAR *)operator new(saturated_mul(v8, 2u));
      *((_QWORD *)this + 2) = v9;
      if ( v9 )
      {
        v10 = *(_DWORD *)this;
        v11 = GetModuleHandleW(0);
        LoadStringW(v11, a2, v9, v10 + 1);
        return this;
      }
      break;
    }
    v4 *= 2;
    if ( v4 > 0x100000 )
    {
      *(_QWORD *)this = 0xFFFFF;
      goto LABEL_7;
    }
  }
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  return this;
}
