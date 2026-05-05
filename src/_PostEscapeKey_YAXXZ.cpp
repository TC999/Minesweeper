void PostEscapeKey(void)
{
  struct tagINPUT pInputs[6]; // [rsp+20h] [rbp-F8h] BYREF

  memset(pInputs, 0, sizeof(pInputs));
  pInputs[0].mi.dy = 0;
  pInputs[0].type = 1;
  pInputs[1].type = 1;
  pInputs[0].ki.wVk = 27;
  pInputs[1].ki.wVk = 27;
  pInputs[1].mi.dy = 2;
  SendInput(2u, pInputs, 40);
}
