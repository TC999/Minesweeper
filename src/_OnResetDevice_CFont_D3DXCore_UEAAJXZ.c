__int64 __fastcall D3DXCore::CFont::OnResetDevice(D3DXCore::CFont *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 4) )
    return 0;
  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 104LL))(*((_QWORD *)this + 4));
  if ( (int)result >= 0 )
    return 0;
  return result;
}
