void __fastcall CabLoader::RegisterCabStream(struct CabLoader::CabStream *a1)
{
  _QWORD *v1; // r8
  __int64 v2; // rdx
  _QWORD *v4; // r9
  int v5; // ecx
  unsigned int v6; // eax
  _QWORD *v7; // rax

  v1 = qword_1000A7BB0;
  v2 = 0;
  if ( CabLoader::sCabStreams )
  {
    v4 = qword_1000A7BB0;
    while ( *v4 )
    {
      v2 = (unsigned int)(v2 + 1);
      ++v4;
      if ( (unsigned int)v2 >= CabLoader::sCabStreams )
        goto LABEL_5;
    }
    *((_QWORD *)qword_1000A7BB0 + v2) = a1;
  }
  else
  {
LABEL_5:
    v5 = dword_1000A7BA4;
    v6 = CabLoader::sCabStreams + 1;
    CabLoader::sCabStreams = v6;
    if ( v6 > dword_1000A7BA4 )
    {
      dword_1000A7BA4 += dword_1000A7BA8;
      v7 = realloc(qword_1000A7BB0, 8LL * (unsigned int)(dword_1000A7BA8 + v5));
      v1 = v7;
      if ( !v7 )
      {
        CheckAllocation(0);
        return;
      }
      qword_1000A7BB0 = v7;
      v6 = CabLoader::sCabStreams;
    }
    v1[v6 - 1] = a1;
  }
}
