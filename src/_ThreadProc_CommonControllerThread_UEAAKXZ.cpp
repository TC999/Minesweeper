__int64 __fastcall CommonControllerThread::ThreadProc(CommonControllerThread *this)
{
  while ( *((_BYTE *)this + 20) )
  {
    CommonController::Poll((CommonControllerThread *)((char *)this + 24));
    Sleep(0x19u);
  }
  return 0;
}
