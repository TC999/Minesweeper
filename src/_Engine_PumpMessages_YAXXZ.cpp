void Engine_PumpMessages(void)
{
  struct tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

  while ( PeekMessageW(&Msg, 0, 0, 0, 0) && GetMessageW(&Msg, 0, 0, 0) )
  {
    if ( !g_Accelerator || !TranslateAcceleratorW(g_hWnd, g_Accelerator, &Msg) )
    {
      TranslateMessage(&Msg);
      DispatchMessageW(&Msg);
    }
  }
}
