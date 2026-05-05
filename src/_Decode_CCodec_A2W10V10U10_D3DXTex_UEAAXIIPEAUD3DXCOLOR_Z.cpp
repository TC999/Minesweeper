void __fastcall D3DXTex::CCodec_A2W10V10U10::Decode(
        D3DXTex::CCodec_A2W10V10U10 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  D3DXTex::CCodec_A2W10V10U10 *v5; // r10
  _DWORD *v6; // r11
  _DWORD *i; // r9
  __int16 v8; // r8
  __int16 v9; // dx
  int v10; // eax

  v5 = this;
  v6 = (_DWORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned __int64)(unsigned int)(a2 * *((_DWORD *)this + 32)));
  for ( i = &v6[*((unsigned int *)this + 34)]; v6 < i; *((float *)a4 - 1) = (float)v10 * 0.33333334 )
  {
    v8 = (__int16)(*v6 >> 20 << 6) >> 6;
    v9 = (__int16)((unsigned __int16)(*v6 >> 10) << 6) >> 6;
    *(float *)a4 = (float)(__int16)(((__int16)(*(_WORD *)v6 << 6) >> 6) + ((__int16)(*(_WORD *)v6 << 6) >> 6 == -512))
                 * 0.0019569471;
    a4 = (struct D3DXCOLOR *)((char *)a4 + 16);
    *((float *)a4 - 3) = (float)(__int16)(v9 + (v9 == -512)) * 0.0019569471;
    *((float *)a4 - 2) = (float)(__int16)(v8 + (v8 == -512)) * 0.0019569471;
    v10 = *v6++ >> 30;
  }
  if ( *((_DWORD *)this + 7) )
    D3DXTex::CCodec::ColorKey(this, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)this + 34)));
  if ( *((_DWORD *)v5 + 5) )
    D3DXTex::CCodec::DecodeGamma22(v5, (struct D3DXCOLOR *)((char *)a4 - 16 * *((unsigned int *)v5 + 34)));
}
