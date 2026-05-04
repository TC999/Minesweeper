float __fastcall Affector_Int::GetCurrentValue(Affector_Int *this)
{
  return (float)(*(int (__fastcall **)(Affector_Int *))(*(_QWORD *)this + 48LL))(this) + *((float *)this + 6);
}
