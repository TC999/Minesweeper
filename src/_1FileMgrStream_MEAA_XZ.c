void __fastcall FileMgrStream::~FileMgrStream(FileMgrStream *this)
{
  bool v1; // zf
  const void *v2; // rdx

  v1 = *((_BYTE *)this + 28) == 0;
  *(_QWORD *)this = &FileMgrStream::`vftable';
  if ( v1 )
  {
    v2 = (const void *)*((_QWORD *)this + 1);
    if ( v2 )
      DllFileMgr::UnloadResource(Singleton<DllFileMgr>::s_Singleton, v2);
  }
  else
  {
    operator delete(*((void **)this + 1));
  }
}
