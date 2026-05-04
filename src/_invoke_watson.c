void __cdecl __noreturn invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v6; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-4F8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-4F0h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4E8h] BYREF
  CONTEXT ContextRecord; // [rsp+60h] [rbp-4D8h] BYREF
  DWORD64 retaddr; // [rsp+538h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v6 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0);
  if ( v6 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v6, &ContextRecord, &HandlerData, &EstablisherFrame, 0);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  OutputDebugStringA("Invalid parameter passed to C runtime function.\n");
}
