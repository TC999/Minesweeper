void __fastcall D3DXTex::CCodec_Q16W16V16U16::Decode(
        D3DXTex::CCodec_Q16W16V16U16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  float *v4; // r11
  D3DXTex::CCodec_Q16W16V16U16 *v5; // r10
  _QWORD *v6; // r9
  _QWORD *i; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx

  v4 = (float *)a4;
  v5 = this;
  v6 = (_QWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[*((unsigned int *)this + 34)];
        v6 < i;
        *(v4 - 1) = (float)(__int16)(v8 + ((_WORD)v8 == 0x8000)) * 0.000030518509 )
  {
    v8 = HIWORD(*v6);
    v9 = *v6 >> 16;
    v10 = HIDWORD(*v6);
    *v4 = (float)(__int16)(*(_WORD *)v6 + (*(_WORD *)v6 == 0x8000)) * 0.000030518509;
    v4[1] = (float)(__int16)(v9 + ((_WORD)v9 == 0x8000)) * 0.000030518509;
    ++v6;
    v4 += 4;
    *(v4 - 2) = (float)(__int16)(v10 + ((_WORD)v10 == 0x8000)) * 0.000030518509;
  }
  if ( *((_DWORD *)v5 + 7) )
    D3DXTex::CCodec::ColorKey(v5, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)v5 + 34)]);
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)&v4[-4 * *((unsigned int *)v5 + 34)]);
}
