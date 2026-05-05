UserInterface *__fastcall UserInterface::UserInterface(UserInterface *this)
{
  int SystemMetrics; // ebx
  int v3; // eax
  UserInterface *result; // rax

  *(_QWORD *)this = malloc(0x40u);
  *((_QWORD *)this + 1) = malloc(0x80u);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 16;
  *((_DWORD *)this + 10) = 16;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 26) = 16;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 32) = 16;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 38) = 16;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_DWORD *)this + 60) = 16;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 52) = -1;
  *((_DWORD *)this + 57) = -1;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 27) = 0;
  *((_DWORD *)this + 64) = 800;
  *((_DWORD *)this + 65) = 600;
  *((_BYTE *)this + 275) = 1;
  *((_DWORD *)this + 79) = 0;
  SystemMetrics = GetSystemMetrics(69);
  v3 = GetSystemMetrics(68);
  *((_DWORD *)this + 23) = SystemMetrics;
  *((_DWORD *)this + 22) = v3;
  LOBYTE(v3) = UserInterface::m_bDefaultLastInputKeyboard;
  *((_QWORD *)this + 21) = 0;
  *((_BYTE *)this + 280) = 0;
  *((_BYTE *)this + 272) = 0;
  *((_BYTE *)this + 273) = 0;
  *((_BYTE *)this + 300) = v3;
  *((_BYTE *)this + 274) = 0;
  *((_BYTE *)this + 313) = 0;
  *((_QWORD *)this + 38) = 0;
  result = this;
  *((_DWORD *)this + 69) = 1;
  return result;
}
