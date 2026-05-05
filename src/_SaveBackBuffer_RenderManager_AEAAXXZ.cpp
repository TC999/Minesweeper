void __fastcall RenderManager::SaveBackBuffer(RenderManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 20) && *((_QWORD *)this + 3) )
  {
    Log(2u, 2369, "RenderManager.cpp", L"Saved the back buffer for cached presentation");
    v2 = *((_QWORD *)this + 10);
    *((_BYTE *)this + 20) = 1;
    *((_BYTE *)this + 88) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 304LL))(v2, 0, &v3);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 3) + 144LL))(*((_QWORD *)this + 3), 0, &v4);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 10) + 296LL))(*((_QWORD *)this + 10), 0, v4);
    RenderManager::Render(this, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 10) + 296LL))(*((_QWORD *)this + 10), 0, v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( *(_BYTE *)this )
      Log(2u, 2400, "RenderManager.cpp", L"DeviceLost in SaveBackBuffer");
    else
      *((_BYTE *)this + 20) = 0;
  }
}
