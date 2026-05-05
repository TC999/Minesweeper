// Hidden C++ exception states: #wind=1
void __fastcall XmlNode::PrintToString(XmlNode *this, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v5; // r11
  void *v6; // rcx
  rsize_t v7; // rax
  unsigned int v8; // ecx
  rsize_t MaxCount; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  void *Block; // [rsp+38h] [rbp-10h]

  MaxCount = 0;
  v10 = 16;
  Block = 0;
  XmlNode::InternalPrint(this, &MaxCount, 0);
  v5 = (unsigned __int16 *)operator new(saturated_mul((unsigned int)(MaxCount + 1), 2u));
  *a2 = v5;
  if ( v5 )
  {
    v7 = (unsigned int)MaxCount;
    v8 = MaxCount + 1;
    *a3 = MaxCount + 1;
    wcsncpy_s(v5, v8, (const wchar_t *)Block, v7);
    v6 = Block;
    if ( !Block )
      return;
  }
  else
  {
    v6 = Block;
    if ( !Block )
      return;
  }
  free(v6);
}
