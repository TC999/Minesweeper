void __fastcall CSQMTimeRecorder::~CSQMTimeRecorder(CSQMTimeRecorder *this)
{
  ULONGLONG TickCount64; // rax

  if ( *(_DWORD *)this )
  {
    TickCount64 = GetTickCount64();
    if ( TickCount64 > *((_QWORD *)this + 1) )
      ((void (__fastcall *)(_QWORD, _QWORD, ULONGLONG))WinSqmIncrementDWORD)(
        0,
        *(unsigned int *)this,
        (TickCount64 - *((_QWORD *)this + 1)) / 0xEA60);
  }
}
