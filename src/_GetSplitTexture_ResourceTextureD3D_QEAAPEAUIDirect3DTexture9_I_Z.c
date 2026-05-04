struct IDirect3DTexture9 *__fastcall ResourceTextureD3D::GetSplitTexture(ResourceTextureD3D *this, unsigned int a2)
{
  struct IDirect3DTexture9 **v4; // rbp
  __int64 v5; // r12
  struct IDirect3DTexture9 *result; // rax
  wchar_t *v7; // rax
  wchar_t *v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // esi
  __int16 v11; // cx

  v4 = (struct IDirect3DTexture9 **)((char *)this + 8 * a2 + 80);
  v5 = a2;
  result = *v4;
  if ( *v4 )
    return result;
  v7 = (wchar_t *)operator new[](saturated_mul((unsigned int)(*((_DWORD *)this + 18) + 1), 2u));
  v8 = v7;
  if ( !v7 )
    return 0;
  wcscpy_s(v7, (unsigned int)(*((_DWORD *)this + 18) + 1), *((const wchar_t **)this + 8));
  v8[*((unsigned int *)this + 18)] = 0;
  v8[*((_DWORD *)this + 18) - 1] = v8[*((_DWORD *)this + 18) - 2];
  v8[*((_DWORD *)this + 18) - 2] = v8[*((_DWORD *)this + 18) - 3];
  v8[*((_DWORD *)this + 18) - 3] = v8[*((_DWORD *)this + 18) - 4];
  v8[*((_DWORD *)this + 18) - 4] = v8[*((_DWORD *)this + 18) - 5];
  if ( !a2 )
  {
    v11 = 49;
    goto LABEL_12;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    v11 = 50;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 51;
    goto LABEL_12;
  }
  if ( v10 == 1 )
  {
    v11 = 52;
LABEL_12:
    v8[*((_DWORD *)this + 18) - 5] = v11;
  }
  if ( !ResourceTextureD3D::CreateTextureFromFile(
          v8,
          *((_DWORD *)this + 18) + 1,
          v4,
          (unsigned int *)this + v5 + 28,
          (unsigned int *)this + v5 + 32) )
  {
    operator delete(v8);
    return 0;
  }
  operator delete(v8);
  return *v4;
}
