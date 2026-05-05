ResourceManager *__fastcall ResourceManager::ResourceManager(ResourceManager *this)
{
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax

  *((_QWORD *)this + 1) = malloc(0x40u);
  v2 = malloc(0x80u);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = v2;
  *(_QWORD *)((char *)this + 28) = 16;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 16;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 16) = 16;
  *((_QWORD *)this + 10) = malloc(0x80u);
  v3 = malloc(0x80u);
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 11) = v3;
  *((_DWORD *)this + 25) = 16;
  *((_QWORD *)this + 13) = malloc(0x80u);
  v4 = malloc(0x40u);
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 14) = v4;
  *((_DWORD *)this + 31) = 16;
  *(_DWORD *)this = 1;
  return this;
}
