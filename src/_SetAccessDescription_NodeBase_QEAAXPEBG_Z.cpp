void __fastcall NodeBase::SetAccessDescription(HLOCAL *this, const unsigned __int16 *a2)
{
  LocalFree(this[20]);
  this[20] = LocalizeMessage(a2);
}
