void __fastcall TipManager::DestroyTip(TipManager *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = *((unsigned int *)this + 30);
  if ( (_DWORD)v1 )
  {
    Timer::DeleteEvent(g_pTimer, v1);
    *((_DWORD *)this + 30) = 0;
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 232);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1);
    *(_QWORD *)(v3 + 232) = 0;
  }
  *((_QWORD *)this + 17) = *((_QWORD *)this + 16);
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = v5;
}
