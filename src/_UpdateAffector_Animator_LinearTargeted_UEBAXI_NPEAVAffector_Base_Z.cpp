void __fastcall Animator_LinearTargeted::UpdateAffector(
        Animator_LinearTargeted *this,
        __int64 a2,
        char a3,
        struct Affector_Base *a4)
{
  if ( a3 )
    Log(0x200u, 77, "Animator_Linear.h", L"Targeted animators cannot go in reverse!");
  (*(float (__fastcall **)(struct Affector_Base *))(*(_QWORD *)a4 + 24LL))(a4);
  (**(void (__fastcall ***)(struct Affector_Base *))a4)(a4);
}
