__int64 __fastcall Array<SaveFileCopy>::Remove(__int64 a1, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rbx

  v2 = g_OpenFileList;
  v3 = a2;
  result = (unsigned int)(g_OpenFileList - 1);
  if ( a2 < (unsigned int)result )
  {
    v5 = 536LL * (int)a2;
    do
    {
      v6 = v5 + 536;
      memcpy((char *)qword_1000A7B80 + v5, (char *)qword_1000A7B80 + v5 + 536, 0x218u);
      v2 = g_OpenFileList;
      ++v3;
      result = (unsigned int)(g_OpenFileList - 1);
      v5 = v6;
    }
    while ( v3 < (unsigned int)result );
  }
  g_OpenFileList = v2 - 1;
  return result;
}
