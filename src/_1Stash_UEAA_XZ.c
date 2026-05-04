// Hidden C++ exception states: #wind=1
void __fastcall Stash::~Stash(Stash *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &Stash::`vftable';
  Stash::Cleanup(this);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    free(v2);
}
