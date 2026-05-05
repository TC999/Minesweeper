__int64 __fastcall D3DXTex::CCodec::DecodePalette(D3DXTex::CCodec *this, struct D3DX_BLT *a2)
{
  void *v4; // rax
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // ecx

  v4 = operator new(0x1000u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v5 = 0;
  *((_QWORD *)this + 9) = v4;
  if ( !v4 )
    return 2147942414LL;
  v7 = 256;
  if ( *((_QWORD *)a2 + 11) )
  {
    v8 = 0;
    do
    {
      v9 = *(unsigned __int8 *)(*((_QWORD *)a2 + 11) + v8);
      v8 += 4;
      *(float *)(v5 + *((_QWORD *)this + 9)) = (float)v9 * 0.0039215689;
      v5 += 16;
      --v7;
      *(float *)(v5 + *((_QWORD *)this + 9) - 12) = (float)*(unsigned __int8 *)(*((_QWORD *)a2 + 11) + v8 - 3)
                                                  * 0.0039215689;
      *(float *)(v5 + *((_QWORD *)this + 9) - 8) = (float)*(unsigned __int8 *)(*((_QWORD *)a2 + 11) + v8 - 2)
                                                 * 0.0039215689;
      *(float *)(v5 + *((_QWORD *)this + 9) - 4) = (float)*(unsigned __int8 *)(*((_QWORD *)a2 + 11) + v8 - 1)
                                                 * 0.0039215689;
    }
    while ( v7 );
  }
  else
  {
    do
    {
      *(_DWORD *)(v5 + *((_QWORD *)this + 9) + 12) = 1065353216;
      *(_DWORD *)(v5 + *((_QWORD *)this + 9) + 8) = 1065353216;
      *(_DWORD *)(v5 + *((_QWORD *)this + 9) + 4) = 1065353216;
      *(_DWORD *)(v5 + *((_QWORD *)this + 9)) = 1065353216;
      v5 += 16;
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
