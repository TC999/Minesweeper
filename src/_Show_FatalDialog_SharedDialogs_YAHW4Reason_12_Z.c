void __noreturn SharedDialogs::FatalDialog::Show()
{
  unsigned __int16 *v0; // [rsp+30h] [rbp-18h]
  bool v1; // [rsp+38h] [rbp-10h]

  LOBYTE(v0) = 1;
  DialogHelper::ShowMessageBox(0x1788u, 0x178Au, 1u, 0xFFFEu, 0, 0, v0, v1);
  ExitProcess(0);
}
