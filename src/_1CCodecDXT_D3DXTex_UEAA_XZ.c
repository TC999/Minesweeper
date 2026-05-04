void __fastcall D3DXTex::CCodecDXT::~CCodecDXT(D3DXTex::CCodecDXT *this)
{
  bool v1; // zf
  __int64 v3; // rsi
  unsigned int i; // edi
  unsigned int j; // ebp

  v1 = *((_DWORD *)this + 74) == 0;
  *(_QWORD *)this = &D3DXTex::CCodecDXT::`vftable';
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 38);
    if ( v3 )
    {
      for ( i = *((_DWORD *)this + 64); i < *((_DWORD *)this + 65); ++i )
      {
        for ( j = *((_DWORD *)this + 61); j < *((_DWORD *)this + 63); j += 4 )
        {
          operator delete(*(void **)(v3 + 8));
          v3 += 16;
        }
      }
    }
  }
  operator delete(*((void **)this + 36));
  operator delete(*((void **)this + 38));
  D3DXTex::CCodec::~CCodec((void **)this);
}
