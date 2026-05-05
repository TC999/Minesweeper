bool __fastcall ResourceTextureD3D::Recreate(ResourceTextureD3D *this)
{
  _DWORD *v1; // rdi
  _DWORD *v2; // rbx
  bool result; // al

  if ( *((_BYTE *)this + 152) && g_bDoubleDPI )
  {
    *((_DWORD *)this + 14) = *((_DWORD *)this + 36);
    *((_DWORD *)this + 15) = *((_DWORD *)this + 37);
  }
  else
  {
    v1 = (_DWORD *)((char *)this + 56);
    v2 = (_DWORD *)((char *)this + 60);
    result = ResourceTextureD3D::CreateTextureFromFile(
               *((const unsigned __int16 **)this + 8),
               *((_DWORD *)this + 18),
               (struct IDirect3DTexture9 **)this + 6,
               (unsigned int *)this + 14,
               (unsigned int *)this + 15);
    if ( !result )
      return result;
    if ( g_bDoubleDPI )
    {
      *v1 >>= 1;
      *v2 >>= 1;
    }
  }
  return 1;
}
