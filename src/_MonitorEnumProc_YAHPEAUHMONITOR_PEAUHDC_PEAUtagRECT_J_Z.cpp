__int64 __fastcall MonitorEnumProc(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v7; // rdx
  void *v8; // rcx
  void *v9; // rax

  ++*(_DWORD *)a4;
  v5 = *(_DWORD *)(a4 + 4);
  if ( *(_DWORD *)a4 <= v5 )
    goto LABEL_5;
  v7 = v5 + *(_DWORD *)(a4 + 8);
  v8 = *(void **)(a4 + 16);
  *(_DWORD *)(a4 + 4) = v7;
  v9 = realloc(v8, 8 * v7);
  if ( v9 )
  {
    *(_QWORD *)(a4 + 16) = v9;
LABEL_5:
    *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * (unsigned int)(*(_DWORD *)a4 - 1)) = a1;
    return 1;
  }
  CheckAllocation(0);
  return 1;
}
