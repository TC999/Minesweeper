void __fastcall UserInterface::ReleaseCaptureNode(UserInterface *this)
{
  if ( *((_QWORD *)this + 38) )
  {
    *((_QWORD *)this + 38) = 0;
    UserInterface::ProcessMouseMove(this, 1);
  }
  *((_QWORD *)this + 38) = 0;
}
