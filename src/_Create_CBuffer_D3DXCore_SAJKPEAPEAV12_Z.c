__int64 __fastcall D3DXCore::CBuffer::Create(unsigned int a1, struct D3DXCore::CBuffer **a2)
{
  struct D3DXCore::CBuffer *v5; // rax
  struct D3DXCore::CBuffer *v6; // rbx
  int v7; // esi

  if ( !a2 )
    return 2289436780LL;
  v5 = (struct D3DXCore::CBuffer *)operator new(0x18u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = 0;
    *((_DWORD *)v5 + 3) = 0;
    *(_QWORD *)v5 = &D3DXCore::CBuffer::`vftable';
    *((_DWORD *)v5 + 2) = 1;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 )
    return 2147942414LL;
  v7 = (*(__int64 (__fastcall **)(struct D3DXCore::CBuffer *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, a1);
  if ( v7 >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(struct D3DXCore::CBuffer *, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1);
    return (unsigned int)v7;
  }
}
