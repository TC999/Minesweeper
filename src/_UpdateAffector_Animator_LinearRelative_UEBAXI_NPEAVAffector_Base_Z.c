void __fastcall Animator_LinearRelative::UpdateAffector(
        Animator_LinearRelative *this,
        __int64 a2,
        __int64 a3,
        struct Affector_Base *a4)
{
  LOBYTE(a3) = -(char)a3;
  (**(void (__fastcall ***)(struct Affector_Base *, _QWORD, __int64))a4)(a4, *(_QWORD *)a4, a3);
}
