__int64 __fastcall SerialXML::FileExists(SerialXML *this, const unsigned __int16 *a2, unsigned int a3)
{
  char *v3; // rbx

  v3 = (char *)this + 40;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 8LL))((char *)this + 40);
  return (*(__int64 (__fastcall **)(char *, const unsigned __int16 *, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
}
