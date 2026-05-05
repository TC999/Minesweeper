CommonControllerThread *__fastcall CommonControllerThread::CommonControllerThread(
        CommonControllerThread *this,
        HWND a2,
        char a3,
        struct IControllerInterface *a4)
{
  HWND v5; // rax
  char *v6; // rax
  _DWORD *v7; // rcx
  _WORD *v8; // rdx
  __int64 v9; // r8
  CommonControllerThread *result; // rax
  int v11; // [rsp+40h] [rbp+18h] BYREF
  struct IControllerInterface *pvParam; // [rsp+48h] [rbp+20h] BYREF

  pvParam = a4;
  LOBYTE(v11) = a3;
  *(_QWORD *)this = &CommonControllerThread::`vftable';
  v5 = g_hWnd;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_QWORD *)this + 3) = v5;
  LOBYTE(v5) = (_BYTE)g_bMediaCenter;
  *((_BYTE *)this + 33) = 1;
  *((_BYTE *)this + 132) = 0;
  *((_BYTE *)this + 32) = (_BYTE)v5;
  *((_QWORD *)this + 17) = 0;
  v6 = (char *)this + 46;
  v7 = (_DWORD *)((char *)this + 84);
  v8 = (_WORD *)((char *)this + 34);
  v9 = 4;
  do
  {
    *v8 = 0;
    *(v6 - 4) = 0;
    *v6 = 0;
    v6[4] = 0;
    v6[8] = 0;
    v6[12] = 0;
    v6[16] = 0;
    *(v7 - 4) = 0;
    *v7 = 0;
    v7[4] = 0;
    v7[8] = 0;
    ++v7;
    ++v8;
    ++v6;
    --v9;
  }
  while ( v9 );
  LODWORD(pvParam) = 0;
  v11 = 0;
  SystemParametersInfoW(0xAu, 0, &pvParam, 0);
  SystemParametersInfoW(0x16u, 0, &v11, 0);
  g_DelayCount = 250 * (v11 + 1) / 0x19u;
  result = this;
  g_RepeatCount = (int)(float)((float)((float)(int)pvParam * -12.0) + 400.0) / 0x19u;
  return result;
}
