__int64 __fastcall D3DXTex::InternalCopy(D3DXTex *this, struct IDirect3DSurface9 *a2, struct IDirect3DSurface9 *a3)
{
  __int64 result; // rax
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  char *v9; // rbx
  char *v10; // rbp
  unsigned int v11; // r12d
  size_t v12; // r13
  size_t Size[2]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+30h] [rbp-48h] BYREF
  void *Src; // [rsp+38h] [rbp-40h]
  int v16[7]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+5Ch] [rbp-1Ch]

  (*(void (__fastcall **)(D3DXTex *, int *, struct IDirect3DSurface9 *))(*(_QWORD *)this + 96LL))(this, v16, a3);
  result = (*(__int64 (__fastcall **)(D3DXTex *, int *, _QWORD, _QWORD))(*(_QWORD *)this + 104LL))(this, &v14, 0, 0);
  if ( (int)result >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IDirect3DSurface9 *, size_t *, _QWORD, _QWORD))a2->lpVtbl->LockRect)(
           a2,
           Size,
           0,
           0);
    if ( v6 >= 0 )
    {
      if ( v16[0] == 827611204
        || v16[0] == 844388420
        || v16[0] == 861165636
        || v16[0] == 877942852
        || v16[0] == 894720068 )
      {
        v7 = (v17 + 3) >> 2;
        v17 = v7;
      }
      else
      {
        v7 = v17;
      }
      v8 = v14;
      v9 = (char *)Src;
      v10 = (char *)Size[1];
      if ( SLODWORD(Size[0]) < v14 )
        v8 = Size[0];
      v11 = 0;
      if ( v7 )
      {
        v12 = v8;
        do
        {
          memcpy(v10, v9, v12);
          ++v11;
          v9 += v14;
          v10 += SLODWORD(Size[0]);
        }
        while ( v11 < v17 );
      }
      ((void (__fastcall *)(struct IDirect3DSurface9 *))a2->lpVtbl->UnlockRect)(a2);
      v6 = 0;
    }
    (*(void (__fastcall **)(D3DXTex *))(*(_QWORD *)this + 112LL))(this);
    return (unsigned int)v6;
  }
  return result;
}
