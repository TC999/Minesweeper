void __fastcall ResourceTextureD3D::SetNameForDPI(ResourceTextureD3D *this, char a2)
{
  wchar_t *v3; // rax
  int v4; // r8d
  __int64 v5; // rbp
  wchar_t *v6; // r12
  _WORD *v7; // rdx
  bool v8; // zf
  void *v9; // rcx
  wchar_t *v10; // rax
  int v11; // r8d
  __int64 v12; // rbx
  wchar_t *v13; // rbp
  _WORD *v14; // rdx
  void *v15; // rcx

  if ( a2 )
  {
    v3 = (wchar_t *)operator new[](saturated_mul((unsigned int)(*((_DWORD *)this + 18) + 2), 2u));
    v4 = *((_DWORD *)this + 18);
    v5 = (unsigned int)(v4 - 1);
    v6 = v3;
    if ( v4 != 1 )
    {
      v7 = (_WORD *)(*((_QWORD *)this + 8) + 2LL * (int)v5);
      do
      {
        if ( *v7 == 46 )
          break;
        --v7;
        v8 = (_DWORD)v5 == 1;
        v5 = (unsigned int)(v5 - 1);
      }
      while ( !v8 );
    }
    if ( v3 )
    {
      wcsncpy_s(v3, (unsigned int)(v4 + 2), *((const wchar_t **)this + 8), (unsigned int)v5);
      wcscpy_s(&v6[v5], (unsigned int)(*((_DWORD *)this + 18) - v5 + 2), L"x2");
      wcscpy_s(
        &v6[v5 + 2],
        (unsigned int)(*((_DWORD *)this + 18) - v5),
        (const wchar_t *)(*((_QWORD *)this + 8) + 2 * v5));
    }
    v9 = (void *)*((_QWORD *)this + 8);
    *((_DWORD *)this + 18) += 2;
    operator delete(v9);
    *((_QWORD *)this + 8) = v6;
  }
  else
  {
    v10 = (wchar_t *)operator new[](saturated_mul((unsigned int)(*((_DWORD *)this + 18) - 2), 2u));
    v11 = *((_DWORD *)this + 18);
    v12 = (unsigned int)(v11 - 1);
    v13 = v10;
    if ( v11 != 1 )
    {
      v14 = (_WORD *)(*((_QWORD *)this + 8) + 2LL * (int)v12);
      do
      {
        if ( *v14 == 46 )
          break;
        --v14;
        v8 = (_DWORD)v12 == 1;
        v12 = (unsigned int)(v12 - 1);
      }
      while ( !v8 );
    }
    if ( v10 )
    {
      wcsncpy_s(v10, (unsigned int)(v11 - 2), *((const wchar_t **)this + 8), (unsigned int)(v12 - 2));
      wcscat_s(v13, (unsigned int)(*((_DWORD *)this + 18) - 2), (const wchar_t *)(*((_QWORD *)this + 8) + 2 * v12));
    }
    v15 = (void *)*((_QWORD *)this + 8);
    *((_DWORD *)this + 18) -= 2;
    operator delete(v15);
    *((_QWORD *)this + 8) = v13;
  }
}
