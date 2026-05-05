FileMgrStream *__fastcall FileMgrStream::`scalar deleting destructor'(FileMgrStream *this, char a2)
{
  FileMgrStream::~FileMgrStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
