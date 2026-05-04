__int64 __fastcall D3DXTex::FindClosestFormat(
        D3DXTex *this,
        const enum _D3DFORMAT *a2,
        const struct tagPALETTEENTRY *a3,
        const struct _D3DXFORMAT_INFO *a4)
{
  int v4; // eax
  D3DXTex *v7; // rbp
  unsigned int v8; // r12d
  const struct tagPALETTEENTRY *v9; // rdi
  __int64 *v10; // rbx
  unsigned int v11; // eax

  v4 = *(_DWORD *)this;
  v7 = this;
  v8 = -1;
  v9 = &stru_100010478;
  while ( v4 )
  {
    v10 = qword_100013C50;
    while ( v4 != *(_DWORD *)v10 )
    {
      v10 = (__int64 *)((char *)v10 + 36);
      if ( v10 >= (__int64 *)&dword_100014454 )
      {
        v10 = (__int64 *)&stru_100010478;
        break;
      }
    }
    if ( *(_DWORD *)v10 && (*((_DWORD *)v10 + 1) != 1 || a2) )
    {
      if ( *a3 == *(_DWORD *)v10 )
        return (__int64)*a3;
      v11 = D3DXTex::ScoreFormat((__int64)a3, (__int64)v10);
      if ( v11 != -1 && v11 <= v8 && (v11 != v8 || *((_DWORD *)v10 + 2) < *(_DWORD *)&v9[2]) )
      {
        v8 = v11;
        v9 = (const struct tagPALETTEENTRY *)v10;
      }
    }
    v7 = (D3DXTex *)((char *)v7 + 4);
    v4 = *(_DWORD *)v7;
  }
  return (__int64)*v9;
}
