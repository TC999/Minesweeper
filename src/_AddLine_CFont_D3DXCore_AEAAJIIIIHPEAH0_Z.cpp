__int64 __fastcall D3DXCore::CFont::AddLine(
        D3DXCore::CFont *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int *a7,
        int *a8)
{
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v12; // r13d
  _BYTE *v13; // rcx
  int v14; // r12d
  unsigned int v15; // ecx
  unsigned int v16; // r11d
  __int64 v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // r15
  _DWORD *v20; // r8
  int v21; // r10d
  unsigned int v22; // r8d
  unsigned int v23; // r12d
  __int64 v24; // r14
  unsigned int v25; // r10d
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // r10d
  unsigned int v31; // ebp
  unsigned int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // r10
  unsigned int v41; // edx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ebp
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  size_t v51; // rax
  void *v52; // rax
  void *v53; // r12
  int v56; // [rsp+78h] [rbp+20h]

  v56 = a4;
  v8 = a2;
  v9 = a5;
  v12 = 16;
  if ( (unsigned int)a4 < a5 )
  {
    v13 = (_BYTE *)(*((_QWORD *)this + 301) + 16LL * a5 - 4);
    do
    {
      if ( (*v13 & 3) == 0 )
        break;
      --v9;
      v13 -= 16;
      --a3;
    }
    while ( (unsigned int)a4 < v9 );
  }
  v14 = 0;
  v15 = v8;
  v16 = a4;
  if ( a6 )
    v15 = a3;
  if ( (unsigned int)a4 < v9 )
  {
    a4 = (int)a4;
    do
    {
      v17 = *((_QWORD *)this + 301);
      v18 = v16;
      v19 = a4;
      v20 = (_DWORD *)(v17 + 16 * a4 + 12);
      v21 = *v20 & 8;
      if ( v16 >= v9 )
        break;
      do
      {
        LOBYTE(v14) = v21 == 0;
        if ( ((*v20 & 8) == 0) != v14 )
          break;
        ++v16;
        ++a4;
        v20 += 4;
      }
      while ( v16 < v9 );
      if ( v18 != v16 )
      {
        v22 = *(_DWORD *)(v17 + 16 * v19 + 8);
        v23 = *(_DWORD *)(16 * a4 + v17 + 8);
        if ( v22 < v8 )
          v22 = v8;
        if ( v23 > a3 )
          v23 = a3;
        if ( a6 )
          v15 += v22 - v23;
        v24 = (int)v15;
        if ( v21 )
        {
          if ( v16 > v18 )
          {
            v27 = 16 * a4;
            v28 = v16 - v18;
            do
            {
              v29 = *((_QWORD *)this + 301);
              v27 -= 16;
              v30 = *(_DWORD *)(v29 + v27 + 8);
              v31 = *(_DWORD *)(v29 + v27 + 24);
              if ( v30 < v22 )
                v30 = v22;
              if ( v31 > v23 )
                v31 = v23;
              if ( v30 < v31 )
              {
                v15 += v31 - v30;
                do
                  *(_DWORD *)(*((_QWORD *)this + 309) + 4 * v24++) = v30++;
                while ( v30 < v31 );
              }
              --v28;
            }
            while ( v28 );
            v8 = a2;
          }
        }
        else
        {
          v25 = v22;
          if ( v22 < v23 )
          {
            v26 = 4LL * (int)v15;
            v15 += v23 - v22;
            do
            {
              *(_DWORD *)(*((_QWORD *)this + 309) + v26) = v25++;
              v26 += 4;
            }
            while ( v25 < v23 );
          }
        }
        if ( a6 )
          v15 += v22 - v23;
      }
      v14 = 0;
    }
    while ( v16 < v9 );
    LODWORD(a4) = v56;
  }
  if ( a6 )
  {
    if ( (unsigned int)a4 < v9 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 301) + 16LL * (unsigned int)a4 + 12) & 8) == 0 )
      {
        v38 = a3;
        if ( a3 > v8 )
        {
          v39 = 4LL * (int)a3;
          do
          {
            v39 -= 4;
            v40 = *(unsigned int *)(v39 + *((_QWORD *)this + 309));
            --v38;
            if ( *(_WORD *)(*((_QWORD *)this + 317) + 2 * v40) != *((_WORD *)this + 86) )
              break;
            *(_DWORD *)(*((_QWORD *)this + 321) + 4 * v40) = 0;
          }
          while ( v38 > v8 );
        }
      }
      if ( (*(_BYTE *)(*((_QWORD *)this + 301) + 16LL * (v9 - 1) + 12) & 8) != 0 )
      {
        v41 = v8;
        if ( v8 < a3 )
        {
          v42 = 4LL * (int)v8;
          do
          {
            v43 = *(unsigned int *)(v42 + *((_QWORD *)this + 309));
            if ( *(_WORD *)(*((_QWORD *)this + 317) + 2 * v43) != *((_WORD *)this + 86) )
              break;
            ++v41;
            v42 += 4;
            *(_DWORD *)(*((_QWORD *)this + 321) + 4 * v43) = 0;
          }
          while ( v41 < a3 );
        }
      }
    }
  }
  else if ( (unsigned int)a4 < v9 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)this + 301) + 16LL * (unsigned int)a4 + 12) & 8) != 0 )
    {
      v32 = v8;
      if ( v8 < a3 )
      {
        v33 = 4LL * (int)v8;
        do
        {
          v34 = *(unsigned int *)(v33 + *((_QWORD *)this + 309));
          if ( *(_WORD *)(*((_QWORD *)this + 317) + 2 * v34) != *((_WORD *)this + 86) )
            break;
          ++v32;
          v33 += 4;
          *(_DWORD *)(*((_QWORD *)this + 321) + 4 * v34) = 0;
        }
        while ( v32 < a3 );
      }
    }
    if ( (*(_BYTE *)(*((_QWORD *)this + 301) + 16LL * (v9 - 1) + 12) & 8) == 0 )
    {
      v35 = a3;
      if ( a3 > v8 )
      {
        v36 = 4LL * (int)a3;
        do
        {
          v36 -= 4;
          v37 = *(unsigned int *)(v36 + *((_QWORD *)this + 309));
          --v35;
          if ( *(_WORD *)(*((_QWORD *)this + 317) + 2 * v37) != *((_WORD *)this + 86) )
            break;
          *(_DWORD *)(*((_QWORD *)this + 321) + 4 * v37) = 0;
        }
        while ( v35 > v8 );
      }
    }
  }
  v44 = 0;
  if ( v8 < a3 )
  {
    v45 = *((_QWORD *)this + 309);
    v46 = 4LL * (int)v8;
    v47 = a3 - v8;
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 323) + 4LL * *(unsigned int *)(v45 + v46)) = v44;
      v45 = *((_QWORD *)this + 309);
      v48 = *(unsigned int *)(v45 + v46);
      v46 += 4;
      v44 += *(_DWORD *)(*((_QWORD *)this + 321) + 4 * v48);
      --v47;
    }
    while ( v47 );
  }
  v49 = *((_DWORD *)this + 662);
  v50 = *((_DWORD *)this + 658) + 1;
  if ( v50 > v49 )
  {
    if ( v49 )
      v12 = 2 * v49;
    for ( ; v12 < v50; v12 *= 2 )
      ;
    v51 = 12LL * v12;
    if ( !is_mul_ok(v12, 0xCu) )
      v51 = -1;
    v52 = operator new(v51, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v53 = v52;
    if ( !v52 )
      return 2147942414LL;
    memcpy(v52, *((const void **)this + 330), 12LL * *((unsigned int *)this + 662));
    operator delete(*((void **)this + 330));
    *((_QWORD *)this + 330) = v53;
    *((_DWORD *)this + 662) = v12;
  }
  *(_DWORD *)(*((_QWORD *)this + 330) + 12LL * *((unsigned int *)this + 658)) = v8;
  *(_DWORD *)(*((_QWORD *)this + 330) + 12LL * *((unsigned int *)this + 658) + 4) = a3;
  *(_DWORD *)(*((_QWORD *)this + 330) + 12LL * (unsigned int)(*((_DWORD *)this + 658))++ + 8) = v44;
  if ( *a7 < v44 )
    *a7 = v44;
  *a8 += *((_DWORD *)this + 24);
  return 0;
}
