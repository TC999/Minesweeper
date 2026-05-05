_onexit_t __cdecl onexit(_onexit_t Func)
{
  int (__cdecl *v3)(); // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = _onexitbegin;
  if ( _onexitbegin == -1 )
    return _onexit(Func);
  ((void (__fastcall *)(__int64))lock)(8);
  v4 = _onexitbegin;
  v5 = _onexitend;
  v3 = (int (__cdecl *)())((__int64 (__fastcall *)(_onexit_t, __int64 *, __int64 *))_dllonexit)(Func, &v4, &v5);
  _onexitbegin = v4;
  _onexitend = v5;
  ((void (__fastcall *)(__int64))unlock)(8);
  return v3;
}
