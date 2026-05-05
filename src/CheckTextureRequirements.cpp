__int64 __fastcall CheckTextureRequirements(
        D3DXTex *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        int *a7,
        unsigned int a8)
{
  unsigned int *v8; // r9
  unsigned int *v9; // r10
  unsigned int v12; // ebp
  int v13; // r14d
  int ClosestDeviceFormat; // esi
  __int64 *v15; // r9
  unsigned int i; // edi
  unsigned int j; // ebx
  unsigned int *v18; // r8
  unsigned int v19; // r13d
  int v20; // ecx
  unsigned int v21; // ecx
  __int16 v22; // ax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int k; // ecx
  unsigned int v27; // edx
  unsigned int m; // eax
  char v29[60]; // [rsp+20h] [rbp-168h] BYREF
  int v30; // [rsp+5Ch] [rbp-12Ch]
  unsigned int v31; // [rsp+78h] [rbp-110h]
  unsigned int v32; // [rsp+7Ch] [rbp-10Ch]
  int v33; // [rsp+88h] [rbp-100h]

  v8 = a3;
  v9 = a2;
  if ( !a1 )
    return 2289436780LL;
  v12 = 1;
  v13 = 2;
  if ( a8 >= 4 && a8 != 6 )
    return 2289436780LL;
  if ( a7 )
    ClosestDeviceFormat = *a7;
  else
    ClosestDeviceFormat = 0;
  if ( a8 == 3 )
  {
    if ( !ClosestDeviceFormat )
      ClosestDeviceFormat = 21;
  }
  else
  {
    v15 = qword_100013C50;
    while ( ClosestDeviceFormat != *(_DWORD *)v15 )
    {
      v15 = (__int64 *)((char *)v15 + 36);
      if ( v15 >= (__int64 *)&dword_100014454 )
      {
        v15 = (__int64 *)&stru_100010478;
        break;
      }
    }
    ClosestDeviceFormat = D3DXTex::FindClosestDeviceFormat(a1, 0, 3, v15);
    if ( !ClosestDeviceFormat )
      return 2289436778LL;
    v8 = a3;
    v9 = a2;
  }
  if ( v9 )
    i = *v9;
  else
    i = -1;
  if ( v8 )
    j = *v8;
  else
    j = -1;
  v18 = a5;
  if ( a5 )
    v19 = *a5;
  else
    v19 = -1;
  if ( i != -1 )
  {
    if ( j == -1 )
      j = i;
    goto LABEL_34;
  }
  if ( j != -1 )
  {
    i = j;
LABEL_34:
    if ( !i )
      i = 1;
    if ( !j )
      j = 1;
    goto LABEL_38;
  }
  j = 256;
  i = 256;
LABEL_38:
  if ( a8 == 3 )
  {
    v22 = v30;
  }
  else
  {
    (*(void (__fastcall **)(D3DXTex *, char *))(*(_QWORD *)a1 + 56LL))(a1, v29);
    v20 = v33;
    if ( i > v31 )
      i = v31;
    if ( j > v32 )
      j = v32;
    if ( (v30 & 0x20) != 0 )
      v20 = 1;
    if ( v20 )
    {
      if ( i > j * v20 )
        i = j * v20;
      v21 = i * v20;
      if ( j > v21 )
        j = v21;
    }
    v22 = v30;
    if ( v19 == 1
      && (v30 & 0x100) != 0
      && ClosestDeviceFormat != 827611204
      && ClosestDeviceFormat != 844388420
      && ClosestDeviceFormat != 861165636
      && ClosestDeviceFormat != 877942852
      && ClosestDeviceFormat != 894720068 )
    {
      v13 = 0;
    }
    if ( (v13 & v30) != 0 )
    {
      v23 = i;
      for ( i = 1; i < v23; i *= 2 )
        ;
      v24 = j;
      for ( j = 1; j < v24; j *= 2 )
        ;
    }
    v18 = a5;
    v8 = a3;
    v9 = a2;
  }
  if ( ClosestDeviceFormat == 827611204
    || ClosestDeviceFormat == 844388420
    || ClosestDeviceFormat == 861165636
    || ClosestDeviceFormat == 877942852
    || ClosestDeviceFormat == 894720068 )
  {
    i = (i + 3) & 0xFFFFFFFC;
    j = (j + 3) & 0xFFFFFFFC;
  }
  if ( a8 != 3 && ((v22 & 0x4000) == 0 || (v22 & 0x100) != 0 && (((i - 1) & i) != 0 || ((j - 1) & j) != 0)) )
  {
    v19 = 1;
  }
  else
  {
    v25 = i;
    for ( k = 0; v25; ++k )
      v25 >>= 1;
    v27 = j;
    for ( m = 0; v27; ++m )
      v27 >>= 1;
    do
      v12 >>= 1;
    while ( v12 );
    if ( k > m )
      m = k;
    if ( v19 > m || !v19 )
      v19 = m;
  }
  if ( v9 )
    *v9 = i;
  if ( v8 )
    *v8 = j;
  if ( v18 )
    *v18 = v19;
  if ( a7 )
    *a7 = ClosestDeviceFormat;
  return 0;
}
