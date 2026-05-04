void UITile::ClearRumble(void)
{
  XINPUT_VIBRATION pVibration; // [rsp+30h] [rbp+8h] BYREF

  if ( g_pCommonController )
  {
    pVibration.wRightMotorSpeed = 0;
    pVibration.wLeftMotorSpeed = 0;
    XInputSetState(0, &pVibration);
    pVibration.wLeftMotorSpeed = 0;
    pVibration.wRightMotorSpeed = 0;
    XInputSetState(0, &pVibration);
  }
  UITile::_leftRumbleCount = 0;
  UITile::_rightRumbleCount = 0;
}
