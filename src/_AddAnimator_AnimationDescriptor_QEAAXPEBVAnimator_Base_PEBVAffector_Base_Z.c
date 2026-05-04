void __fastcall AnimationDescriptor::AddAnimator(
        AnimationDescriptor *this,
        const struct Animator_Base *a2,
        const struct Affector_Base *a3)
{
  Array<IEventListener *>::Add((__int64)this + 8, (__int64)a2);
  Array<IEventListener *>::Add((__int64)this + 32, (__int64)a3);
}
