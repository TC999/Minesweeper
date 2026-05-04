void __fastcall TextRenderer::Cleanup(TextRenderer *this)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void *v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 3) + v3);
      if ( v4 )
      {
        DeleteObject(*(HGDIOBJ *)v4);
        v5 = *(void (__fastcall ****)(_QWORD, __int64))(v4 + 8);
        *(_QWORD *)v4 = 0;
        if ( v5 )
          (**v5)(v5, 1);
        v6 = *(void **)(v4 + 16);
        *(_QWORD *)(v4 + 8) = 0;
        operator delete(v6);
        *(_QWORD *)(v4 + 16) = 0;
        operator delete((void *)v4);
      }
      ++v1;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 2) );
  }
  *((_DWORD *)this + 2) = 0;
}
