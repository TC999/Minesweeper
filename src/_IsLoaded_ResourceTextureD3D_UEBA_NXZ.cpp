__int64 __fastcall ResourceTextureD3D::IsLoaded(ResourceTextureD3D *this)
{
  __int64 result; // rax

  result = 0;
  if ( *((_QWORD *)this + 6)
    || *((_QWORD *)this + 10)
    || *((_QWORD *)this + 11)
    || *((_QWORD *)this + 12)
    || *((_QWORD *)this + 13) )
  {
    return 1;
  }
  return result;
}
