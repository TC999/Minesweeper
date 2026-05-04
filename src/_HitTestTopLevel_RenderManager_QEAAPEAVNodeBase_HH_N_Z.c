struct NodeBase *__fastcall RenderManager::HitTestTopLevel(
        RenderManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  RenderManager *v4; // rsi
  char v5; // bp
  int v7; // eax
  int v9; // ebx
  __int64 i; // rdi
  struct NodeBase *result; // rax

  v4 = g_pRenderManager;
  v5 = a4;
  v7 = *((_DWORD *)g_pRenderManager + 32);
  v9 = v7 - 1;
  if ( !v7 )
    return 0;
  for ( i = 8LL * v9; ; i -= 8 )
  {
    LOBYTE(a4) = v5;
    result = (struct NodeBase *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(i + *((_QWORD *)v4 + 18))
                                                                                           + 80LL))(
                                  *(_QWORD *)(i + *((_QWORD *)v4 + 18)),
                                  a2,
                                  a3,
                                  a4);
    if ( result )
      break;
    if ( (unsigned int)--v9 >= *((_DWORD *)v4 + 32) )
      return 0;
  }
  return result;
}
