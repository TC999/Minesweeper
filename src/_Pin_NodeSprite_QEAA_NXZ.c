char __fastcall NodeSprite::Pin(NodeSprite *this)
{
  int v1; // ebx
  __int64 i; // rsi

  v1 = 0;
  if ( !*((_DWORD *)this + 106) )
    return 1;
  for ( i = 0; ResourceManager::PinResource(g_pResourceManager, *(_DWORD *)(*((_QWORD *)this + 52) + i)); i += 32 )
  {
    if ( (unsigned int)++v1 >= *((_DWORD *)this + 106) )
      return 1;
  }
  return 0;
}
