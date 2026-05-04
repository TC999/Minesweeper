// Hidden C++ exception states: #wind=1
void __fastcall Material::PostQuad(
        Material *this,
        const __m128i *a2,
        const __m128i *a3,
        struct IDirect3DTexture9 *a4,
        int a5,
        float a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12)
{
  _QWORD *v16; // rdi
  const void *v17; // rax
  const void *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  void *v21; // rax

  if ( *((_DWORD *)this + 8) >= *((_DWORD *)this + 2) )
  {
    while ( 1 )
    {
      v16 = operator new(0x28u);
      if ( v16 )
      {
        v17 = operator new[](0x10u);
        *v16 = v17;
        CheckAllocation(v17);
        v18 = operator new[](0x10u);
        v16[1] = v18;
        CheckAllocation(v18);
        v16[2] = 0;
        *((_DWORD *)v16 + 6) = -1;
        *((_DWORD *)v16 + 7) = 0;
        *((_BYTE *)v16 + 32) = 0;
        *((_BYTE *)v16 + 33) = 1;
        *((_BYTE *)v16 + 34) = 0;
        *((_BYTE *)v16 + 35) = 0;
        *((_BYTE *)v16 + 36) = 0;
      }
      else
      {
        v16 = 0;
      }
      CheckAllocation(v16);
      ++*((_DWORD *)this + 2);
      v19 = *((_DWORD *)this + 3);
      if ( *((_DWORD *)this + 2) <= v19 )
        goto LABEL_9;
      v20 = *((_DWORD *)this + 4) + v19;
      *((_DWORD *)this + 3) = v20;
      v21 = realloc(*((void **)this + 3), 8LL * v20);
      if ( v21 )
        break;
      CheckAllocation(0);
LABEL_10:
      if ( *((_DWORD *)this + 8) < *((_DWORD *)this + 2) )
        goto LABEL_11;
    }
    *((_QWORD *)this + 3) = v21;
LABEL_9:
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 2) - 1)) = v16;
    goto LABEL_10;
  }
LABEL_11:
  *(__m128i *)**(_QWORD **)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) = _mm_loadu_si128(a2);
  *(__m128i *)*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 8LL) = _mm_loadu_si128(a3);
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 16LL) = a4;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 24LL) = a7 & 0xFFFFFF
                                                                                             | (a5 << 24);
  *(float *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 28LL) = a6;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 32LL) = a8;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 33LL) = a9;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 34LL) = a10;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 8)) + 35LL) = a11;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 8))++) + 36LL) = a12;
}
