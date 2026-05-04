void __fastcall CAutoPointer<ATL::CComVariant,AutoPArrayTraits<ATL::CComVariant>>::~CAutoPointer<ATL::CComVariant,AutoPArrayTraits<ATL::CComVariant>>(
        void **a1)
{
  char *v2; // rcx
  char *v3; // rbx

  v2 = (char *)*a1;
  if ( v2 )
  {
    v3 = v2 - 8;
    `eh vector destructor iterator'(v2, 0x18u, *((_DWORD *)v2 - 2), (void (*)(void *))ATL::CComVariant::~CComVariant);
    operator delete(v3);
    *a1 = 0;
  }
}
