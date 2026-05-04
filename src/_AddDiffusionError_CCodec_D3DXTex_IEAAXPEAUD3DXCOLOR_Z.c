void __fastcall D3DXTex::CCodec::AddDiffusionError(D3DXTex::CCodec *this, struct D3DXCOLOR *a2)
{
  unsigned int v2; // r9d
  float *v3; // r10
  float *v4; // rax

  v2 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    v3 = (float *)((char *)a2 + 8);
    do
    {
      ++v2;
      v4 = (float *)((char *)v3 + 8LL - (_QWORD)a2 + *((_QWORD *)this + 15));
      *(v3 - 2) = *v4 + *(v3 - 2);
      *(v3 - 1) = v4[1] + *(v3 - 1);
      *v3 = v4[2] + *v3;
      v3 += 4;
      *(v3 - 3) = v4[3] + *(v3 - 3);
    }
    while ( v2 < *((_DWORD *)this + 34) );
  }
  memset(*((void **)this + 15), 0, 16LL * (unsigned int)(*((_DWORD *)this + 34) + 2));
}
