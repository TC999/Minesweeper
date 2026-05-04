void __fastcall NodeBase::RegisterNodeType(wchar_t *Source, struct NodeBase *(*const a2)(unsigned int *))
{
  unsigned int v3; // r10d
  char *v4; // rax
  char *v5; // r11
  _BYTE Src[48]; // [rsp+20h] [rbp-78h] BYREF
  wchar_t Destination[24]; // [rsp+50h] [rbp-48h] BYREF

  wcsncpy_s(Destination, 0x14u, Source, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)&Destination[20] = a2;
  memcpy(Src, Destination, sizeof(Src));
  v3 = NodeBase::m_TypeList + 1;
  NodeBase::m_TypeList = v3;
  if ( v3 <= dword_1000A6D2C )
  {
    v5 = (char *)qword_1000A6D38;
  }
  else
  {
    dword_1000A6D2C += dword_1000A6D30;
    v4 = (char *)realloc(qword_1000A6D38, 48LL * (unsigned int)dword_1000A6D2C);
    v5 = v4;
    if ( !v4 )
    {
      CheckAllocation(0);
      return;
    }
    v3 = NodeBase::m_TypeList;
    qword_1000A6D38 = v4;
  }
  memcpy(&v5[48 * v3 - 48], Src, 0x30u);
}
