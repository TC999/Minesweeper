// Hidden C++ exception states: #wind=1
__int64 __fastcall CabLoader::CabCloseFunc(void *Block)
{
  __int64 v2; // rax
  void **v3; // rdx
  const void *v4; // rdx

  if ( *((_BYTE *)Block + 40) )
  {
    *((_BYTE *)Block + 41) = 1;
  }
  else
  {
    v2 = 0;
    if ( CabLoader::sCabStreams )
    {
      v3 = (void **)qword_1000A7BB0;
      while ( *v3 != Block )
      {
        v2 = (unsigned int)(v2 + 1);
        ++v3;
        if ( (unsigned int)v2 >= CabLoader::sCabStreams )
          goto LABEL_9;
      }
      *((_QWORD *)qword_1000A7BB0 + v2) = 0;
    }
LABEL_9:
    v4 = (const void *)*((_QWORD *)Block + 3);
    if ( v4 )
    {
      if ( *((_BYTE *)Block + 40) )
        operator delete(*((void **)Block + 3));
      else
        DllFileMgr::UnloadResource(Singleton<DllFileMgr>::s_Singleton, v4);
    }
    operator delete(*((void **)Block + 2));
    operator delete(Block);
  }
  return 0;
}
