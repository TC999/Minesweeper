__int64 __fastcall D3DXTex::CImage::Initialize(D3DXTex::CImage *this, struct D3DX_BLT *a2)
{
  void *v3; // rcx
  void *v5; // rcx
  int v6; // edi
  int v7; // eax

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 && *((_DWORD *)this + 17) )
    operator delete(v3);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 && *((_DWORD *)this + 18) )
    operator delete(v5);
  v6 = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = v6;
  *((_QWORD *)this + 1) = *(_QWORD *)a2;
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 11);
  memcpy((char *)this + 36, (char *)a2 + 44, 0x18u);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
  switch ( v6 )
  {
    case 827611204:
    case 844388420:
      goto LABEL_17;
    case 844715353:
LABEL_16:
      *((_DWORD *)this + 9) &= ~1u;
      break;
    case 861165636:
    case 877942852:
    case 894720068:
LABEL_17:
      *((_DWORD *)this + 9) &= 0xFFFFFFFC;
      *((_DWORD *)this + 10) &= 0xFFFFFFFC;
      break;
    case 1111970375:
    case 1195525970:
    case 1498831189:
      goto LABEL_16;
  }
  v7 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 6) = v7 - *((_DWORD *)this + 9);
  *((_DWORD *)this + 7) = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
  *((_DWORD *)this + 8) = *((_DWORD *)this + 14) - *((_DWORD *)this + 13);
  return 0;
}
