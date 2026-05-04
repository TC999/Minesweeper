_UNKNOWN **__fastcall NodeBase::HandleMouseEvent(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  _UNKNOWN **result; // rax
  unsigned int v6; // ebx
  __int64 v11; // rsi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 336) )
  {
    v11 = 0;
    do
    {
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 352) + v11))(
                              a1,
                              a2,
                              a3,
                              a4,
                              a5,
                              *(_QWORD *)(a1 + 368));
      ++v6;
      v11 += 8;
    }
    while ( v6 < *(_DWORD *)(a1 + 336) );
  }
  return result;
}
