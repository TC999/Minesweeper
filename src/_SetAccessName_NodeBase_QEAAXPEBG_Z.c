void __fastcall NodeBase::SetAccessName(HLOCAL *this, const unsigned __int16 *a2)
{
  LocalFree(this[22]);
  this[22] = LocalizeMessage(a2);
}
