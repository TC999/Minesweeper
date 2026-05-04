void __fastcall Animator_LinearAbsolute::UpdateAffector(
        Animator_LinearAbsolute *this,
        __int64 a2,
        __int64 a3,
        struct Affector_Base *a4)
{
  (*(void (__fastcall **)(struct Affector_Base *))(*(_QWORD *)a4 + 24LL))(a4);
  (**(void (__fastcall ***)(struct Affector_Base *))a4)(a4);
}
