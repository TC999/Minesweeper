void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  ATL::AtlWinModuleTerm((struct ATL::_ATL_WIN_MODULE70 *)&ATL::_AtlWinModule, hInstance);
  if ( qword_1000A8508 )
  {
    free(qword_1000A8508);
    qword_1000A8508 = 0;
  }
  dword_1000A8510 = 0;
  dword_1000A8514 = 0;
}
