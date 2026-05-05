__int64 __fastcall D3DXTex::D3DXDecodeDXT4(D3DXTex *this, struct D3DXCOLOR *a2, const unsigned __int8 *a3)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // r8d

  result = D3DXTex::D3DXDecodeDXT5(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v5 = D3DXTex::DecodePremult((__int64)this);
    if ( (int)v5 < (int)v6 )
      return v5;
    return v6;
  }
  return result;
}
