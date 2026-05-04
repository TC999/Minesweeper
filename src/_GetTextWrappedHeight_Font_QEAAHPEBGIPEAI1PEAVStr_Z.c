// Hidden C++ exception states: #wind=2
__int64 __fastcall Font::GetTextWrappedHeight(
        Font *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5,
        struct Str *a6)
{
  int v6; // r13d
  unsigned int v8; // esi
  __int64 result; // rax
  __int64 v10; // rcx
  const unsigned __int16 *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // ebx
  void *v16; // r12
  SCRIPT_ITEM *v17; // rdi
  const WCHAR *v18; // rbx
  int v19; // edi
  SCRIPT_ITEM *v20; // rcx
  SCRIPT_ITEM *v21; // rax
  SCRIPT_ITEM *v22; // r14
  int v23; // r12d
  int v24; // r12d
  int v25; // r14d
  int v26; // ebx
  int v27; // ecx
  __int64 v28; // rax
  _BYTE *v29; // rdi
  __int64 v30; // rcx
  char *v31; // rdi
  Str *v32; // rax
  __int64 v33; // rax
  _BYTE *v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  char *v39; // rdi
  Str *v40; // rax
  unsigned int v41; // eax
  int v42; // [rsp+40h] [rbp-88h]
  int pcItems; // [rsp+44h] [rbp-84h] BYREF
  void *v44; // [rsp+48h] [rbp-80h]
  SCRIPT_ITEM *pItems; // [rsp+50h] [rbp-78h]
  _DWORD v46[2]; // [rsp+58h] [rbp-70h] BYREF
  int v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+64h] [rbp-64h]
  unsigned __int16 *v49; // [rsp+68h] [rbp-60h]
  _BYTE v50[16]; // [rsp+70h] [rbp-58h] BYREF
  void *Block; // [rsp+80h] [rbp-48h]
  __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = -2;
  v6 = a3;
  v8 = 0;
  if ( !*((_QWORD *)this + 7) )
    return 0;
  if ( g_bDoubleDPI )
    v6 = 2 * a3;
  result = 0;
  v10 = -1;
  v11 = a2;
  do
  {
    if ( !v10 )
      break;
    v12 = *v11++ == 0;
    --v10;
  }
  while ( !v12 );
  v13 = -v10 - 2;
  v14 = v13;
  if ( (_DWORD)v13 )
  {
    v15 = v13 + 1;
    pItems = (SCRIPT_ITEM *)operator new[](saturated_mul((int)v13 + 1, 8u));
    v16 = operator new[](v14);
    v44 = v16;
    v17 = pItems;
    memset(pItems, 0, 8LL * v15);
    memset(v16, 0, v14);
    pcItems = 0;
    if ( ScriptItemize(a2, v14, v15, 0, 0, pItems, &pcItems) < 0 )
    {
      operator delete(v17);
      operator delete(v16);
      return 0;
    }
    v18 = a2;
    v19 = 0;
    if ( pcItems > 0 )
    {
      v20 = pItems;
      v21 = pItems;
      do
      {
        v22 = v21 + 1;
        v23 = v21[1].iCharPos - v21->iCharPos;
        if ( ScriptBreak(v18, v23, &v20[v19].a, (SCRIPT_LOGATTR *)v44 + v21->iCharPos) < 0 )
          goto LABEL_60;
        v18 += v23;
        ++v19;
        v21 = v22;
        v20 = pItems;
      }
      while ( v19 < pcItems );
    }
    v24 = 0;
    v25 = 0;
    v26 = v14;
    if ( v14 <= 0 )
      goto LABEL_53;
    v27 = 0;
    v28 = 0;
    if ( v14 <= 0LL )
    {
      v29 = v44;
    }
    else
    {
      v29 = v44;
      while ( (*((_BYTE *)v44 + v28) & 1) == 0 && (*((_BYTE *)v44 + v28) & 2) == 0 )
      {
        ++v27;
        if ( ++v28 >= v14 )
          goto LABEL_24;
      }
      v26 = v27;
    }
LABEL_24:
    v42 = v26;
    while ( 1 )
    {
      v46[0] = 0;
      v47 = v6;
      v46[1] = 0;
      v48 = 0;
      v30 = *((_QWORD *)this + 7);
      v49 = (unsigned __int16 *)&a2[v24];
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, _QWORD, _DWORD *, int, int))(*(_QWORD *)v30 + 120LL))(
        v30,
        0,
        v49,
        (unsigned int)(v26 - v24),
        v46,
        1312,
        -1);
      if ( v47 <= v6 )
      {
        v42 = v26;
        v37 = v26 + 1;
        v26 = v14;
        if ( v37 >= v14 )
        {
          v26 = v14;
LABEL_53:
          if ( v26 > v24 )
          {
            v39 = (char *)a6 + 24 * v25++;
            v40 = Str::Str((Str *)v50, &a2[v24], v26 - v24);
            Str::operator=(v39, v40);
            operator delete(Block);
          }
          v41 = v25 * *((_DWORD *)this + 16);
          *a4 = v41;
          *a5 = v6;
          if ( g_bDoubleDPI )
            *a5 = (unsigned int)v6 >> 1;
          if ( *((_BYTE *)this + 68) )
            *a4 = v41 >> 1;
          v8 = v25;
LABEL_60:
          operator delete(pItems);
          operator delete(v44);
          return v8;
        }
        v38 = v37;
        if ( v37 < (__int64)v14 )
        {
          while ( (v29[v38] & 1) == 0 && (v29[v38] & 2) == 0 )
          {
            ++v37;
            if ( ++v38 >= v14 )
              goto LABEL_49;
          }
          v26 = v37;
        }
      }
      else
      {
        v31 = (char *)a6 + 24 * v25++;
        v32 = Str::Str((Str *)v50, v49, v42 - v24);
        Str::operator=(v31, v32);
        operator delete(Block);
        v33 = v42;
        v24 = v42;
        if ( v42 >= (__int64)v14 )
        {
          v34 = v44;
        }
        else
        {
          v34 = v44;
          do
          {
            if ( (*((_BYTE *)v44 + v33) & 2) == 0 )
              break;
            ++v24;
            ++v33;
          }
          while ( v33 < v14 );
        }
        if ( v24 >= v14 )
          goto LABEL_53;
        if ( v26 <= v24 )
        {
          v35 = v24 + 1;
          v26 = v14;
          if ( v24 + 1 >= v14 )
          {
            v26 = v14;
            goto LABEL_53;
          }
          v36 = v35;
          if ( v35 < (__int64)v14 )
          {
            while ( (v34[v36] & 1) == 0 && (v34[v36] & 2) == 0 )
            {
              ++v35;
              if ( ++v36 >= v14 )
                goto LABEL_41;
            }
            v26 = v35;
          }
        }
LABEL_41:
        v42 = v26;
      }
LABEL_49:
      if ( v25 >= 31 )
        goto LABEL_53;
      v29 = v44;
    }
  }
  return result;
}
