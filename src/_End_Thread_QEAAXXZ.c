void __fastcall Thread::End(Thread *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_BYTE *)this + 20) = 0;
    WaitForSingleObject(v2, 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 1));
    *((_QWORD *)this + 1) = 0;
  }
}
