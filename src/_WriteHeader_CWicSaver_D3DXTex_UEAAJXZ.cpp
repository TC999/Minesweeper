__int64 __fastcall D3DXTex::CWicSaver::WriteHeader(LPSTREAM *this)
{
  HRESULT StreamOnHGlobal; // ebx
  LPSTREAM v3; // rbp

  if ( this[2] )
  {
    StreamOnHGlobal = CreateStreamOnHGlobal(0, 1, this + 6);
    if ( StreamOnHGlobal >= 0 )
    {
      v3 = this[2];
      EnterCriticalSection(&D3DXTex::CWICWrapper::m_Wrapper);
      StreamOnHGlobal = D3DXTex::CWICWrapper::LoadDLL((D3DXTex::CWICWrapper *)&D3DXTex::CWICWrapper::m_Wrapper);
      if ( StreamOnHGlobal >= 0 )
        StreamOnHGlobal = (*(__int64 (__fastcall **)(__int64, LPSTREAM, _QWORD, char *))(*(_QWORD *)qword_1000AB688
                                                                                       + 64LL))(
                            qword_1000AB688,
                            v3,
                            0,
                            (char *)this + 8);
      LeaveCriticalSection(&D3DXTex::CWICWrapper::m_Wrapper);
      if ( StreamOnHGlobal >= 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(LPSTREAM, LPSTREAM, __int64))(*(_QWORD *)this[1] + 24LL))(
                               this[1],
                               this[6],
                               2);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)StreamOnHGlobal;
}
