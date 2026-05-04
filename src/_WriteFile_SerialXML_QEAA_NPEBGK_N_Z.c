char __fastcall SerialXML::WriteFile(SerialXML *this, const unsigned __int16 *a2, unsigned int a3, char a4)
{
  char *v4; // rdi
  char *v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // rbx
  void *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rax
  void *v15; // rcx
  void *v16; // rsi
  size_t PtNumOfCharConverted; // [rsp+60h] [rbp+8h] BYREF

  v4 = (char *)this + 40;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 8LL))((char *)this + 40);
  v9 = (char *)operator new[](*((_QWORD *)this + 1) + 1LL);
  wcstombs_s(
    &PtNumOfCharConverted,
    v9,
    *((_QWORD *)this + 1) + 1LL,
    *((const wchar_t **)this + 3),
    *((_QWORD *)this + 1) + 1LL);
  v10 = *((_QWORD *)this + 1);
  if ( *((_DWORD *)v4 + 2) && (v11 = (_QWORD *)**((_QWORD **)v4 + 3)) != 0 )
  {
    operator delete((void *)v11[1]);
    v11[1] = 0;
  }
  else
  {
    v14 = operator new(0x10u);
    v11 = v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = 0;
      v14[1] = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( !v11 )
    {
      Log(0x80u, L"Stash::SetBuffer(): Unable to allocate buffer object[%u]", 0);
      goto LABEL_19;
    }
  }
  v12 = operator new[]((unsigned int)v10);
  v11[1] = v12;
  if ( v12 )
  {
    *(_DWORD *)v11 = v10;
    memcpy(v12, v9, (unsigned int)v10);
    if ( !*((_DWORD *)v4 + 2) )
    {
      if ( !*((_DWORD *)v4 + 3) )
      {
        v15 = (void *)*((_QWORD *)v4 + 3);
        *((_DWORD *)v4 + 3) = 1;
        v16 = realloc(v15, 8u);
        if ( !v16 )
          CheckAllocation(0);
        *((_QWORD *)v4 + 3) = v16;
      }
      *((_DWORD *)v4 + 2) = 1;
    }
    **((_QWORD **)v4 + 3) = v11;
  }
  else
  {
    Log(0x80u, L"Stash::SetBuffer(): Unable to allocate buffer[%u]", 0);
  }
LABEL_19:
  LOBYTE(v13) = a4;
  (*(void (__fastcall **)(char *, const unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2, a3, v13);
  if ( v9 )
    operator delete(v9);
  return 1;
}
