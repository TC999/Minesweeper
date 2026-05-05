RenderManager *__fastcall RenderManager::RenderManager(RenderManager *this)
{
  RenderManager *result; // rax

  *((_DWORD *)this + 34) = 16;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0;
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 40) = 1;
  *((_DWORD *)this + 2) = 0;
  if ( (_BYTE)g_bMediaCenter )
    *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *((_BYTE *)this + 167) = 0;
  result = this;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 20) = 1;
  *((_QWORD *)this + 19) = 0;
  *((_BYTE *)this + 165) = 0;
  *((_BYTE *)this + 164) = 0;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 210) = 0;
  *((_BYTE *)this + 211) = 0;
  *((_DWORD *)this + 53) = 0;
  return result;
}
