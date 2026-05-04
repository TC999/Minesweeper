void __fastcall NodeBase::SetAccessDefaultAction(HLOCAL *this, const unsigned __int16 *a2)
{
  LocalFree(this[19]);
  this[19] = LocalizeMessage(a2);
}
