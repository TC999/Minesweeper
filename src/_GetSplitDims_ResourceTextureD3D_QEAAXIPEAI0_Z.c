void __fastcall ResourceTextureD3D::GetSplitDims(
        ResourceTextureD3D *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v6; // rdi

  v6 = a2;
  if ( a2 < 4 )
    ResourceTextureD3D::GetSplitTexture(this, a2);
  *a4 = *((_DWORD *)this + v6 + 32);
  *a3 = *((_DWORD *)this + v6 + 28);
}
