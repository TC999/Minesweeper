void __fastcall D3DXCore::HeapSort(
        D3DXCore *this,
        int (*a2)(unsigned int, unsigned int, const void *),
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  D3DXCore *v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // ebx
  _DWORD *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rsi
  unsigned int v22; // r12d
  unsigned int v23; // r13d
  bool v24; // zf
  unsigned int v25; // [rsp+20h] [rbp-78h]
  unsigned int v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+24h] [rbp-74h]
  _DWORD *v28; // [rsp+28h] [rbp-70h]
  unsigned int v29; // [rsp+30h] [rbp-68h]
  unsigned int v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned int v33; // [rsp+B0h] [rbp+18h]
  unsigned int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B8h] [rbp+20h]

  if ( (unsigned int)a3 > 1 )
  {
    v35 = a4;
    v4 = (unsigned int)a3;
    v6 = this;
    v7 = (unsigned int)a3 >> 1;
    v8 = v7;
    if ( (unsigned int)a3 >> 1 )
    {
      v9 = 2 * v7 + 1;
      v10 = 2 * v7 + 1;
      do
      {
        --v8;
        LODWORD(v7) = v7 - 1;
        v10 -= 2;
        v11 = *((_DWORD *)a2 + v8);
        v9 -= 2;
        v12 = (unsigned int)v7;
        v25 = v10;
        v27 = v11;
        v31 = v9;
        v33 = v7;
        v13 = v10;
        v14 = v9;
        if ( v10 < v4 )
        {
          v15 = v8;
          v16 = *((_DWORD *)a2 + v8);
          while ( 1 )
          {
            v17 = *((_DWORD *)a2 + v14);
            v30 = v17;
            if ( v13 + 1 < v4 )
            {
              v29 = *((_DWORD *)a2 + v14 + 1);
              if ( ((int (__fastcall *)(_QWORD, _QWORD, __int64))this)(v29, v17, v35) <= 0 )
              {
                v17 = v30;
              }
              else
              {
                ++v13;
                ++v14;
                v17 = v29;
              }
            }
            if ( ((int (__fastcall *)(_QWORD, _QWORD, __int64))this)(v17, v16, v35) <= 0 )
              break;
            *((_DWORD *)a2 + v15) = *((_DWORD *)a2 + v14);
            v12 = v13;
            v13 = 2 * v13 + 1;
            v15 = v14;
            v14 = 2 * v14 + 1;
            v33 = v12;
            if ( v13 >= v4 )
              goto LABEL_14;
          }
          v12 = v33;
LABEL_14:
          v10 = v25;
          v9 = v31;
          v11 = v27;
        }
        *((_DWORD *)a2 + v12) = v11;
      }
      while ( (_DWORD)v7 );
      a4 = v35;
      v6 = this;
    }
    v18 = v4 - 1;
    if ( v18 )
    {
      v19 = (_DWORD *)((char *)a2 + 4 * (int)v18);
      v28 = v19;
      do
      {
        v20 = 0;
        v21 = 1;
        v34 = *v19;
        v22 = 1;
        *v19 = *(_DWORD *)a2;
        if ( v18 > 1 )
        {
          do
          {
            v23 = *((_DWORD *)a2 + v21);
            if ( v22 + 1 < v18 )
            {
              v26 = *((_DWORD *)a2 + v21 + 1);
              if ( ((int (__fastcall *)(_QWORD, _QWORD, __int64))v6)(v26, v23, a4) > 0 )
              {
                ++v21;
                v23 = v26;
                ++v22;
              }
            }
            if ( ((int (__fastcall *)(_QWORD, _QWORD, __int64))this)(v23, v34, v35) <= 0 )
              break;
            a4 = v35;
            v6 = this;
            v22 = 2 * v22 + 1;
            *((_DWORD *)a2 + v20) = *((_DWORD *)a2 + v21);
            v20 = v21;
            v21 = 2 * v21 + 1;
          }
          while ( v22 < v18 );
          v19 = v28;
        }
        a4 = v35;
        v6 = this;
        --v19;
        v24 = v18-- == 1;
        *((_DWORD *)a2 + v20) = v34;
        v28 = v19;
      }
      while ( !v24 );
    }
  }
}
