void __fastcall EngineHandler::ReportOutOfMemory(EngineHandler *this)
{
  unsigned __int16 *v1; // [rsp+30h] [rbp-18h]
  bool v2; // [rsp+38h] [rbp-10h]

  LOBYTE(v1) = 1;
  DialogHelper::ShowMessageBox(0x66u, 0x67u, 1u, 0xFFFEu, 0, 0, v1, v2);
}
