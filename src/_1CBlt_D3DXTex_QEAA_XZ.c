void __fastcall D3DXTex::CBlt::~CBlt(D3DXTex::CBlt *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v2 )
    (**v2)(v2, 1);
  if ( *(_QWORD *)this )
    (***(void (__fastcall ****)(_QWORD, __int64))this)(*(_QWORD *)this, 1);
}
