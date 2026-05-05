void D3DXCheckNewDelete(void)
{
  int v0; // esi
  void *v1; // rdi
  void *v2; // rax
  void *v3; // rbx

  if ( !dword_1000ABAE0 )
  {
    dword_1000ABAE0 = 1;
    v0 = 0;
    v1 = operator new(0, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v2 = operator new(0, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v3 = v2;
    if ( !v1 || !v2 || v1 == v2 )
      v0 = 1;
    if ( v1 )
      operator delete(v1);
    if ( v3 && v3 != v1 )
      operator delete(v3);
    operator delete(0);
    if ( v0 )
    {
      OutputDebugStringA("D3DX: (WARN) Overloaded ::new and ::delete operators do not conform to C++ standards:\r\n");
      OutputDebugStringA("D3DX: (WARN) An allocation of zero bytes should return a unique non-null pointer to at\r\n");
      OutputDebugStringA("D3DX: (WARN) least zero bytes. Deletion of a null pointer should quietly do nothing.\r\n");
      OutputDebugStringA("D3DX: (WARN) D3DX relies upon this behavior.\r\n");
    }
  }
}
