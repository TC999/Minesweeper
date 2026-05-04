void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = Size; ; Size = i )
  {
    result = malloc(Size);
    if ( result )
      break;
    if ( !callnewh(i) )
    {
      if ( (dword_1000A7E98 & 1) == 0 )
      {
        dword_1000A7E98 |= 1u;
        exception::exception((exception *)qword_1000A7E80, (const char *const *)&off_10009F100, 1);
        qword_1000A7E80[0] = &std::bad_alloc::`vftable';
        atexit(operator_new_::_7_::_dynamic_atexit_destructor_for__nomem__);
      }
      exception::exception((exception *)pExceptionObject, (const struct exception *)qword_1000A7E80);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    }
  }
  return result;
}
