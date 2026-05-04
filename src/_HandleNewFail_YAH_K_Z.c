void __fastcall __noreturn HandleNewFail()
{
  unsigned __int16 *v0; // [rsp+30h] [rbp-18h]
  bool v1; // [rsp+38h] [rbp-10h]

  LOBYTE(v0) = 1;
  DialogHelper::ShowMessageBox(0x385u, 0x384u, 1u, 0xFFFEu, 0, 0, v0, v1);
  LaunchMediaCenter((bool)g_bMediaCenter);
  ExitProcess(0);
}
