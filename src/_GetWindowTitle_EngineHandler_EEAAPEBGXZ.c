WCHAR *__fastcall EngineHandler::GetWindowTitle(EngineHandler *this)
{
  HMODULE ModuleHandleW; // rax
  const wchar_t *v3; // rax

  if ( !`EngineHandler::GetWindowTitle'::`2'::wszTitle[0] )
  {
    ModuleHandleW = GetModuleHandleW(0);
    if ( !LoadStringW(ModuleHandleW, 0x66u, `EngineHandler::GetWindowTitle'::`2'::wszTitle, 512) )
    {
      v3 = (const wchar_t *)(*(__int64 (__fastcall **)(EngineHandler *))(*(_QWORD *)this + 32LL))(this);
      wcsncpy_s(`EngineHandler::GetWindowTitle'::`2'::wszTitle, 0x200u, v3, 0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  return `EngineHandler::GetWindowTitle'::`2'::wszTitle;
}
