void __fastcall TextRenderer::DeleteDXFont(TextRenderer *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  void *v9; // rcx
  __int64 v10; // r8

  v2 = (int)a2;
  if ( a2 < *((_DWORD *)this + 2) )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2);
      if ( *(_QWORD *)(v4 + 8) )
      {
        --*(_DWORD *)(v4 + 32);
        v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)v2);
        if ( !*(_DWORD *)(v5 + 32) )
        {
          v6 = *(void (__fastcall ****)(_QWORD, __int64))(v5 + 8);
          if ( v6 )
            (**v6)(v6, 1);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)v2) + 8LL) = 0;
          DeleteObject(**(HGDIOBJ **)(*((_QWORD *)this + 3) + 8LL * (unsigned int)v2));
          **(_QWORD **)(*((_QWORD *)this + 3) + 8LL * (unsigned int)v2) = 0;
          if ( (_DWORD)v2 == *((_DWORD *)this + 2) - 1 )
          {
            v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)v2);
            if ( v7 )
            {
              DeleteObject(*(HGDIOBJ *)v7);
              v8 = *(void (__fastcall ****)(_QWORD, __int64))(v7 + 8);
              *(_QWORD *)v7 = 0;
              if ( v8 )
                (**v8)(v8, 1);
              v9 = *(void **)(v7 + 16);
              *(_QWORD *)(v7 + 8) = 0;
              operator delete(v9);
              *(_QWORD *)(v7 + 16) = 0;
              operator delete((void *)v7);
            }
            if ( (unsigned int)v2 < *((_DWORD *)this + 2) - 1 )
            {
              v10 = 8 * v2;
              do
              {
                LODWORD(v2) = v2 + 1;
                *(_QWORD *)(v10 + *((_QWORD *)this + 3)) = *(_QWORD *)(v10 + *((_QWORD *)this + 3) + 8);
                v10 += 8;
              }
              while ( (unsigned int)v2 < *((_DWORD *)this + 2) - 1 );
            }
            --*((_DWORD *)this + 2);
          }
        }
      }
    }
  }
}
